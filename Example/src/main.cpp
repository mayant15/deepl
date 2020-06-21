#include "activations.h"
#include "deepl.h"
#include "optimizers/optimizers.h"
#include "regression/logistic.h"

int main(void)
{
    // have a set of x values
    // have a set of y values

    deepl::regression::LogisticRegression regr;

    // Takes two n x 1 matrices
    regr.fit(X, Y);

    // Takes 
    regr.predict(Y);
}
