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
    virtual ~FocusContainerComponent() /*override*/;

    virtual ::std::unique_ptr<::UIComponent> clone(::UIControl& cloneOwner) const /*override*/;

    virtual void reset() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit FocusContainerComponent(::UIControl& owner);

    MCAPI ::std::_Vector_const_iterator<::std::_Vector_val<::std::_Simple_types<::std::weak_ptr<::UIControl const>>>>
    _findSubFocusContainer(::std::shared_ptr<::UIControl const> focusContainerControl) const;

    MCAPI ::FocusContainerComponent* _getParentFocusContainer();

    MCAPI void addFocusContainerDataToDirection(::ui::CardinalDirection dir, ::FocusContainerCustomData const& data);

    MCAPI void addRecentFocusControl(::std::weak_ptr<::UIControl> weakControl);

    MCAPI void addSubFocusContainer(::std::shared_ptr<::UIControl const> focusContainerControl);

    MCAPI ::std::shared_ptr<::UIControl> gainFocus(bool includeMagnetControls);

    MCAPI bool getFocusContainerDataFromDirection(
        ::ui::CardinalDirection                    dir,
        ::std::vector<::FocusContainerCustomData>& outData
    ) const;

    MCAPI ::std::string getFocusNavigationModeName(::ui::CardinalDirection dir) const;

    MCAPI ::std::shared_ptr<::UIControl> getLastFocusedControl();

    MCAPI ::std::string getLastFocusedControlName() const;

    MCAPI ::std::shared_ptr<::UIControl> getLastGoodFocusedControl(::std::shared_ptr<::UIControl> lastFocusedControl);

    MCFOLD bool getUseLastFocus() const;

    MCAPI void initialize();

    MCAPI bool isAncestorFocusContainer(::FocusContainerComponent& focusContainerComp) const;

    MCAPI bool
    isFocusNavigationModeContained(::ui::CardinalDirection dir, ::FocusContainerComponent* toFocusContainerComp) const;

    MCAPI bool isFocusNavigationModeCustom(::ui::CardinalDirection dir) const;

    MCAPI bool isFocusNavigationModeStop(::ui::CardinalDirection dir) const;

    MCFOLD bool isWrappingAllowed() const;

    MCAPI void loseFocus(::std::weak_ptr<::UIControl> lastControl);

    MCAPI void removeInvalidSubFocusContainer();

    MCAPI void setFocusNavigationModeOverride(::ui::CardinalDirection dir, ::std::string const& str);

    MCAPI void setLastFocusedControl(::std::weak_ptr<::UIControl> control);

    MCFOLD void setUseLastFocus(bool useLastFocus);

    MCAPI void setWrappingAllowed(bool isAllowed);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::UIControl& owner);
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
