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

class ActorSetPosSystem {
public:
    // prevent constructor by default
    ActorSetPosSystem& operator=(ActorSetPosSystem const&);
    ActorSetPosSystem(ActorSetPosSystem const&);
    ActorSetPosSystem();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ActorSetPosSystem() = default;

    // vIndex: 1
    virtual void registerEvents(entt::dispatcher&);

    // vIndex: 2
    virtual void __unk_vfn_2();

    // vIndex: 3
    virtual void __unk_vfn_3();

    // vIndex: 4
    virtual void __unk_vfn_4();

    // vIndex: 5
    virtual void tick(class StrictExecutionContext<
                      struct Filter<
                          class FlagComponent<struct ActorAddedFlag>,
                          class FlagComponent<struct ActorRemovedFlag>,
                          class FlagComponent<struct LocalPlayerComponentFlag>,
                          class FlagComponent<struct PaintingFlag>,
                          class FlagComponent<struct PlayerComponentFlag>,
                          class FlagComponent<struct ShulkerFlag>>,
                      struct Read<class ActorOwnerComponent, struct ChunkPositionComponent, struct OffsetsComponent>,
                      struct Write<
                          struct AABBShapeComponent,
                          struct ActorSetPositionRequestComponent,
                          class HitboxComponent,
                          struct StateVectorComponent,
                          struct SynchedActorDataComponent,
                          struct ActorDataFlagComponent,
                          struct ActorDataDirtyFlagsComponent>,
                      struct AddRemove<
                          class FlagComponent<struct ActorChunkMoveFlag>,
                          class FlagComponent<struct ActorLocalPlayerEntityMovedFlag>,
                          struct ActorSetPositionRequestComponent>,
                      struct GlobalRead<>,
                      struct GlobalWrite<>,
                      struct EntityFactoryT<>>& executionContext);

    // vIndex: 6
    virtual void singleTick(
        class StrictExecutionContext<
            struct Filter<
                class FlagComponent<struct ActorAddedFlag>,
                class FlagComponent<struct ActorRemovedFlag>,
                class FlagComponent<struct LocalPlayerComponentFlag>,
                class FlagComponent<struct PaintingFlag>,
                class FlagComponent<struct PlayerComponentFlag>,
                class FlagComponent<struct ShulkerFlag>>,
            struct Read<class ActorOwnerComponent, struct ChunkPositionComponent, struct OffsetsComponent>,
            struct Write<
                struct AABBShapeComponent,
                struct ActorSetPositionRequestComponent,
                class HitboxComponent,
                struct StateVectorComponent,
                struct SynchedActorDataComponent,
                struct ActorDataFlagComponent,
                struct ActorDataDirtyFlagsComponent>,
            struct AddRemove<
                class FlagComponent<struct ActorChunkMoveFlag>,
                class FlagComponent<struct ActorLocalPlayerEntityMovedFlag>,
                struct ActorSetPositionRequestComponent>,
            struct GlobalRead<>,
            struct GlobalWrite<>,
            struct EntityFactoryT<>>& executionContext,
        class StrictEntityContext&    entityContext
    );

    MCAPI static void actorUpdateOwnerChunk(class EntityContext& entity);

    MCAPI static struct TickingSystemWithInfo createSystem(bool isClientSide);

    MCAPI static void moveHitboxTo(class Vec3 const& pos, std::vector<struct Hitbox>&);

    MCAPI static class AABB refreshAABB(float, class Vec3 const&, class Vec2 const&);

    // NOLINTEND
};
