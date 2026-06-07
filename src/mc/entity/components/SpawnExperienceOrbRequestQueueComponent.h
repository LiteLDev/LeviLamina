#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/SpawnExperienceOrbRequest.h"

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
    // member functions
    // NOLINTBEGIN
    MCAPI bool tryAddRequest(::SpawnExperienceOrbRequest const& request, ::DimensionType const& dimensionType);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static uint64 const& SUGGESTED_MAX_REQUESTS_PER_DIMENSION();
    // NOLINTEND
};
