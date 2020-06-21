#pragma once
#include "optimizer.h"

namespace deepl::optimizers
{
    class AdaGrad : public Optimizer
    {
        float learning_rate;
    public:
        AdaGrad(const float lr = 0.1) : learning_rate(lr)
        {
        }

        void optimize() override;
    };
}
