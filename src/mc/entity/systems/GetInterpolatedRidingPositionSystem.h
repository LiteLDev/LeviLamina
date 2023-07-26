#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/world/components/FlagComponent.h"

class GetInterpolatedRidingPositionSystem {

public:
    // prevent constructor by default
    GetInterpolatedRidingPositionSystem& operator=(GetInterpolatedRidingPositionSystem const&) = delete;
    GetInterpolatedRidingPositionSystem(GetInterpolatedRidingPositionSystem const&)            = delete;
    GetInterpolatedRidingPositionSystem()                                                      = delete;

public:
    /**
     * @symbol ?createSystem\@GetInterpolatedRidingPositionSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem(); // NOLINT
    /**
     * @symbol
     * ?getInterpolatedRidingPosition\@GetInterpolatedRidingPositionSystem\@\@SA?AVVec3\@\@AEBVStrictEntityContext\@\@AEBV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@$$CBUActorRotationComponent\@\@$$CBURenderRotationComponent\@\@$$CBUStateVectorComponent\@\@$$CBUSynchedActorDataComponent\@\@\@\@AEBV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@$$CBUPassengerComponent\@\@\@\@AEBV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@V?$FlagComponent\@UParrotFlag\@\@\@\@\@\@\@\@AEBV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@UVehicleComponent\@\@\@\@\@\@AEBV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@V?$FlagComponent\@UCamelFlag\@\@\@\@\@\@$$CBUSynchedActorDataComponent\@\@\@\@AEBV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@V?$FlagComponent\@UHorseFlag\@\@\@\@\@\@$$CBUStandAnimationComponent\@\@\@\@AEBV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@V?$FlagComponent\@UMobFlag\@\@\@\@\@\@$$CBUMobBodyRotationComponent\@\@\@\@M\@Z
     */
    MCAPI static class Vec3 getInterpolatedRidingPosition(
        class StrictEntityContext const&,
        class ViewT<
            class StrictEntityContext,
            class EntityRegistryBase,
            struct ActorRotationComponent const,
            struct RenderRotationComponent const,
            struct StateVectorComponent const,
            struct SynchedActorDataComponent const> const&,
        class ViewT<class StrictEntityContext, class EntityRegistryBase, struct PassengerComponent const> const&,
        class ViewT<
            class StrictEntityContext,
            class EntityRegistryBase,
            struct Include<class FlagComponent<struct ParrotFlag>>> const&,
        class ViewT<
            class StrictEntityContext,
            class EntityRegistryBase,
            struct Include<struct VehicleComponent>> const&,
        class ViewT<
            class StrictEntityContext,
            class EntityRegistryBase,
            struct Include<class FlagComponent<struct CamelFlag>>,
            struct SynchedActorDataComponent const> const&,
        class ViewT<
            class StrictEntityContext,
            class EntityRegistryBase,
            struct Include<class FlagComponent<struct HorseFlag>>,
            struct StandAnimationComponent const> const&,
        class ViewT<
            class StrictEntityContext,
            class EntityRegistryBase,
            struct Include<class FlagComponent<struct MobFlag>>,
            struct MobBodyRotationComponent const> const&,
        float
    ); // NOLINT
};
