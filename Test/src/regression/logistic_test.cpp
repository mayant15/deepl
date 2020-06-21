#include "pch.h"
#include "regression/logistic.h"
#include "armadillo.h"

namespace deepl::test
{
    class LogisticRegressionTest : public ::testing::Test
    {
    protected:
        unsigned short int n = 100;
        arma::vec X;
        arma::vec Y;
        regression::LogisticRegression regr;

        void SetUp() override
        {
            X = arma::randu<arma::vec>(n, 1);
            Y = arma::randu<arma::vec>(n, 1);
        }
    };

    // TODO: Test constructor? (If we want a parametrized one then yes)

    TEST_F(LogisticRegressionTest, Fit)
    {
        // Fit to mock data
        regr.fit(X, Y);
        arma::mat W = regr.get_kernel();
        arma::vec b = regr.get_bias();

        // Check if both are non-zero
        bool same_W = arma::approx_equal(arma::zeros(arma::size(W)), W, "absdiff", 0.0002);
        bool same_b = arma::approx_equal(arma::zeros(arma::size(b)), b, "absdiff", 0.0002);

        EXPECT_FALSE(same_W);
        EXPECT_FALSE(same_b);
    }

    // TEST(LogisticRegression, Predict)
    // {
    //     // create a regr object and predict
    //     EXPECT_EQ(1, 1);
    // }

    
}
