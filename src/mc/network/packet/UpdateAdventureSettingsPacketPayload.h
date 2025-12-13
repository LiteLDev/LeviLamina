#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct UpdateAdventureSettingsPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 5> mUnk729b1e;
    // NOLINTEND

public:
    // prevent constructor by default
    UpdateAdventureSettingsPacketPayload& operator=(UpdateAdventureSettingsPacketPayload const&);
    UpdateAdventureSettingsPacketPayload(UpdateAdventureSettingsPacketPayload const&);
    UpdateAdventureSettingsPacketPayload();
};
