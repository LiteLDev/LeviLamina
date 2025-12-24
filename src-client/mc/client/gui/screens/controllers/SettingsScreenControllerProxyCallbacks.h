#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SettingsScreenControllerProxyCallbacks {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk310ae1;
    ::ll::UntypedStorage<8, 64> mUnk16e6ac;
    ::ll::UntypedStorage<8, 64> mUnk9ea8e6;
    ::ll::UntypedStorage<8, 64> mUnkb48d6e;
    ::ll::UntypedStorage<8, 64> mUnk47e44e;
    // NOLINTEND

public:
    // prevent constructor by default
    SettingsScreenControllerProxyCallbacks& operator=(SettingsScreenControllerProxyCallbacks const&);
    SettingsScreenControllerProxyCallbacks(SettingsScreenControllerProxyCallbacks const&);
    SettingsScreenControllerProxyCallbacks();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~SettingsScreenControllerProxyCallbacks();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
