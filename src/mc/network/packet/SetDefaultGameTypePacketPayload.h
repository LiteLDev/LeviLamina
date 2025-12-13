#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SetDefaultGameTypePacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkadc8cc;
    // NOLINTEND

public:
    // prevent constructor by default
    SetDefaultGameTypePacketPayload& operator=(SetDefaultGameTypePacketPayload const&);
    SetDefaultGameTypePacketPayload(SetDefaultGameTypePacketPayload const&);
    SetDefaultGameTypePacketPayload();
};
