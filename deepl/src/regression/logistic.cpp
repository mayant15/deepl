#include "spdlog/spdlog.h"
#include "optimizers/sgd.h"
#include "optimizers/adagrad.h"
#include "optimizers/adam.h"
#include "logistic.h"

namespace deepl::regression
{
    void LogisticRegression::fit(const arma::vec& X, const arma::vec& Y, optimizers::Type optimizer)
    {
        spdlog::trace("Creating optimizer instance");
        switch (optimizer)
        {
        case optimizers::Type::SGD:
            {
                const optimizers::SGD opt;
                fit(X, Y, opt);
            }
        case optimizers::Type::Adam:
            {
                const optimizers::Adam opt;
                fit(X, Y, opt);
            }
        case optimizers::Type::AdaGrad:
            {
                const optimizers::AdaGrad opt;
                fit(X, Y, opt);
            }
        }
    }

    void LogisticRegression::fit(const arma::vec& X, const arma::vec& Y, const optimizers::Optimizer& optimizer)
    {
        spdlog::trace("Fitting...");
        W = arma::ones<arma::mat>(Y.n_elem, X.n_elem);
        b = arma::ones<arma::vec>(arma::size(Y));
    }

    arma::vec LogisticRegression::predict(arma::vec X) const
    {
        spdlog::trace("Logistic Regression is predicting!");
        return {};
    }

    arma::mat LogisticRegression::get_kernel() const
    {
        return W;
    }

    arma::mat LogisticRegression::get_bias() const
    {
        return b;
    }
}
