#pragma once

namespace deepl::optimizers
{
    class Optimizer
    {
    public:
        virtual void optimize() = 0;
    };

    enum class Type { SGD, Adam, AdaGrad };
}
