#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct InputEntry;
// clang-format on

struct ServerScriptInputPacketQueueComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::std::deque<::InputEntry>> mQueuedUpdates;
    // NOLINTEND

};
