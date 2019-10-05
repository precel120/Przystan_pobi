#include <boost/test/unit_test.hpp>

#include "Client.h"
#include "Rent.h"
#include "Container.h"
#include "Cutter.h"
#include "Small.h"
#include "Repository.h"
#include "RentManager.h"
#include "SpaceManager.h"
#include "ClientManager.h"
#include "RentException.h"
#include "SpaceException.h"
#include "ClientException.h"

using namespace std;

BOOST_AUTO_TEST_SUITE(RepoTest)

    BOOST_AUTO_TEST_CASE(ClientManagerCase){
        Client_ptr c1(new Client("mada","kajwzoj","przepiorcza 11"));
        Client_ptr c2(new Client("ikim","zujew","rabina 11"));
        ClientManager cm;
        cm.add(c1);
        cm.add(c2);
        BOOST_CHECK_THROW(cm.add(c1),ClientException);
        BOOST_REQUIRE_EQUAL(cm.checkSize(),2);
        cm.remove(c2);
        BOOST_CHECK_THROW(cm.remove(c2),ClientException);
        BOOST_REQUIRE_EQUAL(cm.checkSize(),1);
    }
    BOOST_AUTO_TEST_CASE(SpaceManagerCase){
        Space_ptr s1(new Small(12,3,5));
        Space_ptr cu1(new Cutter(123,120,2000,20));
        Space_ptr co1(new Container(1200,2000,40000,20245));
        SpaceManager sm;
        sm.addAvailable(s1);
        sm.addAvailable(cu1);
        sm.addAvailable(co1);
        BOOST_CHECK_THROW(sm.showAll('s'),SpaceException);
        BOOST_CHECK_THROW(sm.addAvailable(s1),SpaceException);
        BOOST_REQUIRE_EQUAL(sm.checkSize('a'),3);
        sm.addTaken(s1);
        sm.addTaken(cu1);
        sm.addTaken(co1);
        BOOST_CHECK_THROW(sm.addTaken(s1),SpaceException);
        BOOST_REQUIRE_EQUAL(sm.checkSize('a'),0);
        sm.remove(cu1);
        BOOST_CHECK_THROW(sm.remove(cu1),SpaceException);
        BOOST_REQUIRE_EQUAL(sm.checkSize('a'),1);
        BOOST_REQUIRE_EQUAL(sm.checkSize('t'),2);
    }
    BOOST_AUTO_TEST_CASE(RentManagerCase){
        Space_ptr s1(new Small(12,3,5));
        Space_ptr cu1(new Cutter(123,120,2000,20));
        Space_ptr co1(new Container(1200,2000,40000,20245));
        Space_ptr co2(new Container(1000,1500,80000,2115));
        Space_ptr s2(new Small(11,5,700));
        Client_ptr c1(new Client("mada","kajwzoj","przepiorcza 11"));
        Client_ptr c2(new Client("ikim","zujew","rabina 11"));
        c1->changeClientType('R');
        Rent_ptr r1(new Rent(s1,c1));
        Rent_ptr r2(new Rent(s2,c1));
        Rent_ptr r3(new Rent(cu1,c1));
        Rent_ptr r4(new Rent(co1,c1));
        Rent_ptr r5(new Rent(co1,c2));
        Rent_ptr r6(new Rent(co2,c2));
        Rent_ptr r7(new Rent(co2,c1));
        RentManager rm;
        rm.rent(r1);
        rm.rent(r2);
        rm.rent(r3);
        BOOST_REQUIRE_EQUAL(rm.checkSize('c'),3);
        BOOST_CHECK_THROW(rm.rent(r3),RentException);
        rm.endRent(r3);
        BOOST_CHECK_THROW(rm.endRent(r3),RentException);
        BOOST_REQUIRE_EQUAL(rm.checkSize('c'),2);
        BOOST_REQUIRE_EQUAL(rm.checkSize('a'),1);
        rm.rent(r6);
        BOOST_CHECK_THROW(rm.rent(r5),RentException);
        BOOST_CHECK_THROW(rm.rent(r7),RentException);
        BOOST_REQUIRE_EQUAL(rm.checkSize('c'),3);
        rm.endRent(r6);
        BOOST_REQUIRE_EQUAL(rm.checkSize('a'),2);
    }
BOOST_AUTO_TEST_SUITE_END()

