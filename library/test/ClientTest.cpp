#include <boost/test/unit_test.hpp>

#include "Client.h"
#include "Rent.h"
#include "Container.h"
#include "Cutter.h"
#include "Small.h"

BOOST_AUTO_TEST_SUITE(CreatingCorrect)

    BOOST_AUTO_TEST_CASE(CreatingClientCase) {
        Client K1("Adam", "Sadowski", "Slomiana 23E");
        cout << K1.clientInfo()<<endl;
        BOOST_CHECK_EQUAL(K1.getFirstName(), "Adam");
        BOOST_CHECK_EQUAL(K1.getLastName(), "Sadowski");
        BOOST_CHECK_EQUAL(K1.getAddress(), "Slomiana 23E");
    }
    BOOST_AUTO_TEST_CASE(CreatingSpacesCase){
        Space_ptr Cu1 (new Cutter(20,10,500,60));
        Space_ptr Co1 (new Container(40,20,700,100));
        Space_ptr S1 (new Small(50,500,300));
        cout<<Co1->spaceInfo();
        BOOST_REQUIRE_EQUAL(Cu1->actualRentalPrice(),1000);
        BOOST_REQUIRE_EQUAL(Co1->actualRentalPrice(),15400);
        BOOST_REQUIRE_EQUAL(S1->actualRentalPrice(),300);
    }
BOOST_AUTO_TEST_SUITE_END()
