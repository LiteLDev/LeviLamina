#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/controls/UIAnim.h"

// auto generated forward declare list
// clang-format off
class UIAnimationComponent;
class UIControl;
// clang-format on

class UIAsepriteFlipbook : public ::UIAnim {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mTimeSoFar;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::shared_ptr<::UIAnim> clone() /*override*/;

    virtual char const* getInitialValueKey() const /*override*/;

    virtual bool tick(::UIControl& ownerControl, float const deltaTime) /*override*/;

    virtual void onResourcesLoaded(::UIAnimationComponent& animComponent) /*override*/;

    virtual void _reset(::UIControl& ownerControl) /*override*/;

    virtual ~UIAsepriteFlipbook() /*override*/ = default;
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
