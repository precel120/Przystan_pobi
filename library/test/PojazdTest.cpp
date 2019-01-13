#include <boost/test/unit_test.hpp>

#include "Pojazd.h"
#include "Ciezarowy.h"
#include "Client.h"
#include "BazaTransportowa.h"

BOOST_AUTO_TEST_SUITE(PojazdSuiteCorrect)

BOOST_AUTO_TEST_CASE(PojazdCase) {
    shared_ptr<BazaTransportowa> baza (new BazaTransportowa);
    shared_ptr<Pojazd> c1 (new Ciezarowy("123",2011,12));
    shared_ptr<Pojazd> c2 (new Ciezarowy("12",2012,12));
    shared_ptr<Pojazd> a1 (new Client("1",2013,12));
    shared_ptr<Pojazd> a2 (new Client("12",2014,12));
    shared_ptr<Pojazd> a3 (new Client("1234",2015,12));
        baza->dodajPojazd(c1);
        baza->dodajPojazd(c2);
        baza->dodajPojazd(a1);
        baza->dodajPojazd(a2);
        baza->dodajPojazd(a3);

    BOOST_REQUIRE_EQUAL(baza->znajdzNowsze(2012).size(),4);
    //BOOST_REQUIRE_EQUAL(baza->znajdzNowsze(2012),a1);
}

BOOST_AUTO_TEST_SUITE_END()


