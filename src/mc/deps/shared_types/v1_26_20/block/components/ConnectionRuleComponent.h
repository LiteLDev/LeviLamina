#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/EnumSet.h"
#include "mc/deps/shared_types/v1_26_20/block/ConnectionID.h"
#include "mc/deps/shared_types/v1_26_20/block/ConnectionType.h"
#include "mc/deps/shared_types/v1_26_20/block/Direction.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_26_20::BlockDefinition {

struct ConnectionRuleComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::SharedTypes::v1_26_20::ConnectionType>                      mConnectionsFrom;
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::v1_26_20::Direction>>           mEnabledDirections;
    ::ll::TypedStorage<1, 1, ::Bedrock::EnumSet<::SharedTypes::v1_26_20::ConnectionID, 4>> mConnectionsFromMask;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::string_view const& AcceptConnectionsFromId();

    MCNAPI static ::std::string_view const& EnabledDirectionsId();

    MCNAPI static ::std::string_view const& NameId();

    MCNAPI static ::std::string_view const& VanillaConnectionsFromId();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_20::BlockDefinition
