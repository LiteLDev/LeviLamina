#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/EnumSet.h"

namespace SharedTypes::v1_26_20::BlockDefinition {

struct PlacementPosition {
public:
    // PlacementPosition inner types define
    enum class EnabledState : uchar {
        BlockFace    = 0,
        VerticalHalf = 1,
        Count        = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        1,
        1,
        ::Bedrock::EnumSet<::SharedTypes::v1_26_20::BlockDefinition::PlacementPosition::EnabledState, 2>>
        mEnabledStates;
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_20::BlockDefinition
