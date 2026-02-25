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
    // virtual functions
    // NOLINTBEGIN
    virtual ~ButtonComponent() /*override*/ = default;

    virtual ::std::unique_ptr<::UIComponent> clone(::UIControl& cloneOwner) const /*override*/;

    virtual void reset() /*override*/;

    virtual void reload(::UIComponent const& rhs) /*override*/;

    virtual ::ComponentReceiveActionType receive(
        ::VisualTree&            visualTree,
        ::ScreenInputContext&    context,
        ::UIAnimationController& animationController,
        ::ScreenEvent const&     screenEvent
    ) /*override*/;

    virtual ::ComponentReceiveActionType receive(::ScreenEvent const& screenEvent) /*override*/;

    virtual void onVisibilityChanged(bool visible) /*override*/;

    virtual void onEnabledChanged(bool enabled) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _updateControlVisibility();

    MCFOLD void setVisible(::std::weak_ptr<::UIControl> const& control, bool visible);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::unique_ptr<::UIComponent> $clone(::UIControl& cloneOwner) const;

    MCAPI void $reset();

    MCAPI void $reload(::UIComponent const& rhs);

    MCAPI ::ComponentReceiveActionType $receive(
        ::VisualTree&            visualTree,
        ::ScreenInputContext&    context,
        ::UIAnimationController& animationController,
        ::ScreenEvent const&     screenEvent
    );

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
