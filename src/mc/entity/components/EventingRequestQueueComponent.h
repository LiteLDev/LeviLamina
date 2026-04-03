#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/EventingRequest.h"

struct EventingRequestQueueComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::std::queue<::EventingRequest, ::std::deque<::EventingRequest>>> mRequests;
    // NOLINTEND
};
