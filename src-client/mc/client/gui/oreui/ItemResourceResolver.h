#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/ITileResourceResolver.h"
#include "mc/client/gui/oreui/ItemUrlInfo.h"

// auto generated forward declare list
// clang-format off
namespace GeometryAtlas { class IAtlasTile; }
namespace GeometryAtlas { class IGeometryAtlas; }
namespace GeometryAtlas { struct TileDefinition; }
namespace OreUI { class IItemHandleFactory; }
// clang-format on

namespace OreUI {

class ItemResourceResolver : public ::OreUI::ITileResourceResolver {
public:
    // ItemResourceResolver inner types declare
    // clang-format off
    struct Request;
    // clang-format on

    // ItemResourceResolver inner types define
    struct Request : public ::OreUI::ITileResourceResolver::ITileResourceRequest {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::OreUI::ItemUrlInfo> mInfo;
        // NOLINTEND

    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ::GeometryAtlas::TileDefinition const& getDefinition() const /*override*/;

        virtual void submitUpdate(::GeometryAtlas::IAtlasTile& tile) const /*override*/;
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
        MCFOLD ::GeometryAtlas::TileDefinition const& $getDefinition() const;

        MCAPI void $submitUpdate(::GeometryAtlas::IAtlasTile& tile) const;
        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
        // NOLINTEND
    };

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::shared_ptr<::GeometryAtlas::IAtlasTile>
    createTile(::GeometryAtlas::IGeometryAtlas& atlas, ::GeometryAtlas::TileDefinition const& definition) /*override*/;

    virtual ::std::unique_ptr<::OreUI::ITileResourceResolver::ITileResourceRequest>
    tryResolveRequest(::std::string_view url, ::OreUI::IItemHandleFactory const& factory) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::shared_ptr<::GeometryAtlas::IAtlasTile>
    $createTile(::GeometryAtlas::IGeometryAtlas& atlas, ::GeometryAtlas::TileDefinition const& definition);

    MCAPI ::std::unique_ptr<::OreUI::ITileResourceResolver::ITileResourceRequest>
    $tryResolveRequest(::std::string_view url, ::OreUI::IItemHandleFactory const& factory);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
