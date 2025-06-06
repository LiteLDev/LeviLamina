#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/MovementAttributeAccess.h"
#include "mc/entity/components/MovementAttributeCorrectionMode.h"

// auto generated forward declare list
// clang-format off
class Attribute;
struct MovementAttributesComponent;
// clang-format on

struct MovementAttributeEntry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::optional<float> MovementAttributesComponent::*> mMovementAttribute;
    ::ll::TypedStorage<8, 8, ::Attribute const&>                                    mAttribute;
    ::ll::TypedStorage<1, 1, ::MovementAttributeAccess>                             mAccess;
    ::ll::TypedStorage<1, 1, ::MovementAttributeCorrectionMode>                     mCorrectionMode;
    // NOLINTEND

public:
    // prevent constructor by default
    MovementAttributeEntry& operator=(MovementAttributeEntry const&);
    MovementAttributeEntry(MovementAttributeEntry const&);
    MovementAttributeEntry();
};
