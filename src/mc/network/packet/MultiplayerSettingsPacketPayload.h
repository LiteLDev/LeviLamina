#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MultiplayerSettingsPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnka17974;
    // NOLINTEND

public:
    // prevent constructor by default
    MultiplayerSettingsPacketPayload& operator=(MultiplayerSettingsPacketPayload const&);
    MultiplayerSettingsPacketPayload(MultiplayerSettingsPacketPayload const&);
    MultiplayerSettingsPacketPayload();
};
