#include "gtest/gtest.h"
#include "sub.hpp"

TEST(SubTest, pos) {
    Base* l = new Op(8);
    Base* r = new Op(2);
    Sub* a=new Sub(l,r);
    EXPECT_EQ(a->evaluate(), 6);
    EXPECT_EQ(a->stringify(),"(8 - 2)");
}

TEST(SubTest, neg) {
    Base* l = new Op(-8);
    Base* r = new Op(2);
    Sub* a=new Sub(l,r);
    EXPECT_EQ(a->evaluate(), -10);
    EXPECT_EQ(a->stringify(),"(-8 - 2)");
}
TEST(SubTest,3numbers){
    Base* l = new Op(8);
    Base* m = new Op(8);
    Base* s = new Op(1);
    Base* n = new Op(1);
    Sub* a = new Sub(l, m);
    Sub* b = new Sub(s, n);
    Sub* c = new Sub(a, b);

    EXPECT_EQ(c->evaluate(), 0);
    EXPECT_EQ(c->stringify(), "((8 - 8) - (1 - 1))");

}
