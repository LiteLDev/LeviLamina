#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/controls/ComponentReceiveActionType.h"
#include "mc/client/gui/controls/UIComponent.h"

// auto generated forward declare list
// clang-format off
class ScreenInputContext;
class UIAnimationController;
class UIControl;
class VisualTree;
struct ScreenEvent;
// clang-format on

class ButtonComponent : public ::UIComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::UIControl>> mDefaultStateControl;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::UIControl>> mHoverStateControl;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::UIControl>> mPressedStateControl;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::UIControl>> mLockedStateControl;
    ::ll::TypedStorage<1, 1, bool>                          mPressed;
    ::ll::TypedStorage<1, 1, bool>                          mHover;
    ::ll::TypedStorage<1, 1, bool>                          mConsumeEvents;
    // NOLINTEND

public:
    // prevent constructor by default
    ButtonComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ButtonComponent() /*override*/ = default;

    virtual ::std::unique_ptr<::UIComponent> clone(::UIControl& cloneOwner) const /*override*/;

    virtual void reset() /*override*/;

    virtual void reload(::UIComponent const& rhs) /*override*/;

    virtual ::ComponentReceiveActionType receive(
        ::VisualTree& screenEvent,
        ::ScreenInputContext&,
        ::UIAnimationController&,
        ::ScreenEvent const&
    ) /*override*/;

    virtual ::ComponentReceiveActionType receive(::ScreenEvent const& screenEvent) /*override*/;

    virtual void onVisibilityChanged(bool visible) /*override*/;

    virtual void onEnabledChanged(bool enabled) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ButtonComponent(::UIControl& owner);

    MCAPI void _updateControlVisibility();

    MCFOLD ::std::weak_ptr<::UIControl> getDefaultStateControl() const;

    MCFOLD ::std::weak_ptr<::UIControl> getHoverStateControl() const;

    MCFOLD ::std::weak_ptr<::UIControl> getLockedStateControl() const;

    MCFOLD ::std::weak_ptr<::UIControl> getPressedStateControl() const;

    MCFOLD void setConsumeEvents(bool consumeEvents);

    MCAPI void setDefaultStateControl(::std::weak_ptr<::UIControl> control);

    MCAPI void setHoverStateControl(::std::weak_ptr<::UIControl> control);

    MCAPI void setLockedStateControl(::std::weak_ptr<::UIControl> control);

    MCAPI void setPressedStateControl(::std::weak_ptr<::UIControl> control);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::UIControl& owner);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::unique_ptr<::UIComponent> $clone(::UIControl& cloneOwner) const;

    MCAPI void $reset();

    MCAPI void $reload(::UIComponent const& rhs);

    MCAPI ::ComponentReceiveActionType
    $receive(::VisualTree& screenEvent, ::ScreenInputContext&, ::UIAnimationController&, ::ScreenEvent const&);

    MCAPI ::ComponentReceiveActionType $receive(::ScreenEvent const& screenEvent);

    MCAPI void $onVisibilityChanged(bool visible);

    MCAPI void $onEnabledChanged(bool enabled);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
