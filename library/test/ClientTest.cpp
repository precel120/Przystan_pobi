#include <boost/test/unit_test.hpp>

#include "Client.h"
#include "Rent.h"
#include "Container.h"
#include "Cutter.h"
#include "Small.h"

BOOST_AUTO_TEST_SUITE(CreatingCorrect)

    BOOST_AUTO_TEST_CASE(CreatingClientCase) {
        Client K1("Adam", "Sadowski", "Slomiana 23E");
        cout << K1.getInfo()<<endl;
        BOOST_CHECK_EQUAL(K1.getFirstName(), "Adam");
        BOOST_CHECK_EQUAL(K1.getLastName(), "Sadowski");
        BOOST_CHECK_EQUAL(K1.getAddress(), "Slomiana 23E");
    }
    BOOST_AUTO_TEST_CASE(CreatingSpacesCase){
        Space_ptr Cu1 (new Cutter(20,10,500,60));
        Space_ptr Co1 (new Container(40,20,700,100));
        Space_ptr S1 (new Small(50,500,300));
        cout<<S1->getInfo()<<endl;
        BOOST_REQUIRE_EQUAL(Cu1->actualRentalPrice(),1000);
        BOOST_REQUIRE_EQUAL(Co1->actualRentalPrice(),15400);
        BOOST_REQUIRE_EQUAL(S1->actualRentalPrice(),300);
    }
    BOOST_AUTO_TEST_CASE(CreatingRentCase){
        Client_ptr c1 (new Client("maciej","p","stawowa 12"));
        Space_ptr s1 (new Container(12,20,3000,20000));
        Space_ptr s2 (new Cutter(21,10,300,4000));
        Rent_ptr rent (new Rent(s1,c1));
        rent->finishRent();
        Rent_ptr r2 (new Rent(s2,c1));
        r2->finishRent();
        cout<<rent->getInfo()<<endl;
        cout<<r2->getInfo()<<endl;
        BOOST_REQUIRE_EQUAL(r2->getClient()->getAddress(),"stawowa 12");
        BOOST_REQUIRE_EQUAL(rent->getSpace(),s1);
    }
BOOST_AUTO_TEST_SUITE_END()
