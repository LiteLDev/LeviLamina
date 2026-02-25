#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/interface/ITouchSystem.h"

// auto generated forward declare list
// clang-format off
class Vec2;
namespace OreUI { struct GestureEventData; }
namespace OreUI { struct TouchEventData; }
namespace cohtml { struct GestureEventData; }
namespace cohtml { struct MouseEventData; }
namespace cohtml { struct TouchEventData; }
// clang-format on

namespace OreUI {

class TouchSystemWrapper : public ::OreUI::ITouchSystem {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<void(::std::vector<::cohtml::TouchEventData>&)>> mTouchEventsCallback;
    ::ll::TypedStorage<8, 64, ::std::function<void(::cohtml::GestureEventData&)>>              mGestureEventCallback;
    ::ll::TypedStorage<8, 64, ::std::function<void(::cohtml::MouseEventData const&)>>          mMouseEventCallback;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void sendTouchEvents(::std::vector<::OreUI::TouchEventData> const& events) /*override*/;

    virtual void sendGestureEvent(::OreUI::GestureEventData const& event) /*override*/;

    virtual void sendMouseMoveEvent(::Vec2 const& pos) /*override*/;

    virtual ~TouchSystemWrapper() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $sendTouchEvents(::std::vector<::OreUI::TouchEventData> const& events);

    MCAPI void $sendGestureEvent(::OreUI::GestureEventData const& event);

    MCAPI void $sendMouseMoveEvent(::Vec2 const& pos);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
