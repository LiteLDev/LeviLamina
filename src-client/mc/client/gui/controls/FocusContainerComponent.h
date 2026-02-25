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
    // virtual functions
    // NOLINTBEGIN
    virtual ~FocusContainerComponent() /*override*/;

    virtual ::std::unique_ptr<::UIComponent> clone(::UIControl& cloneOwner) const /*override*/;

    virtual void reset() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::FocusContainerComponent* _getParentFocusContainer();

    MCAPI void addRecentFocusControl(::std::weak_ptr<::UIControl> weakControl);

    MCAPI ::std::string getFocusNavigationModeName(::ui::CardinalDirection dir) const;

    MCAPI ::std::shared_ptr<::UIControl> getLastFocusedControl();

    MCAPI ::std::string getLastFocusedControlName() const;

    MCAPI void initialize();

    MCAPI bool isAncestorFocusContainer(::std::shared_ptr<::UIControl const> focusContainerControl) const;

    MCAPI void loseFocus(::std::weak_ptr<::UIControl> lastControl);

    MCAPI void removeInvalidSubFocusContainer();

    MCAPI void setFocusNavigationModeOverride(::ui::CardinalDirection dir, ::std::string const& str);

    MCAPI void setLastFocusedControl(::std::weak_ptr<::UIControl> control);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::unique_ptr<::UIComponent> $clone(::UIControl& cloneOwner) const;

    MCAPI void $reset();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
