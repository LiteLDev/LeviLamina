#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/interface/RouteMode.h"
#include "mc/client/gui/oreui/interface/ViewState.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/input/TextBoxCaretMovement.h"

// auto generated forward declare list
// clang-format off
class IGamefaceTextInputProxy;
class ScreenContext;
struct TextBoxStateChange;
namespace OreUI { class IScene; }
namespace OreUI { class IViewTestHelper; }
namespace OreUI { class RouterLocation; }
// clang-format on

namespace OreUI {

class IView : public ::Bedrock::EnableNonOwnerReferences {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IView() /*override*/;

    virtual void pushCurrentScene(::OreUI::IScene& scene, ::OreUI::RouteMode routeMode) = 0;

    virtual bool hasScenes() const = 0;

    virtual void removeScene(::OreUI::IScene const& scene) = 0;

    virtual void update(double time) = 0;

    virtual void render(::ScreenContext& screenContext) = 0;

    virtual void resize(uint width, uint height) = 0;

    virtual void reload() = 0;

    virtual void leave() = 0;

    virtual void onSuspend() = 0;

    virtual void onResume() = 0;

    virtual void onRouteChanged(
        ::std::optional<::OreUI::RouterLocation> const& previousLocation,
        ::std::optional<::OreUI::RouterLocation> const& currentLocation
    ) = 0;

    virtual ::std::string_view getUrl() const = 0;

    virtual ::OreUI::RouteMode getRouteMode() const = 0;

    virtual uint getWidth() const = 0;

    virtual uint getHeight() const = 0;

    virtual ::OreUI::ViewState getState() const = 0;

    virtual void setTextBoxState(::TextBoxStateChange const& stateChange) = 0;

    virtual ::std::optional<int> calculateCaretPositionAfterMovement(::TextBoxCaretMovement movement) = 0;

    virtual void onKeyboardDismissed() = 0;

    virtual void setCaretLocation(int caretLocation) = 0;

    virtual void triggerEvent(::std::string const& eventName, ::std::string const& eventData) = 0;

    virtual ::std::unique_ptr<::IGamefaceTextInputProxy> getTextInputProxy() = 0;

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

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
