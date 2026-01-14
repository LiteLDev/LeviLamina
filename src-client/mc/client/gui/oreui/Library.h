#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/interface/ILibrary.h"
#include "mc/client/gui/oreui/interface/ViewCacheMode.h"
#include "mc/client/gui/oreui/interface/ViewState.h"
#include "mc/common/SubClientId.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
class ResourcePackManager;
class TaskGroup;
namespace Core { class Path; }
namespace OreUI { struct DebugData; }
namespace OreUI { struct IFacetRegistry; }
namespace OreUI { struct IViewProvider; }
namespace OreUI { struct MemoryTracker; }
namespace OreUI { struct ResourceHandlerBroker; }
namespace OreUI { struct TemporaryTextureHolder; }
namespace OreUI { struct ViewId; }
namespace OreUI::Experimental::Detail { struct ViewContextFactory; }
namespace cohtml { class IAllocator; }
namespace cohtml { class IFileSystemReader; }
namespace cohtml { class IVirtualAllocator; }
namespace cohtml { struct PlatformSpecificParams; }
namespace cohtml::Logging { class ILogHandler; }
namespace mce { class RenderContext; }
namespace mce { struct ShaderGroup; }
// clang-format on

namespace OreUI {

class Library : public ::OreUI::ILibrary {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>   mUnka8234b;
    ::ll::UntypedStorage<8, 8>   mUnk649e30;
    ::ll::UntypedStorage<8, 8>   mUnk985412;
    ::ll::UntypedStorage<8, 8>   mUnk968968;
    ::ll::UntypedStorage<8, 8>   mUnka8f6df;
    ::ll::UntypedStorage<8, 8>   mUnk476135;
    ::ll::UntypedStorage<8, 8>   mUnk68299f;
    ::ll::UntypedStorage<8, 8>   mUnk1a7462;
    ::ll::UntypedStorage<8, 8>   mUnk31fa7b;
    ::ll::UntypedStorage<8, 8>   mUnk5886ab;
    ::ll::UntypedStorage<8, 8>   mUnk605dd3;
    ::ll::UntypedStorage<8, 8>   mUnk3bc6b8;
    ::ll::UntypedStorage<8, 8>   mUnke58392;
    ::ll::UntypedStorage<8, 8>   mUnk1b9e17;
    ::ll::UntypedStorage<8, 8>   mUnka98490;
    ::ll::UntypedStorage<8, 8>   mUnk622941;
    ::ll::UntypedStorage<8, 8>   mUnk955deb;
    ::ll::UntypedStorage<1, 1>   mUnk7b1fc6;
    ::ll::UntypedStorage<1, 1>   mUnkf3fca3;
    ::ll::UntypedStorage<1, 1>   mUnk5a7937;
    ::ll::UntypedStorage<8, 16>  mUnkb73c50;
    ::ll::UntypedStorage<8, 104> mUnkc82d70;
    // NOLINTEND

public:
    // prevent constructor by default
    Library& operator=(Library const&);
    Library(Library const&);
    Library();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Library() /*override*/;

    virtual void initializeRendering(
        ::Bedrock::NonOwnerPointer<::mce::ShaderGroup> shaderGroup,
        ::mce::RenderContext&                          renderContext
    ) /*override*/;

    virtual void initializeViewsCoordinator() /*override*/;

    virtual void initializeAssetsAsynchronously(::TaskGroup& taskGroup, ::Core::Path const& packagePath) /*override*/;

    virtual bool assetsInitialized() const /*override*/;

    virtual void update(double timestampMs) /*override*/;

    virtual void onAppPreSuspended(::mce::RenderContext&) /*override*/;

    virtual void onAppResumed(::Bedrock::NonOwnerPointer<::mce::ShaderGroup> const& shaderGroup) /*override*/;

    virtual void onActiveResourcePacksChanged() /*override*/;

