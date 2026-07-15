#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/controls/ComponentReceiveActionType.h"
#include "mc/client/gui/controls/UIComponent.h"
#include "mc/client/gui/screens/AnimationStatus.h"

// auto generated forward declare list
// clang-format off
class ScreenInputContext;
class UIAnim;
class UIAnimationController;
class UIControl;
class VisualTree;
struct ScreenEvent;
namespace mce { struct TimeStep; }
// clang-format on

class UIAnimationComponent : public ::UIComponent {
public:
    // UIAnimationComponent inner types declare
    // clang-format off
    struct NewAnimation;
    // clang-format on

    // UIAnimationComponent inner types define
    struct NewAnimation {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 16, ::std::shared_ptr<::UIAnim>> newAnim;
        ::ll::TypedStorage<4, 4, float>                        lastAnimDuration;
        ::ll::TypedStorage<4, 4, float>                        lastAnimTime;
        // NOLINTEND
    };

    using AnimList = ::std::vector<::std::shared_ptr<::UIAnim>>;

    using AnimListIter = ::std::_Vector_iterator<::std::_Vector_val<::std::_Simple_types<::std::shared_ptr<::UIAnim>>>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::UIAnim>>> mAnimList;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::UIAnim>>> mOriginalAnimList;
    ::ll::TypedStorage<8, 24, ::std::vector<::ScreenEvent>>               mNewScreenEvents;
    ::ll::TypedStorage<1, 1, bool>                                        mTickAttached;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point>     mCreatedTime;
    ::ll::TypedStorage<1, 1, bool>                                        mRecievedFirstTick;
    ::ll::TypedStorage<1, 1, bool>                                        mDisableFastForward;
    ::ll::TypedStorage<4, 4, uint>                                        mResetId;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~UIAnimationComponent() /*override*/ = default;

    virtual ::std::unique_ptr<::UIComponent> clone(::UIControl&) const /*override*/;

    virtual void reset() /*override*/;

    virtual ::ComponentReceiveActionType receive(
        ::VisualTree&            visualTree,
        ::ScreenInputContext&    context,
        ::UIAnimationController& animationController,
        ::ScreenEvent const&     screenEvent
    ) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::ui::AnimationStatus _animationTick(::mce::TimeStep const& timeStep);

    MCAPI void _resetAnimations();

    MCAPI void handleScreenEvent(::UIAnimationController& animationController, ::ScreenEvent const& screenEvent);

    MCAPI bool hasAnimationWithEndEventId(uint id) const;

    MCAPI bool hasAnimationWithPlayAndEndEventIds(uint playEventId, uint endEventId) const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
