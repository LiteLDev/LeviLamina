#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/geometry_atlas/IAtlasTile.h"

// auto generated forward declare list
// clang-format off
namespace GeometryAtlas { struct ItemPayload; }
// clang-format on

namespace GeometryAtlas {

class IItemTile : public ::GeometryAtlas::IAtlasTile {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IItemTile() /*override*/ = default;

    virtual void submitUpdate(::GeometryAtlas::ItemPayload&& payload) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace GeometryAtlas
