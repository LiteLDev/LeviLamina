#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class StorageManagementScreenControllerProxy;
// clang-format on

struct GeneralSettingsScreenControllerProxyCallbacks {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<int()>> mGetCurrentLanguageIndex;
    ::ll::TypedStorage<8, 64, ::std::function<int()>> mGetNumLanguages;
    ::ll::TypedStorage<8, 64, ::std::function<::std::vector<::std::pair<::std::string, ::std::string>>()>>
        mGetLanguages;
    ::ll::TypedStorage<8, 64, ::std::function<::StorageManagementScreenControllerProxy*()>>
                                                       mGetStorageManagementScreenController;
    ::ll::TypedStorage<8, 64, ::std::function<void()>> mPushSafeZoneScreen;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~GeneralSettingsScreenControllerProxyCallbacks();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
