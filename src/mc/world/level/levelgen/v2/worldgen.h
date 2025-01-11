#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/Mirror.h"
#include "mc/util/Rotation.h"
#include "mc/world/level/levelgen/structure/Projection.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class BoundingBox;
class IRandom;
class IStructureTemplate;
class JigsawStructureRegistry;
class StructurePoolElement;
class StructureTemplatePool;
namespace JigsawStructureUtils { class MetadataCache; }
namespace SharedTypes::v1_21_50 { class JigsawBlockMetadata; }
namespace SharedTypes::v1_21_50 { struct JigsawStructureMetadata; }
namespace br::worldgen { struct StructureBlockInfo; }
namespace br::worldgen { struct StructurePlaceSettings; }
namespace br::worldgen { struct StructureProcessor; }
namespace br::worldgen { struct StructureTemplateBlockPalette; }
// clang-format on

namespace br::worldgen {
// functions
// NOLINTBEGIN
MCAPI int expansionHackCalc(
    ::JigsawStructureUtils::MetadataCache&                                                  cache,
    ::BlockPos const&                                                                       offset,
    ::Rotation                                                                              rotation,
    ::BoundingBox const&                                                                    box,
    ::std::vector<::std::pair<uint64, ::SharedTypes::v1_21_50::JigsawBlockMetadata>> const& targetJigsaws,
    ::JigsawStructureRegistry const&                                                        pools
);

MCAPI void expansionHackEval(int expandTo, ::BoundingBox& box);

MCAPI ::std::vector<::gsl::not_null<::std::shared_ptr<::br::worldgen::StructureProcessor const>>> const&
getProjectionProcessors(::Projection projection);

MCFOLD int
noopCalc(::JigsawStructureUtils::MetadataCache&, ::BlockPos const&, ::Rotation, ::BoundingBox const&, ::std::vector<::std::pair<uint64, ::SharedTypes::v1_21_50::JigsawBlockMetadata>> const&, ::JigsawStructureRegistry const&);

MCFOLD void noopEval(int, ::BoundingBox&);

MCAPI bool placeInWorld(
    ::IStructureTemplate const&                   tmpl,
    ::BlockSource&                                region,
    ::BlockPos                                    position,
    ::BlockPos                                    structureOrigin,
    ::br::worldgen::StructurePlaceSettings const& settings,
    ::IRandom&                                    random
);

MCAPI ::std::vector<::br::worldgen::StructureBlockInfo> processBlockInfos(
    ::BlockSource&                                region,
    ::BlockPos                                    position,
    ::BlockPos                                    structureOrigin,
    ::br::worldgen::StructurePlaceSettings const& settings,
    ::br::worldgen::StructureTemplateBlockPalette sourceBlockInfos
);

MCAPI ::std::optional<::BlockPos> randomNamedJigsawLocation(
    ::StructurePoolElement const& source,
    ::std::string_view            name,
    ::BlockPos                    pos,
    ::Rotation                    rot,
    ::IRandom&                    random
);

MCAPI ::std::vector<uint64> shuffledJigsawBlockId(::StructureTemplatePool const& pool, ::IRandom& random);

MCAPI ::std::vector<::std::pair<uint64, ::SharedTypes::v1_21_50::JigsawBlockMetadata>>
shuffledJigsawBlocks(::SharedTypes::v1_21_50::JigsawStructureMetadata const& metadata, ::IRandom& random);

MCAPI ::BlockPos transform(::BlockPos pos, ::Mirror mirror, ::Rotation rotation, ::BlockPos pivot);
// NOLINTEND

} // namespace br::worldgen
