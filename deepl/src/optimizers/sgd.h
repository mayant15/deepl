#pragma once
#include "optimizer.h"

namespace deepl::optimizers
{
    class SGD : public Optimizer
    {
        float learning_rate;
    public:
        SGD(const float lr = 0.1) : learning_rate(lr) {}

        void optimize() override;
    };
}
