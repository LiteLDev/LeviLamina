#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/spawn_category/Type.h"
#include "mc/world/level/chunk/ChunkBoundingBox.h"
#include "mc/world/level/chunk/ChunkEntity.h"
#include "mc/world/level/chunk/DynamicSpawnArea.h"
#include "mc/world/level/chunk/FullStructureBoundingBox.h"
#include "mc/world/level/chunk/StaticSpawnArea.h"
#include "mc/world/level/chunk/StorageTypeHelper.h"
#include "mc/world/level/chunk/StructureKey.h"
#include "mc/world/level/chunk/StructureType.h"

// auto generated forward declare list
// clang-format off
namespace br::worldgen { struct StructureSpawnOverride; }
// clang-format on

namespace br {

class LevelChunkDataRegistry {
public:
    // LevelChunkDataRegistry inner types define
    using Entity = ::br::ChunkEntity;

    using StorageType = ::br::detail::StorageTypeHelper<
        ::br::StructureType,
        ::br::ChunkBoundingBox,
        ::br::StructureKey,
        ::br::FullStructureBoundingBox,
        ::br::DynamicSpawnArea,
        ::br::StaticSpawnArea,
        ::std::unordered_map<::SpawnCategory::Type, ::br::worldgen::StructureSpawnOverride>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        88,
        ::entt::basic_storage<::br::ChunkEntity, ::br::ChunkEntity, ::std::allocator<::br::ChunkEntity>, void>>
        mEntities;
    ::ll::TypedStorage<
        8,
        680,
        ::std::tuple<
            ::entt::basic_storage<::br::StructureType, ::br::ChunkEntity, ::std::allocator<::br::StructureType>, void>,
            ::entt::basic_storage<
                ::br::ChunkBoundingBox,
                ::br::ChunkEntity,
                ::std::allocator<::br::ChunkBoundingBox>,
                void>,
            ::entt::basic_storage<::br::StructureKey, ::br::ChunkEntity, ::std::allocator<::br::StructureKey>, void>,
            ::entt::basic_storage<
                ::br::FullStructureBoundingBox,
                ::br::ChunkEntity,
                ::std::allocator<::br::FullStructureBoundingBox>,
                void>,
            ::entt::basic_storage<
                ::br::DynamicSpawnArea,
                ::br::ChunkEntity,
                ::std::allocator<::br::DynamicSpawnArea>,
                void>,
            ::entt::
                basic_storage<::br::StaticSpawnArea, ::br::ChunkEntity, ::std::allocator<::br::StaticSpawnArea>, void>,
            ::entt::basic_storage<
                ::std::unordered_map<::SpawnCategory::Type, ::br::worldgen::StructureSpawnOverride>,
                ::br::ChunkEntity,
                ::std::allocator<::std::unordered_map<::SpawnCategory::Type, ::br::worldgen::StructureSpawnOverride>>,
                void>>>
        mData;
    // NOLINTEND

public:
    // prevent constructor by default
    LevelChunkDataRegistry& operator=(LevelChunkDataRegistry const&);
    LevelChunkDataRegistry(LevelChunkDataRegistry const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI LevelChunkDataRegistry();

    MCAPI ::br::LevelChunkDataRegistry& operator=(::br::LevelChunkDataRegistry&& other);

    MCAPI ~LevelChunkDataRegistry();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace br
