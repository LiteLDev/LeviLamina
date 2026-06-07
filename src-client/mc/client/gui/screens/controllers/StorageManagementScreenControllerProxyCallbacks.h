#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct ToggleChangeEventData;
// clang-format on

struct StorageManagementScreenControllerProxyCallbacks {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<void(::std::string const&, ::ToggleChangeEventData const&)>>
        mSelectItemByIndex;
    ::ll::TypedStorage<8, 64, ::std::function<void(::std::string const&, ::ToggleChangeEventData const&)>>
                                                       mSelectItemByName;
    ::ll::TypedStorage<8, 64, ::std::function<void()>> mDeleteSelectedResources;
    // NOLINTEND

public:
    // prevent constructor by default
    StorageManagementScreenControllerProxyCallbacks& operator=(StorageManagementScreenControllerProxyCallbacks const&);
    StorageManagementScreenControllerProxyCallbacks();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI StorageManagementScreenControllerProxyCallbacks(::StorageManagementScreenControllerProxyCallbacks const&);

    MCAPI ~StorageManagementScreenControllerProxyCallbacks();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::StorageManagementScreenControllerProxyCallbacks const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
