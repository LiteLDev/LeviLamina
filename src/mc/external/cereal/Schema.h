#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cereal {

struct Schema {
public:
    // prevent constructor by default
    Schema& operator=(Schema const&);
    Schema(Schema const&);
    Schema();
};

} // namespace cereal
