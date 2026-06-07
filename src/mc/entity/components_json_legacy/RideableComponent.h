#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components_json_legacy/DismountMode.h"
#include "mc/entity/components_json_legacy/RideableComponentData.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Actor;
class ActorInteraction;
class InteractionResult;
class Player;
class Vec3;
struct SeatDescription;
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
    MCAPI RideableComponent();

    MCAPI bool allowInteraction(::Actor& owner, ::Player& player) const;

    MCAPI bool areSeatsFull(::Actor const& owner) const;

    MCAPI bool canAddPassenger(::Actor const& vehicle, ::Actor& passenger) const;

    MCAPI bool fitsInVehicle(::AABB const& passengerAABB) const;

    MCFOLD ::DismountMode getDismountMode() const;

    MCAPI bool getFirstAvailableSeatPosition(::Actor const& owner, ::Actor& potentialPassenger, ::Vec3& result) const;

    MCAPI ::InteractionResult getInteraction(::Actor& owner, ::Player& player, ::ActorInteraction& interaction) const;

    MCFOLD ::std::string const& getOnRiderEnterEvent() const;

    MCFOLD ::std::string const& getOnRiderExitEvent() const;

    MCFOLD int getSeatCount() const;

    MCFOLD ::std::vector<::SeatDescription> const& getSeats() const;

    MCAPI bool pullInEntity(::Actor& vehicle, ::Actor& passenger) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND
};
