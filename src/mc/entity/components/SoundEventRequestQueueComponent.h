#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/SoundEventRequest.h"

struct SoundEventRequestQueueComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::std::queue<::SoundEventRequest, ::std::deque<::SoundEventRequest>>> mRequests;
    // NOLINTEND
};
