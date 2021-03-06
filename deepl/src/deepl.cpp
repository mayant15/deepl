#include <iostream>
#include "spdlog/spdlog.h"
#include "armadillo.h"
#include "deepl.h"

namespace deepl {
    void init()
    {
        spdlog::info("Initializing deepl...");
        arma::mat A = arma::randu<arma::mat>(4, 5);
        arma::mat B = arma::randu<arma::mat>(4, 5);
        std::cout << A* B.t() << std::endl;
    }
}