#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_26_20/block/MovementType.h"
#include "mc/deps/shared_types/v1_26_20/block/StickyType.h"

namespace SharedTypes::v1_26_20::BlockDefinition {

struct MovableComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::SharedTypes::v1_26_20::MovementType> mMovementType;
    ::ll::TypedStorage<1, 1, ::SharedTypes::v1_26_20::StickyType>   mStickyType;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& NameId();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_20::BlockDefinition
