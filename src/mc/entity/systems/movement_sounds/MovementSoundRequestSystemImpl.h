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
class StrictEntityContext;
struct ActorDataFlagComponent;
struct ActorDefinitionIdentifierComponent;
struct ActorUniqueIDComponent;
struct ClimbingLadderBlockComponent;
struct CurrentlyStandingOnBlockComponent;
struct DimensionTypeComponent;
struct MovementSoundComponent;
struct ShouldPlayMovementSoundComponent;
struct ShouldPlayStepSoundComponent;
struct SoundEventPlayerComponent;
struct StateVectorComponent;
// clang-format on

struct MovementSoundRequestSystemImpl : public ::IStrictTickingSystem<::StrictExecutionContext<
                                            ::Filter<::ShouldPlayMovementSoundComponent>,
                                            ::Read<
                                                ::ActorDataFlagComponent,
                                                ::ActorDefinitionIdentifierComponent,
                                                ::ActorUniqueIDComponent,
                                                ::DimensionTypeComponent,
                                                ::SoundEventPlayerComponent,
                                                ::StateVectorComponent,
                                                ::MovementSoundComponent,
                                                ::ClimbingLadderBlockComponent,
                                                ::CurrentlyStandingOnBlockComponent>,
                                            ::Write<>,
                                            ::AddRemove<::ShouldPlayStepSoundComponent>,
                                            ::GlobalRead<>,
                                            ::GlobalWrite<>,
                                            ::EntityFactoryT<>>> {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void tick(
        ::StrictExecutionContext<
            ::Filter<::ShouldPlayMovementSoundComponent>,
            ::Read<
                ::ActorDataFlagComponent,
                ::ActorDefinitionIdentifierComponent,
                ::ActorUniqueIDComponent,
                ::DimensionTypeComponent,
                ::SoundEventPlayerComponent,
                ::StateVectorComponent,
                ::MovementSoundComponent,
                ::ClimbingLadderBlockComponent,
                ::CurrentlyStandingOnBlockComponent>,
            ::Write<>,
            ::AddRemove<::ShouldPlayStepSoundComponent>,
            ::GlobalRead<>,
            ::GlobalWrite<>,
            ::EntityFactoryT<>>&
    ) /*override*/;

    virtual void singleTick(
        ::StrictExecutionContext<
            ::Filter<::ShouldPlayMovementSoundComponent>,
            ::Read<
                ::ActorDataFlagComponent,
                ::ActorDefinitionIdentifierComponent,
                ::ActorUniqueIDComponent,
                ::DimensionTypeComponent,
                ::SoundEventPlayerComponent,
                ::StateVectorComponent,
                ::MovementSoundComponent,
                ::ClimbingLadderBlockComponent,
                ::CurrentlyStandingOnBlockComponent>,
            ::Write<>,
            ::AddRemove<::ShouldPlayStepSoundComponent>,
            ::GlobalRead<>,
            ::GlobalWrite<>,
            ::EntityFactoryT<>>&,
        ::StrictEntityContext&
    ) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
