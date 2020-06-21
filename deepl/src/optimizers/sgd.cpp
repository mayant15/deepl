#include "spdlog/spdlog.h"
#include "sgd.h"

namespace deepl::optimizers
{
    SGD::SGD(const float lr)
    {
        learning_rate = lr;
    }

    void SGD::optimize()
    {
        spdlog::trace("Optimizing...");
    }
}
