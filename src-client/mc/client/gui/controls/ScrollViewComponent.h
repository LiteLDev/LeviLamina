#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/controls/ComponentReceiveActionType.h"
#include "mc/client/gui/controls/ScrollbarDynamics.h"
#include "mc/client/gui/controls/UIComponent.h"
#include "mc/client/gui/screens/AnimationStatus.h"
#include "mc/deps/input/enums/ButtonState.h"

// auto generated forward declare list
// clang-format off
class ScreenInputContext;
class UIAnimationController;
class UIControl;
class VisualTree;
struct ScreenEvent;
namespace mce { struct TimeStep; }
// clang-format on

class ScrollViewComponent : public ::UIComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::UIControl>> mScrollViewPort;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::UIControl>> mScrollContent;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::UIControl>> mScrollTrack;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::UIControl>> mScrollBox;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::UIControl>> mBoxAndTrackPanel;
    ::ll::TypedStorage<4, 4, uint>                          mTrackScrollButtonId;
    ::ll::TypedStorage<4, 4, uint>                          mTouchScrollButtonId;
    ::ll::TypedStorage<4, 4, uint>                          mScrollingActiveEventId;
    ::ll::TypedStorage<4, 4, uint>                          mScrollBarReleasedEventId;
    ::ll::TypedStorage<4, 4, uint>                          mScrollBarBottomEventId;
    ::ll::TypedStorage<1, 1, ::ButtonState>                 mLastTouchButtonState;
    ::ll::TypedStorage<1, 1, ::ButtonState>                 mLastScrollBoxPressedState;
    ::ll::TypedStorage<4, 4, float>                         mDistanceForScrollEventsToPassOn;
    ::ll::TypedStorage<4, 4, float>                         mScrollSpeed;
    ::ll::TypedStorage<1, 1, bool>                          mGestureControlMode;
    ::ll::TypedStorage<1, 1, bool>                          mAlwaysHandleScrolling;
    ::ll::TypedStorage<1, 1, bool>                          mTouchMode;
    ::ll::TypedStorage<1, 1, bool>                          mAllowScrollEvenWhenContentFits;
    ::ll::TypedStorage<1, 1, bool>                          mScrollbarAlwaysVisible;
    ::ll::TypedStorage<4, 68, ::ScrollbarDynamics>          mScrollbarDynamics;
    ::ll::TypedStorage<1, 1, bool>                          mTouchScrollBarVisible;
    ::ll::TypedStorage<4, 4, float>                         mTouchScrollBarIntensity;
    ::ll::TypedStorage<1, 1, bool>                          mJumpToBottomOnUpdate;
    ::ll::TypedStorage<4, 4, float>                         mContentSize;
    // NOLINTEND

public:
    // prevent constructor by default
    ScrollViewComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScrollViewComponent() /*override*/ = default;

    virtual ::std::unique_ptr<::UIComponent> clone(::UIControl& cloneOwner) const /*override*/;

    virtual void reset() /*override*/;

    virtual void reload(::UIComponent const& rhs) /*override*/;

    virtual ::ComponentReceiveActionType receive(
        ::VisualTree&            visualTree,
        ::ScreenInputContext&    context,
        ::UIAnimationController& animationController,
        ::ScreenEvent const&     screenEvent
    ) /*override*/;

    virtual void onNotifyChildRemoved() /*override*/;

    virtual bool onLayoutChange() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ScrollViewComponent(::UIControl& owner);

    MCAPI ::glm::vec2 _getContentSize() const;

    MCAPI bool _handlePointerMove(
        ::VisualTree&                 visualTree,
        ::ScreenInputContext&         context,
        ::UIAnimationController&      animationController,
        ::ScreenEvent const&          screenEvent,
        ::ComponentReceiveActionType& returnValue
    );

    MCAPI bool _handleScrollDirection(
        ::VisualTree&                 visualTree,
        ::ScreenInputContext&         context,
        ::UIAnimationController&      animationController,
        ::ScreenEvent const&          screenEvent,
        ::ComponentReceiveActionType& returnValue
    );

    MCAPI bool _handleTrackScrollButton(
        ::VisualTree&                 visualTree,
        ::ScreenInputContext&         context,
        ::UIAnimationController&      animationController,
        ::ScreenEvent const&          screenEvent,
        ::ComponentReceiveActionType& returnValue
    );

    MCAPI void _makeScrollBarVisible();

    MCAPI ::ui::AnimationStatus _updateDynamicsAndScrollPosition(::mce::TimeStep const& timeStep);

    MCAPI void _updateScroll(::glm::vec2 const& delta, bool updateScrollBoxLayout);

    MCAPI void _updateScrollBoxSize();

    MCAPI void _updateScrollFromScrollBox(::ScreenEvent const& screenEvent);

    MCAPI void _updateTouchScrollbarVisibility(::mce::TimeStep const& timeStep);

    MCAPI ::ui::AnimationStatus animationScrollingTick(::mce::TimeStep const& timeStep);

    MCAPI bool handleScrollDirection(
        ::VisualTree&            visualTree,
        ::UIAnimationController& animationController,
        ::ScreenInputContext&    context,
        ::glm::vec2 const&       position,
        ::glm::vec2 const&       deltaPosition,
        bool                     alreadyHandled
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::UIControl& owner);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::unique_ptr<::UIComponent> $clone(::UIControl& cloneOwner) const;

    MCAPI void $reset();

    MCAPI void $reload(::UIComponent const& rhs);

    MCAPI ::ComponentReceiveActionType $receive(
        ::VisualTree&            visualTree,
        ::ScreenInputContext&    context,
        ::UIAnimationController& animationController,
        ::ScreenEvent const&     screenEvent
    );

    MCFOLD void $onNotifyChildRemoved();

    MCAPI bool $onLayoutChange();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
