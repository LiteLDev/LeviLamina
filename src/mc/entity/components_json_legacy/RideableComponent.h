#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components_json_legacy/RideableComponentData.h"
#include "mc/world/item/HandSlot.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Interaction;
class Player;
class Vec3;
// clang-format on

class RideableComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 168, ::RideableComponentData> mData;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool allowInteraction(::Actor& owner, ::Player& player) const;

    MCNAPI bool canAddPassenger(::Actor const& vehicle, ::Actor& passenger) const;

    MCNAPI bool getFirstAvailableSeatPosition(::Actor const& owner, ::Actor& potentialPassenger, ::Vec3& result) const;

    MCNAPI ::Interaction getInteraction(::Actor& owner, ::Player& player, ::HandSlot) const;

    MCAPI bool pullInEntity(::Actor& vehicle, ::Actor& passenger) const;
    // NOLINTEND
};
