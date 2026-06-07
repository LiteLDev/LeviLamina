#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/interface/IResourceHandler.h"
#include "mc/client/gui/oreui/interface/ResourceHandlerStatus.h"

// auto generated forward declare list
// clang-format off
class ResourceLocation;
class ResourcePackManager;
namespace Gameface { class ResourceResponse; }
namespace Gameface { class ResourceStreamResponse; }
namespace Gameface { class TemporaryTextureHolder; }
namespace Gameface { struct ResourceRequest; }
// clang-format on

namespace OreUI {

class PackResourceHandler : public ::Gameface::IResourceHandler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ResourcePackManager const&>        mPackManager;
    ::ll::TypedStorage<8, 8, ::Gameface::TemporaryTextureHolder&> mTemporaryTextureHolder;
    // NOLINTEND

public:
    // prevent constructor by default
    PackResourceHandler& operator=(PackResourceHandler const&);
    PackResourceHandler(PackResourceHandler const&);
    PackResourceHandler();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PackResourceHandler() /*override*/ = default;

    virtual ::Gameface::ResourceHandlerStatus
    onResourceRequest(::Gameface::ResourceRequest const& request, ::Gameface::ResourceResponse& response) /*override*/;

    virtual ::Gameface::ResourceHandlerStatus onResourceStreamRequest(
        ::Gameface::ResourceRequest const&  request,
        ::Gameface::ResourceStreamResponse& response
    ) /*override*/;

    virtual void update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PackResourceHandler(
        ::ResourcePackManager const&        packManager,
        ::Gameface::TemporaryTextureHolder& temporaryTextureHolder
    );

    MCAPI ::std::optional<::ResourceLocation>
    _getAssetResourceLocationFromResourcePackManager(::Gameface::ResourceRequest const& request) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
    $ctor(::ResourcePackManager const& packManager, ::Gameface::TemporaryTextureHolder& temporaryTextureHolder);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::Gameface::ResourceHandlerStatus
    $onResourceRequest(::Gameface::ResourceRequest const& request, ::Gameface::ResourceResponse& response);

    MCAPI ::Gameface::ResourceHandlerStatus
    $onResourceStreamRequest(::Gameface::ResourceRequest const& request, ::Gameface::ResourceStreamResponse& response);

    MCFOLD void $update();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
