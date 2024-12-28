#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/strict/AddRemove.h"
#include "mc/deps/ecs/strict/EntityFactoryT.h"
#include "mc/deps/ecs/strict/Filter.h"
#include "mc/deps/ecs/strict/GlobalRead.h"
#include "mc/deps/ecs/strict/GlobalWrite.h"
#include "mc/deps/ecs/strict/IStrictTickingSystem.h"
#include "mc/deps/ecs/strict/Read.h"
#include "mc/deps/ecs/strict/StrictExecutionContext.h"
#include "mc/deps/ecs/strict/Write.h"

// auto generated forward declare list
// clang-format off
class AABB;
class ActorOwnerComponent;
class EntityContext;
class HitboxComponent;
class StrictEntityContext;
class Vec2;
class Vec3;
struct AABBShapeComponent;
struct ActorAddedFlagComponent;
struct ActorChunkMoveFlagComponent;
struct ActorDataDirtyFlagsComponent;
struct ActorDataFlagComponent;
struct ActorLocalPlayerEntityMovedFlagComponent;
struct ActorRemovedFlagComponent;
struct ActorSetPositionRequestComponent;
struct ChunkPositionComponent;
struct Hitbox;
struct LocalPlayerComponent;
struct OffsetsComponent;
struct PaintingFlagComponent;
struct PlayerComponent;
struct ShulkerFlagComponent;
struct StateVectorComponent;
struct SynchedActorDataComponent;
struct TickingSystemWithInfo;
// clang-format on

