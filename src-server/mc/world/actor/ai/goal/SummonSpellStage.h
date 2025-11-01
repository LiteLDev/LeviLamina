#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/world/actor/ActorDefinitionIdentifier.h"
#include "mc/world/actor/ai/goal/SummonShape.h"
#include "mc/world/actor/ai/goal/SummonTarget.h"

struct SummonSpellStage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::SummonShape>                          shape;
    ::ll::TypedStorage<4, 4, ::SummonTarget>                         target;
    ::ll::TypedStorage<4, 4, float>                                  size;
    ::ll::TypedStorage<4, 4, int>                                    baseDelay;
    ::ll::TypedStorage<4, 4, int>                                    delayPerSummoning;
    ::ll::TypedStorage<4, 4, int>                                    summonCap;
    ::ll::TypedStorage<4, 4, float>                                  summonCapRadius;
    ::ll::TypedStorage<8, 176, ::ActorDefinitionIdentifier>          entityIdentifier;
    ::ll::TypedStorage<4, 4, int>                                    entityLifespan;
    ::ll::TypedStorage<4, 4, int>                                    entityCount;
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::LevelSoundEvent> stageSoundEvent;
    ::ll::TypedStorage<8, 32, ::std::string>                         summonEvent;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~SummonSpellStage();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
