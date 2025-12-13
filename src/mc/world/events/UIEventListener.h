#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/EventResult.h"

// auto generated forward declare list
// clang-format off
struct AbstractScene;
// clang-format on

class UIEventListener {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~UIEventListener() = default;

    virtual ::EventResult onPushedScreen(::AbstractScene&);

    virtual ::EventResult onPoppedScreen(::AbstractScene&);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
