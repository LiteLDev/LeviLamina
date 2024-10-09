#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/OptionalComponentWrapper.h"
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/AddRemove.h"
#include "mc/deps/ecs/strict/EntityFactoryT.h"
#include "mc/deps/ecs/strict/Filter.h"
#include "mc/deps/ecs/strict/GlobalRead.h"
#include "mc/deps/ecs/strict/GlobalWrite.h"
#include "mc/deps/ecs/strict/Read.h"
#include "mc/deps/ecs/strict/StrictExecutionContext.h"
#include "mc/deps/ecs/strict/Write.h"
#include "mc/entity/components/FlagComponent.h"
#include "mc/entity/systems/play_jump_sound_system/SoundType.h"

struct PlayJumpSoundSystemImpl {
public:
    // prevent constructor by default
    PlayJumpSoundSystemImpl& operator=(PlayJumpSoundSystemImpl const&);
    PlayJumpSoundSystemImpl(PlayJumpSoundSystemImpl const&);
    PlayJumpSoundSystemImpl();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PlayJumpSoundSystemImpl() = default;

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
                          struct TriggerJumpRequestComponent,
                          class FlagComponent<struct LavaSlimeFlag>,
                          class FlagComponent<struct HorseFlag>,
                          class FlagComponent<struct MobFlag>,
                          class FlagComponent<struct ParrotFlag>,
                          struct VehicleComponent,
                          class FlagComponent<struct CamelFlag>,
                          class FlagComponent<struct PlayerComponentFlag>>,
                      struct Read<
                          struct ActorDefinitionIdentifierComponent,
                          struct DimensionTypeComponent,
                          struct SoundEventPlayerComponent,
                          struct ActorDataFlagComponent,
                          struct StateVectorComponent,
                          struct AABBShapeComponent,
                          struct ActorRotationComponent,
                          struct MobBodyRotationComponent,
                          struct PassengerComponent,
                          struct RenderRotationComponent,
                          struct StandAnimationComponent,
                          struct OffsetsComponent,
                          struct VanillaOffsetComponent,
                          struct PassengerRenderingRidingOffsetComponent>,
                      struct Write<>,
                      struct AddRemove<>,
                      struct GlobalRead<struct LocalConstBlockSourceFactoryComponent>,
                      struct GlobalWrite<>,
                      struct EntityFactoryT<>>& context);

    // vIndex: 6
    virtual void singleTick(
        class StrictExecutionContext<
            struct Filter<
                struct TriggerJumpRequestComponent,
                class FlagComponent<struct LavaSlimeFlag>,
                class FlagComponent<struct HorseFlag>,
                class FlagComponent<struct MobFlag>,
                class FlagComponent<struct ParrotFlag>,
                struct VehicleComponent,
                class FlagComponent<struct CamelFlag>,
                class FlagComponent<struct PlayerComponentFlag>>,
            struct Read<
                struct ActorDefinitionIdentifierComponent,
                struct DimensionTypeComponent,
                struct SoundEventPlayerComponent,
                struct ActorDataFlagComponent,
                struct StateVectorComponent,
                struct AABBShapeComponent,
                struct ActorRotationComponent,
                struct MobBodyRotationComponent,
                struct PassengerComponent,
                struct RenderRotationComponent,
                struct StandAnimationComponent,
                struct OffsetsComponent,
                struct VanillaOffsetComponent,
                struct PassengerRenderingRidingOffsetComponent>,
            struct Write<>,
            struct AddRemove<>,
            struct GlobalRead<struct LocalConstBlockSourceFactoryComponent>,
            struct GlobalWrite<>,
            struct EntityFactoryT<>>& context,
        class StrictEntityContext&    entityContext
    );

    MCAPI static void doPlayJumpSoundSystem(
        class StrictEntityContext const&                 entity,
        struct ActorDefinitionIdentifierComponent const& actorDefinitionIdentifierComponent,
        struct SoundEventPlayerComponent const&          soundEventPlayerComponent,
        struct ActorDataFlagComponent const&             synchedActorDataComponent,
        struct StateVectorComponent const&               stateVectorComponent,
        struct AABBShapeComponent const&                 aabbShapeComponent,
        class ViewT<class StrictEntityContext, struct SoundEventRequestQueueComponent> const& requestQueueView,
        struct GetAttachPositionViews const&                                                  getAttachPosViews,
        ::PlayJumpSoundSystem::SoundType                                                      jumpType,
        class IConstBlockSource const&                                                        region
    );

    MCAPI static void sendSoundRequest(
        class IConstBlockSource const&                                         region,
        struct ActorDataFlagComponent const&                                   synchedActorDataComponent,
        struct ActorDefinitionIdentifierComponent const&                       actorDefinitionIdentifierComponent,
        class Vec3 const&                                                      posResult,
        class OptionalComponentWrapper<struct SoundEventRequestQueueComponent> soundEventRequestQueueComponent,
        int                                                                    soundData
    );

    // NOLINTEND
};
