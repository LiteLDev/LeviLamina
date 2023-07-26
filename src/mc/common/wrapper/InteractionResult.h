#pragma once

#include "mc/_HeaderOutputPredefine.h"

class InteractionResult {

public:
    // prevent constructor by default
    InteractionResult& operator=(InteractionResult const&) = delete;
    InteractionResult(InteractionResult const&)            = delete;
    InteractionResult()                                    = delete;
};
