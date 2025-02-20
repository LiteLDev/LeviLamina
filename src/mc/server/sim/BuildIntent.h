#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace sim { struct ContinuousBuildIntent; }
namespace sim { struct VoidBuildIntent; }
// clang-format on

namespace sim {

struct BuildIntent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 2, ::std::variant<::sim::VoidBuildIntent, ::sim::ContinuousBuildIntent>> mType;
    // NOLINTEND
};

} // namespace sim
