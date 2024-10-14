#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/strict/AddRemove.h"
#include "mc/deps/ecs/strict/EntityFactoryT.h"
#include "mc/deps/ecs/strict/Filter.h"
#include "mc/deps/ecs/strict/GlobalRead.h"
#include "mc/deps/ecs/strict/GlobalWrite.h"
#include "mc/deps/ecs/strict/Read.h"
#include "mc/deps/ecs/strict/StrictExecutionContext.h"
#include "mc/deps/ecs/strict/Write.h"
#include "mc/entity/components/FlagComponent.h"

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
                      struct EntityFactoryT<>>& context);

    MCAPI static struct TickingSystemWithInfo createSystem(bool isClientSide);

    MCAPI static class Vec3 getCameraPosition(class Actor const& actor, float alpha);

    MCAPI static class Vec3 getCameraPosition(
        class Vec3 const&                                     interpolatedRidingPosition,
        struct PassengerRenderingRidingOffsetComponent const* passengerOffset,
        struct VanillaOffsetComponent const*                  cameraOffset,
        float                                                 alpha
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void tick$(class StrictExecutionContext<
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
                     struct EntityFactoryT<>>& context);

    // NOLINTEND
};
