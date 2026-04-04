#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Vec2;
namespace OreUI { struct GestureEventData; }
namespace OreUI { struct TouchEventData; }
// clang-format on

namespace OreUI {

class ITouchSystem {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ITouchSystem() = default;

    virtual void sendTouchEvents(::std::vector<::OreUI::TouchEventData> const& events) = 0;

    virtual void sendGestureEvent(::OreUI::GestureEventData const& event) = 0;

    virtual void sendMouseMoveEvent(::Vec2 const& pos) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace OreUI
