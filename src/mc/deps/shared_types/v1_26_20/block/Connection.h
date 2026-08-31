#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/EnumSet.h"

namespace SharedTypes::v1_26_20::BlockDefinition {

struct Connection {
public:
    // Connection inner types define
    enum class EnabledState : uchar {
        CardinalConnections = 0,
        Count               = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::Bedrock::EnumSet<::SharedTypes::v1_26_20::BlockDefinition::Connection::EnabledState, 1>>
        mEnabledStates;
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_20::BlockDefinition
