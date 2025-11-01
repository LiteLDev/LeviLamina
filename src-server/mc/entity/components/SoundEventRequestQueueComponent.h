#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct SoundEventRequest;
// clang-format on

struct SoundEventRequestQueueComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::std::queue<::SoundEventRequest, ::std::deque<::SoundEventRequest>>> mRequests;
    // NOLINTEND

};
