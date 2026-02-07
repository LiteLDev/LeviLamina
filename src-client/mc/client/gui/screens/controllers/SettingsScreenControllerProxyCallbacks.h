#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class GeneralSettingsScreenControllerProxy;
class WorldSettingsScreenControllerProxy;
// clang-format on

struct SettingsScreenControllerProxyCallbacks {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<void(int)>>       mSelectTab;
    ::ll::TypedStorage<8, 64, ::std::function<::std::string()>> mGetAdditionalScreenInfo;
    ::ll::TypedStorage<8, 64, ::std::function<::GeneralSettingsScreenControllerProxy*()>>
                                                                mGetGeneralSettingsScreenController;
    ::ll::TypedStorage<8, 64, ::std::function<::std::string()>> mGetCurrentTabTitle;
    ::ll::TypedStorage<8, 64, ::std::function<::WorldSettingsScreenControllerProxy*()>>
        mGetWorldSettingsScreenController;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~SettingsScreenControllerProxyCallbacks();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
