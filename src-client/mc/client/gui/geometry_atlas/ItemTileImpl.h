#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/geometry_atlas/BaseTileImpl.h"
#include "mc/client/gui/geometry_atlas/IItemTile.h"

// auto generated forward declare list
// clang-format off
namespace GeometryAtlas { struct ItemPayload; }
namespace dragon::atlas { struct AtlasTileHandle; }
// clang-format on

namespace GeometryAtlas {

class ItemTileImpl : public ::GeometryAtlas::IItemTile, public ::GeometryAtlas::BaseTileImpl {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void submitUpdate(::GeometryAtlas::ItemPayload&& payload) /*override*/;

    virtual uint getUserID() const /*override*/;

    virtual ::dragon::atlas::AtlasTileHandle getBackendID() const /*override*/;

    virtual bool isInitialized() const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $submitUpdate(::GeometryAtlas::ItemPayload&& payload);

    MCNAPI uint $getUserID() const;

    MCNAPI ::dragon::atlas::AtlasTileHandle $getBackendID() const;

    MCNAPI bool $isInitialized() const;
    // NOLINTEND
};

} // namespace GeometryAtlas
