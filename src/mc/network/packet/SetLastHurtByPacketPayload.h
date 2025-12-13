#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SetLastHurtByPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk29ccd8;
    // NOLINTEND

public:
    // prevent constructor by default
    SetLastHurtByPacketPayload& operator=(SetLastHurtByPacketPayload const&);
    SetLastHurtByPacketPayload(SetLastHurtByPacketPayload const&);
    SetLastHurtByPacketPayload();
};
