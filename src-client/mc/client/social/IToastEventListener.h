#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ToastMessage;
// clang-format on

class IToastEventListener {
public:
    // IToastEventListener inner types define
    enum class ToastEventType : int {};

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void handleToastEvent(::IToastEventListener::ToastEventType const eventType, ::ToastMessage const msg) = 0;

    virtual ~IToastEventListener() = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
