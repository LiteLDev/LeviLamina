#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/EnumSet.h"
#include "mc/deps/shared_types/legacy/BlockDescriptor.h"

namespace SharedTypes::v1_26_20::BlockDefinition {

struct PlacementDirection {
public:
    // PlacementDirection inner types define
    enum class EnabledState : uchar {
        Cardinal           = 0,
        CornerAndCardinal  = 1,
        Facing             = 2,
        SixteenWayRotation = 3,
        Count              = 4,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        1,
        1,
        ::Bedrock::EnumSet<::SharedTypes::v1_26_20::BlockDefinition::PlacementDirection::EnabledState, 4>>
                                                                                     mEnabledStates;
    ::ll::TypedStorage<4, 8, ::std::optional<float>>                                 mYRotationOffset;
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::Legacy::BlockDescriptor>> mBlocksToCornerWith;
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_20::BlockDefinition
