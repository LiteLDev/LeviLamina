#pragma once

#include "mc/_HeaderOutputPredefine.h"

class RideableComponent {
public:
    // prevent constructor by default
    RideableComponent& operator=(RideableComponent const&);
    RideableComponent(RideableComponent const&);

public:
    // NOLINTBEGIN
    MCAPI RideableComponent();

    MCAPI RideableComponent(class RideableComponent&&);

    MCAPI bool allowInteraction(class Actor& owner, class Player& player) const;

    MCAPI bool areSeatsFull(class Actor const& owner) const;

    MCAPI bool canAddPassenger(class Actor const& vehicle, class Actor& passenger) const;

    MCAPI bool fitsInVehicle(class AABB const& passengerAABB) const;

    MCAPI bool
    getFirstAvailableSeatPosition(class Actor const& owner, class Actor& potentialPassenger, class Vec3& result) const;

    MCAPI bool getInteraction(class Actor& owner, class Player& player, class ActorInteraction& interaction) const;

    MCAPI int getSeatCount() const;

    MCAPI std::vector<struct SeatDescription> const& getSeats() const;

    MCAPI class RideableComponent& operator=(class RideableComponent&&);

    MCAPI bool pullInEntity(class Actor& vehicle, class Actor& passenger) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _setCanPlayerRide(class Player& player, bool canRide) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(class RideableComponent&&);

    MCAPI void* ctor$();

    // NOLINTEND
};
