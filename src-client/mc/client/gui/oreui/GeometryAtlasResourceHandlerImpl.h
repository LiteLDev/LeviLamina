#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/interface/IResourceHandler.h"
#include "mc/client/gui/oreui/interface/ResourceHandlerStatus.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
namespace Gameface { class ResourceResponse; }
namespace Gameface { class ResourceStreamResponse; }
namespace Gameface { class TemporaryTextureHolder; }
namespace Gameface { struct ResourceRequest; }
namespace GeometryAtlas { class IAtlasTile; }
namespace GeometryAtlas { struct TileDefinition; }
namespace OreUI { class IGeometryAtlasKnownTilesWriter; }
namespace OreUI { class ITileResourceResolver; }
namespace OreUI { class ItemTileCache; }
// clang-format on

namespace OreUI {

class GeometryAtlasResourceHandlerImpl : public ::Gameface::IResourceHandler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::std::shared_ptr<::OreUI::ITileResourceResolver>>> mTileResolver;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::std::shared_ptr<::OreUI::IGeometryAtlasKnownTilesWriter>>> mKnownTiles;
    ::ll::TypedStorage<8, 8, ::Gameface::TemporaryTextureHolder&>        mTextureHolder;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::OreUI::ItemTileCache>> mCachedItems;
    // NOLINTEND

public:
    // prevent constructor by default
    GeometryAtlasResourceHandlerImpl& operator=(GeometryAtlasResourceHandlerImpl const&);
    GeometryAtlasResourceHandlerImpl(GeometryAtlasResourceHandlerImpl const&);
    GeometryAtlasResourceHandlerImpl();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::Gameface::ResourceHandlerStatus
    onResourceRequest(::Gameface::ResourceRequest const& request, ::Gameface::ResourceResponse& response) /*override*/;

    virtual ::Gameface::ResourceHandlerStatus
    onResourceStreamRequest(::Gameface::ResourceRequest const&, ::Gameface::ResourceStreamResponse&) /*override*/;

    virtual void update() /*override*/;

    virtual void onViewCreate(::IClientInstance&) /*override*/;

    virtual void onAppPreSuspend() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _receiveTile(
        ::GeometryAtlas::TileDefinition const&                definition,
        ::std::shared_ptr<::GeometryAtlas::IAtlasTile> const& tile,
        ::Gameface::ResourceResponse&                         response
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::Gameface::ResourceHandlerStatus
    $onResourceRequest(::Gameface::ResourceRequest const& request, ::Gameface::ResourceResponse& response);

    MCFOLD ::Gameface::ResourceHandlerStatus
    $onResourceStreamRequest(::Gameface::ResourceRequest const&, ::Gameface::ResourceStreamResponse&);

    MCAPI void $update();

    MCAPI void $onViewCreate(::IClientInstance&);

    MCAPI void $onAppPreSuspend();
    // NOLINTEND
};

} // namespace OreUI
