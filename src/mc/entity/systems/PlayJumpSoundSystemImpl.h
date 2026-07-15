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
#include "mc/entity/systems/play_jump_sound_system/SoundType.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct AABBShapeComponent;
struct ActorDataFlagComponent;
struct ActorDefinitionIdentifierComponent;
struct ActorUniqueIDComponent;
struct DimensionTypeComponent;
struct LavaSlimeFlagComponent;
struct LocalConstBlockSourceFactoryComponent;
struct SoundEventPlayerComponent;
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
    ::ll::TypedStorage<4, 4, ::PlayJumpSoundSystem::SoundType const> mJumpType;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void tick(
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
            ::EntityFactoryT<>>& context
    ) /*override*/;

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
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $tick(
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
            ::EntityFactoryT<>>& context
    );

    MCAPI void $singleTick(
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
