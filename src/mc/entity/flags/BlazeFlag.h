#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BlazeFlag {

public:
    // prevent constructor by default
    BlazeFlag& operator=(BlazeFlag const&) = delete;
    BlazeFlag(BlazeFlag const&)            = delete;
    BlazeFlag()                            = delete;
};
