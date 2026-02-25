#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/controls/UIAnim.h"
#include "mc/deps/core/math/Color.h"

// auto generated forward declare list
// clang-format off
class UIControl;
class UIResolvedDef;
// clang-format on

class UIAnimColor : public ::UIAnim {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 16, ::mce::Color> mFromColor;
    ::ll::TypedStorage<4, 16, ::mce::Color> mToColor;
    // NOLINTEND

public:
    // prevent constructor by default
    UIAnimColor();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::shared_ptr<::UIAnim> clone() /*override*/;

    virtual bool tick(::UIControl& ownerControl, float const deltaTime) /*override*/;

    virtual void _reset(::UIControl& ownerControl) /*override*/;

    virtual ~UIAnimColor() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit UIAnimColor(::UIResolvedDef const& def);
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

    MCAPI bool $tick(::UIControl& ownerControl, float const deltaTime);

    MCAPI void $_reset(::UIControl& ownerControl);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
