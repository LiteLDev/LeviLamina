#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/enums/Rotation.h"
#include "mc/world/level/levelgen/GenerationStub.h"
#include "mc/world/level/levelgen/JigsawExpansion.h"
#include "mc/world/level/levelgen/JigsawSectionDataKey.h"
#include "mc/world/level/levelgen/RandomSpreadPlacement.h"
#include "mc/world/level/levelgen/Type.h"
#include "mc/world/level/levelgen/adjustment/Type.h"
#include "mc/world/level/levelgen/structure/PoolAliasBinding.h"
#include "mc/world/level/levelgen/structure/StructureFeatureType.h"

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
namespace br::worldgen { struct Structure; }
namespace br::worldgen { struct StructurePlacement; }
namespace br::worldgen { struct StructureSet; }
namespace br::worldgen { struct WorldGenRandom; }
struct Seed128Bit;
// clang-format on

namespace br::worldgen {
// NOLINTBEGIN
// symbol:
// ?expansionHackCalc@worldgen@br@@YAHAEBVBoundingBox@@AEBV?$vector@VJigsawBlockInfo@@V?$allocator@VJigsawBlockInfo@@@std@@@std@@AEBVJigsawStructureRegistry@@@Z
MCAPI int
expansionHackCalc(class BoundingBox const&, std::vector<class JigsawBlockInfo> const&, class JigsawStructureRegistry const&);

// symbol: ?expansionHackEval@worldgen@br@@YAXHAEAVBoundingBox@@@Z
MCAPI void expansionHackEval(int, class BoundingBox&);

// symbol: ?isEmptyPool@worldgen@br@@YA_NAEBVStructureTemplatePool@@@Z
MCAPI bool isEmptyPool(class StructureTemplatePool const&);

// symbol:
// ?noopCalc@worldgen@br@@YAHAEBVBoundingBox@@AEBV?$vector@VJigsawBlockInfo@@V?$allocator@VJigsawBlockInfo@@@std@@@std@@AEBVJigsawStructureRegistry@@@Z
MCAPI int
noopCalc(class BoundingBox const&, std::vector<class JigsawBlockInfo> const&, class JigsawStructureRegistry const&);

// symbol: ?noopEval@worldgen@br@@YAXHAEAVBoundingBox@@@Z
MCAPI void noopEval(int, class BoundingBox&);

// symbol:
// ?shuffledJigsawBlockId@worldgen@br@@YA?AV?$vector@_KV?$allocator@_K@std@@@std@@AEBVStructureTemplatePool@@AEAVIRandom@@@Z
MCAPI std::vector<uint64> shuffledJigsawBlockId(class StructureTemplatePool const&, class IRandom&);

// symbol:
// ?shuffledJigsawBlocks@worldgen@br@@YA?AV?$vector@VJigsawBlockInfo@@V?$allocator@VJigsawBlockInfo@@@std@@@std@@AEBVStructurePoolElement@@VBlockPos@@W4Rotation@@AEAVIRandom@@@Z
MCAPI std::vector<class JigsawBlockInfo>
      shuffledJigsawBlocks(class StructurePoolElement const&, class BlockPos, ::Rotation, class IRandom&);
// NOLINTEND

}; // namespace br::worldgen
