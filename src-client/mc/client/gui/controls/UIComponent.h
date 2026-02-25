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
    virtual ~UIComponent();

    virtual ::std::unique_ptr<::UIComponent> clone(::UIControl&) const = 0;

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

    virtual void onVisibilityChanged(bool);

    virtual void onEnabledChanged(bool);

    virtual bool isRenderableComponent() const;

    virtual bool isCustomFrameUpdateComponent() const;

    virtual bool onLayoutChange();

    virtual void reset() = 0;

    virtual void reload(::UIComponent const& rhs);

    virtual ::std::string const& getTextToSpeechComponentValue() const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::ComponentReceiveActionType $receive(
        ::VisualTree&            visualTree,
        ::ScreenInputContext&    context,
        ::UIAnimationController& animationController,
        ::ScreenEvent const&     screenEvent
    );

    MCFOLD ::ComponentReceiveActionType $receive(::ScreenEvent const& screenEvent);

    MCFOLD void $onNotifyChildAdded();

    MCFOLD void $onNotifyChildRemoved();

    MCFOLD void $onRemoved();

    MCFOLD void $onAdded();

    MCFOLD void $onVisibilityChanged(bool);

    MCFOLD void $onEnabledChanged(bool);

    MCFOLD bool $isRenderableComponent() const;

    MCFOLD bool $isCustomFrameUpdateComponent() const;

    MCFOLD bool $onLayoutChange();

    MCFOLD void $reload(::UIComponent const& rhs);

    MCFOLD ::std::string const& $getTextToSpeechComponentValue() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
