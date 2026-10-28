#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/AddRemove.h"
#include "mc/deps/ecs/strict/EntityFactoryT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Exclude.h"
#include "mc/deps/ecs/strict/Filter.h"
#include "mc/deps/ecs/strict/GlobalRead.h"
#include "mc/deps/ecs/strict/GlobalWrite.h"
#include "mc/deps/ecs/strict/IStrictTickingSystem.h"
#include "mc/deps/ecs/strict/Include.h"
#include "mc/deps/ecs/strict/Read.h"
#include "mc/deps/ecs/strict/StrictExecutionContext.h"
#include "mc/deps/ecs/strict/Write.h"

// auto generated forward declare list
// clang-format off
class ActorOwnerComponent;
class EntityContext;
class HitboxComponent;
class StrictEntityContext;
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
    // ActorSetPosSystem inner types declare
    // clang-format off
    struct Views;
    // clang-format on

    // ActorSetPosSystem inner types define
    struct Views {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<
            8,
            72,
            ::ViewT<
                ::StrictEntityContext,
                ::ActorSetPositionRequestComponent const,
                ::OffsetsComponent const,
                ::AABBShapeComponent,
                ::StateVectorComponent,
                ::Optional<::PaintingFlagComponent>>>
            mPositionView;
        ::ll::TypedStorage<
            8,
            56,
            ::ViewT<::StrictEntityContext, ::ActorSetPositionRequestComponent const, ::HitboxComponent>>
            mHitboxView;
        ::ll::TypedStorage<
            8,
            88,
            ::ViewT<
                ::StrictEntityContext,
                ::Include<::ActorSetPositionRequestComponent, ::ShulkerFlagComponent>,
                ::StateVectorComponent const,
                ::SynchedActorDataComponent,
                ::ActorDataFlagComponent,
                ::ActorDataDirtyFlagsComponent>>
            mShulkerView;
        ::ll::TypedStorage<
            8,
            56,
            ::ViewT<::StrictEntityContext, ::Include<::ActorSetPositionRequestComponent, ::LocalPlayerComponent>>>
            mLocalPlayerTickView;
        ::ll::TypedStorage<
            8,
            64,
            ::ViewT<
                ::StrictEntityContext,
                ::Include<::ActorSetPositionRequestComponent, ::LocalPlayerComponent>,
                ::ActorOwnerComponent const>>
            mLocalPlayerSingleTickView;
        ::ll::TypedStorage<
            8,
            72,
            ::ViewT<
                ::StrictEntityContext,
                ::Include<::ActorAddedFlagComponent>,
                ::Exclude<::ActorRemovedFlagComponent, ::PlayerComponent>,
                ::ChunkPositionComponent const,
                ::StateVectorComponent const>>
            mChunkTickView;
        ::ll::TypedStorage<
            8,
            80,
            ::ViewT<
                ::StrictEntityContext,
                ::Include<::ActorAddedFlagComponent>,
                ::Exclude<::ActorRemovedFlagComponent, ::PlayerComponent>,
                ::ActorOwnerComponent const,
                ::ChunkPositionComponent const,
                ::StateVectorComponent const>>
            mChunkSingleTickView;
        ::ll::TypedStorage<
            8,
            24,
            ::EntityModifier<
                ::ActorChunkMoveFlagComponent,
                ::ActorLocalPlayerEntityMovedFlagComponent,
                ::ActorSetPositionRequestComponent>>
                                                                                       mTickModifier;
        ::ll::TypedStorage<8, 8, ::EntityModifier<::ActorSetPositionRequestComponent>> mSingleTickModifier;
        // NOLINTEND

    public:
        // prevent constructor by default
        Views();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI explicit Views(
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
                ::EntityFactoryT<>>& context
        );
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor(
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
                ::EntityFactoryT<>>& context
        );
        // NOLINTEND
    };

    using Base = ::IStrictTickingSystem<::StrictExecutionContext<
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
        ::EntityFactoryT<>>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool const>                                    mIsClientSide;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ActorSetPosSystem::Views>> mViews;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ActorSetPosSystem() /*override*/ = default;

    virtual void tick(
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
            ::EntityFactoryT<>>& executionContext
    ) /*override*/;

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
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void actorUpdateOwnerChunk(::EntityContext& entity);

    MCAPI static ::TickingSystemWithInfo createSystem(bool isClientSide);

    MCAPI static void moveHitboxTo(::Vec3 const& pos, ::std::vector<::Hitbox>& hitboxes);

    MCAPI static void setPosition(::EntityContext& entity, ::Vec3 const& position, bool isClientSide);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $tick(
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
            ::EntityFactoryT<>>& executionContext
    );

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


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
