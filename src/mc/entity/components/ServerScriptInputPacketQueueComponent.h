#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ServerScriptInputPacketQueueComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnkca47bb;
    // NOLINTEND

public:
    // prevent constructor by default
    ServerScriptInputPacketQueueComponent& operator=(ServerScriptInputPacketQueueComponent const&);
    ServerScriptInputPacketQueueComponent(ServerScriptInputPacketQueueComponent const&);
    ServerScriptInputPacketQueueComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::ServerScriptInputPacketQueueComponent& operator=(::ServerScriptInputPacketQueueComponent&&);
    // NOLINTEND
};
