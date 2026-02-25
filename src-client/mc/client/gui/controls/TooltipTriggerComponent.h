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

class TooltipTriggerComponent : public ::UIComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                          mHover;
    ::ll::TypedStorage<4, 4, uint>                          mTooltipTriggerNameId;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::UIControl>> mTopContentControl;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::UIControl>> mBottomContentControl;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::UIControl>> mAreaControl;
    ::ll::TypedStorage<8, 32, ::std::string>                mTextTTSBindingNameOrValue;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TooltipTriggerComponent() /*override*/ = default;

    virtual ::std::unique_ptr<::UIComponent> clone(::UIControl& cloneOwner) const /*override*/;

    virtual void reset() /*override*/;

    virtual ::ComponentReceiveActionType receive(
        ::VisualTree&            visualTree,
        ::ScreenInputContext&    context,
        ::UIAnimationController& animationController,
        ::ScreenEvent const&     screenEvent
    ) /*override*/;

    virtual ::std::string const& getTextToSpeechComponentValue() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD void _setVisible(::std::weak_ptr<::UIControl> const& control, bool visible);

    MCAPI void _setVisiblePopup();

    MCAPI void _updateControlVisibility();
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

    MCFOLD ::std::string const& $getTextToSpeechComponentValue() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
