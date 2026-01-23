#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SettingsCommandPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mCommandString;
    ::ll::TypedStorage<1, 1, bool>           mSuppressOutput;
    // NOLINTEND

public:
    // prevent constructor by default
    SettingsCommandPacketPayload(SettingsCommandPacketPayload const&);
    SettingsCommandPacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::SettingsCommandPacketPayload& operator=(::SettingsCommandPacketPayload&&);

    MCFOLD ::SettingsCommandPacketPayload& operator=(::SettingsCommandPacketPayload const&);

    MCAPI ~SettingsCommandPacketPayload();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
