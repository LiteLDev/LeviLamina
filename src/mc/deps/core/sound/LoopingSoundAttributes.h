#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct LoopingSoundAttributes {

public:
    // prevent constructor by default
    LoopingSoundAttributes& operator=(LoopingSoundAttributes const&) = delete;
    LoopingSoundAttributes(LoopingSoundAttributes const&)            = delete;
    LoopingSoundAttributes()                                         = delete;
};
