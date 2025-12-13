#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct NetworkSettingsPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<2, 2> mUnk9aeadd;
    ::ll::UntypedStorage<2, 2> mUnk207b48;
    ::ll::UntypedStorage<1, 1> mUnke6279e;
    ::ll::UntypedStorage<1, 1> mUnk6c94ff;
    ::ll::UntypedStorage<4, 4> mUnk76da6a;
    // NOLINTEND

public:
    // prevent constructor by default
    NetworkSettingsPacketPayload& operator=(NetworkSettingsPacketPayload const&);
    NetworkSettingsPacketPayload(NetworkSettingsPacketPayload const&);
    NetworkSettingsPacketPayload();
};
