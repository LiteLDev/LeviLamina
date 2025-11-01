#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/sim/ContinuousBuildIntent.h"
#include "mc/server/sim/VoidBuildIntent.h"

namespace sim {

struct BuildIntent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 2, ::std::variant<::sim::VoidBuildIntent, ::sim::ContinuousBuildIntent>> mType;
    // NOLINTEND

};

}
