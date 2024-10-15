#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/ecs/WeakEntityRef.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"

struct ChatEvent {
public:
    std::string                mMessage;        // this+0x0
    WeakEntityRef              mSender;         // this+0x20
    bool                       mSendToTargets;  // this+0x38
    std::vector<WeakEntityRef> mTargets;        // this+0x40
    std::string                mAuthor;         // this+0x58
    bool                       mMessageValid;   // this+0x78
    bool                       mAllowFiltering; // this+0x79

    // prevent constructor by default
    ChatEvent& operator=(ChatEvent const&);
    ChatEvent();

public:
    // NOLINTBEGIN
    MCAPI ChatEvent(struct ChatEvent const&);

    MCAPI ChatEvent(class WeakRef<class EntityContext>, class TextPacket const&);

    MCAPI ~ChatEvent();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(class WeakRef<class EntityContext>, class TextPacket const&);

    MCAPI void* ctor$(struct ChatEvent const&);

    MCAPI void dtor$();

    // NOLINTEND
};
