#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/screens/ScreenController.h"

class DropdownScreenController : public ::ScreenController {
public:
    // DropdownScreenController inner types declare
    // clang-format off
    struct SetUpCallbacksForCollectionDropdownOptionsParameters;
    // clang-format on

    // DropdownScreenController inner types define
    struct SetUpCallbacksForCollectionDropdownOptionsParameters {};

    using BooleanOptionGetter = ::std::function<bool()>;

    using IntegerOptionGetter = ::std::function<int()>;

    using IntegerOptionSetter = ::std::function<void(int)>;

    using CollectionBooleanOptionGetter = ::std::function<bool(int)>;

    using CollectionIntegerOptionGetter = ::std::function<int(int)>;

    using CollectionIntegerOptionSetter = ::std::function<void(int, int)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                  mOffset;
    ::ll::TypedStorage<8, 32, ::std::vector<bool>> mActiveDropdown;
    ::ll::TypedStorage<1, 1, bool>                 mUpdateBindings;
    ::ll::TypedStorage<
        8,
        8,
        ::std::unique_ptr<::DropdownScreenController::SetUpCallbacksForCollectionDropdownOptionsParameters>>
        mDelayedParams;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DropdownScreenController() /*override*/ = default;

    virtual ::ui::DirtyFlag tick() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void setUpCallbacksForCollectionDropdownOption(
        ::std::string const&                            collectionName,
        int const&                                      collectionSize,
        ::std::string const&                            dropdownName,
        ::std::string const&                            dropdownToggleLabelBindingName,
        ::std::unordered_map<::std::string, int> const& nameValuePairs,
        ::std::unordered_map<int, ::std::string> const& valueLabelPairs,
        ::std::string const&                            enabledBindingName,
        ::std::function<bool(int)>                      isEnabled,
        ::std::function<int(int)>                       getValue,
        ::std::function<void(int, int)>                 setValue
    );

    MCAPI void setUpCallbacksForDropdownOption(
        ::std::string const&                            dropdownName,
        ::std::string const&                            dropdownToggleLabelBindingName,
        ::std::unordered_map<::std::string, int> const& nameValuePairs,
        ::std::unordered_map<int, ::std::string> const& valueLabelPairs,
        ::std::string const&                            enabledBindingName,
        ::std::function<bool()>                         isEnabled,
        ::std::function<int()>                          getValue,
        ::std::function<void(int)>                      setValue
    );

    MCAPI void updateDropdownCollectionSize(int const& collectionSize);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::ui::DirtyFlag $tick();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
