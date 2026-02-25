#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/AnimationType.h"

// auto generated forward declare list
// clang-format off
class UIAnimationComponent;
class UIControl;
class UIResolvedDef;
// clang-format on

class UIAnim {
public:
    // UIAnim inner types define
    enum class State : int {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::ui::AnimationType>            mAnimType;
    ::ll::TypedStorage<4, 4, float>                          mTime;
    ::ll::TypedStorage<8, 8, float (*)(float, float, float)> mEase;
    ::ll::TypedStorage<4, 4, ::UIAnim::State>                mState;
    ::ll::TypedStorage<4, 4, uint>                           mAnimEndEventId;
    ::ll::TypedStorage<4, 4, uint>                           mPlayEventId;
    ::ll::TypedStorage<4, 4, uint>                           mResetEventId;
    ::ll::TypedStorage<4, 4, float>                          mDuration;
    ::ll::TypedStorage<8, 32, ::std::string>                 mName;
    ::ll::TypedStorage<8, 32, ::std::string>                 mNext;
    ::ll::TypedStorage<8, 32, ::std::string>                 mDestroyControlAtEnd;
    ::ll::TypedStorage<1, 1, bool>                           mResettable;
    ::ll::TypedStorage<1, 1, bool>                           mWaitUntilRenderedToPlay;
    ::ll::TypedStorage<1, 1, bool>                           mRendered;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::UIAnim>>   mNextAnim;
    // NOLINTEND

public:
    // prevent constructor by default
    UIAnim& operator=(UIAnim const&);
    UIAnim();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~UIAnim();

    virtual ::std::shared_ptr<::UIAnim> clone();

    virtual char const* getInitialValueKey() const;

    virtual bool tick(::UIControl& ownerControl, float const deltaTime);

    virtual void updateProperties(::UIAnimationComponent& animComponent);

    virtual void onResourcesLoaded(::UIAnimationComponent& animComponent);

    virtual void _reset(::UIControl& ownerControl);

    virtual void _play();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI UIAnim(::UIAnim const&);

    MCAPI UIAnim(::ui::AnimationType animType, ::UIResolvedDef const& def);

    MCAPI bool _hasEndEventId(uint id, ::std::set<void const*>& otherAnimations) const;

    MCAPI bool _hasPlayEventId(uint playEventId, ::std::set<void const*>& otherAnimations) const;

    MCAPI void destroy();

    MCAPI void setNextAnim(::std::shared_ptr<::UIAnim> next);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::UIAnim const&);

    MCAPI void* $ctor(::ui::AnimationType animType, ::UIResolvedDef const& def);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::shared_ptr<::UIAnim> $clone();

    MCAPI char const* $getInitialValueKey() const;

    MCAPI bool $tick(::UIControl& ownerControl, float const deltaTime);

    MCAPI void $updateProperties(::UIAnimationComponent& animComponent);

    MCAPI void $onResourcesLoaded(::UIAnimationComponent& animComponent);

    MCAPI void $_reset(::UIControl& ownerControl);

    MCAPI void $_play();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
