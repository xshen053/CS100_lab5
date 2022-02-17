#include "gtest/gtest.h"
#include "sub.hpp"

TEST(SubTest, pos) {
    Base* l = new Op(8);
    Base* r = new Op(2);
    Sub* a=new Sub(l,r);
    EXPECT_EQ(a->evaluate(), 6);
    EXPECT_EQ(a->stringify(),"8-2");
}

TEST(SubTest, neg) {
    Base* l = new Op(-8);
    Base* r = new Op(2);
    Sub* a=new Sub(l,r);
    EXPECT_EQ(a->evaluate(), -10);
    EXPECT_EQ(a->stringify(),"-8-2");
}
