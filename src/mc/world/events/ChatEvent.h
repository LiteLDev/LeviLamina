#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/entity/WeakEntityRef.h"

// auto generated inclusion list
#include "mc/common/wrapper/WeakRef.h"

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
    // symbol: ??0ChatEvent@@QEAA@AEBU0@@Z
    MCAPI ChatEvent(struct ChatEvent const&);

    // symbol: ??0ChatEvent@@QEAA@V?$WeakRef@VEntityContext@@@@AEBVTextPacket@@@Z
    MCAPI ChatEvent(class WeakRef<class EntityContext>, class TextPacket const&);

    // symbol: ??1ChatEvent@@QEAA@XZ
    MCAPI ~ChatEvent();

    // NOLINTEND
};
