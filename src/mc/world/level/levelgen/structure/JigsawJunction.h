#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct JigsawJunction {

public:
    // prevent constructor by default
    JigsawJunction& operator=(JigsawJunction const&) = delete;
    JigsawJunction(JigsawJunction const&)            = delete;
    JigsawJunction()                                 = delete;
};
