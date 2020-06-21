#include "activations.h"

namespace deepl::activations
{
    arma::mat sigmoid(const arma::mat& Z)
    {
        return 1 / (1 + arma::exp(-1 * Z));
    }

    arma::mat tanh(const arma::mat& Z)
    {
        return arma::tanh(Z);
    }
}
