#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class UIPackErrorType : int {
    None = 0,
    InvalidChildNames = 1,
    ParseError = 2,
    MissingControl = 3,
    MissingControlTarget = 4,
    MissingArrayName = 5,
    MissingCondition = 6,
    MissingValue = 7,
    MissingOperation = 8,
    InvalidOperationName = 9,
};
