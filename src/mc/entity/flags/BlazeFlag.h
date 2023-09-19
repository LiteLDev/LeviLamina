#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BlazeFlag {
public:
    // prevent constructor by default
    BlazeFlag& operator=(BlazeFlag const&);
    BlazeFlag(BlazeFlag const&);
    BlazeFlag();
};
