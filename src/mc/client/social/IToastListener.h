#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ToastMessage;
// clang-format on

class IToastListener {
public:
    // prevent constructor by default
    IToastListener& operator=(IToastListener const&);
    IToastListener(IToastListener const&);
    IToastListener();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual void showToast(::ToastMessage, bool) = 0;

    // vIndex: 1
    virtual void removeToast() = 0;

    // vIndex: 2
    virtual void refreshToast() = 0;

    // vIndex: 3
    virtual ~IToastListener();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
