#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/ScreenPerformanceTelemetry.h"
#include "mc/client/gui/oreui/binding/FacetBinder.h"
#include "mc/client/gui/oreui/binding/experimental/Binder.h"
#include "mc/client/gui/oreui/interface/ICohtmlViewListener.h"
#include "mc/client/gui/oreui/interface/IView.h"
#include "mc/client/gui/oreui/interface/RouteMode.h"
#include "mc/client/gui/oreui/interface/ViewState.h"
#include "mc/deps/input/TextBoxCaretMovement.h"

// auto generated forward declare list
// clang-format off
class KeyboardManager;
class Option;
class ScreenContext;
struct TextBoxStateChange;
namespace OreUI { class BedrockInputSource; }
namespace OreUI { class IFacetRegistry; }
namespace OreUI { class IScene; }
namespace OreUI { class ITelemetry; }
namespace OreUI { class IViewTestHelper; }
namespace OreUI { class RouterLocation; }
namespace OreUI { class SceneInputHandler; }
namespace OreUI { class ViewListenerWrapper; }
namespace OreUI { class ViewRenderer; }
namespace OreUI { struct ScreenInfo; }
namespace OreUI { struct ViewDebugSettings; }
namespace OreUI::Experimental::Detail { class ViewContext; }
namespace OreUI::Experimental::Detail { class ViewContextFactory; }
namespace cohtml { class View; }
// clang-format on

namespace OreUI {

class View : public ::OreUI::IView, public ::OreUI::ICohtmlViewListener {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::cohtml::View&>                                               mCohtmlView;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::OreUI::ViewRenderer>>                      mViewRenderer;
    ::ll::TypedStorage<8, 32, ::std::string const>                                          mUrl;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::OreUI::ViewListenerWrapper>>               mViewListenerWrapper;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::reference_wrapper<::OreUI::IScene>>>     mScenes;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::OreUI::SceneInputHandler>>                 mInputHandler;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::OreUI::BedrockInputSource>>                mBedrockInputSource;
    ::ll::TypedStorage<8, 8, ::KeyboardManager&>                                            mKeyboardManager;
    ::ll::TypedStorage<8, 8, ::OreUI::FacetBinder>                                          mFacetBinder;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::OreUI::IFacetRegistry>>                    mFacetRegistry;
    ::ll::TypedStorage<8, 8, ::OreUI::Experimental::Detail::Binder>                         mBinder;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::OreUI::Experimental::Detail::ViewContext>> mViewContext;
    ::ll::TypedStorage<8, 8, ::OreUI::ITelemetry&>                                          mTelemetry;
    ::ll::TypedStorage<8, 256, ::std::optional<::OreUI::ScreenPerformanceTelemetry>>        mScreenPerformanceTelemetry;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>                                 mUpdatedFacets;
    ::ll::TypedStorage<1, 1, ::OreUI::ViewState>                                            mState;
    ::ll::TypedStorage<4, 4, ::OreUI::RouteMode>                                            mRouteMode;
    ::ll::TypedStorage<8, 8, double>                                                        mLastUpdateTime;
    ::ll::TypedStorage<8, 8, double>                                                        mTimeStamp;
    ::ll::TypedStorage<8, 8, ::Option*>                                                     mScreenAnimationsOption;
    // NOLINTEND

public:
    // prevent constructor by default
    View& operator=(View const&);
    View(View const&);
    View();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~View() /*override*/;

    virtual void pushCurrentScene(::OreUI::IScene& scene, ::OreUI::RouteMode routeMode) /*override*/;

    virtual bool hasScenes() const /*override*/;

    virtual void removeScene(::OreUI::IScene const& scene) /*override*/;

    virtual void update(double timestampMs) /*override*/;

    virtual void render(::ScreenContext& screenContext) /*override*/;

    virtual void resize(uint width, uint height) /*override*/;

    virtual void reload() /*override*/;

    virtual void leave() /*override*/;

    virtual void onSuspend() /*override*/;

    virtual void onResume() /*override*/;

    virtual void onRouteChanged(
        ::std::optional<::OreUI::RouterLocation> const& previousLocation,
        ::std::optional<::OreUI::RouterLocation> const& currentLocation
    ) /*override*/;

    virtual ::std::string_view getUrl() const /*override*/;

    virtual ::OreUI::RouteMode getRouteMode() const /*override*/;

    virtual uint getWidth() const /*override*/;

    virtual uint getHeight() const /*override*/;

    virtual ::OreUI::ViewState getState() const /*override*/;

