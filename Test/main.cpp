#include "pch.h"
#include "deepl.h"

namespace deepl
{
    namespace test
    {
        TEST(PrintTest, HandlesInput)
        {
            print("Hello");
            EXPECT_EQ(1, 1);
        }
    }
}

int main(int argc, char** argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
