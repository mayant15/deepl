#pragma once
#include "optimizer.h"

namespace deepl::optimizers
{
    class Adam : public Optimizer
    {
        float learning_rate;
    public:
        Adam(const float lr = 0.1) : learning_rate(lr) {}

        void optimize() override;
    };
}
