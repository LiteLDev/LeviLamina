#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ContainerController;
// clang-format on

struct FurnaceScreenControllerProxyCallbacks {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<::ContainerController*(::std::string const&)>> mGetContainerController;
    ::ll::TypedStorage<8, 64, ::std::function<int()>>                                        mGetBurnProgress;
    ::ll::TypedStorage<8, 64, ::std::function<int()>>                                        mGetLitProgress;
    ::ll::TypedStorage<8, 64, ::std::function<bool(::std::string&, int&, int&)>>             mIsFinished;
    // NOLINTEND

public:
    // prevent constructor by default
    FurnaceScreenControllerProxyCallbacks& operator=(FurnaceScreenControllerProxyCallbacks const&);
    FurnaceScreenControllerProxyCallbacks();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI FurnaceScreenControllerProxyCallbacks(::FurnaceScreenControllerProxyCallbacks const&);

    MCAPI ~FurnaceScreenControllerProxyCallbacks();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::FurnaceScreenControllerProxyCallbacks const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
