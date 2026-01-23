#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_21_110/block/MovementType.h"
#include "mc/deps/shared_types/v1_21_110/block/StickyType.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_110::BlockDefinition {

struct MovableComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::SharedTypes::v1_21_110::BlockDefinition::MovementType> mMovementType;
    ::ll::TypedStorage<1, 1, ::SharedTypes::v1_21_110::BlockDefinition::StickyType>   mStickyType;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& MovementTypeId();

    MCAPI static ::std::string_view const& NameId();

    MCAPI static ::std::string_view const& StickyTypeId();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_110::BlockDefinition
