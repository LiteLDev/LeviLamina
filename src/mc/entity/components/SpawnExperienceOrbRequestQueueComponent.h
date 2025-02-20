#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SpawnExperienceOrbRequestQueueComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk4dd266;
    // NOLINTEND

public:
    // prevent constructor by default
    SpawnExperienceOrbRequestQueueComponent& operator=(SpawnExperienceOrbRequestQueueComponent const&);
    SpawnExperienceOrbRequestQueueComponent(SpawnExperienceOrbRequestQueueComponent const&);
    SpawnExperienceOrbRequestQueueComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SpawnExperienceOrbRequestQueueComponent(::SpawnExperienceOrbRequestQueueComponent&&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SpawnExperienceOrbRequestQueueComponent&&);
    // NOLINTEND
};
