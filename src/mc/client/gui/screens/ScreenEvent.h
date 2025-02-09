#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/ScreenEventScope.h"
#include "mc/client/gui/screens/ScreenEventType.h"

// auto generated forward declare list
// clang-format off
union ScreenEventData;
// clang-format on

struct ScreenEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::ScreenEventType>  type;
    ::ll::TypedStorage<8, 40, ::ScreenEventData> data;
    ::ll::TypedStorage<1, 1, ::ScreenEventScope> scope;
    ::ll::TypedStorage<1, 1, bool>               localEvent;
    // NOLINTEND
};
