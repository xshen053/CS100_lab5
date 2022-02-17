#include "gtest/gtest.h"
#include "pow.hpp"

TEST(PowTest, pos) {
    Base* l = new Op(8);
    Base* r = new Op(2);
    Pow* a=new Pow(l,r);
    EXPECT_EQ(a->evaluate(), 64);
    EXPECT_EQ(a->stringify(),"( 8 ** 2 )");
}

TEST(PowTest, neg) {
    Base* l = new Op(-8);
    Base* r = new Op(1);
    Pow* a=new Pow(l,r);
    EXPECT_EQ(a->evaluate(), -8);
    EXPECT_EQ(a->stringify()," ( -8 ** 1 ) ");
}
