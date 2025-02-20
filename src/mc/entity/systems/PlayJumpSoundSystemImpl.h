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
#include "mc/deps/ecs/strict/IStrictTickingSystem.h"
#include "mc/deps/ecs/strict/Read.h"
#include "mc/deps/ecs/strict/StrictExecutionContext.h"
#include "mc/deps/ecs/strict/Write.h"
#include "mc/deps/shared_types/legacy/actor/ActorLocation.h"
#include "mc/entity/systems/play_jump_sound_system/SoundType.h"

// auto generated forward declare list
// clang-format off
class IConstBlockSource;
class StrictEntityContext;
struct AABBShapeComponent;
struct ActorDataFlagComponent;
struct ActorDefinitionIdentifierComponent;
struct DimensionTypeComponent;
struct LavaSlimeFlagComponent;
struct LocalConstBlockSourceFactoryComponent;
struct SoundEventPlayerComponent;
struct SoundEventRequestQueueComponent;
struct StateVectorComponent;
struct TriggerJumpRequestComponent;
// clang-format on

struct PlayJumpSoundSystemImpl : public ::IStrictTickingSystem<::StrictExecutionContext<
                                     ::Filter<::TriggerJumpRequestComponent, ::LavaSlimeFlagComponent>,
                                     ::Read<
                                         ::ActorDefinitionIdentifierComponent,
                                         ::DimensionTypeComponent,
                                         ::SoundEventPlayerComponent,
                                         ::ActorDataFlagComponent,
                                         ::StateVectorComponent,
                                         ::AABBShapeComponent>,
                                     ::Write<>,
                                     ::AddRemove<>,
                                     ::GlobalRead<::LocalConstBlockSourceFactoryComponent>,
                                     ::GlobalWrite<>,
                                     ::EntityFactoryT<>>> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk653c2e;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayJumpSoundSystemImpl& operator=(PlayJumpSoundSystemImpl const&);
    PlayJumpSoundSystemImpl(PlayJumpSoundSystemImpl const&);
    PlayJumpSoundSystemImpl();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 5
    virtual void tick(::StrictExecutionContext<
                      ::Filter<::TriggerJumpRequestComponent, ::LavaSlimeFlagComponent>,
                      ::Read<
                          ::ActorDefinitionIdentifierComponent,
                          ::DimensionTypeComponent,
                          ::SoundEventPlayerComponent,
                          ::ActorDataFlagComponent,
                          ::StateVectorComponent,
                          ::AABBShapeComponent>,
                      ::Write<>,
                      ::AddRemove<>,
                      ::GlobalRead<::LocalConstBlockSourceFactoryComponent>,
                      ::GlobalWrite<>,
                      ::EntityFactoryT<>>& context) /*override*/;

    // vIndex: 6
    virtual void singleTick(
        ::StrictExecutionContext<
            ::Filter<::TriggerJumpRequestComponent, ::LavaSlimeFlagComponent>,
            ::Read<
                ::ActorDefinitionIdentifierComponent,
                ::DimensionTypeComponent,
                ::SoundEventPlayerComponent,
                ::ActorDataFlagComponent,
                ::StateVectorComponent,
                ::AABBShapeComponent>,
            ::Write<>,
            ::AddRemove<>,
            ::GlobalRead<::LocalConstBlockSourceFactoryComponent>,
            ::GlobalWrite<>,
            ::EntityFactoryT<>>& context,
        ::StrictEntityContext&   entityContext
    ) /*override*/;

    // vIndex: 0
    virtual ~PlayJumpSoundSystemImpl() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void doPlayJumpSoundSystem(
        ::StrictEntityContext const&                                      entity,
        ::ActorDefinitionIdentifierComponent const&                       actorDefinitionIdentifierComponent,
        ::ActorDataFlagComponent const&                                   synchedActorDataComponent,
        ::SoundEventPlayerComponent const&                                soundEventPlayerComponent,
        ::StateVectorComponent const&                                     stateVectorComponent,
        ::AABBShapeComponent const&                                       aabbShapeComponent,
        ::ViewT<::StrictEntityContext, ::SoundEventRequestQueueComponent> requestQueueView,
        ::PlayJumpSoundSystem::SoundType                                  jumpType,
        ::IConstBlockSource const&                                        region
    );

    MCAPI static void sendSoundRequest(
        ::StrictEntityContext const&                                  entity,
        ::IConstBlockSource const&                                    region,
        ::ActorDataFlagComponent const&                               synchedActorDataComponent,
        ::ActorDefinitionIdentifierComponent const&                   actorDefinitionIdentifierComponent,
        ::SharedTypes::Legacy::ActorLocation const&                   location,
        ::OptionalComponentWrapper<::SoundEventRequestQueueComponent> soundEventRequestQueueComponent,
        int                                                           soundData
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $tick(::StrictExecutionContext<
                     ::Filter<::TriggerJumpRequestComponent, ::LavaSlimeFlagComponent>,
                     ::Read<
                         ::ActorDefinitionIdentifierComponent,
                         ::DimensionTypeComponent,
                         ::SoundEventPlayerComponent,
                         ::ActorDataFlagComponent,
                         ::StateVectorComponent,
                         ::AABBShapeComponent>,
                     ::Write<>,
                     ::AddRemove<>,
                     ::GlobalRead<::LocalConstBlockSourceFactoryComponent>,
                     ::GlobalWrite<>,
                     ::EntityFactoryT<>>& context);

    MCAPI void $singleTick(
        ::StrictExecutionContext<
            ::Filter<::TriggerJumpRequestComponent, ::LavaSlimeFlagComponent>,
            ::Read<
                ::ActorDefinitionIdentifierComponent,
                ::DimensionTypeComponent,
                ::SoundEventPlayerComponent,
                ::ActorDataFlagComponent,
                ::StateVectorComponent,
                ::AABBShapeComponent>,
            ::Write<>,
            ::AddRemove<>,
            ::GlobalRead<::LocalConstBlockSourceFactoryComponent>,
            ::GlobalWrite<>,
            ::EntityFactoryT<>>& context,
        ::StrictEntityContext&   entityContext
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
