#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/InputEntry.h"

struct ServerScriptInputPacketQueueComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::std::deque<::InputEntry>> mQueuedUpdates;
    // NOLINTEND
};
