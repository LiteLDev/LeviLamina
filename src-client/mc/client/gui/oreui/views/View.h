#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/ScreenPerformanceTelemetry.h"
#include "mc/client/gui/oreui/interface/IView.h"
#include "mc/client/gui/oreui/interface/RouteMode.h"
#include "mc/client/gui/oreui/interface/ViewState.h"
#include "mc/deps/cohtml/Cursors.h"
#include "mc/deps/cohtml/IViewListener.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/input/TextBoxCaretMovement.h"
#include "mc/platform/brstd/flat_map.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
class IGamefaceTextInputProxy;
class IOptions;
class KeyboardManager;
class Option;
class ScreenContext;
struct TextBoxStateChange;
namespace OreUI { class BedrockInputSource; }
namespace OreUI { class FacetBinder; }
namespace OreUI { class IFacetRegistry; }
namespace OreUI { class IScene; }
namespace OreUI { class ITelemetry; }
namespace OreUI { class IViewTestHelper; }
namespace OreUI { class RouterLocation; }
namespace OreUI { class ViewInputHandler; }
namespace OreUI { class ViewRenderer; }
namespace OreUI::Detail { class Binder; }
namespace OreUI::Detail { class ViewContext; }
namespace OreUI::Detail { class ViewContextFactory; }
namespace cohtml { class IClientSideSocket; }
namespace cohtml { class ISocketListener; }
namespace cohtml { class View; }
namespace cohtml { struct ScreenInfo; }
// clang-format on

namespace OreUI {

class View : public ::OreUI::IView, public ::cohtml::IViewListener {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::cohtml::View*>                                           mGamefaceView;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::OreUI::ViewRenderer>>                  mRenderer;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::OreUI::ViewInputHandler>>              mInputHandler;
    ::ll::TypedStorage<8, 32, ::std::string const>                                      mUrl;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::reference_wrapper<::OreUI::IScene>>> mScenes;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::OreUI::BedrockInputSource>>            mBedrockInputSource;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IClientInstance>>         mClientInstance;
    ::ll::TypedStorage<8, 8, ::KeyboardManager&>                                        mKeyboardManager;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::OreUI::FacetBinder>>                   mFacetBinder;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::OreUI::IFacetRegistry>>                mFacetRegistry;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::OreUI::Detail::Binder>>                mBinder;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::OreUI::Detail::ViewContext>>           mViewContext;
    ::ll::TypedStorage<8, 8, ::OreUI::ITelemetry&>                                      mTelemetry;
    ::ll::TypedStorage<8, 256, ::std::optional<::OreUI::ScreenPerformanceTelemetry>>    mScreenPerformanceTelemetry;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>                             mUpdatedFacets;
    ::ll::TypedStorage<1, 1, ::OreUI::ViewState>                                        mState;
    ::ll::TypedStorage<4, 4, ::OreUI::RouteMode>                                        mRouteMode;
    ::ll::TypedStorage<8, 8, double>                                                    mLastUpdateTime;
    ::ll::TypedStorage<8, 8, double>                                                    mTimeStamp;
    ::ll::TypedStorage<8, 8, ::Option*>                                                 mScreenAnimationsOption;
    ::ll::
        TypedStorage<8, 48, ::brstd::flat_map<int, uint64, ::std::less<int>, ::std::vector<int>, ::std::vector<uint64>>>
            mAudioStreams;
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

    virtual ::std::unique_ptr<::IGamefaceTextInputProxy> getTextInputProxy() /*override*/;

    virtual void OnLoadFailed(char const* url, char const* error) /*override*/;

    virtual void OnReadyForBindings() /*override*/;

    virtual void OnBindingsReleased() /*override*/;

    virtual ::cohtml::ScreenInfo OnScreenInfoRequested() /*override*/;

    virtual void OnCaretRectChanged(int x, int y, uint width, uint height) /*override*/;

    virtual void
    OnCursorChanged(::cohtml::CursorTypes::Cursors cursor, char const*, float const*, float const*) /*override*/;

