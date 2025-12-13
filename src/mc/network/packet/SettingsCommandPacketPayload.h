#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SettingsCommandPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnke5b2ff;
    ::ll::UntypedStorage<1, 1>  mUnk4453b9;
    // NOLINTEND

public:
    // prevent constructor by default
    SettingsCommandPacketPayload& operator=(SettingsCommandPacketPayload const&);
    SettingsCommandPacketPayload(SettingsCommandPacketPayload const&);
    SettingsCommandPacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::SettingsCommandPacketPayload& operator=(::SettingsCommandPacketPayload&&);

    MCNAPI ~SettingsCommandPacketPayload();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
