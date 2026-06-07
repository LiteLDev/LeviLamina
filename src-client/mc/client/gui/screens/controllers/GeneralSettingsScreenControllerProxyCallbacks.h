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
    // prevent constructor by default
    GeneralSettingsScreenControllerProxyCallbacks& operator=(GeneralSettingsScreenControllerProxyCallbacks const&);
    GeneralSettingsScreenControllerProxyCallbacks();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI GeneralSettingsScreenControllerProxyCallbacks(::GeneralSettingsScreenControllerProxyCallbacks const&);

    MCAPI ~GeneralSettingsScreenControllerProxyCallbacks();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::GeneralSettingsScreenControllerProxyCallbacks const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
