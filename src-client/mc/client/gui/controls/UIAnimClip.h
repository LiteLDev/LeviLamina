#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/controls/UIAnim.h"

// auto generated forward declare list
// clang-format off
class UIControl;
// clang-format on

class UIAnimClip : public ::UIAnim {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mFromClipRatio;
    ::ll::TypedStorage<4, 4, float> mToClipRatio;
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
