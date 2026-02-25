#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/ViewCacheMode.h"
#include "mc/client/gui/oreui/interface/IViewProvider.h"
#include "mc/client/gui/oreui/interface/ViewId.h"
#include "mc/client/gui/oreui/views/ViewsCacheRegistry.h"
#include "mc/common/SubClientId.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/input/TextBoxCaretMovement.h"
#include "mc/platform/brstd/flat_map.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
struct TextBoxStateChange;
namespace OreUI { class FramesToPaintQueue; }
namespace OreUI { class IFacetRegistry; }
namespace OreUI { class IView; }
namespace OreUI { class LayoutScheduler; }
namespace OreUI { class MemoryTracker; }
namespace OreUI { class SceneInputHandler; }
namespace OreUI { class ViewListenerWrapper; }
namespace OreUI { struct DebugData; }
namespace OreUI::Experimental::Detail { class ViewContextFactory; }
namespace cohtml { class ITimeZoneProvider; }
namespace cohtml { class System; }
namespace cohtml { class SystemRenderer; }
namespace cohtml { class View; }
// clang-format on

namespace OreUI {

class ViewsCoordinator : public ::OreUI::IViewProvider {
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
    ::ll::TypedStorage<8, 8, ::OreUI::MemoryTracker&>                              mMemoryTracker;
    ::ll::TypedStorage<8, 8, ::OreUI::LayoutScheduler&>                            mLayoutScheduler;
    ::ll::TypedStorage<8, 8, ::OreUI::FramesToPaintQueue&>                         mFramesToPaint;
    ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::ViewsCoordinator::ViewEntry>> mViews;
    ::ll::TypedStorage<8, 96, ::OreUI::ViewsCacheRegistry>                         mViewsCacheRegistry;
    ::ll::TypedStorage<8, 8, ::OreUI::DebugData&>                                  mDebugData;
    ::ll::TypedStorage<
        8,
        56,
        ::brstd::flat_map<
            ::OreUI::ViewId,
            ::std::chrono::nanoseconds,
            ::std::less<::OreUI::ViewId>,
            ::std::vector<::OreUI::ViewId>,
            ::std::vector<::std::chrono::nanoseconds>>>
        mLastUpdateDurations;
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
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::unique_ptr<::OreUI::SceneInputHandler> _createInputHandler(
        ::cohtml::View&               cohtmlView,
        ::OreUI::ViewListenerWrapper& viewListenerWrapper,
        ::IClientInstance&            clientInstance
    ) const;

    MCAPI ::OreUI::ViewId _createView(
        ::OreUI::Experimental::Detail::ViewContextFactory& contextFactory,
        ::IClientInstance&                                 clientInstance,
        ::std::string const&                               url,
        ::std::unique_ptr<::OreUI::IFacetRegistry>         facets
    );

    MCAPI void _destroyView(::OreUI::ViewId viewId);

    MCAPI ::std::vector<::OreUI::ViewId> _getViewIds();

    MCAPI ::std::optional<int> calculateCaretPositionAfterMovement(::TextBoxCaretMovement movement);

    MCAPI void clearUnusedCachedViews(::SubClientId subClientId);

    MCAPI ::OreUI::ViewId createView(
        ::OreUI::Experimental::Detail::ViewContextFactory& contextFactory,
        ::std::string const&                               viewPath,
        ::std::unique_ptr<::OreUI::IFacetRegistry>         facets,
        ::IClientInstance&                                 clientInstance,
        ::OreUI::ViewCacheMode                             viewCacheMode
    );

    MCAPI void onKeyboardDismissed();

    MCAPI void setTextBoxState(::TextBoxStateChange const& stateChange);

    MCAPI void update(double time);
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
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
