#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components_json_legacy/RideableComponentData.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorInteraction;
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
    MCAPI void _setCanPlayerRide(::Player& player, bool canRide) const;

    MCAPI bool areSeatsFull(::Actor const& owner) const;

    MCAPI bool canAddPassenger(::Actor const& vehicle, ::Actor& passenger) const;

    MCAPI bool getFirstAvailableSeatPosition(::Actor const& owner, ::Actor& potentialPassenger, ::Vec3& result) const;

    MCAPI bool getInteraction(::Actor& owner, ::Player& player, ::ActorInteraction& interaction) const;

    MCAPI bool pullInEntity(::Actor& vehicle, ::Actor& passenger) const;
    // NOLINTEND

};
