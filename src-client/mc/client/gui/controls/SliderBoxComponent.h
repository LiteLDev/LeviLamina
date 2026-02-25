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

class SliderBoxComponent : public ::UIComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                          mHover;
    ::ll::TypedStorage<1, 1, bool>                          mSelected;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::UIControl>> mSliderControl;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::UIControl>> mDefaultControl;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::UIControl>> mHoverControl;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::UIControl>> mIndentControl;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::UIControl>> mLockedControl;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::unique_ptr<::UIComponent> clone(::UIControl& cloneOwner) const /*override*/;

    virtual void reset() /*override*/;

    virtual ::ComponentReceiveActionType receive(
        ::VisualTree&            visualTree,
        ::ScreenInputContext&    context,
        ::UIAnimationController& animationController,
        ::ScreenEvent const&     screenEvent
    ) /*override*/;

    virtual ~SliderBoxComponent() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void updateControlVisibility();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::unique_ptr<::UIComponent> $clone(::UIControl& cloneOwner) const;

    MCAPI void $reset();

    MCAPI ::ComponentReceiveActionType $receive(
        ::VisualTree&            visualTree,
        ::ScreenInputContext&    context,
        ::UIAnimationController& animationController,
        ::ScreenEvent const&     screenEvent
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
