#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SetCommandsEnabledPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk9bbe90;
    // NOLINTEND

public:
    // prevent constructor by default
    SetCommandsEnabledPacketPayload& operator=(SetCommandsEnabledPacketPayload const&);
    SetCommandsEnabledPacketPayload(SetCommandsEnabledPacketPayload const&);
    SetCommandsEnabledPacketPayload();
};
