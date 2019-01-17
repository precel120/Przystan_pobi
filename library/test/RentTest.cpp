//
// Created by pobi on 17.01.19.
//

#include <boost/test/unit_test.hpp>

#include "Client.h"
#include "Rent.h"
#include "Container.h"
#include "Cutter.h"
#include "Small.h"

BOOST_AUTO_TEST_SUITE(RentTest)
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