#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct PackIdVersion;
// clang-format on

struct WorldTemplatesScreenControllerProxyCallbacks {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<void()>> mSelectWorldTab;
    ::ll::TypedStorage<8, 64, ::std::function<void()>> mSelectRealmsTab;
    ::ll::TypedStorage<8, 64, ::std::function<void()>> mForceUIUpdate;
    ::ll::TypedStorage<8, 64, ::std::function<void(::PackIdVersion const&, ::std::function<void(bool)>)>>
        mCreateWorldTemplate;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~WorldTemplatesScreenControllerProxyCallbacks();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
