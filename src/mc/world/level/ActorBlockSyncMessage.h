#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ActorBlockSyncMessage {
public:
    // ActorBlockSyncMessage inner types define
    enum class MessageId {};

public:
    // prevent constructor by default
    ActorBlockSyncMessage& operator=(ActorBlockSyncMessage const&);
    ActorBlockSyncMessage(ActorBlockSyncMessage const&);
    ActorBlockSyncMessage();
};
