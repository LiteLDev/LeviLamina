#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/EnumSet.h"
#include "mc/deps/shared_types/v1_26_10/block/ConnectionID.h"
#include "mc/deps/shared_types/v1_26_10/block/ConnectionType.h"
#include "mc/deps/shared_types/v1_26_10/block/Direction.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_26_10::BlockDefinition {

struct ConnectionRuleComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::SharedTypes::v1_26_10::ConnectionType>                      mConnectionsFrom;
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::v1_26_10::Direction>>           mEnabledDirections;
    ::ll::TypedStorage<1, 1, ::Bedrock::EnumSet<::SharedTypes::v1_26_10::ConnectionID, 4>> mConnectionsFromMask;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ConnectionRuleComponent();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& AcceptConnectionsFromId();

    MCAPI static ::std::string_view const& EnabledDirectionsId();

    MCAPI static ::std::string_view const& NameId();

    MCAPI static ::std::string_view const& VanillaConnectionsFromId();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_10::BlockDefinition
