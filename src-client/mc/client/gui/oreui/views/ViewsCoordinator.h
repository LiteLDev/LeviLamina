#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/ViewCacheMode.h"
#include "mc/client/gui/oreui/interface/IViewProvider.h"
#include "mc/client/gui/oreui/interface/ViewId.h"
#include "mc/client/gui/oreui/rendering/IOffscreenRenderer.h"
#include "mc/client/gui/oreui/views/FramesToPaintQueue.h"
#include "mc/client/gui/oreui/views/ViewsCacheRegistry.h"
#include "mc/common/SubClientId.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
class IGamefaceTextInputProxy;
class ScreenContext;
struct TextBoxStateChange;
namespace Input::Debug { class ISplitscreenRedirect; }
namespace OreUI { class IFacetRegistry; }
namespace OreUI { class IView; }
namespace OreUI { class LayoutScheduler; }
namespace OreUI { class Router; }
namespace OreUI::Detail { class BindingRegistryFactory; }
namespace cohtml { class ITimeZoneProvider; }
namespace cohtml { class System; }
namespace cohtml { class SystemRenderer; }
// clang-format on

namespace OreUI {

class ViewsCoordinator : public ::OreUI::IViewProvider, public ::Gameface::IOffscreenRenderer {
public:
    // ViewsCoordinator inner types declare
    // clang-format off
    struct ViewEntry;
    // clang-format on

    // ViewsCoordinator inner types define
    struct ViewEntry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, ::OreUI::ViewId>                   viewId;
        ::ll::TypedStorage<8, 8, ::std::unique_ptr<::OreUI::IView>> view;
        ::ll::TypedStorage<1, 1, ::SubClientId>                     subClientId;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::cohtml::System*>                                    mSystem;
    ::ll::TypedStorage<8, 8, ::cohtml::SystemRenderer*>                            mSystemRenderer;
    ::ll::TypedStorage<8, 8, ::cohtml::ITimeZoneProvider*>                         mTimeZoneProvider;
    ::ll::TypedStorage<8, 8, ::OreUI::LayoutScheduler&>                            mLayoutScheduler;
    ::ll::TypedStorage<8, 104, ::OreUI::FramesToPaintQueue>                        mFramesToPaint;
    ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::ViewsCoordinator::ViewEntry>> mViews;
    ::ll::TypedStorage<8, 96, ::OreUI::ViewsCacheRegistry>                         mViewsCacheRegistry;
    ::ll::TypedStorage<8, 64, ::std::function<void(::std::string_view)>>           mShowDebugToast;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::Input::Debug::ISplitscreenRedirect>>
        mDebugSplitscreenInputRedirect;
    // NOLINTEND

public:
    // prevent constructor by default
    ViewsCoordinator& operator=(ViewsCoordinator const&);
    ViewsCoordinator(ViewsCoordinator const&);
    ViewsCoordinator();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ViewsCoordinator() /*override*/;

    virtual ::Bedrock::NonOwnerPointer<::OreUI::IView> get(::OreUI::ViewId viewId) const /*override*/;

    virtual void discard(::OreUI::ViewId viewId) /*override*/;

    virtual void renderOffscreen(::ScreenContext& screenContext) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ViewsCoordinator(
        ::cohtml::System*                                                          system,
        ::cohtml::SystemRenderer*                                                  systemRenderer,
        ::cohtml::ITimeZoneProvider*                                               timeZoneProvider,
        ::OreUI::LayoutScheduler&                                                  layoutScheduler,
        ::std::function<void(::std::string_view)>                                  showDebugToast,
        ::Bedrock::NotNullNonOwnerPtr<::Input::Debug::ISplitscreenRedirect> const& debugSplitscreenInputRedirect
    );

    MCAPI void _destroyView(::OreUI::ViewId viewId);

    MCAPI ::std::vector<::OreUI::ViewId> _getViewIds();

    MCAPI void clearUnusedCachedViews(::SubClientId subClientId);

    MCAPI ::OreUI::ViewId createView(
        ::OreUI::Detail::BindingRegistryFactory&   bindingRegistryFactory,
        ::OreUI::Router&                           router,
        ::std::string const&                       viewPath,
        ::std::unique_ptr<::OreUI::IFacetRegistry> facets,
        ::IClientInstance&                         clientInstance,
        ::OreUI::ViewCacheMode                     viewCacheMode
    );

    MCAPI ::std::unique_ptr<::IGamefaceTextInputProxy> getTextInputProxy();

    MCAPI void onKeyboardDismissed();

    MCAPI void setTextBoxState(::TextBoxStateChange const& stateChange);

    MCAPI void update(double time);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::cohtml::System*                                                          system,
        ::cohtml::SystemRenderer*                                                  systemRenderer,
        ::cohtml::ITimeZoneProvider*                                               timeZoneProvider,
        ::OreUI::LayoutScheduler&                                                  layoutScheduler,
        ::std::function<void(::std::string_view)>                                  showDebugToast,
        ::Bedrock::NotNullNonOwnerPtr<::Input::Debug::ISplitscreenRedirect> const& debugSplitscreenInputRedirect
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
    MCAPI ::Bedrock::NonOwnerPointer<::OreUI::IView> $get(::OreUI::ViewId viewId) const;

    MCAPI void $discard(::OreUI::ViewId viewId);

    MCAPI void $renderOffscreen(::ScreenContext& screenContext);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForIOffscreenRenderer();

    MCNAPI static void** $vftableForIViewProvider();
    // NOLINTEND
};

} // namespace OreUI
