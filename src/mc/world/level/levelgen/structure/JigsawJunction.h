#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct JigsawJunction {
public:
    // prevent constructor by default
    JigsawJunction& operator=(JigsawJunction const&);
    JigsawJunction(JigsawJunction const&);
    JigsawJunction();
};
