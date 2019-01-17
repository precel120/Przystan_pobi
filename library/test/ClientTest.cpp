#include <boost/test/unit_test.hpp>

#include "Client.h"
#include "Rent.h"
#include "Container.h"
#include "Cutter.h"
#include "Small.h"

BOOST_AUTO_TEST_SUITE(ClientTest)

    BOOST_AUTO_TEST_CASE(CreatingClientCase) {
        Client K1("adm", "jot", "Slomiana 23E");
        BOOST_CHECK_EQUAL(K1.getFirstName(), "adm");
        BOOST_CHECK_EQUAL(K1.getLastName(), "jot");
        BOOST_CHECK_EQUAL(K1.getAddress(), "Slomiana 23E");
    }

BOOST_AUTO_TEST_SUITE_END()
