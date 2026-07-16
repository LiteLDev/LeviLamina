#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/LayoutOffset.h"
#include "mc/client/gui/controls/UIAnim.h"

// auto generated forward declare list
// clang-format off
class UIControl;
// clang-format on

class UIAnimLayout : public ::UIAnim {
public:
    // UIAnimLayout inner types define
    enum class ApplyTo : int {
        Offset = 0,
        Size   = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::UIAnimLayout::ApplyTo> mApplyTo;
    ::ll::TypedStorage<8, 56, ::ui::LayoutOffset>     mInterpolatedOffset;
    ::ll::TypedStorage<8, 56, ::ui::LayoutOffset>     mFromOffset;
    ::ll::TypedStorage<8, 56, ::ui::LayoutOffset>     mToOffset;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::shared_ptr<::UIAnim> clone() /*override*/;

    virtual bool tick(::UIControl&, float const) /*override*/;

    virtual void _reset(::UIControl&) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
