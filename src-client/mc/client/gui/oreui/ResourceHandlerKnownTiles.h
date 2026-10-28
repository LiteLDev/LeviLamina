#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/brstd/move_only_function.h"

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
    ::ll::TypedStorage<8, 64, ::brstd::move_only_function<void()>>                mClearCache;
    // NOLINTEND
};

} // namespace OreUI
