#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct JumpFromGroundRequestFlag {

public:
    // prevent constructor by default
    JumpFromGroundRequestFlag& operator=(JumpFromGroundRequestFlag const&) = delete;
    JumpFromGroundRequestFlag(JumpFromGroundRequestFlag const&)            = delete;
    JumpFromGroundRequestFlag()                                            = delete;
};
