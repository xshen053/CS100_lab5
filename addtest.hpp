#include "gtest/gtest.h"
#include "add.hpp"
#include "op.hpp"
using namespace std;
TEST(TestAdd, Evaluateadd){
	Base* left=new Op(7);
	Base* right=new Op(8);
	Add* test=new Add(left,right);
	EXPECT_EQ(test->evaluate(),15);
	EXPECT_EQ(test->stringify(),"7+8");
}
