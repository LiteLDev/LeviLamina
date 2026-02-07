#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/ViewRequest.h"
#include "mc/client/gui/screens/ScreenController.h"

// auto generated forward declare list
// clang-format off
class MinecraftScreenModel;
struct ScreenEvent;
struct UIPropertyBag;
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
    // prevent constructor by default
    NestedButtonScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::ui::ViewRequest handleEvent(::ScreenEvent& screenEvent) /*override*/;

    virtual ~NestedButtonScreenController() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit NestedButtonScreenController(::std::shared_ptr<::MinecraftScreenModel> model);

    MCAPI void setUpCallbacksForNestedButtonInCollection(
        ::std::string const&                         nestedBaseButtonId,
        ::std::string const&                         nestedControlEnabledBinding,
        ::std::vector<uint>                          ignoredControls,
        ::std::function<int(::UIPropertyBag&)>       indexSelectionFunc,
        ::std::function<bool(::UIPropertyBag&, int)> visibilityFunction,
        ::std::string                                firstControlName
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::shared_ptr<::MinecraftScreenModel> model);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::ui::ViewRequest $handleEvent(::ScreenEvent& screenEvent);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
