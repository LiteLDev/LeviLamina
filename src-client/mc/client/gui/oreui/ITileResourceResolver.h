#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace GeometryAtlas { class IAtlasTile; }
namespace GeometryAtlas { class IGeometryAtlas; }
namespace GeometryAtlas { class InitializeCallbackPayload; }
namespace GeometryAtlas { struct TileDefinition; }
// clang-format on

namespace OreUI {

class ITileResourceResolver {
public:
    // ITileResourceResolver inner types declare
    // clang-format off
    class ITileResourceRequest;
    // clang-format on

    // ITileResourceResolver inner types define
    class ITileResourceRequest {
    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ~ITileResourceRequest() = default;

        virtual ::GeometryAtlas::TileDefinition const& getDefinition() const = 0;

        virtual void submitUpdate(::GeometryAtlas::IAtlasTile&, ::GeometryAtlas::InitializeCallbackPayload) const = 0;
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN

        // NOLINTEND
    };

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ITileResourceResolver() = default;

    virtual ::std::shared_ptr<::GeometryAtlas::IAtlasTile>
    createTile(::GeometryAtlas::IGeometryAtlas&, ::GeometryAtlas::TileDefinition const&) = 0;

    virtual ::std::unique_ptr<::OreUI::ITileResourceResolver::ITileResourceRequest>
        tryResolveRequest(::std::string_view) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace OreUI
