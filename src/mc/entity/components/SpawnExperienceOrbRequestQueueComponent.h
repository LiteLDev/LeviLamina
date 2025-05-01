#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"

// auto generated forward declare list
// clang-format off
class Dimension;
struct SpawnExperienceOrbRequest;
// clang-format on

struct SpawnExperienceOrbRequestQueueComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<
            ::DimensionType,
            ::std::queue<::SpawnExperienceOrbRequest, ::std::deque<::SpawnExperienceOrbRequest>>>>
        mRequestQueues;
    // NOLINTEND

public:
    // prevent constructor by default
    SpawnExperienceOrbRequestQueueComponent& operator=(SpawnExperienceOrbRequestQueueComponent const&);
    SpawnExperienceOrbRequestQueueComponent(SpawnExperienceOrbRequestQueueComponent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SpawnExperienceOrbRequestQueueComponent(::SpawnExperienceOrbRequestQueueComponent&&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SpawnExperienceOrbRequestQueueComponent&&);
    // NOLINTEND
};
