#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/WeakRef.h"

struct ChatEvent {
public:
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
