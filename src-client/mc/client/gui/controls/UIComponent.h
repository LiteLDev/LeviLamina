#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/controls/ComponentReceiveActionType.h"

// auto generated forward declare list
// clang-format off
class ScreenInputContext;
class UIAnimationController;
class UIControl;
class VisualTree;
struct ScreenEvent;
// clang-format on

class UIComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::UIControl&> mOwner;
    // NOLINTEND

public:
    // prevent constructor by default
    UIComponent& operator=(UIComponent const&);
    UIComponent(UIComponent const&);
    UIComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~UIComponent() = default;

    virtual ::std::unique_ptr<::UIComponent> clone(::UIControl& cloneOwner) const = 0;

    virtual ::ComponentReceiveActionType receive(
        ::VisualTree&            visualTree,
        ::ScreenInputContext&    context,
        ::UIAnimationController& animationController,
        ::ScreenEvent const&     screenEvent
    );

    virtual ::ComponentReceiveActionType receive(::ScreenEvent const& screenEvent);

    virtual void onNotifyChildAdded();

    virtual void onNotifyChildRemoved();

    virtual void onRemoved();

    virtual void onAdded();

    virtual void onVisibilityChanged(bool visible);

    virtual void onEnabledChanged(bool enabled);

    virtual bool isRenderableComponent() const;

    virtual bool isCustomFrameUpdateComponent() const;

    virtual bool onLayoutChange();

    virtual void reset() = 0;

    virtual void reload(::UIComponent const& rhs);

    virtual ::std::string const& getTextToSpeechComponentValue() const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::ComponentReceiveActionType $receive(
        ::VisualTree&            visualTree,
        ::ScreenInputContext&    context,
        ::UIAnimationController& animationController,
        ::ScreenEvent const&     screenEvent
    );

    MCNAPI ::ComponentReceiveActionType $receive(::ScreenEvent const& screenEvent);

    MCNAPI void $onNotifyChildAdded();

    MCNAPI void $onNotifyChildRemoved();

    MCNAPI void $onRemoved();

    MCNAPI void $onAdded();

    MCNAPI void $onVisibilityChanged(bool visible);

    MCNAPI void $onEnabledChanged(bool enabled);

    MCNAPI bool $isRenderableComponent() const;

    MCNAPI bool $isCustomFrameUpdateComponent() const;

    MCNAPI bool $onLayoutChange();

    MCNAPI void $reload(::UIComponent const& rhs);

    MCNAPI ::std::string const& $getTextToSpeechComponentValue() const;
    // NOLINTEND
};
