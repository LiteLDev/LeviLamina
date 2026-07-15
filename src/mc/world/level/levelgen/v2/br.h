#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/WeightedRandomList.h"
#include "mc/world/actor/spawn_category/Type.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class IDataOutput;
class Vec3;
namespace br { class LevelChunkDataRegistry; }
namespace br::worldgen { struct SpawnerData; }
// clang-format on

namespace br {
// functions
// NOLINTBEGIN
MCAPI ::std::optional<::WeightedRandomList<::br::worldgen::SpawnerData>>
dynamicStructureMobs(::br::LevelChunkDataRegistry const& reg, ::BlockPos pos, ::SpawnCategory::Type category);

MCAPI ::std::vector<::std::string> getStructureTypes(::br::LevelChunkDataRegistry const& reg, ::Vec3 pos);

MCAPI bool serialize(::IDataOutput& stream, ::br::LevelChunkDataRegistry const& val);

MCAPI ::std::optional<::WeightedRandomList<::br::worldgen::SpawnerData>>
staticStructureMobs(::br::LevelChunkDataRegistry const& reg, ::BlockPos pos, ::SpawnCategory::Type category);
// NOLINTEND

} // namespace br
