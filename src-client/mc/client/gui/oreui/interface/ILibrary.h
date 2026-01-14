#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/interface/ViewCacheMode.h"
#include "mc/client/gui/oreui/interface/ViewState.h"
#include "mc/common/SubClientId.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
class TaskGroup;
namespace Core { class Path; }
namespace OreUI { struct IFacetRegistry; }
namespace OreUI { struct IViewProvider; }
namespace OreUI { struct ViewId; }
namespace OreUI::Experimental::Detail { struct ViewContextFactory; }
namespace mce { class RenderContext; }
namespace mce { struct ShaderGroup; }
// clang-format on

namespace OreUI {

class ILibrary : public ::Bedrock::EnableNonOwnerReferences {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ILibrary() /*override*/;

    virtual void initializeRendering(::Bedrock::NonOwnerPointer<::mce::ShaderGroup>, ::mce::RenderContext&) = 0;

    virtual void initializeViewsCoordinator() = 0;

    virtual void initializeAssetsAsynchronously(::TaskGroup&, ::Core::Path const&) = 0;

    virtual bool assetsInitialized() const = 0;

    virtual void update(double timestampMs) = 0;

    virtual ::OreUI::ViewId createView(
        ::OreUI::Experimental::Detail::ViewContextFactory& contextFactory,
        ::std::string const&                               viewPath,
        ::std::unique_ptr<::OreUI::IFacetRegistry>         facets,
        ::IClientInstance&                                 clientInstance,
        ::OreUI::ViewCacheMode                             viewCacheMode
    ) = 0;

    virtual void reloadAllViews() = 0;

    virtual void clearUnusedCachedViews(::SubClientId subClientId) = 0;

    virtual ::std::vector<::std::pair<::std::string, ::std::optional<::OreUI::ViewState>>>
    getCachedViewsState(::SubClientId subClientId) const = 0;

    virtual ::Bedrock::NotNullNonOwnerPtr<::OreUI::IViewProvider> getViewProvider() = 0;

    virtual void onAppPreSuspended(::mce::RenderContext&) = 0;

    virtual void onAppResumed(::Bedrock::NonOwnerPointer<::mce::ShaderGroup> const&) = 0;

    virtual void onActiveResourcePacksChanged() = 0;

    virtual void setCompleteUninitialization() = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace OreUI
