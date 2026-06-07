#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/geometry_atlas/IGeometryAtlas.h"
#include "mc/deps/core/utility/pub_sub/Connector.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
namespace GeometryAtlas { class IItemTile; }
namespace GeometryAtlas { class IRenderContext; }
namespace GeometryAtlas { struct TileDefinition; }
// clang-format on

namespace GeometryAtlas {

class NullAtlas : public ::GeometryAtlas::IGeometryAtlas {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        128,
        ::Bedrock::PubSub::
            Publisher<void(::std::vector<uint> const&), ::Bedrock::PubSub::ThreadModel::MultiThreaded, 0>>
        mPublisher;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::Bedrock::PubSub::Connector<void(::std::vector<uint> const&)>& getTileChangeConnector() /*override*/;

    virtual ::std::shared_ptr<::GeometryAtlas::IItemTile>
    createItem(::GeometryAtlas::TileDefinition const&) /*override*/;

    virtual void trySubmitUpdates(::GeometryAtlas::IRenderContext&) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace GeometryAtlas
