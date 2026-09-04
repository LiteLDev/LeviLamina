#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/GeometryProtocolType.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
namespace Gameface { class IResourceHandler; }
namespace Gameface { class TemporaryTextureHolder; }
namespace GeometryAtlas { class IGeometryAtlas; }
namespace OreUI { class IGeometryAtlasKnownTilesReader; }
namespace OreUI { class IItemHandleFactory; }
namespace OreUI { class ILiveViewCollectionPublisher; }
namespace OreUI { class IPaperDollHandleFactory; }
namespace OreUI { struct LiveViewCollection; }
// clang-format on

namespace OreUI {

class GeometryAtlasStorage {
public:
    // GeometryAtlasStorage inner types declare
    // clang-format off
    struct Impl;
    // clang-format on

    // GeometryAtlasStorage inner types define
    struct Impl {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 16, ::std::shared_ptr<::GeometryAtlas::IGeometryAtlas>>         mGeometryAtlas;
        ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                            mTileChangeSubscription;
        ::ll::TypedStorage<8, 16, ::std::shared_ptr<::OreUI::IGeometryAtlasKnownTilesReader>> mKnownItems;
        ::ll::TypedStorage<8, 16, ::std::shared_ptr<::OreUI::IGeometryAtlasKnownTilesReader>> mKnownDolls;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~Impl();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::OreUI::GeometryAtlasStorage::Impl>> mImpl;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI GeometryAtlasStorage();

    MCAPI ::std::unique_ptr<::Gameface::IResourceHandler> createGeometryAtlasResourceHandler(
        ::std::unique_ptr<::OreUI::IItemHandleFactory>           itemFactory,
        ::std::unique_ptr<::OreUI::IPaperDollHandleFactory>      dollFactory,
        ::std::shared_ptr<::OreUI::ILiveViewCollectionPublisher> publisher,
        ::Gameface::TemporaryTextureHolder&                      textureHolder,
        ::OreUI::GeometryProtocolType                            type
    );

    MCAPI ::OreUI::LiveViewCollection createLiveViewCollection();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND
};

} // namespace OreUI
