/**
 * @file  InterpolatedRidingPositionCalculationHelper.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class InterpolatedRidingPositionCalculationHelper {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INTERPOLATEDRIDINGPOSITIONCALCULATIONHELPER
public:
    class InterpolatedRidingPositionCalculationHelper& operator=(class InterpolatedRidingPositionCalculationHelper const &) = delete;
    InterpolatedRidingPositionCalculationHelper(class InterpolatedRidingPositionCalculationHelper const &) = delete;
    InterpolatedRidingPositionCalculationHelper() = delete;
#endif

public:
    /**
     * @symbol ?getCamelInterpolatedRidingOffset\@InterpolatedRidingPositionCalculationHelper\@\@SA?AVVec3\@\@_N\@Z
     */
    MCAPI static class Vec3 getCamelInterpolatedRidingOffset(bool);
    /**
     * @symbol ?getCamelInterpolatedRidingOffset\@InterpolatedRidingPositionCalculationHelper\@\@SA?AVVec3\@\@AEBUSynchedActorDataComponent\@\@\@Z
     */
    MCAPI static class Vec3 getCamelInterpolatedRidingOffset(struct SynchedActorDataComponent const &);
    /**
     * @symbol ?getHorseInterpolatedRidingOffset\@InterpolatedRidingPositionCalculationHelper\@\@SA?AVVec3\@\@AEBVStrictEntityContext\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@V?$FlagComponent\@UHorseFlag\@\@\@\@\@\@$$CBUStandAnimationComponent\@\@\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@$$CBUActorRotationComponent\@\@$$CBURenderRotationComponent\@\@$$CBUStateVectorComponent\@\@$$CBUSynchedActorDataComponent\@\@\@\@M\@Z
     */
    MCAPI static class Vec3 getHorseInterpolatedRidingOffset(class StrictEntityContext const &, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct HorseFlag>>, struct StandAnimationComponent const>, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct ActorRotationComponent const, struct RenderRotationComponent const, struct StateVectorComponent const, struct SynchedActorDataComponent const>, float);
    /**
     * @symbol ?getInterpolatedBodyRot\@InterpolatedRidingPositionCalculationHelper\@\@SAMAEBVStrictEntityContext\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@$$CBUActorRotationComponent\@\@$$CBURenderRotationComponent\@\@$$CBUStateVectorComponent\@\@$$CBUSynchedActorDataComponent\@\@\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@V?$FlagComponent\@UMobFlag\@\@\@\@\@\@$$CBUMobBodyRotationComponent\@\@\@\@M\@Z
     */
    MCAPI static float getInterpolatedBodyRot(class StrictEntityContext const &, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct ActorRotationComponent const, struct RenderRotationComponent const, struct StateVectorComponent const, struct SynchedActorDataComponent const>, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct MobFlag>>, struct MobBodyRotationComponent const>, float);
    /**
     * @symbol ?getInterpolatedPosition\@InterpolatedRidingPositionCalculationHelper\@\@SA?AVVec3\@\@AEBVStrictEntityContext\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@$$CBUActorRotationComponent\@\@$$CBURenderRotationComponent\@\@$$CBUStateVectorComponent\@\@$$CBUSynchedActorDataComponent\@\@\@\@M\@Z
     */
    MCAPI static class Vec3 getInterpolatedPosition(class StrictEntityContext const &, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct ActorRotationComponent const, struct RenderRotationComponent const, struct StateVectorComponent const, struct SynchedActorDataComponent const>, float);

};
