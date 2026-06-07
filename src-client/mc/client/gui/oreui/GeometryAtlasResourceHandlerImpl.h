#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/KnownTileHandles.h"
#include "mc/client/gui/oreui/interface/IResourceHandler.h"
#include "mc/client/gui/oreui/interface/ResourceHandlerStatus.h"

// auto generated forward declare list
// clang-format off
namespace Gameface { class ResourceResponse; }
namespace Gameface { class ResourceStreamResponse; }
namespace Gameface { class TemporaryTextureHolder; }
namespace Gameface { struct ResourceRequest; }
namespace GeometryAtlas { class IGeometryAtlas; }
namespace OreUI { class IItemHandleFactory; }
namespace OreUI { class ILiveViewCollectionPublisher; }
namespace OreUI { class ITileResourceResolver; }
namespace OreUI { struct GeometryAtlasResourceHandlerArgs; }
// clang-format on

namespace OreUI {

class GeometryAtlasResourceHandlerImpl : public ::Gameface::IResourceHandler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::OreUI::IItemHandleFactory>>>      mFactory;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::std::shared_ptr<::GeometryAtlas::IGeometryAtlas>>> mAtlas;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::std::shared_ptr<::OreUI::ILiveViewCollectionPublisher>>>
                                                                                                 mLiveViewPublisher;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::OreUI::ITileResourceResolver>>> mTileResolver;
    ::ll::TypedStorage<8, 64, ::OreUI::KnownTileHandles>                                         mKnownItems;
    ::ll::TypedStorage<8, 8, ::Gameface::TemporaryTextureHolder&>                                mTextureHolder;
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
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit GeometryAtlasResourceHandlerImpl(::OreUI::GeometryAtlasResourceHandlerArgs&& args);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::GeometryAtlasResourceHandlerArgs&& args);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::Gameface::ResourceHandlerStatus
    $onResourceRequest(::Gameface::ResourceRequest const& request, ::Gameface::ResourceResponse& response);

    MCFOLD ::Gameface::ResourceHandlerStatus
    $onResourceStreamRequest(::Gameface::ResourceRequest const&, ::Gameface::ResourceStreamResponse&);

    MCAPI void $update();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
