#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/ReflectionCtx.h"
#include "mc/world/level/levelgen/v2/WorldGenContext.h"
#include "mc/world/level/poi/FileStorage.h"
#include "mc/world/level/poi/RegionId.h"
#include "mc/world/level/poi/StorageInfo.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class Dimension;
class LevelStorage;
namespace Poi { struct Chunk; }
namespace Poi { struct Region; }
namespace Poi { struct Registry; }
// clang-format on

namespace Poi {

struct Storage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 72, ::entt::dense_map<::Poi::RegionId, ::std::unique_ptr<::Poi::Region>>> mRegions;
    ::ll::TypedStorage<8, 64, ::std::unordered_set<::Poi::RegionId>>                                mDirtyRegions;
    ::ll::TypedStorage<2, 6, ::br::worldgen::WorldGenContext>                                       mWorldContext;
    ::ll::TypedStorage<8, 80, ::std::mutex>                                                         mRegionMutex;
    ::ll::TypedStorage<8, 64, ::Poi::StorageInfo>                                                   mInfo;
    ::ll::TypedStorage<8, 128, ::cereal::ReflectionCtx>                                             mCtx;
    ::ll::TypedStorage<8, 64, ::Poi::FileStorage>                                                   mBackingStorage;
    ::ll::TypedStorage<8, 8, ::Poi::Registry const*>                                                mRegistry;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::Poi::Chunk* get(::BlockPos pos) const;

    MCAPI ::Poi::Chunk& getOrCreate(::BlockPos pos);

    MCAPI void swap(::Poi::Storage& other);

    MCAPI void tick(::LevelStorage& storage);

    MCAPI ~Storage();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Poi::Storage
    from(::Poi::Registry const& registry, ::Dimension const& dimension, ::LevelStorage& storage);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace Poi
