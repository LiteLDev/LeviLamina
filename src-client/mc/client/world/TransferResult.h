#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace World {

enum class TransferResult : int {
    Success                = 0,
    FailureUnknown         = 1,
    FailureNoFile          = 2,
    FailureZipError        = 3,
    FailurePremiumContent  = 4,
    FailureEditionMismatch = 5,
    FailureEditorMismatch  = 6,
    FailureZipDepthError   = 7,
    UnsupportedPlatform    = 8,
    AlreadyInProgress      = 9,
    InterruptedByUser      = 10,
};

}
