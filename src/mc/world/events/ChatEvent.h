#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"

struct ChatEvent {
public:
    // prevent constructor by default
    ChatEvent& operator=(ChatEvent const&);
    ChatEvent();

public:
    // NOLINTBEGIN
    MCAPI ChatEvent(struct ChatEvent const&);

    MCAPI ChatEvent(class WeakRef<class EntityContext>, class TextPacket const&);

    MCAPI ~ChatEvent();

    // NOLINTEND
};
