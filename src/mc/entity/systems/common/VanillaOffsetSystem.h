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
    // vIndex: 0
    virtual ~VanillaOffsetSystem() = default;

    // vIndex: 1
    virtual void __unk_vfn_1();

    // vIndex: 2
    virtual void __unk_vfn_2();

    // vIndex: 3
    virtual void __unk_vfn_3();

    // vIndex: 4
    virtual void __unk_vfn_4();

    // vIndex: 5
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

    MCAPI static struct TickingSystemWithInfo createSystem(bool);

    MCAPI static class Vec3 getCameraPosition(class Actor const& actor, float alpha);

    MCAPI static class Vec3 getCameraPosition(
        class Vec3 const&,
        struct PassengerRenderingRidingOffsetComponent const*,
        struct VanillaOffsetComponent const*,
        float
    );

    // NOLINTEND
};
