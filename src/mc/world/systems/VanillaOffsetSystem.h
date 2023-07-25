#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/GlobalRead.h"
#include "mc/common/GlobalWrite.h"
#include "mc/common/StrictExecutionContext.h"
#include "mc/common/wrapper/AddRemove.h"
#include "mc/deps/core/data/Filter.h"
#include "mc/deps/core/data/Read.h"
#include "mc/deps/core/data/Write.h"
#include "mc/entity/EntityFactoryT.h"
#include "mc/world/components/FlagComponent.h"

struct VanillaOffsetSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VANILLAOFFSETSYSTEM
public:
    VanillaOffsetSystem& operator=(VanillaOffsetSystem const&) = delete;
    VanillaOffsetSystem(VanillaOffsetSystem const&)            = delete;
    VanillaOffsetSystem()                                      = delete;
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
     * @symbol
     * ?tick\@VanillaOffsetSystem\@\@UEAAXAEAV?$StrictExecutionContext\@U?$Filter\@V?$FlagComponent\@UPlayerComponentFlag\@\@\@\@\@\@U?$Read\@UOffsetsComponent\@\@USynchedActorDataComponent\@\@U2\@V?$FlagComponent\@UPlayerIsSleepingFlag\@\@\@\@UIsHorizontalPoseFlagComponent\@\@\@\@U?$Write\@UVanillaOffsetComponent\@\@\@\@U?$AddRemove\@$$V\@\@U?$GlobalRead\@UBaseGameVersionComponent\@\@\@\@U?$GlobalWrite\@$$V\@\@U?$EntityFactoryT\@$$V\@\@\@\@\@Z
     */
    virtual void tick(class StrictExecutionContext<
                      struct Filter<class FlagComponent<struct PlayerComponentFlag>>,
                      struct Read<
                          struct OffsetsComponent,
                          struct SynchedActorDataComponent,
                          struct SynchedActorDataComponent,
                          class FlagComponent<struct PlayerIsSleepingFlag>,
                          struct IsHorizontalPoseFlagComponent>,
                      struct Write<struct VanillaOffsetComponent>,
                      struct AddRemove<>,
                      struct GlobalRead<struct BaseGameVersionComponent>,
                      struct GlobalWrite<>,
                      struct EntityFactoryT<>>&);
    /**
     * @symbol ?createSystem\@VanillaOffsetSystem\@\@SA?AUTickingSystemWithInfo\@\@_N0\@Z
     */
    MCAPI static struct TickingSystemWithInfo createSystem(bool, bool);
    /**
     * @symbol
     * ?getCameraPosition\@VanillaOffsetSystem\@\@SA?AVVec3\@\@AEBV2\@PEBUPassengerRenderingRidingOffsetComponent\@\@PEBUVanillaOffsetComponent\@\@M\@Z
     */
    MCAPI static class Vec3 getCameraPosition(
        class Vec3 const&,
        struct PassengerRenderingRidingOffsetComponent const*,
        struct VanillaOffsetComponent const*,
        float
    );
    /**
     * @symbol ?getCameraPosition\@VanillaOffsetSystem\@\@SA?AVVec3\@\@AEBVActor\@\@M\@Z
     */
    MCAPI static class Vec3 getCameraPosition(class Actor const&, float);
};
