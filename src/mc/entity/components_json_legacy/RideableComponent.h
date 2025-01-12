#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Actor;
class ActorInteraction;
class Player;
class Vec3;
struct SeatDescription;
// clang-format on

class RideableComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 96> mUnk9c58ce;
    // NOLINTEND

public:
    // prevent constructor by default
    RideableComponent& operator=(RideableComponent const&);
    RideableComponent(RideableComponent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI RideableComponent();

    MCAPI RideableComponent(::RideableComponent&&);

    MCAPI bool allowInteraction(::Actor& owner, ::Player& player) const;

    MCAPI bool areSeatsFull(::Actor const& owner) const;

    MCAPI bool canAddPassenger(::Actor const& vehicle, ::Actor& passenger) const;

    MCAPI bool fitsInVehicle(::AABB const& passengerAABB) const;

    MCAPI bool getFirstAvailableSeatPosition(::Actor const& owner, ::Actor& potentialPassenger, ::Vec3& result) const;

    MCAPI bool getInteraction(::Actor& owner, ::Player& player, ::ActorInteraction& interaction) const;

    MCFOLD int getSeatCount() const;

    MCFOLD ::std::vector<::SeatDescription> const& getSeats() const;

    MCAPI bool pullInEntity(::Actor& vehicle, ::Actor& passenger) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::RideableComponent&&);
    // NOLINTEND
};
