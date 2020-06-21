#pragma once
#include "armadillo.h"
#include "optimizers/optimizer.h"

namespace deepl::regression
{
    class LogisticRegression
    {
        arma::mat W;
        arma::mat b;

    public:
        // Constructors
        LogisticRegression() = default;

        // Getters
        [[nodiscard]] arma::mat get_kernel() const;
        [[nodiscard]] arma::mat get_bias() const;

        // Member functions
        void fit(const arma::vec& X, const arma::vec& Y, optimizers::Type optimizer = optimizers::Type::SGD);
        void fit(const arma::vec& X, const arma::vec& Y, const optimizers::Optimizer& optimizer);

        [[nodiscard]] arma::vec predict(arma::vec X) const;
    };
}
