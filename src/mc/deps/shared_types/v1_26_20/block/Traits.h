#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_26_20/block/Connection.h"
#include "mc/deps/shared_types/v1_26_20/block/MultiBlock.h"
#include "mc/deps/shared_types/v1_26_20/block/PlacementDirection.h"
#include "mc/deps/shared_types/v1_26_20/block/PlacementPosition.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_26_20::BlockDefinition {

struct Traits {
public:
    // Traits inner types define
    using TraitVariant = ::std::variant<
        ::SharedTypes::v1_26_20::BlockDefinition::Connection,
        ::SharedTypes::v1_26_20::BlockDefinition::MultiBlock,
        ::SharedTypes::v1_26_20::BlockDefinition::PlacementDirection,
        ::SharedTypes::v1_26_20::BlockDefinition::PlacementPosition>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 2, ::std::optional<::SharedTypes::v1_26_20::BlockDefinition::Connection>> mConnection;
    ::ll::TypedStorage<2, 8, ::std::optional<::SharedTypes::v1_26_20::BlockDefinition::MultiBlock>> mMultiBlock;
    ::ll::TypedStorage<8, 48, ::std::optional<::SharedTypes::v1_26_20::BlockDefinition::PlacementDirection>>
        mPlacementDirection;
    ::ll::TypedStorage<1, 2, ::std::optional<::SharedTypes::v1_26_20::BlockDefinition::PlacementPosition>>
        mPlacementPosition;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool operator==(::SharedTypes::v1_26_20::BlockDefinition::Traits const&) const;

    MCNAPI ~Traits();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::string_view const& CONNECTION_ID();

    MCNAPI static ::std::string_view const& MULTI_BLOCK_ID();

    MCNAPI static ::std::string_view const& PLACEMENT_DIRECTION_ID();

    MCNAPI static ::std::string_view const& PLACEMENT_POSITION_ID();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_20::BlockDefinition
