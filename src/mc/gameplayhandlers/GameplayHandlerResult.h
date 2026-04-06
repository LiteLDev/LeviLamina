#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/gameplayhandlers/HandlerResult.h"

template <typename T>
struct GameplayHandlerResult {
    HandlerResult handler_result;
    T             return_value;
};

// CTAD deduction guide
template <typename T>
GameplayHandlerResult(HandlerResult, T) -> GameplayHandlerResult<T>;
