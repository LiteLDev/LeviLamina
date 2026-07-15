#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/interface/IResourceHandler.h"
#include "mc/client/gui/oreui/interface/ResourceHandlerStatus.h"

// auto generated forward declare list
// clang-format off
namespace Gameface { class ResourceResponse; }
namespace Gameface { class ResourceStreamResponse; }
namespace Gameface { class TemporaryTextureHolder; }
namespace Gameface { struct ResourceRequest; }
namespace OreUI { class IGeometryAtlasKnownTilesWriter; }
namespace OreUI { class ITileResourceResolver; }
// clang-format on

namespace OreUI {

class GeometryAtlasResourceHandlerImpl : public ::Gameface::IResourceHandler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::std::shared_ptr<::OreUI::ITileResourceResolver>>> mTileResolver;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::std::shared_ptr<::OreUI::IGeometryAtlasKnownTilesWriter>>> mKnownTiles;
    ::ll::TypedStorage<8, 8, ::Gameface::TemporaryTextureHolder&> mTextureHolder;
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
    onResourceRequest(::Gameface::ResourceRequest const&, ::Gameface::ResourceResponse&) /*override*/;

    virtual ::Gameface::ResourceHandlerStatus
    onResourceStreamRequest(::Gameface::ResourceRequest const&, ::Gameface::ResourceStreamResponse&) /*override*/;

    virtual void update() /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace OreUI
