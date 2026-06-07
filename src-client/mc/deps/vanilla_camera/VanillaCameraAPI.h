#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/deps/shared_types/v1_21_100/camera/PlayerViewMode.h"
#include "mc/deps/vanilla_camera/IVanillaCameraAPI.h"

// auto generated forward declare list
// clang-format off
class Actor;
class EntityContext;
class IClientInstance;
class Mob;
// clang-format on

class VanillaCameraAPI : public ::IVanillaCameraAPI {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::IClientInstance&>           mClientInstance;
    ::ll::TypedStorage<4, 8, ::std::optional<float> const> mLegacySneakOffset;
    // NOLINTEND

public:
    // prevent constructor by default
    VanillaCameraAPI& operator=(VanillaCameraAPI const&);
    VanillaCameraAPI(VanillaCameraAPI const&);
    VanillaCameraAPI();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::optional<::IVanillaCameraAPI::DamageBobParameters>
    tryGetDamageBobParameters(::WeakRef<::EntityContext> const actorRef, float frameInterpolation) const /*override*/;

    virtual ::std::optional<::IVanillaCameraAPI::MovementBobParameters>
    tryGetMovementBobParameters(::WeakRef<::EntityContext> const actorRef, float frameInterpolation) const /*override*/;

    virtual ::std::optional<::IVanillaCameraAPI::VehicleRotationInformation>
    tryGetVehicleRotationInformation(::WeakRef<::EntityContext> const actorId) const /*override*/;

    virtual ::IVanillaCameraAPI::VehicleSeatCameraOptions
    getVehicleSeatCameraOptions(::WeakRef<::EntityContext> const actorId) const /*override*/;

    virtual ::std::optional<::IVanillaCameraAPI::PortalData> tryGetPortalData() const /*override*/;

    virtual ::SharedTypes::v1_21_100::PlayerViewMode getPlayerViewPerspectiveOption() const /*override*/;

    virtual ::std::optional<bool> isPlayerSleeping() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit VanillaCameraAPI(::IClientInstance& client);

    MCFOLD ::Actor* _getActor(::WeakRef<::EntityContext> actorRef) const;

    MCAPI ::Mob* _getMob(::WeakRef<::EntityContext> actorRef) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::IClientInstance& client);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::optional<::IVanillaCameraAPI::DamageBobParameters>
    $tryGetDamageBobParameters(::WeakRef<::EntityContext> const actorRef, float frameInterpolation) const;

    MCAPI ::std::optional<::IVanillaCameraAPI::MovementBobParameters>
    $tryGetMovementBobParameters(::WeakRef<::EntityContext> const actorRef, float frameInterpolation) const;

    MCAPI ::std::optional<::IVanillaCameraAPI::VehicleRotationInformation>
    $tryGetVehicleRotationInformation(::WeakRef<::EntityContext> const actorId) const;

    MCAPI ::IVanillaCameraAPI::VehicleSeatCameraOptions
    $getVehicleSeatCameraOptions(::WeakRef<::EntityContext> const actorId) const;

    MCAPI ::std::optional<::IVanillaCameraAPI::PortalData> $tryGetPortalData() const;

    MCAPI ::SharedTypes::v1_21_100::PlayerViewMode $getPlayerViewPerspectiveOption() const;

    MCAPI ::std::optional<bool> $isPlayerSleeping() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
