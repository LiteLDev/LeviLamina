#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/WeightedRandomList.h"
#include "mc/world/actor/spawn_category/Type.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BoundingBox;
class IDataOutput;
class StructureStart;
namespace br { class LevelChunkDataRegistry; }
namespace br { struct StaticSpawnArea; }
namespace br { struct StructureKey; }
namespace br { struct StructureType; }
namespace br::worldgen { class StructureInstance; }
namespace br::worldgen { struct SpawnerData; }
// clang-format on

namespace br {
// functions
// NOLINTBEGIN
MCAPI ::std::optional<::WeightedRandomList<::br::worldgen::SpawnerData>>
dynamicStructureMobs(::br::LevelChunkDataRegistry const& reg, ::BlockPos pos, ::SpawnCategory::Type category);

MCAPI ::std::optional<::WeightedRandomList<::br::worldgen::SpawnerData>>
findMobsPiece(::br::LevelChunkDataRegistry const& reg, ::br::StructureKey key, ::SpawnCategory::Type category);

MCAPI ::std::optional<::WeightedRandomList<::br::worldgen::SpawnerData>>
findMobsStructure(::br::LevelChunkDataRegistry const& reg, ::br::StructureKey key, ::SpawnCategory::Type category);

MCAPI ::br::StructureKey findStructureKey(::br::LevelChunkDataRegistry const& reg, ::std::string_view name);

MCAPI void insertStructure(
    ::br::LevelChunkDataRegistry& reg,
    ::BoundingBox                 chunkBB,
    ::br::StructureKey            key,
    ::StructureStart const&       instance
);

MCAPI void insertStructure(
    ::br::LevelChunkDataRegistry&            reg,
    ::BoundingBox                            chunkBB,
    ::br::StructureKey                       key,
    ::br::worldgen::StructureInstance const& instance
);

MCFOLD bool serialize(::IDataOutput& stream, ::br::StructureKey const& val);

MCAPI bool serialize(::IDataOutput& stream, ::br::StructureType const& val);

MCAPI bool serialize(::IDataOutput&, ::br::StaticSpawnArea const&);

MCAPI bool serialize(::IDataOutput& stream, ::br::LevelChunkDataRegistry const& val);

MCAPI ::br::StructureKey spawnStructureKey(::br::LevelChunkDataRegistry& reg, ::std::string_view name);

MCAPI ::std::optional<::WeightedRandomList<::br::worldgen::SpawnerData>>
staticStructureMobs(::br::LevelChunkDataRegistry const& reg, ::BlockPos pos, ::SpawnCategory::Type category);
// NOLINTEND

} // namespace br
