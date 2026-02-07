#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class TermEvaluationType : int {
    Constant                          = 0,
    ProductOfVariablesAndFactor       = 1,
    ProductOfVariablesFactorAndLambda = 2,
    Lambda                            = 3,
};
