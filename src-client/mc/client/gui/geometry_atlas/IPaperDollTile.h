#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/geometry_atlas/IAtlasTile.h"

// auto generated forward declare list
// clang-format off
namespace GeometryAtlas { struct PaperDollPayload; }
// clang-format on

namespace GeometryAtlas {

class IPaperDollTile : public ::GeometryAtlas::IAtlasTile {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IPaperDollTile() /*override*/ = default;

    virtual void submitUpdate(::GeometryAtlas::PaperDollPayload&&) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace GeometryAtlas
