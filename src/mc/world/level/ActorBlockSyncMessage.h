#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ActorBlockSyncMessage {
public:
    // ActorBlockSyncMessage inner types define
    enum class MessageId : int32_t {
        CREATE  = 0x1,
        DESTROY = 0x2,
    };

    ActorUniqueID                    mEntityUniqueID;
    ActorBlockSyncMessage::MessageId mMessage;


public:
    // prevent constructor by default
    ActorBlockSyncMessage& operator=(ActorBlockSyncMessage const&) = delete;
    ActorBlockSyncMessage(ActorBlockSyncMessage const&)            = delete;
    ActorBlockSyncMessage()                                        = delete;
};
