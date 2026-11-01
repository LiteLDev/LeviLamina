#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/CardinalDirection.h"
#include "mc/client/gui/controls/FocusNavigationMode.h"
#include "mc/client/gui/controls/UIComponent.h"
#include "mc/client/gui/screens/RecentFocusVector.h"

// auto generated forward declare list
// clang-format off
class UIControl;
struct FocusContainerCustomData;
// clang-format on

class FocusContainerComponent : public ::UIComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::RecentFocusVector>          mRecentFocusList;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::UIControl>> mLastFocusedControl;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::ui::CardinalDirection, ::FocusNavigationMode>>
        mDirectionalFocusOverrides;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::ui::CardinalDirection, ::std::vector<::FocusContainerCustomData>>>
                                                                                 mFocusContainerCustomOverrides;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::weak_ptr<::UIControl const>>> mSubFocusContainers;
    ::ll::TypedStorage<1, 1, bool>                                               mUseLastFocus;
    ::ll::TypedStorage<1, 1, bool>                                               mWrappingAllowed;
    // NOLINTEND

public:
    // prevent constructor by default
    FocusContainerComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FocusContainerComponent() /*override*/ = default;

    virtual ::std::unique_ptr<::UIComponent> clone(::UIControl& cloneOwner) const /*override*/;

    virtual void reset() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit FocusContainerComponent(::UIControl& owner);

    MCNAPI ::std::_Vector_const_iterator<::std::_Vector_val<::std::_Simple_types<::std::weak_ptr<::UIControl const>>>>
    _findSubFocusContainer(::std::shared_ptr<::UIControl const> focusContainerControl) const;

    MCNAPI ::FocusContainerComponent* _getParentFocusContainer();

    MCNAPI void addRecentFocusControl(::std::weak_ptr<::UIControl> weakControl);

    MCNAPI ::std::string getFocusNavigationModeName(::ui::CardinalDirection dir) const;

    MCNAPI ::std::shared_ptr<::UIControl> getLastFocusedControl();

    MCNAPI ::std::string getLastFocusedControlName() const;

    MCNAPI void initialize();

    MCNAPI bool isAncestorFocusContainer(::FocusContainerComponent& focusContainerComp) const;

    MCNAPI void loseFocus(::std::weak_ptr<::UIControl> lastControl);

    MCNAPI void setFocusNavigationModeOverride(::ui::CardinalDirection dir, ::std::string const& str);

    MCNAPI void setLastFocusedControl(::std::weak_ptr<::UIControl> control);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::UIControl& owner);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::std::unique_ptr<::UIComponent> $clone(::UIControl& cloneOwner) const;

    MCNAPI void $reset();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
