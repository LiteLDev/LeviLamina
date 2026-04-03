#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_26_10/block/Connection.h"
#include "mc/deps/shared_types/v1_26_10/block/MultiBlock.h"
#include "mc/deps/shared_types/v1_26_10/block/PlacementDirection.h"
#include "mc/deps/shared_types/v1_26_10/block/PlacementPosition.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_26_10::BlockDefinition {

struct Traits {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::SharedTypes::v1_26_10::BlockDefinition::Connection>          mConnection;
    ::ll::TypedStorage<2, 6, ::SharedTypes::v1_26_10::BlockDefinition::MultiBlock>          mMultiBlock;
    ::ll::TypedStorage<8, 40, ::SharedTypes::v1_26_10::BlockDefinition::PlacementDirection> mPlacementDirection;
    ::ll::TypedStorage<1, 1, ::SharedTypes::v1_26_10::BlockDefinition::PlacementPosition>   mPlacementPosition;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& ConnectionId();

    MCAPI static ::std::string_view const& MultiBlockId();

    MCAPI static ::std::string_view const& PlacementDirectionId();

    MCAPI static ::std::string_view const& PlacementPositionId();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_10::BlockDefinition
