#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Threading {

enum class AsyncErrc : int {
    OperationInProgress = 1,
    OperationCanceled = 2,
    OperationThrewException = 3,
    UnableToExecute = 4,
    UnexpectedError = 5,
    InvalidState = 6,
};

}
