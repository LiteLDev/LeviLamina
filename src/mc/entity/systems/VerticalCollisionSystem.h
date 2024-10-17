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

class VerticalCollisionSystem {
public:
    // prevent constructor by default
    VerticalCollisionSystem& operator=(VerticalCollisionSystem const&);
    VerticalCollisionSystem(VerticalCollisionSystem const&);
    VerticalCollisionSystem();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~VerticalCollisionSystem() = default;

    // vIndex: 1
    virtual void registerEvents(entt::dispatcher& dispatcher);

    // vIndex: 2
    virtual void __unk_vfn_2();

    // vIndex: 3
    virtual void __unk_vfn_3();

    // vIndex: 4
    virtual void __unk_vfn_4();

    // vIndex: 5
    virtual void tick(class StrictExecutionContext<
                      struct Filter<
                          class FlagComponent<struct MinecartFlag>,
                          class FlagComponent<struct PlayerComponentFlag>,
                          class FlagComponent<struct VerticalCollisionFlag>>,
                      struct Read<
                          struct DimensionTypeComponent,
                          struct StateVectorComponent,
                          struct ActorDataFlagComponent,
                          struct MoveRequestComponent,
                          struct AABBShapeComponent>,
                      struct Write<struct StateVectorComponent>,
                      struct AddRemove<struct BounceComponent>,
                      struct GlobalRead<struct LocalConstBlockSourceFactoryComponent>,
                      struct GlobalWrite<>,
                      struct EntityFactoryT<>>& strictContext);

    // vIndex: 6
    virtual void singleTick(
        class StrictExecutionContext<
            struct Filter<
                class FlagComponent<struct MinecartFlag>,
                class FlagComponent<struct PlayerComponentFlag>,
                class FlagComponent<struct VerticalCollisionFlag>>,
            struct Read<
                struct DimensionTypeComponent,
                struct StateVectorComponent,
                struct ActorDataFlagComponent,
                struct MoveRequestComponent,
                struct AABBShapeComponent>,
            struct Write<struct StateVectorComponent>,
            struct AddRemove<struct BounceComponent>,
            struct GlobalRead<struct LocalConstBlockSourceFactoryComponent>,
            struct GlobalWrite<>,
            struct EntityFactoryT<>>& strictContext,
        class StrictEntityContext&    entity
    );

    MCAPI static struct TickingSystemWithInfo create();

    MCAPI static class AABB getMaxCollisionVolume(class Vec3 const& speed, class AABB const& shape);

    MCAPI static void tickVerticalCollisionSystem(
        class StrictEntityContext const&   context,
        struct AABBShapeComponent const&   aabb,
        struct MoveRequestComponent const& request,
        class StrictExecutionContext<
            struct Filter<
                class FlagComponent<struct MinecartFlag>,
                class FlagComponent<struct PlayerComponentFlag>,
                class FlagComponent<struct VerticalCollisionFlag>>,
            struct Read<
                struct DimensionTypeComponent,
                struct StateVectorComponent,
                struct ActorDataFlagComponent,
                struct MoveRequestComponent,
                struct AABBShapeComponent>,
            struct Write<struct StateVectorComponent>,
            struct AddRemove<struct BounceComponent>,
            struct GlobalRead<struct LocalConstBlockSourceFactoryComponent>,
            struct GlobalWrite<>,
            struct EntityFactoryT<>>& executionContext
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void registerEvents$(entt::dispatcher& dispatcher);

    MCAPI void singleTick$(
        class StrictExecutionContext<
            struct Filter<
                class FlagComponent<struct MinecartFlag>,
                class FlagComponent<struct PlayerComponentFlag>,
                class FlagComponent<struct VerticalCollisionFlag>>,
            struct Read<
                struct DimensionTypeComponent,
                struct StateVectorComponent,
                struct ActorDataFlagComponent,
                struct MoveRequestComponent,
                struct AABBShapeComponent>,
            struct Write<struct StateVectorComponent>,
            struct AddRemove<struct BounceComponent>,
            struct GlobalRead<struct LocalConstBlockSourceFactoryComponent>,
            struct GlobalWrite<>,
            struct EntityFactoryT<>>& strictContext,
        class StrictEntityContext&    entity
    );

    MCAPI void tick$(class StrictExecutionContext<
                     struct Filter<
                         class FlagComponent<struct MinecartFlag>,
                         class FlagComponent<struct PlayerComponentFlag>,
                         class FlagComponent<struct VerticalCollisionFlag>>,
                     struct Read<
                         struct DimensionTypeComponent,
                         struct StateVectorComponent,
                         struct ActorDataFlagComponent,
                         struct MoveRequestComponent,
                         struct AABBShapeComponent>,
                     struct Write<struct StateVectorComponent>,
                     struct AddRemove<struct BounceComponent>,
                     struct GlobalRead<struct LocalConstBlockSourceFactoryComponent>,
                     struct GlobalWrite<>,
                     struct EntityFactoryT<>>& strictContext);

    // NOLINTEND
};
