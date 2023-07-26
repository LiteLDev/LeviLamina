#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct OtherJumpRequestFlag {

public:
    // prevent constructor by default
    OtherJumpRequestFlag& operator=(OtherJumpRequestFlag const&) = delete;
    OtherJumpRequestFlag(OtherJumpRequestFlag const&)            = delete;
    OtherJumpRequestFlag()                                       = delete;
};
