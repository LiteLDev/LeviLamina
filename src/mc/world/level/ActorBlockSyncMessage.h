#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct ActorUniqueID;
// clang-format on

struct ActorBlockSyncMessage {
public:
    // ActorBlockSyncMessage inner types define
    enum class MessageId : uint {
        None    = 0,
        Create  = 1,
        Destroy = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                    mEntityUniqueID;
    ::ll::TypedStorage<4, 4, ::ActorBlockSyncMessage::MessageId> mMessage;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorBlockSyncMessage& operator=(ActorBlockSyncMessage const&);
    ActorBlockSyncMessage(ActorBlockSyncMessage const&);
    ActorBlockSyncMessage();
};
