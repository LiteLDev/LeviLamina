#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorBlockSyncMessage {
public:
    // ActorBlockSyncMessage inner types declare
    // clang-format off

    // clang-format on

    // ActorBlockSyncMessage inner types define
    enum class MessageId {};

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORBLOCKSYNCMESSAGE
public:
    ActorBlockSyncMessage& operator=(ActorBlockSyncMessage const&) = delete;
    ActorBlockSyncMessage(ActorBlockSyncMessage const&)            = delete;
    ActorBlockSyncMessage()                                        = delete;
#endif

public:
};
