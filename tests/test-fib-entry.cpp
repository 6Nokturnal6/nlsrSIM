/**
 * Copyright (C) 2014 Regents of the University of Memphis.
 * See COPYING for copyright and distribution information.
 */

#include "route/fib-entry.hpp"
#include "route/nexthop-list.hpp"
#include <boost/test/unit_test.hpp>

namespace nlsr {

namespace test {

BOOST_AUTO_TEST_SUITE(TestFibEntry)

BOOST_AUTO_TEST_CASE(FibEntryConstructorAndGetters)
{
  FibEntry fe1("next1");

  BOOST_CHECK_EQUAL(fe1.getName(), "next1");
  BOOST_CHECK_EQUAL(fe1.getTimeToRefresh(), 0);   //Default Time
  BOOST_CHECK_EQUAL(fe1.getSeqNo(), 0);           //Default Seq No.
}

BOOST_AUTO_TEST_SUITE_END()

} //namespace test
} //namespace nlsr
