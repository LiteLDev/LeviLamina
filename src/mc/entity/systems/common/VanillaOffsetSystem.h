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
public:
    // prevent constructor by default
    VanillaOffsetSystem& operator=(VanillaOffsetSystem const&);
    VanillaOffsetSystem(VanillaOffsetSystem const&);
    VanillaOffsetSystem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1VanillaOffsetSystem@@UEAA@XZ
    virtual ~VanillaOffsetSystem() = default;

    // vIndex: 1, symbol: __unk_vfn_1
    virtual void __unk_vfn_1();

    // vIndex: 2, symbol: __unk_vfn_2
    virtual void __unk_vfn_2();

    // vIndex: 3, symbol: __unk_vfn_3
    virtual void __unk_vfn_3();

    // vIndex: 4, symbol: __unk_vfn_4
    virtual void __unk_vfn_4();

    // vIndex: 5, symbol:
    // ?tick@VanillaOffsetSystem@@UEAAXAEAV?$StrictExecutionContext@U?$Filter@V?$FlagComponent@UPlayerComponentFlag@@@@V?$FlagComponent@UActorMovementTickNeededFlag@@@@@@U?$Read@UOffsetsComponent@@UActorDataFlagComponent@@V?$FlagComponent@UPlayerIsSleepingFlag@@@@@@U?$Write@UVanillaOffsetComponent@@@@U?$AddRemove@UIsHorizontalPoseFlagComponent@@@@U?$GlobalRead@UBaseGameVersionComponent@@@@U?$GlobalWrite@$$V@@U?$EntityFactoryT@$$V@@@@@Z
    virtual void tick(class StrictExecutionContext<
                      struct Filter<
                          class FlagComponent<struct PlayerComponentFlag>,
                          class FlagComponent<struct ActorMovementTickNeededFlag>>,
                      struct Read<
                          struct OffsetsComponent,
                          struct ActorDataFlagComponent,
                          class FlagComponent<struct PlayerIsSleepingFlag>>,
                      struct Write<struct VanillaOffsetComponent>,
                      struct AddRemove<struct IsHorizontalPoseFlagComponent>,
                      struct GlobalRead<struct BaseGameVersionComponent>,
                      struct GlobalWrite<>,
                      struct EntityFactoryT<>>&);

    // symbol: ?createSystem@VanillaOffsetSystem@@SA?AUTickingSystemWithInfo@@_N@Z
    MCAPI static struct TickingSystemWithInfo createSystem(bool);

    // symbol: ?getCameraPosition@VanillaOffsetSystem@@SA?AVVec3@@AEBVActor@@M@Z
    MCAPI static class Vec3 getCameraPosition(class Actor const& actor, float alpha);

    // symbol:
    // ?getCameraPosition@VanillaOffsetSystem@@SA?AVVec3@@AEBV2@PEBUPassengerRenderingRidingOffsetComponent@@PEBUVanillaOffsetComponent@@M@Z
    MCAPI static class Vec3 getCameraPosition(
        class Vec3 const&,
        struct PassengerRenderingRidingOffsetComponent const*,
        struct VanillaOffsetComponent const*,
        float
    );

    // NOLINTEND
};
