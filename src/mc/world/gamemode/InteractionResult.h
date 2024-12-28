#pragma once

#include "mc/_HeaderOutputPredefine.h"

class InteractionResult {
public:
    // InteractionResult inner types define
    enum class Result : int {
        Success = 1,
        Swing   = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mResult;
    // NOLINTEND

public:
    // prevent constructor by default
    InteractionResult& operator=(InteractionResult const&);
    InteractionResult(InteractionResult const&);
    InteractionResult();
};
