#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace GeometryAtlas { class IAtlasTile; }
// clang-format on

namespace OreUI {

class IGeometryAtlasKnownTilesReader {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::shared_ptr<::GeometryAtlas::IAtlasTile> tryGet(uint) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace OreUI
