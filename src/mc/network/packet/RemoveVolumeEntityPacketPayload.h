#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct RemoveVolumeEntityPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk14b8fa;
    ::ll::UntypedStorage<4, 4> mUnke66f5c;
    // NOLINTEND

public:
    // prevent constructor by default
    RemoveVolumeEntityPacketPayload& operator=(RemoveVolumeEntityPacketPayload const&);
    RemoveVolumeEntityPacketPayload(RemoveVolumeEntityPacketPayload const&);
    RemoveVolumeEntityPacketPayload();
};
