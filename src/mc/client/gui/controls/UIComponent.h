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
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~UIComponent() = default;

    // vIndex: 1
    virtual ::std::unique_ptr<::UIComponent> clone(::UIControl&) const = 0;

    // vIndex: 3
    virtual ::ComponentReceiveActionType
    receive(::VisualTree&, ::ScreenInputContext&, ::UIAnimationController&, ::ScreenEvent const&);

    // vIndex: 2
    virtual ::ComponentReceiveActionType receive(::ScreenEvent const&);

    // vIndex: 4
    virtual void onNotifyChildAdded();

    // vIndex: 5
    virtual void onNotifyChildRemoved();

    // vIndex: 6
    virtual void onRemoved();

    // vIndex: 7
    virtual void onAdded();

    // vIndex: 8
    virtual void onVisibilityChanged(bool);

    // vIndex: 9
    virtual void onEnabledChanged(bool);

    // vIndex: 10
    virtual bool isRenderableComponent();

    // vIndex: 11
    virtual bool onLayoutChange();

    // vIndex: 12
    virtual void reset() = 0;

    // vIndex: 13
    virtual void reload(::UIComponent const&);

    // vIndex: 14
    virtual ::std::string const& getTextToSpeechComponentValue() const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
