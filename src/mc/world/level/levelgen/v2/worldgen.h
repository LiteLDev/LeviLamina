#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/Rotation.h"
#include "mc/world/level/levelgen/structure/Projection.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class ChunkPos;
class IRandom;
class IStructureTemplate;
class StructurePoolElement;
class StructureTemplatePool;
namespace SharedTypes::v1_21_80 { struct JigsawStructureMetadata; }
namespace br::worldgen { struct StructurePlaceSettings; }
namespace br::worldgen { struct StructureProcessor; }
// clang-format on

namespace br::worldgen {
// functions
// NOLINTBEGIN
MCAPI ::std::vector<uint64> getJigsawBlockIds(::StructureTemplatePool const& pool);

MCAPI ::std::vector<::gsl::not_null<::std::shared_ptr<::br::worldgen::StructureProcessor const>>> const&
getProjectionProcessors(::Projection projection);

MCAPI bool placeInWorld(
    ::IStructureTemplate const&                   tmpl,
    ::BlockSource&                                region,
    ::BlockPos                                    position,
    ::BlockPos                                    structureOrigin,
    ::br::worldgen::StructurePlaceSettings const& settings,
    ::IRandom&                                    random
);

#ifdef LL_PLAT_S
MCAPI bool probabilityReducer(int64 seed, int64 salt, ::ChunkPos chunkPos, float probability);
#endif

#ifdef LL_PLAT_C
MCAPI bool probabilityReducer(int64 seed, int64 salt, ::ChunkPos chunkPos, float probability);
#endif

MCAPI ::std::optional<::BlockPos> randomNamedJigsawLocation(
    ::StructurePoolElement const& source,
    ::std::string_view            name,
    ::BlockPos                    pos,
    ::Rotation                    rot,
    ::IRandom&                    random
);

MCAPI ::std::vector<uint64>
shuffledJigsawBlockIndexes(::SharedTypes::v1_21_80::JigsawStructureMetadata const& metadata, ::IRandom& random);
// NOLINTEND

} // namespace br::worldgen
