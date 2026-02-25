#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/OrientationType.h"
#include "mc/client/gui/controls/UIAnim.h"

// auto generated forward declare list
// clang-format off
class UIAnimationComponent;
class UIControl;
class UIResolvedDef;
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
    // prevent constructor by default
    UIAnimFlipbook();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::shared_ptr<::UIAnim> clone() /*override*/;

    virtual char const* getInitialValueKey() const /*override*/;

    virtual bool tick(::UIControl& ownerControl, float const deltaTime) /*override*/;

    virtual void onResourcesLoaded(::UIAnimationComponent& animComponent) /*override*/;

    virtual void _reset(::UIControl& ownerControl) /*override*/;

    virtual ~UIAnimFlipbook() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit UIAnimFlipbook(::UIResolvedDef const& def);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::UIResolvedDef const& def);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::shared_ptr<::UIAnim> $clone();

    MCFOLD char const* $getInitialValueKey() const;

    MCAPI bool $tick(::UIControl& ownerControl, float const deltaTime);

    MCAPI void $onResourcesLoaded(::UIAnimationComponent& animComponent);

    MCAPI void $_reset(::UIControl& ownerControl);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
