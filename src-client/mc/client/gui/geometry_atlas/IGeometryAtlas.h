#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Connector.h"

// auto generated forward declare list
// clang-format off
namespace GeometryAtlas { class IItemTile; }
namespace GeometryAtlas { class IPaperDollTile; }
namespace GeometryAtlas { class IRenderContext; }
namespace GeometryAtlas { struct TileDefinition; }
// clang-format on

namespace GeometryAtlas {

class IGeometryAtlas {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IGeometryAtlas() = default;

    virtual ::Bedrock::PubSub::Connector<void(::std::vector<uint> const&)>& getTileChangeConnector() = 0;

    virtual ::std::shared_ptr<::GeometryAtlas::IItemTile> createItem(::GeometryAtlas::TileDefinition const&) = 0;

    virtual ::std::shared_ptr<::GeometryAtlas::IPaperDollTile> createDoll(::GeometryAtlas::TileDefinition const&) = 0;

    virtual void trySubmitUpdates(::GeometryAtlas::IRenderContext&) = 0;

    virtual bool hasAnyUpdates() const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace GeometryAtlas
