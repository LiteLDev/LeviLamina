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
        VerticalConnections = 1,
        Count               = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::Bedrock::EnumSet<::SharedTypes::v1_26_20::BlockDefinition::Connection::EnabledState, 2>>
        mEnabledStates;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& CARDINAL_CONNECTIONS_ID();

    MCAPI static ::std::string_view const& VERTICAL_CONNECTIONS_ID();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_20::BlockDefinition
