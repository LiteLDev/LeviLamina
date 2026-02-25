#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec2.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class Option;
namespace OreUI { class GesturePolicy; }
namespace OreUI { class ITouchSystem; }
namespace OreUI { struct TouchEvent; }
// clang-format on

namespace OreUI {

class TouchInputHandler {
public:
    // TouchInputHandler inner types declare
    // clang-format off
    struct ActiveTouch;
    // clang-format on

    // TouchInputHandler inner types define
    struct ActiveTouch {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, int>    id;
        ::ll::TypedStorage<4, 8, ::Vec2> origin;
        ::ll::TypedStorage<4, 8, ::Vec2> currentLocation;
        ::ll::TypedStorage<1, 1, bool>   hasMoved;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::OreUI::ITouchSystem>>                mTouchSystem;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                        mTTSOptionObserver;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::OreUI::GesturePolicy>>               mGesturePolicy;
    ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::TouchInputHandler::ActiveTouch>> mActiveTouches;
    // NOLINTEND

public:
    // prevent constructor by default
    TouchInputHandler();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI TouchInputHandler(
        ::std::unique_ptr<::OreUI::ITouchSystem>  touchSystem,
        ::std::unique_ptr<::OreUI::GesturePolicy> gesturePolicy,
        ::Option*                                 ttsOption
    );

    MCAPI void handle(::std::vector<::OreUI::TouchEvent> const& rawTouchEvents);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::unique_ptr<::OreUI::ITouchSystem>  touchSystem,
        ::std::unique_ptr<::OreUI::GesturePolicy> gesturePolicy,
        ::Option*                                 ttsOption
    );
    // NOLINTEND
};

} // namespace OreUI
