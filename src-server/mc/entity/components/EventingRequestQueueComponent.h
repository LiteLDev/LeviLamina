#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct EventingRequest;
// clang-format on

struct EventingRequestQueueComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::std::queue<::EventingRequest, ::std::deque<::EventingRequest>>> mRequests;
    // NOLINTEND

};
