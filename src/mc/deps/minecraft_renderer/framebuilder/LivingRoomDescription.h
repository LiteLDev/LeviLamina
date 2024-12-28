#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce::framebuilder {

struct LivingRoomDescription {
public:
    // prevent constructor by default
    LivingRoomDescription& operator=(LivingRoomDescription const&);
    LivingRoomDescription(LivingRoomDescription const&);
    LivingRoomDescription();
};

} // namespace mce::framebuilder