    virtual ::OreUI::ViewId createView(
        ::OreUI::Experimental::Detail::ViewContextFactory& contextFactory,
        ::std::string const&                               viewPath,
        ::std::unique_ptr<::OreUI::IFacetRegistry>         facets,
        ::IClientInstance&                                 clientInstance,
        ::OreUI::ViewCacheMode                             viewCacheMode
    ) /*override*/;

    virtual void reloadAllViews() /*override*/;

    virtual void clearUnusedCachedViews(::SubClientId subClientId) /*override*/;

    virtual ::std::vector<::std::pair<::std::string, ::std::optional<::OreUI::ViewState>>>
    getCachedViewsState(::SubClientId subClientId) const /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::OreUI::IViewProvider> getViewProvider() /*override*/;

    virtual void setCompleteUninitialization() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Library(
        ::cohtml::PlatformSpecificParams const&           platformParams,
        ::std::unique_ptr<::cohtml::IAllocator>           allocator,
        ::std::unique_ptr<::cohtml::IFileSystemReader>    fileSystemReader,
        ::Core::Path const&                               packagePath,
        ::std::unique_ptr<::OreUI::ResourceHandlerBroker> resourceHandler,
        ::std::unique_ptr<::cohtml::Logging::ILogHandler> logHandler,
        ::OreUI::MemoryTracker&                           memoryTracker,
        ::OreUI::TemporaryTextureHolder&                  temporaryTextureHolder,
        ::ResourcePackManager const&                      packManager,
        ::OreUI::DebugData&                               debugData
    );

    MCAPI void _initializeSystem(::cohtml::PlatformSpecificParams const& platformParams);

    MCAPI void _loadFonts(::Core::Path const& packagePath);

    MCAPI void _loadICUData(::TaskGroup& taskGroup, ::Core::Path const& packagePath);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::unique_ptr<::cohtml::IVirtualAllocator>& mVirtualAllocator();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::cohtml::PlatformSpecificParams const&           platformParams,
        ::std::unique_ptr<::cohtml::IAllocator>           allocator,
        ::std::unique_ptr<::cohtml::IFileSystemReader>    fileSystemReader,
        ::Core::Path const&                               packagePath,
        ::std::unique_ptr<::OreUI::ResourceHandlerBroker> resourceHandler,
        ::std::unique_ptr<::cohtml::Logging::ILogHandler> logHandler,
        ::OreUI::MemoryTracker&                           memoryTracker,
        ::OreUI::TemporaryTextureHolder&                  temporaryTextureHolder,
        ::ResourcePackManager const&                      packManager,
        ::OreUI::DebugData&                               debugData
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
    MCAPI void $initializeRendering(
        ::Bedrock::NonOwnerPointer<::mce::ShaderGroup> shaderGroup,
        ::mce::RenderContext&                          renderContext
    );

    MCAPI void $initializeViewsCoordinator();

    MCAPI void $initializeAssetsAsynchronously(::TaskGroup& taskGroup, ::Core::Path const& packagePath);

    MCFOLD bool $assetsInitialized() const;

    MCAPI void $update(double timestampMs);

    MCAPI void $onAppPreSuspended(::mce::RenderContext&);

    MCAPI void $onAppResumed(::Bedrock::NonOwnerPointer<::mce::ShaderGroup> const& shaderGroup);

    MCFOLD void $onActiveResourcePacksChanged();

    MCAPI ::OreUI::ViewId $createView(
        ::OreUI::Experimental::Detail::ViewContextFactory& contextFactory,
        ::std::string const&                               viewPath,
        ::std::unique_ptr<::OreUI::IFacetRegistry>         facets,
        ::IClientInstance&                                 clientInstance,
        ::OreUI::ViewCacheMode                             viewCacheMode
    );

    MCFOLD void $reloadAllViews();

    MCAPI void $clearUnusedCachedViews(::SubClientId subClientId);

    MCAPI ::std::vector<::std::pair<::std::string, ::std::optional<::OreUI::ViewState>>>
    $getCachedViewsState(::SubClientId subClientId) const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::OreUI::IViewProvider> $getViewProvider();

    MCAPI void $setCompleteUninitialization();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
