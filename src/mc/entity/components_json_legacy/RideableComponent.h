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
struct RideableComponentData;
// clang-format on

class RideableComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 96, ::RideableComponentData> mData;
    // NOLINTEND

public:
    // prevent constructor by default
    RideableComponent& operator=(RideableComponent const&);
    RideableComponent(RideableComponent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI RideableComponent(::RideableComponent&&);

    MCAPI void _setCanPlayerRide(::Player& player, bool canRide) const;

    MCAPI bool areSeatsFull(::Actor const& owner) const;

    MCAPI bool canAddPassenger(::Actor const& vehicle, ::Actor& passenger) const;

    MCAPI bool getFirstAvailableSeatPosition(::Actor const& owner, ::Actor& potentialPassenger, ::Vec3& result) const;

    MCAPI bool getInteraction(::Actor& owner, ::Player& player, ::ActorInteraction& interaction) const;

    MCAPI ::RideableComponent& operator=(::RideableComponent&&);

    MCAPI bool pullInEntity(::Actor& vehicle, ::Actor& passenger) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::RideableComponent&&);
    // NOLINTEND
};
