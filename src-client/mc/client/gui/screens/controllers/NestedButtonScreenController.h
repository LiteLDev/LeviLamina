#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/ViewRequest.h"
#include "mc/client/gui/screens/ScreenController.h"

// auto generated forward declare list
// clang-format off
class UIPropertyBag;
struct ScreenEvent;
// clang-format on

class NestedButtonScreenController : public ::ScreenController {
public:
    // NestedButtonScreenController inner types define
    using IndexSelectionFunc = ::std::function<int(::UIPropertyBag&)>;

    using VisibilityFunc = ::std::function<bool(::UIPropertyBag&, int)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>       mFirstControlName;
    ::ll::TypedStorage<1, 1, bool>                 mFocusFirst;
    ::ll::TypedStorage<1, 1, bool>                 mNestedContentVisible;
    ::ll::TypedStorage<4, 4, int>                  mSelectedIndex;
    ::ll::TypedStorage<4, 4, uint>                 mBaseButtonId;
    ::ll::TypedStorage<8, 24, ::std::vector<uint>> mIgnoredControls;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::ui::ViewRequest handleEvent(::ScreenEvent& screenEvent) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
