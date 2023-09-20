/**
 * @file  VanillaOffsetSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


struct VanillaOffsetSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VANILLAOFFSETSYSTEM
public:
    struct VanillaOffsetSystem& operator=(struct VanillaOffsetSystem const &) = delete;
    VanillaOffsetSystem(struct VanillaOffsetSystem const &) = delete;
    VanillaOffsetSystem() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl 2
     * @symbol __unk_vfn_2
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl 4
     * @symbol __unk_vfn_4
     */
    virtual void __unk_vfn_4();
    /**
     * @vftbl 5
     * @symbol ?tick\@VanillaOffsetSystem\@\@UEAAXAEAV?$StrictExecutionContext\@U?$Filter\@V?$FlagComponent\@UPlayerComponentFlag\@\@\@\@V?$FlagComponent\@UActorMovementTickNeededFlag\@\@\@\@\@\@U?$Read\@UOffsetsComponent\@\@USynchedActorDataComponent\@\@V?$FlagComponent\@UPlayerIsSleepingFlag\@\@\@\@\@\@U?$Write\@UVanillaOffsetComponent\@\@\@\@U?$AddRemove\@UIsHorizontalPoseFlagComponent\@\@\@\@U?$GlobalRead\@UBaseGameVersionComponent\@\@\@\@U?$GlobalWrite\@$$V\@\@U?$EntityFactoryT\@$$V\@\@\@\@\@Z
     */
    virtual void tick(class StrictExecutionContext<struct Filter<class FlagComponent<struct PlayerComponentFlag>, class FlagComponent<struct ActorMovementTickNeededFlag>>, struct Read<struct OffsetsComponent, struct SynchedActorDataComponent, class FlagComponent<struct PlayerIsSleepingFlag>>, struct Write<struct VanillaOffsetComponent>, struct AddRemove<struct IsHorizontalPoseFlagComponent>, struct GlobalRead<struct BaseGameVersionComponent>, struct GlobalWrite<>, struct EntityFactoryT<>> &);
    /**
     * @symbol ?createSystem\@VanillaOffsetSystem\@\@SA?AUTickingSystemWithInfo\@\@_N\@Z
     */
    MCAPI static struct TickingSystemWithInfo createSystem(bool);
    /**
     * @symbol ?getCameraPosition\@VanillaOffsetSystem\@\@SA?AVVec3\@\@AEBV2\@PEBUPassengerRenderingRidingOffsetComponent\@\@PEBUVanillaOffsetComponent\@\@M\@Z
     */
    MCAPI static class Vec3 getCameraPosition(class Vec3 const &, struct PassengerRenderingRidingOffsetComponent const *, struct VanillaOffsetComponent const *, float);
    /**
     * @symbol ?getCameraPosition\@VanillaOffsetSystem\@\@SA?AVVec3\@\@AEBVActor\@\@M\@Z
     */
    MCAPI static class Vec3 getCameraPosition(class Actor const &, float);

};