#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/interface/RouteMode.h"
#include "mc/client/gui/oreui/interface/ViewState.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/input/TextBoxCaretMovement.h"

// auto generated forward declare list
// clang-format off
class ScreenContext;
struct TextBoxStateChange;
namespace OreUI { class IScene; }
namespace OreUI { class IViewTestHelper; }
namespace OreUI { class RouterLocation; }
namespace OreUI { struct ViewDebugSettings; }
// clang-format on

namespace OreUI {

class IView : public ::Bedrock::EnableNonOwnerReferences {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IView() /*override*/;

    virtual void pushCurrentScene(::OreUI::IScene&, ::OreUI::RouteMode) = 0;

    virtual bool hasScenes() const = 0;

    virtual void removeScene(::OreUI::IScene const&) = 0;

    virtual void update(double timestampMs) = 0;

    virtual void render(::ScreenContext&) = 0;

    virtual void resize(uint, uint) = 0;

    virtual void reload() = 0;

    virtual void leave() = 0;

    virtual void onSuspend() = 0;

    virtual void onResume() = 0;

    virtual void onRouteChanged(
        ::std::optional<::OreUI::RouterLocation> const&,
        ::std::optional<::OreUI::RouterLocation> const&
    ) = 0;

    virtual ::std::string_view getUrl() const = 0;

    virtual ::OreUI::RouteMode getRouteMode() const = 0;

    virtual uint getWidth() const = 0;

    virtual uint getHeight() const = 0;

    virtual ::OreUI::ViewState getState() const = 0;

    virtual void setTextBoxState(::TextBoxStateChange const& stateChange) = 0;

    virtual ::std::optional<int> calculateCaretPositionAfterMovement(::TextBoxCaretMovement movement) = 0;

    virtual void onKeyboardDismissed() = 0;

    virtual void setCaretLocation(int) = 0;

    virtual void triggerEvent(::std::string const&, ::std::string const&) = 0;

    virtual void setDebugSettings(::OreUI::ViewDebugSettings const&) = 0;

    virtual ::OreUI::IViewTestHelper* getViewTestHelper() = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace OreUI
