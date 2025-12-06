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
};
