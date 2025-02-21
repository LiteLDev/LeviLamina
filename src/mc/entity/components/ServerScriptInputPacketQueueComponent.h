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

public:
    // prevent constructor by default
    ServerScriptInputPacketQueueComponent& operator=(ServerScriptInputPacketQueueComponent const&);
    ServerScriptInputPacketQueueComponent(ServerScriptInputPacketQueueComponent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::ServerScriptInputPacketQueueComponent& operator=(::ServerScriptInputPacketQueueComponent&&);
    // NOLINTEND
};
