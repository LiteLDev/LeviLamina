#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/world/actor/ActorFilterGroup.h"

// auto generated forward declare list
// clang-format off
struct SummonSpellStage;
// clang-format on

struct SummonSpellData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> minActivationRange;
    ::ll::TypedStorage<4, 4, float> maxActivationRange;
    ::ll::TypedStorage<4, 4, int> cooldownTime;
    ::ll::TypedStorage<4, 4, float> weight;
    ::ll::TypedStorage<8, 64, ::ActorFilterGroup> targetFilter;
    ::ll::TypedStorage<4, 4, float> castDuration;
    ::ll::TypedStorage<1, 1, bool> doCastingAnimation;
    ::ll::TypedStorage<4, 4, int> particleColor;
    ::ll::TypedStorage<8, 24, ::std::vector<::SummonSpellStage>> stages;
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::LevelSoundEvent> startSound;
    // NOLINTEND

public:
    // prevent constructor by default
    SummonSpellData& operator=(SummonSpellData const&);
    SummonSpellData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SummonSpellData(::SummonSpellData const&);

    MCAPI ~SummonSpellData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SummonSpellData const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

};
