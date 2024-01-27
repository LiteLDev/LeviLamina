#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/ActorUniqueID.h"

struct ActorBlockSyncMessage {
public:
    // ActorBlockSyncMessage inner types define
    enum class MessageId : int {
        CREATE  = 0x1,
        DESTROY = 0x2,
    };

    ActorUniqueID                    mEntityUniqueID;
    ActorBlockSyncMessage::MessageId mMessage;
};
