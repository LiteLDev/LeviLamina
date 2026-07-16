#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/ScreenPerformanceTelemetry.h"
#include "mc/client/gui/oreui/interface/IView.h"
#include "mc/client/gui/oreui/interface/RouteMode.h"
#include "mc/client/gui/oreui/interface/ViewState.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/external/gameface/cohtml/ControlType.h"
#include "mc/external/gameface/cohtml/Cursors.h"
#include "mc/external/gameface/cohtml/IViewListener.h"
#include "mc/platform/brstd/flat_map.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
class IGamefaceTextInputProxy;
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
    ::ll::TypedStorage<8, 32, ::std::string>                                            mUrl;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::reference_wrapper<::OreUI::IScene>>> mScenes;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::OreUI::BedrockInputSource>>            mBedrockInputSource;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IClientInstance>>         mClientInstance;
    ::ll::TypedStorage<8, 8, ::KeyboardManager&>                                        mKeyboardManager;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::OreUI::FacetBinder>>                   mFacetBinder;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::OreUI::IFacetRegistry>>                mFacetRegistry;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::OreUI::Detail::Binder>>                mBinder;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::OreUI::Detail::ViewContext>>           mViewContext;
    ::ll::TypedStorage<8, 8, ::OreUI::ITelemetry&>                                      mTelemetry;
    ::ll::TypedStorage<8, 400, ::std::optional<::OreUI::ScreenPerformanceTelemetry>>    mScreenPerformanceTelemetry;
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
    virtual ~View() /*override*/ = default;

    virtual void pushCurrentScene(::OreUI::IScene&, ::OreUI::RouteMode) /*override*/;

    virtual bool hasScenes() const /*override*/;

    virtual void removeScene(::OreUI::IScene const&) /*override*/;

    virtual void update(double) /*override*/;

    virtual void render(::ScreenContext&) /*override*/;

    virtual void resize(uint, uint) /*override*/;

    virtual void reload() /*override*/;

    virtual void leave() /*override*/;

    virtual void onSuspend() /*override*/;

    virtual void onResume() /*override*/;

    virtual void onRouteChanged(
        ::std::optional<::OreUI::RouterLocation> const&,
        ::std::optional<::OreUI::RouterLocation> const&
    ) /*override*/;

    virtual ::std::string_view getUrl() const /*override*/;

    virtual ::OreUI::RouteMode getRouteMode() const /*override*/;

    virtual uint getWidth() const /*override*/;

    virtual uint getHeight() const /*override*/;

    virtual ::OreUI::ViewState getState() const /*override*/;

    virtual void setTextBoxState(::TextBoxStateChange const&) /*override*/;

    virtual void onKeyboardDismissed() /*override*/;

    virtual void setCaretLocation(int) /*override*/;

    virtual void triggerEvent(::std::string const&, ::std::string const&) /*override*/;

    virtual ::std::unique_ptr<::IGamefaceTextInputProxy> getTextInputProxy() /*override*/;

    virtual void OnLoadFailed(char const*, char const*) /*override*/;

    virtual void OnReadyForBindings() /*override*/;

    virtual void OnBindingsReleased() /*override*/;

    virtual ::cohtml::ScreenInfo OnScreenInfoRequested() /*override*/;

    virtual void OnTextInputTypeChanged(::cohtml::TextInputControlType::ControlType) /*override*/;

    virtual void OnCaretRectChanged(int, int, uint, uint) /*override*/;

    virtual void OnCursorChanged(::cohtml::CursorTypes::Cursors, char const*, float const*, float const*) /*override*/;

    virtual ::cohtml::IClientSideSocket*
    OnCreateWebSocket(::cohtml::ISocketListener*, char const*, char const**, uint) /*override*/;

    virtual void OnAudioStreamCreated(int, int, int, float) /*override*/;

    virtual void OnAudioStreamClosed(int) /*override*/;

    virtual void OnAudioStreamPlay(int) /*override*/;

    virtual void OnAudioStreamPause(int) /*override*/;

    virtual void OnAudioDataReceived(int, int, float**, int) /*override*/;

    virtual void OnAudioStreamEnded(int) /*override*/;

    virtual void OnAudioStreamVolumeChanged(int, float) /*override*/;

    virtual void OnClipboardTextSet(char const*, uint) /*override*/;

    virtual void OnClipboardTextGet(::cohtml::IViewListener::IClipboardData*) /*override*/;

    virtual ::OreUI::IViewTestHelper* getViewTestHelper() /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace OreUI
