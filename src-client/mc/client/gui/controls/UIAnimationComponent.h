#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/controls/AnimEvent.h"
#include "mc/client/gui/controls/AnimationTickResult.h"
#include "mc/client/gui/controls/ComponentReceiveActionType.h"
#include "mc/client/gui/controls/UIComponent.h"
#include "mc/client/gui/screens/AnimationStatus.h"

// auto generated forward declare list
// clang-format off
class ScreenInputContext;
class UIAnim;
class UIAnimationController;
class UIControl;
class UIControlFactory;
class UIResolvedDef;
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
    struct NewAnimation {};

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

    virtual ::std::unique_ptr<::UIComponent> clone(::UIControl& cloneOwner) const /*override*/;

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
    MCAPI void _addNextAnimation(
        ::UIAnim&                                               anim,
        ::std::map<::std::string, ::std::shared_ptr<::UIAnim>>& animationNames,
        ::std::shared_ptr<::UIAnim> const&                      firstAnim,
        ::UIControlFactory&                                     factory
    );

    MCAPI ::ui::AnimationStatus _animationTick(::mce::TimeStep const& timeStep);

    MCAPI ::std::shared_ptr<::UIAnim> _createAnimation(::UIResolvedDef& def, ::UIControlFactory& factory);

    MCAPI void _queueAnimScreenEvent(::UIAnim* anim, ::AnimEvent animEvent);

    MCAPI ::AnimationTickResult
    _tickUIAnim(::UIAnim* anim, ::std::vector<::UIAnimationComponent::NewAnimation>& newAnimsToAdd, float deltaTime);

    MCAPI ::UIAnim* addAnimation(::std::string const& name, ::UIResolvedDef& def, ::UIControlFactory& factory);

    MCAPI void handleScreenEvent(::UIAnimationController& animationController, ::ScreenEvent const& screenEvent);

    MCAPI bool hasAnimationWithPlayAndEndEventIds(uint playEventId, uint endEventId) const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::unique_ptr<::UIComponent> $clone(::UIControl& cloneOwner) const;

    MCAPI void $reset();

    MCAPI ::ComponentReceiveActionType $receive(
        ::VisualTree&            visualTree,
        ::ScreenInputContext&    context,
        ::UIAnimationController& animationController,
        ::ScreenEvent const&     screenEvent
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
