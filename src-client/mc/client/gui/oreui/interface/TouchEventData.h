#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec2.h"

namespace OreUI {

struct TouchEventData {
public:
    // TouchEventData inner types define
    enum class EventType : int {
        TouchMove = 0,
        TouchDown = 1,
        TouchUp   = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, ::Vec2>                             pos;
    ::ll::TypedStorage<4, 4, uint>                               id;
    ::ll::TypedStorage<4, 4, ::OreUI::TouchEventData::EventType> type;
    // NOLINTEND
};

} // namespace OreUI
