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
class Vec3;
namespace br { class LevelChunkDataRegistry; }
namespace br { struct StructureKey; }
namespace br::worldgen { class StructureInstance; }
namespace br::worldgen { struct SpawnerData; }
// clang-format on

namespace br {
// functions
// NOLINTBEGIN
MCNAPI ::std::optional<::WeightedRandomList<::br::worldgen::SpawnerData>>
dynamicStructureMobs(::br::LevelChunkDataRegistry const& reg, ::BlockPos pos, ::SpawnCategory::Type category);

MCNAPI ::std::optional<::WeightedRandomList<::br::worldgen::SpawnerData>>
findMobsPiece(::br::LevelChunkDataRegistry const& reg, ::br::StructureKey key, ::SpawnCategory::Type category);

MCNAPI ::std::optional<::WeightedRandomList<::br::worldgen::SpawnerData>>
findMobsStructure(::br::LevelChunkDataRegistry const& reg, ::br::StructureKey key, ::SpawnCategory::Type category);

MCNAPI ::br::StructureKey findStructureKey(::br::LevelChunkDataRegistry const& reg, ::std::string_view name);

MCNAPI ::std::vector<::std::string> getStructureTypes(::br::LevelChunkDataRegistry const& reg, ::Vec3 pos);

MCNAPI void insertStructure(
    ::br::LevelChunkDataRegistry&            reg,
    ::BoundingBox                            chunkBB,
    ::br::StructureKey                       key,
    ::br::worldgen::StructureInstance const& instance
);

MCNAPI void insertStructure(
    ::br::LevelChunkDataRegistry& reg,
    ::BoundingBox                 chunkBB,
    ::br::StructureKey            key,
    ::StructureStart const&       instance
);

MCNAPI bool serialize(::IDataOutput& stream, ::br::LevelChunkDataRegistry const& val);

MCNAPI ::br::StructureKey spawnStructureKey(::br::LevelChunkDataRegistry& reg, ::std::string_view name);

MCNAPI ::std::optional<::WeightedRandomList<::br::worldgen::SpawnerData>>
staticStructureMobs(::br::LevelChunkDataRegistry const& reg, ::BlockPos pos, ::SpawnCategory::Type category);
// NOLINTEND

} // namespace br