    virtual void setTextBoxState(::TextBoxStateChange const& stateChange) /*override*/;

    virtual ::std::optional<int> calculateCaretPositionAfterMovement(::TextBoxCaretMovement movement) /*override*/;

    virtual void onKeyboardDismissed() /*override*/;

    virtual void setCaretLocation(int caretLocation) /*override*/;

    virtual void triggerEvent(::std::string const& eventName, ::std::string const& eventData) /*override*/;

    virtual void setDebugSettings(::OreUI::ViewDebugSettings const& viewSettings) /*override*/;

    virtual ::OreUI::IViewTestHelper* getViewTestHelper() /*override*/;

    virtual void onLoadSucceeded(char const*) /*override*/;

    virtual void onLoadFailed(char const* url, char const* error) /*override*/;

    virtual void onBindingsReleased() /*override*/;

    virtual void onReadyForBindings() /*override*/;

    virtual ::OreUI::ScreenInfo onScreenInfoRequested() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI View(
        ::cohtml::View&                                    view,
        ::std::unique_ptr<::OreUI::ViewRenderer>           viewRenderer,
        ::std::string                                      url,
        ::std::unique_ptr<::OreUI::ViewListenerWrapper>    viewListenerWrapper,
        ::std::unique_ptr<::OreUI::SceneInputHandler>      inputHandler,
        ::std::unique_ptr<::OreUI::BedrockInputSource>     bedrockInputSource,
        ::KeyboardManager&                                 keyboardManager,
        ::std::unique_ptr<::OreUI::IFacetRegistry>         facetRegistry,
        ::OreUI::Experimental::Detail::ViewContextFactory& contextFactory,
        ::OreUI::ITelemetry&                               telemetry,
        ::Option*                                          screenAnimationsOption
    );

    MCAPI void _unload();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::cohtml::View&                                    view,
        ::std::unique_ptr<::OreUI::ViewRenderer>           viewRenderer,
        ::std::string                                      url,
        ::std::unique_ptr<::OreUI::ViewListenerWrapper>    viewListenerWrapper,
        ::std::unique_ptr<::OreUI::SceneInputHandler>      inputHandler,
        ::std::unique_ptr<::OreUI::BedrockInputSource>     bedrockInputSource,
        ::KeyboardManager&                                 keyboardManager,
        ::std::unique_ptr<::OreUI::IFacetRegistry>         facetRegistry,
        ::OreUI::Experimental::Detail::ViewContextFactory& contextFactory,
        ::OreUI::ITelemetry&                               telemetry,
        ::Option*                                          screenAnimationsOption
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $pushCurrentScene(::OreUI::IScene& scene, ::OreUI::RouteMode routeMode);

    MCAPI bool $hasScenes() const;

    MCAPI void $removeScene(::OreUI::IScene const& scene);

    MCAPI void $update(double timestampMs);

    MCAPI void $render(::ScreenContext& screenContext);

    MCAPI void $resize(uint width, uint height);

    MCAPI void $reload();

    MCAPI void $leave();

    MCAPI void $onSuspend();

    MCAPI void $onResume();

    MCAPI void $onRouteChanged(
        ::std::optional<::OreUI::RouterLocation> const& previousLocation,
        ::std::optional<::OreUI::RouterLocation> const& currentLocation
    );

    MCAPI ::std::string_view $getUrl() const;

    MCAPI ::OreUI::RouteMode $getRouteMode() const;

    MCAPI uint $getWidth() const;

    MCAPI uint $getHeight() const;

    MCAPI void $setTextBoxState(::TextBoxStateChange const& stateChange);

    MCAPI ::std::optional<int> $calculateCaretPositionAfterMovement(::TextBoxCaretMovement movement);

    MCAPI void $onKeyboardDismissed();

    MCAPI void $setCaretLocation(int caretLocation);

    MCAPI void $triggerEvent(::std::string const& eventName, ::std::string const& eventData);

    MCAPI void $setDebugSettings(::OreUI::ViewDebugSettings const& viewSettings);

    MCFOLD ::OreUI::IViewTestHelper* $getViewTestHelper();

    MCFOLD void $onLoadSucceeded(char const*);

    MCAPI void $onLoadFailed(char const* url, char const* error);

    MCAPI void $onBindingsReleased();

    MCAPI void $onReadyForBindings();

    MCAPI ::OreUI::ScreenInfo $onScreenInfoRequested();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForICohtmlViewListener();

    MCNAPI static void** $vftableForIView();
    // NOLINTEND
};

} // namespace OreUI
