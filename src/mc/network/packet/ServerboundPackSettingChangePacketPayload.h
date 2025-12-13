#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ServerboundPackSettingChangePacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnka3e0f1;
    ::ll::UntypedStorage<8, 32> mUnk216542;
    ::ll::UntypedStorage<8, 40> mUnkdd452e;
    // NOLINTEND

public:
    // prevent constructor by default
    ServerboundPackSettingChangePacketPayload& operator=(ServerboundPackSettingChangePacketPayload const&);
    ServerboundPackSettingChangePacketPayload(ServerboundPackSettingChangePacketPayload const&);
    ServerboundPackSettingChangePacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::ServerboundPackSettingChangePacketPayload& operator=(::ServerboundPackSettingChangePacketPayload&&);

    MCNAPI ~ServerboundPackSettingChangePacketPayload();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
