#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/geometry_atlas/TileDefinition.h"

// auto generated forward declare list
// clang-format off
namespace GeometryAtlas { class IAtlasTile; }
// clang-format on

namespace OreUI {

class ItemTileCache {
public:
    // ItemTileCache inner types declare
    // clang-format off
    struct Entry;
    // clang-format on

    // ItemTileCache inner types define
    struct Entry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 12, ::GeometryAtlas::TileDefinition>                mDefinition;
        ::ll::TypedStorage<8, 16, ::std::shared_ptr<::GeometryAtlas::IAtlasTile>> mTile;
        ::ll::TypedStorage<8, 8, uint64>                                          mGeneration;
        ::ll::TypedStorage<8, 8, ::std::atomic<uint64>>                           mLastUsedUpdate;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 80, ::std::mutex> mMutationMutex;
    ::ll::TypedStorage<
        8,
        112,
        ::Core::
            LRUCache<::std::string, ::OreUI::ItemTileCache::Entry, ::std::shared_ptr<::OreUI::ItemTileCache::Entry>>>
                                                    mCache;
    ::ll::TypedStorage<8, 8, ::std::atomic<uint64>> mGeneration;
    ::ll::TypedStorage<8, 8, ::std::atomic<uint64>> mUpdateCount;
    // NOLINTEND
};

} // namespace OreUI
