#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/OrientationType.h"
#include "mc/client/gui/controls/UIAnim.h"

// auto generated forward declare list
// clang-format off
class UIAnimationComponent;
class UIControl;
// clang-format on

class UIAnimFlipbook : public ::UIAnim {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                 mAnimationTime;
    ::ll::TypedStorage<4, 4, float>                 mCurrentFrame;
    ::ll::TypedStorage<4, 4, float>                 mFPS;
    ::ll::TypedStorage<4, 4, int>                   mFrameCount;
    ::ll::TypedStorage<4, 4, float>                 mFrameStep;
    ::ll::TypedStorage<1, 1, bool>                  mReverse;
    ::ll::TypedStorage<1, 1, bool>                  mReversible;
    ::ll::TypedStorage<1, 1, ::ui::OrientationType> mFlipOrientation;
    ::ll::TypedStorage<1, 1, bool>                  mLooping;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::shared_ptr<::UIAnim> clone() /*override*/;

    virtual char const* getInitialValueKey() const /*override*/;

    virtual bool tick(::UIControl&, float const) /*override*/;

    virtual void onResourcesLoaded(::UIAnimationComponent&) /*override*/;

    virtual void _reset(::UIControl&) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
