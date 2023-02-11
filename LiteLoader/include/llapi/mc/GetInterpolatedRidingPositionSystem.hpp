/**
 * @file  GetInterpolatedRidingPositionSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class GetInterpolatedRidingPositionSystem.
 *
 */
class GetInterpolatedRidingPositionSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GETINTERPOLATEDRIDINGPOSITIONSYSTEM
public:
    class GetInterpolatedRidingPositionSystem& operator=(class GetInterpolatedRidingPositionSystem const &) = delete;
    GetInterpolatedRidingPositionSystem(class GetInterpolatedRidingPositionSystem const &) = delete;
    GetInterpolatedRidingPositionSystem() = delete;
#endif

public:
    /**
     * @symbol  ?getInterpolatedRidingPosition\@GetInterpolatedRidingPositionSystem\@\@SA?AVVec3\@\@AEBVStrictEntityContext\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@$$CBUActorRotationComponent\@\@$$CBURenderRotationComponent\@\@$$CBUStateVectorComponent\@\@$$CBUSynchedActorDataComponent\@\@\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@$$CBUPassengerComponent\@\@\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@V?$FlagComponent\@UParrotFlag\@\@\@\@\@\@\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@UVehicleComponent\@\@\@\@\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@V?$FlagComponent\@UCamelFlag\@\@\@\@\@\@$$CBUSynchedActorDataComponent\@\@\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@V?$FlagComponent\@UHorseFlag\@\@\@\@\@\@$$CBUStandAnimationComponent\@\@\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@V?$FlagComponent\@UMobFlag\@\@\@\@\@\@$$CBUMobBodyRotationComponent\@\@\@\@M\@Z
     */
    MCAPI static class Vec3 getInterpolatedRidingPosition(class StrictEntityContext const &, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct ActorRotationComponent const, struct RenderRotationComponent const, struct StateVectorComponent const, struct SynchedActorDataComponent const>, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct PassengerComponent const>, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct ParrotFlag>>>, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<struct VehicleComponent>>, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct CamelFlag>>, struct SynchedActorDataComponent const>, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct HorseFlag>>, struct StandAnimationComponent const>, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct MobFlag>>, struct MobBodyRotationComponent const>, float);

};