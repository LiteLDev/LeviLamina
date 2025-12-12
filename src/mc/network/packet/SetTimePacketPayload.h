#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SetTimePacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkca28b6;
    // NOLINTEND

public:
    // prevent constructor by default
    SetTimePacketPayload& operator=(SetTimePacketPayload const&);
    SetTimePacketPayload(SetTimePacketPayload const&);
    SetTimePacketPayload();
};
