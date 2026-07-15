#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/controls/UIAnim.h"
#include "mc/deps/core/math/Color.h"

// auto generated forward declare list
// clang-format off
class UIControl;
// clang-format on

class UIAnimColor : public ::UIAnim {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 16, ::mce::Color> mFromColor;
    ::ll::TypedStorage<4, 16, ::mce::Color> mToColor;
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
