#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class MolangCompileResult : int {
    FailedError                   = 0,
    FailedNeedsArraysToBeResolved = 1,
    Success                       = 2,
};
