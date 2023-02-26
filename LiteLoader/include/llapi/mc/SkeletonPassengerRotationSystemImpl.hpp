/**
 * @file  SkeletonPassengerRotationSystemImpl.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class SkeletonPassengerRotationSystemImpl.
 *
 */
class SkeletonPassengerRotationSystemImpl {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SKELETONPASSENGERROTATIONSYSTEMIMPL
public:
    class SkeletonPassengerRotationSystemImpl& operator=(class SkeletonPassengerRotationSystemImpl const &) = delete;
    SkeletonPassengerRotationSystemImpl(class SkeletonPassengerRotationSystemImpl const &) = delete;
    SkeletonPassengerRotationSystemImpl() = delete;
#endif

public:

//private:
    /**
     * @symbol  ?_tickSkeletonView\@SkeletonPassengerRotationSystemImpl\@\@CAXAEAVStrictEntityContext\@\@AEBUPassengerComponent\@\@AEBV?$FlagComponent\@USkeletonFlag\@\@\@\@AEAUMobBodyRotationComponent\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@$$CBUVehicleComponent\@\@$$CBUMobBodyRotationComponent\@\@\@\@\@Z
     */
    MCAPI static void _tickSkeletonView(class StrictEntityContext &, struct PassengerComponent const &, class FlagComponent<struct SkeletonFlag> const &, struct MobBodyRotationComponent &, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct VehicleComponent const, struct MobBodyRotationComponent const>);

private:

};