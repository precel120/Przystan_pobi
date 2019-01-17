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

using namespace std;

BOOST_AUTO_TEST_SUITE(RepoTest)

    BOOST_AUTO_TEST_CASE(ClientManagerCase){
        Client_ptr c1(new Client("mada","kajwzoj","przepiorcza 11"));
        Client_ptr c2(new Client("ikim","zujew","rabina 11"));
        ClientManager cm;
        cm.add(c1);
        cm.add(c2);
        BOOST_REQUIRE_EQUAL(cm.checkSize(),2);
        cm.remove(c2);
        cout<<cm.showAllClients()<<endl;
        BOOST_REQUIRE_EQUAL(cm.checkSize(),1);
    }
    BOOST_AUTO_TEST_CASE(SpaceManagerCase){
        Space_ptr s1(new Small(12,3,5));
        Space_ptr cu1(new Cutter(123,120,2000,20));
        Space_ptr co1(new Container(1200,2000,40000,20245));
        SpaceManager sm;
        sm.add(s1);
        sm.add(cu1);
        sm.add(co1);
        cout<<sm.showAll('t')<<endl;
        BOOST_REQUIRE_EQUAL(sm.checkSize('t'),3);
        sm.remove(cu1);
        BOOST_REQUIRE_EQUAL(sm.checkSize('t'),2);
        BOOST_REQUIRE_EQUAL(sm.checkSize('a'),1);
    }
    BOOST_AUTO_TEST_CASE(RentManagerCase){
        Space_ptr s1(new Small(12,3,5));
        Space_ptr cu1(new Cutter(123,120,2000,20));
        Space_ptr co1(new Container(1200,2000,40000,20245));
        Space_ptr s2(new Small(11,5,700));
        Client_ptr c1(new Client("mada","kajwzoj","przepiorcza 11"));
        Client_ptr c2(new Client("ikim","zujew","rabina 11"));
        c1->changeClientType('R');
        Rent_ptr r1(new Rent(s1,c1));
        Rent_ptr r2(new Rent(s2,c1));
        Rent_ptr r3(new Rent(cu1,c1));
        Rent_ptr r4(new Rent(co1,c1));
        Rent_ptr r5(new Rent(co1,c2));
        RentManager rm;
        rm.rent(r1);
        rm.rent(r2);
        rm.rent(r3);
        BOOST_CHECK_EQUAL(rm.checkSize('c'),3);
        rm.endRent(r3);
        BOOST_REQUIRE_EQUAL(rm.checkSize('c'),2);
        BOOST_REQUIRE_EQUAL(rm.checkSize('a'),1);
        rm.rent(r5);
        cout<<rm.showAllRents('a');
        BOOST_REQUIRE_EQUAL(rm.checkSize('c'),3);
        rm.endRent(r5);
        BOOST_REQUIRE_EQUAL(rm.checkSize('a'),2);

    }
BOOST_AUTO_TEST_SUITE_END()

