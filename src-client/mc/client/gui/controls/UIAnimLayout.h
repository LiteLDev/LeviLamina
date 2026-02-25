#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/LayoutOffset.h"
#include "mc/client/gui/controls/UIAnim.h"

// auto generated forward declare list
// clang-format off
class UIControl;
class UIResolvedDef;
// clang-format on

class UIAnimLayout : public ::UIAnim {
public:
    // UIAnimLayout inner types define
    enum class ApplyTo : int {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::UIAnimLayout::ApplyTo> mApplyTo;
    ::ll::TypedStorage<8, 56, ::ui::LayoutOffset>     mInterpolatedOffset;
    ::ll::TypedStorage<8, 56, ::ui::LayoutOffset>     mFromOffset;
    ::ll::TypedStorage<8, 56, ::ui::LayoutOffset>     mToOffset;
    // NOLINTEND

public:
    // prevent constructor by default
    UIAnimLayout& operator=(UIAnimLayout const&);
    UIAnimLayout();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::shared_ptr<::UIAnim> clone() /*override*/;

    virtual bool tick(::UIControl& ownerControl, float const deltaTime) /*override*/;

    virtual void _reset(::UIControl& ownerControl) /*override*/;

    virtual ~UIAnimLayout() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI UIAnimLayout(::UIAnimLayout const&);

    MCAPI UIAnimLayout(::UIResolvedDef const& def, ::UIAnimLayout::ApplyTo applyTo);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::UIAnimLayout const&);

    MCAPI void* $ctor(::UIResolvedDef const& def, ::UIAnimLayout::ApplyTo applyTo);
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
