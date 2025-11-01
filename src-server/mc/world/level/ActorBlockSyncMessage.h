#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorUniqueID.h"

struct ActorBlockSyncMessage {
public:
    // ActorBlockSyncMessage inner types define
    enum class MessageId : uint {
        None = 0,
        Create = 1,
        Destroy = 2,
    };
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ActorUniqueID> mEntityUniqueID;
    ::ll::TypedStorage<4, 4, ::ActorBlockSyncMessage::MessageId> mMessage;
    // NOLINTEND

};
