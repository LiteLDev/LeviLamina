#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"

// auto generated forward declare list
// clang-format off
class Block;
// clang-format on

namespace AgentComponents {

struct BlockQueryResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::Vec3>        position;
    ::ll::TypedStorage<8, 8, ::Block const*> block;
    // NOLINTEND
};

} // namespace AgentComponents
