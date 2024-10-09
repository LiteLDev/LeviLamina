#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/util/Rotation.h"
#include "mc/world/level/levelgen/structure/StructureFeatureType.h"
#include "mc/world/level/levelgen/structure/structurepools/alias/PoolAliasBinding.h"
#include "mc/world/level/levelgen/v2/JigsawExpansion.h"
#include "mc/world/level/levelgen/v2/JigsawSectionDataKey.h"
#include "mc/world/level/levelgen/v2/RandomSpreadPlacement.h"
#include "mc/world/level/levelgen/v2/heightmap_projection/Type.h"
#include "mc/world/level/levelgen/v2/terrain_adjustment/Type.h"

// auto generated forward declare list
// clang-format off
class BaseGameVersion;
class BiomeSource;
class BlockPos;
class BlockSource;
class BoundingBox;
class ChunkPos;
class Dimension;
class Experiments;
class FeatureRegistry;
class IPositionalRandomFactory;
class IRandom;
class JigsawBlockInfo;
class JigsawStructureRegistry;
class PoolAliasBinding;
class Random;
class SimpleRandom;
class StructureManager;
class StructurePoolElement;
class StructureTemplatePool;
class XoroshiroRandom;
namespace br::worldgen { class Beardifier; }
namespace br::worldgen { class ConstantHeight; }
namespace br::worldgen { class GenerationStub; }
namespace br::worldgen { class JigsawSectionData; }
namespace br::worldgen { class JigsawStructureBuilder; }
namespace br::worldgen { class StructureCache; }
namespace br::worldgen { class StructureHeightProvider; }
namespace br::worldgen { class StructureInstance; }
namespace br::worldgen { class StructureRegistry; }
namespace br::worldgen { class StructureSetRegistry; }
namespace br::worldgen { class UniformHeight; }
namespace br::worldgen { class VerticalAnchor; }
namespace br::worldgen { class WorldGenContext; }
namespace br::worldgen { struct ChunkGeneratorStructureState; }
namespace br::worldgen { struct GenerationContext; }
namespace br::worldgen { struct JigsawJunction; }
namespace br::worldgen { struct JigsawPieceState; }
namespace br::worldgen { struct JigsawStructure; }
namespace br::worldgen { struct Rigid; }
namespace br::worldgen { struct SpawnerData; }
namespace br::worldgen { struct Structure; }
namespace br::worldgen { struct StructurePlacement; }
namespace br::worldgen { struct StructureSet; }
namespace br::worldgen { struct WorldGenRandom; }
struct Seed128Bit;
// clang-format on

namespace br::worldgen {
// NOLINTBEGIN
MCAPI int expansionHackCalc(
    class BoundingBox const&                  box,
    std::vector<class JigsawBlockInfo> const& targetJigsaws,
    class JigsawStructureRegistry const&      pools
);

MCAPI void expansionHackEval(int expandTo, class BoundingBox& box);

MCAPI bool isEmptyPool(class StructureTemplatePool const& pool);

MCAPI int
noopCalc(class BoundingBox const&, std::vector<class JigsawBlockInfo> const&, class JigsawStructureRegistry const&);

MCAPI void noopEval(int, class BoundingBox&);

MCAPI std::vector<uint64> shuffledJigsawBlockId(class StructureTemplatePool const& pool, class IRandom& random);

MCAPI std::vector<class JigsawBlockInfo> shuffledJigsawBlocks(
    class StructurePoolElement const& source,
    class BlockPos                    pos,
    ::Rotation                        rot,
    class IRandom&                    random
);
// NOLINTEND

}; // namespace br::worldgen
