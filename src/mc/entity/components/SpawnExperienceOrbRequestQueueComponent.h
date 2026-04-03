#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/entity/components/SpawnExperienceOrbRequest.h"

// auto generated forward declare list
// clang-format off
class Dimension;
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
    // member functions
    // NOLINTBEGIN
    MCAPI bool tryAddRequest(::SpawnExperienceOrbRequest const& request, ::DimensionType const& dimensionType);
    // NOLINTEND
};