    virtual ::cohtml::IClientSideSocket* OnCreateWebSocket(
        ::cohtml::ISocketListener* listener,
        char const*                url,
        char const**               protocols,
        uint                       protocolsCount
    ) /*override*/;

    virtual void OnAudioStreamCreated(int id, int bitDepth, int channels, float samplingRate) /*override*/;

    virtual void OnAudioStreamClosed(int id) /*override*/;

    virtual void OnAudioStreamPlay(int id) /*override*/;

    virtual void OnAudioStreamPause(int id) /*override*/;

    virtual void OnAudioDataReceived(int id, int samples, float** pcm, int channels) /*override*/;

    virtual void OnAudioStreamEnded(int id) /*override*/;

    virtual void OnAudioStreamVolumeChanged(int id, float volume) /*override*/;

    virtual void OnClipboardTextSet(char const* text, uint lengthBytes) /*override*/;

    virtual void OnClipboardTextGet(::cohtml::IViewListener::IClipboardData* setDataObject) /*override*/;

    virtual ::OreUI::IViewTestHelper* getViewTestHelper() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI View(
        ::std::string                                    url,
        ::std::unique_ptr<::OreUI::BedrockInputSource>   bedrockInputSource,
        ::Bedrock::NotNullNonOwnerPtr<::IClientInstance> clientInstance,
        ::KeyboardManager&                               keyboardManager,
        ::std::unique_ptr<::OreUI::IFacetRegistry>       facetRegistry,
        ::OreUI::ITelemetry&                             telemetry
    );

    MCAPI void _unload();

    MCAPI void flushAudioStreams();

    MCAPI void initialize(
        ::cohtml::View&                              gamefaceView,
        ::std::unique_ptr<::OreUI::ViewRenderer>     renderer,
        ::std::unique_ptr<::OreUI::ViewInputHandler> inputHandler,
        ::OreUI::Detail::ViewContextFactory&         contextFactory,
        ::IOptions&                                  options
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::string                                    url,
        ::std::unique_ptr<::OreUI::BedrockInputSource>   bedrockInputSource,
        ::Bedrock::NotNullNonOwnerPtr<::IClientInstance> clientInstance,
        ::KeyboardManager&                               keyboardManager,
        ::std::unique_ptr<::OreUI::IFacetRegistry>       facetRegistry,
        ::OreUI::ITelemetry&                             telemetry
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

    MCAPI ::std::unique_ptr<::IGamefaceTextInputProxy> $getTextInputProxy();

    MCAPI void $OnLoadFailed(char const* url, char const* error);

    MCAPI void $OnReadyForBindings();

    MCAPI void $OnBindingsReleased();

    MCAPI ::cohtml::ScreenInfo $OnScreenInfoRequested();

    MCAPI void $OnCaretRectChanged(int x, int y, uint width, uint height);

    MCAPI void $OnCursorChanged(::cohtml::CursorTypes::Cursors cursor, char const*, float const*, float const*);

    MCFOLD ::cohtml::IClientSideSocket* $OnCreateWebSocket(
        ::cohtml::ISocketListener* listener,
        char const*                url,
        char const**               protocols,
        uint                       protocolsCount
    );

    MCAPI void $OnAudioStreamCreated(int id, int bitDepth, int channels, float samplingRate);

    MCAPI void $OnAudioStreamClosed(int id);

    MCAPI void $OnAudioStreamPlay(int id);

    MCAPI void $OnAudioStreamPause(int id);

    MCAPI void $OnAudioDataReceived(int id, int samples, float** pcm, int channels);

    MCAPI void $OnAudioStreamEnded(int id);

    MCAPI void $OnAudioStreamVolumeChanged(int id, float volume);

    MCAPI void $OnClipboardTextSet(char const* text, uint lengthBytes);

    MCAPI void $OnClipboardTextGet(::cohtml::IViewListener::IClipboardData* setDataObject);

    MCFOLD ::OreUI::IViewTestHelper* $getViewTestHelper();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForIView();

    MCNAPI static void** $vftableForIViewListener();
    // NOLINTEND
};

} // namespace OreUI
