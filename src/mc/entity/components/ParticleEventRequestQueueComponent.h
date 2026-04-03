#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/ParticleEventRequest.h"

struct ParticleEventRequestQueueComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::std::queue<::ParticleEventRequest, ::std::deque<::ParticleEventRequest>>> mRequests;
    // NOLINTEND
};
