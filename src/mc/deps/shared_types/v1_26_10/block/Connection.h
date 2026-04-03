#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/EnumSet.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_26_10::BlockDefinition {

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
    ::ll::TypedStorage<1, 1, ::Bedrock::EnumSet<::SharedTypes::v1_26_10::BlockDefinition::Connection::EnabledState, 1>>
        mEnabledStates;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& CardinalConnectionsId();

    MCAPI static ::std::string_view const& EnabledStatesId();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_10::BlockDefinition
