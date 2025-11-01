#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class ActorDefinitionParseStatus : int {
    Success = 0,
    SuccessWithErrors = 1,
    FailedToParse = 2,
};
