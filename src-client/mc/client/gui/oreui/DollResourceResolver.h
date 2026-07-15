#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/DollUrlInfo.h"
#include "mc/client/gui/oreui/ITileResourceResolver.h"

// auto generated forward declare list
// clang-format off
namespace GeometryAtlas { class IAtlasTile; }
namespace GeometryAtlas { class IGeometryAtlas; }
namespace GeometryAtlas { class InitializeCallbackPayload; }
namespace GeometryAtlas { struct TileDefinition; }
namespace OreUI { class IPaperDollHandleFactory; }
// clang-format on

namespace OreUI {

class DollResourceResolver : public ::OreUI::ITileResourceResolver {
public:
    // DollResourceResolver inner types declare
    // clang-format off
    class Request;
    // clang-format on

    // DollResourceResolver inner types define
    class Request : public ::OreUI::ITileResourceResolver::ITileResourceRequest {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::OreUI::DollUrlInfo> mInfo;
        // NOLINTEND

    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ::GeometryAtlas::TileDefinition const& getDefinition() const /*override*/;

        virtual void submitUpdate(::GeometryAtlas::IAtlasTile&, ::GeometryAtlas::InitializeCallbackPayload) const
            /*override*/;
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN

        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::OreUI::IPaperDollHandleFactory>>> mFactory;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::shared_ptr<::GeometryAtlas::IAtlasTile>
    createTile(::GeometryAtlas::IGeometryAtlas&, ::GeometryAtlas::TileDefinition const&) /*override*/;

    virtual ::std::unique_ptr<::OreUI::ITileResourceResolver::ITileResourceRequest>
        tryResolveRequest(::std::string_view) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace OreUI
