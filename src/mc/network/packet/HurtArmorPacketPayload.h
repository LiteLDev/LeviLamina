#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct HurtArmorPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk4613f6;
    ::ll::UntypedStorage<4, 4> mUnk45fcc3;
    ::ll::UntypedStorage<4, 4> mUnke46025;
    // NOLINTEND

public:
    // prevent constructor by default
    HurtArmorPacketPayload& operator=(HurtArmorPacketPayload const&);
    HurtArmorPacketPayload(HurtArmorPacketPayload const&);
    HurtArmorPacketPayload();
};
