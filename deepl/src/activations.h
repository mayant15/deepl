#pragma once
#include "armadillo.h"

namespace deepl::activations
{
    arma::mat sigmoid(const arma::mat& Z);
    arma::mat tanh(const arma::mat& Z);

    enum class Type { Sigmoid, Tanh };
}
