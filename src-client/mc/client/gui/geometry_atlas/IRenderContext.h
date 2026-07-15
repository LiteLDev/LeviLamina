#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace GeometryAtlas { struct ItemData; }
namespace GeometryAtlas { struct PaperDollData; }
namespace dragon::atlas { class IAtlasUserOperations; }
namespace dragon::atlas { struct AtlasTileHandle; }
// clang-format on

namespace GeometryAtlas {

class IRenderContext {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IRenderContext() = default;

    virtual ::dragon::atlas::IAtlasUserOperations& getFrontend() = 0;

    virtual bool
    renderItemToTile(::dragon::atlas::AtlasTileHandle const& tile, ::GeometryAtlas::ItemData const& data) = 0;

    virtual void
    renderDollToTile(::dragon::atlas::AtlasTileHandle const& tile, ::GeometryAtlas::PaperDollData const& data) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace GeometryAtlas