class ActorSetPosSystem : public ::IStrictTickingSystem<::StrictExecutionContext<
                              ::Filter<
                                  ::ActorAddedFlagComponent,
                                  ::ActorRemovedFlagComponent,
                                  ::LocalPlayerComponent,
                                  ::PaintingFlagComponent,
                                  ::PlayerComponent,
                                  ::ShulkerFlagComponent>,
                              ::Read<::ActorOwnerComponent, ::ChunkPositionComponent, ::OffsetsComponent>,
                              ::Write<
                                  ::AABBShapeComponent,
                                  ::ActorSetPositionRequestComponent,
                                  ::HitboxComponent,
                                  ::StateVectorComponent,
                                  ::SynchedActorDataComponent,
                                  ::ActorDataFlagComponent,
                                  ::ActorDataDirtyFlagsComponent>,
                              ::AddRemove<
                                  ::ActorChunkMoveFlagComponent,
                                  ::ActorLocalPlayerEntityMovedFlagComponent,
                                  ::ActorSetPositionRequestComponent>,
                              ::GlobalRead<>,
                              ::GlobalWrite<>,
                              ::EntityFactoryT<>>> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk3fcc8a;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorSetPosSystem& operator=(ActorSetPosSystem const&);
    ActorSetPosSystem(ActorSetPosSystem const&);
    ActorSetPosSystem();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 6
    virtual void singleTick(
        ::StrictExecutionContext<
            ::Filter<
                ::ActorAddedFlagComponent,
                ::ActorRemovedFlagComponent,
                ::LocalPlayerComponent,
                ::PaintingFlagComponent,
                ::PlayerComponent,
                ::ShulkerFlagComponent>,
            ::Read<::ActorOwnerComponent, ::ChunkPositionComponent, ::OffsetsComponent>,
            ::Write<
                ::AABBShapeComponent,
                ::ActorSetPositionRequestComponent,
                ::HitboxComponent,
                ::StateVectorComponent,
                ::SynchedActorDataComponent,
                ::ActorDataFlagComponent,
                ::ActorDataDirtyFlagsComponent>,
            ::AddRemove<
                ::ActorChunkMoveFlagComponent,
                ::ActorLocalPlayerEntityMovedFlagComponent,
                ::ActorSetPositionRequestComponent>,
            ::GlobalRead<>,
            ::GlobalWrite<>,
            ::EntityFactoryT<>>& executionContext,
        ::StrictEntityContext&   entityContext
    ) /*override*/;

    // vIndex: 5
    virtual void tick(::StrictExecutionContext<
                      ::Filter<
                          ::ActorAddedFlagComponent,
                          ::ActorRemovedFlagComponent,
                          ::LocalPlayerComponent,
                          ::PaintingFlagComponent,
                          ::PlayerComponent,
                          ::ShulkerFlagComponent>,
                      ::Read<::ActorOwnerComponent, ::ChunkPositionComponent, ::OffsetsComponent>,
                      ::Write<
                          ::AABBShapeComponent,
                          ::ActorSetPositionRequestComponent,
                          ::HitboxComponent,
                          ::StateVectorComponent,
                          ::SynchedActorDataComponent,
                          ::ActorDataFlagComponent,
                          ::ActorDataDirtyFlagsComponent>,
                      ::AddRemove<
                          ::ActorChunkMoveFlagComponent,
                          ::ActorLocalPlayerEntityMovedFlagComponent,
                          ::ActorSetPositionRequestComponent>,
                      ::GlobalRead<>,
                      ::GlobalWrite<>,
                      ::EntityFactoryT<>>& executionContext) /*override*/;

    // vIndex: 0
    virtual ~ActorSetPosSystem() /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void actorUpdateOwnerChunk(::EntityContext& entity);

    MCAPI static ::TickingSystemWithInfo createSystem(bool isClientSide);

    MCAPI static void moveHitboxTo(::Vec3 const& pos, ::std::vector<::Hitbox>& hitboxes);

    MCAPI static ::AABB refreshAABB(float heightOffset, ::Vec3 const& pos, ::Vec2 const& aabbDim);

    MCAPI static void setPosition(::EntityContext& entity, ::Vec3 const& position, bool isClientSide);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $singleTick(
        ::StrictExecutionContext<
            ::Filter<
                ::ActorAddedFlagComponent,
                ::ActorRemovedFlagComponent,
                ::LocalPlayerComponent,
                ::PaintingFlagComponent,
                ::PlayerComponent,
                ::ShulkerFlagComponent>,
            ::Read<::ActorOwnerComponent, ::ChunkPositionComponent, ::OffsetsComponent>,
            ::Write<
                ::AABBShapeComponent,
                ::ActorSetPositionRequestComponent,
                ::HitboxComponent,
                ::StateVectorComponent,
                ::SynchedActorDataComponent,
                ::ActorDataFlagComponent,
                ::ActorDataDirtyFlagsComponent>,
            ::AddRemove<
                ::ActorChunkMoveFlagComponent,
                ::ActorLocalPlayerEntityMovedFlagComponent,
                ::ActorSetPositionRequestComponent>,
            ::GlobalRead<>,
            ::GlobalWrite<>,
            ::EntityFactoryT<>>& executionContext,
        ::StrictEntityContext&   entityContext
    );

    MCAPI void $tick(::StrictExecutionContext<
                     ::Filter<
                         ::ActorAddedFlagComponent,
                         ::ActorRemovedFlagComponent,
                         ::LocalPlayerComponent,
                         ::PaintingFlagComponent,
                         ::PlayerComponent,
                         ::ShulkerFlagComponent>,
                     ::Read<::ActorOwnerComponent, ::ChunkPositionComponent, ::OffsetsComponent>,
                     ::Write<
                         ::AABBShapeComponent,
                         ::ActorSetPositionRequestComponent,
                         ::HitboxComponent,
                         ::StateVectorComponent,
                         ::SynchedActorDataComponent,
                         ::ActorDataFlagComponent,
                         ::ActorDataDirtyFlagsComponent>,
                     ::AddRemove<
                         ::ActorChunkMoveFlagComponent,
                         ::ActorLocalPlayerEntityMovedFlagComponent,
                         ::ActorSetPositionRequestComponent>,
                     ::GlobalRead<>,
                     ::GlobalWrite<>,
                     ::EntityFactoryT<>>& executionContext);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
