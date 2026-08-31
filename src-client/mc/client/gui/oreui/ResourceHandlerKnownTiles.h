#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Gameface { class IResourceHandler; }
namespace OreUI { struct GeometryAtlasKnownTiles; }
// clang-format on

namespace OreUI {

struct ResourceHandlerKnownTiles {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::OreUI::GeometryAtlasKnownTiles>> mKnownTiles;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Gameface::IResourceHandler>>     mHandler;
    // NOLINTEND
};

} // namespace OreUI
