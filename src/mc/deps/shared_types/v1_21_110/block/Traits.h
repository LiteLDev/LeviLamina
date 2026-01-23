#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_21_110/block/PlacementDirection.h"
#include "mc/deps/shared_types/v1_21_110/block/PlacementPosition.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_110::BlockDefinition {

struct Traits {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::SharedTypes::v1_21_110::BlockDefinition::PlacementDirection> mPlacementDirection;
    ::ll::TypedStorage<8, 24, ::SharedTypes::v1_21_110::BlockDefinition::PlacementPosition>  mPlacementPosition;
    // NOLINTEND

public:
    // prevent constructor by default
    Traits& operator=(Traits const&);
    Traits(Traits const&);
    Traits();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::SharedTypes::v1_21_110::BlockDefinition::Traits&
    operator=(::SharedTypes::v1_21_110::BlockDefinition::Traits&&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_110::BlockDefinition
