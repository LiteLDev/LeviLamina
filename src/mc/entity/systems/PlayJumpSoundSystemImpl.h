#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
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
#include "mc/entity/systems/play_jump_sound_system/SoundType.h"

// auto generated forward declare list
// clang-format off
class IConstBlockSource;
class StrictEntityContext;
struct AABBShapeComponent;
struct ActorDataFlagComponent;
struct ActorDefinitionIdentifierComponent;
struct ActorUniqueIDComponent;
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
                                         ::ActorDataFlagComponent,
                                         ::ActorDefinitionIdentifierComponent,
                                         ::ActorUniqueIDComponent,
                                         ::DimensionTypeComponent,
                                         ::SoundEventPlayerComponent,
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
                          ::ActorDataFlagComponent,
                          ::ActorDefinitionIdentifierComponent,
                          ::ActorUniqueIDComponent,
                          ::DimensionTypeComponent,
                          ::SoundEventPlayerComponent,
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
                ::ActorDataFlagComponent,
                ::ActorDefinitionIdentifierComponent,
                ::ActorUniqueIDComponent,
                ::DimensionTypeComponent,
                ::SoundEventPlayerComponent,
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
    MCNAPI static void doPlayJumpSoundSystem(
        ::StrictEntityContext const&                                      entity,
        ::ActorDataFlagComponent const&                                   actorFlags,
        ::ActorDefinitionIdentifierComponent const&                       actorIdentifier,
        ::ActorUniqueIDComponent const&                                   actorUniqueID,
        ::DimensionTypeComponent const&                                   dimensionType,
        ::SoundEventPlayerComponent const&                                soundEventPlayerComponent,
        ::StateVectorComponent const&                                     stateVectorComponent,
        ::AABBShapeComponent const&                                       aabbShapeComponent,
        ::ViewT<::StrictEntityContext, ::SoundEventRequestQueueComponent> requestQueueView,
        ::PlayJumpSoundSystem::SoundType                                  jumpType,
        ::IConstBlockSource const&                                        region
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $tick(::StrictExecutionContext<
                      ::Filter<::TriggerJumpRequestComponent, ::LavaSlimeFlagComponent>,
                      ::Read<
                          ::ActorDataFlagComponent,
                          ::ActorDefinitionIdentifierComponent,
                          ::ActorUniqueIDComponent,
                          ::DimensionTypeComponent,
                          ::SoundEventPlayerComponent,
                          ::StateVectorComponent,
                          ::AABBShapeComponent>,
                      ::Write<>,
                      ::AddRemove<>,
                      ::GlobalRead<::LocalConstBlockSourceFactoryComponent>,
                      ::GlobalWrite<>,
                      ::EntityFactoryT<>>& context);

    MCNAPI void $singleTick(
        ::StrictExecutionContext<
            ::Filter<::TriggerJumpRequestComponent, ::LavaSlimeFlagComponent>,
            ::Read<
                ::ActorDataFlagComponent,
                ::ActorDefinitionIdentifierComponent,
                ::ActorUniqueIDComponent,
                ::DimensionTypeComponent,
                ::SoundEventPlayerComponent,
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
    MCNAPI static void** $vftable();
    // NOLINTEND
};
