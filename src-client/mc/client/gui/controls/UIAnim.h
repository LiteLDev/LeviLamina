#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/AnimationType.h"

// auto generated forward declare list
// clang-format off
class UIAnimationComponent;
class UIControl;
// clang-format on

class UIAnim {
public:
    // UIAnim inner types define
    enum class State : int {
        Running          = 0,
        Waiting          = 1,
        WaitingForRender = 2,
    };

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
    // virtual functions
    // NOLINTBEGIN
    virtual ~UIAnim() = default;

    virtual ::std::shared_ptr<::UIAnim> clone();

    virtual char const* getInitialValueKey() const;

    virtual bool tick(::UIControl&, float const);

    virtual void updateProperties(::UIAnimationComponent&);

    virtual void onResourcesLoaded(::UIAnimationComponent&);

    virtual void _reset(::UIControl&);

    virtual void _play();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool _hasEndEventId(uint id, ::std::set<void const*>& otherAnimations) const;

    MCAPI bool _hasPlayEventId(uint playEventId, ::std::set<void const*>& otherAnimations) const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
