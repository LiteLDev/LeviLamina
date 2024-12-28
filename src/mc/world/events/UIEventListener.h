#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/EventResult.h"

// auto generated forward declare list
// clang-format off
class AbstractScene;
// clang-format on

class UIEventListener {
public:
    // prevent constructor by default
    UIEventListener& operator=(UIEventListener const&);
    UIEventListener(UIEventListener const&);
    UIEventListener();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~UIEventListener();

    // vIndex: 1
    virtual ::EventResult onPushedScreen(::AbstractScene&);

    // vIndex: 2
    virtual ::EventResult onPoppedScreen(::AbstractScene&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::EventResult $onPushedScreen(::AbstractScene&);

    MCAPI ::EventResult $onPoppedScreen(::AbstractScene&);
    // NOLINTEND
};
