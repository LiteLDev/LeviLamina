#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/WeakPtr.h"
#include "mc/world/level/block/BlockLegacy.h"
#include "mc/world/level/block/CoralColor.h"
#include "mc/world/level/block/WoodType.h"

// auto generated forward declare list
// clang-format off
namespace FlatteningUtils { class RemovedState; }
namespace FlatteningUtils { struct BlockNameRefAuxVariant; }
namespace FlatteningUtils { struct Instance; }
namespace FlatteningUtils { struct LegacyBlockInfo; }
// clang-format on

namespace FlatteningUtils {
// NOLINTBEGIN
MCAPI extern std::vector<std::reference_wrapper<struct FlatteningUtils::LegacyBlockInfo const>> const LegacyBlockInfos;

MCAPI extern struct FlatteningUtils::LegacyBlockInfo const LegacyCarpetInfo;

MCAPI extern struct FlatteningUtils::LegacyBlockInfo const LegacyConcreteInfo;

MCAPI extern struct FlatteningUtils::LegacyBlockInfo const LegacyConcretePowderInfo;

MCAPI extern struct FlatteningUtils::LegacyBlockInfo const LegacyCoralBlockInfo;

MCAPI extern struct FlatteningUtils::LegacyBlockInfo const LegacyCoralFanInfo;

MCAPI extern struct FlatteningUtils::LegacyBlockInfo const LegacyCoralInfo;

MCAPI extern struct FlatteningUtils::LegacyBlockInfo const LegacyDeadCoralFanInfo;

MCAPI extern struct FlatteningUtils::LegacyBlockInfo const LegacyDoublePlantInfo;

MCAPI extern struct FlatteningUtils::LegacyBlockInfo const LegacyFenceInfo;

MCAPI extern struct FlatteningUtils::LegacyBlockInfo const LegacyHardStainedGlassInfo;

MCAPI extern struct FlatteningUtils::LegacyBlockInfo const LegacyHardStainedGlassPaneInfo;

MCAPI extern struct FlatteningUtils::LegacyBlockInfo const LegacyLavaCauldronInfo;

MCAPI extern struct FlatteningUtils::LegacyBlockInfo const LegacyLeaves2Info;

MCAPI extern struct FlatteningUtils::LegacyBlockInfo const LegacyLeavesInfo;

MCAPI extern struct FlatteningUtils::LegacyBlockInfo const LegacyLog2Info;

MCAPI extern struct FlatteningUtils::LegacyBlockInfo const LegacyLogInfo;

MCAPI extern struct FlatteningUtils::LegacyBlockInfo const LegacyPlanksInfo;

MCAPI extern struct FlatteningUtils::LegacyBlockInfo const LegacyRedFlowerInfo;

MCAPI extern struct FlatteningUtils::LegacyBlockInfo const LegacySaplingInfo;

MCAPI extern struct FlatteningUtils::LegacyBlockInfo const LegacyShulkerBoxInfo;

MCAPI extern struct FlatteningUtils::LegacyBlockInfo const LegacyStainedGlassInfo;

MCAPI extern struct FlatteningUtils::LegacyBlockInfo const LegacyStainedGlassPaneInfo;

MCAPI extern struct FlatteningUtils::LegacyBlockInfo const LegacyStoneInfo;

MCAPI extern struct FlatteningUtils::LegacyBlockInfo const LegacyStoneSlab1Info;

MCAPI extern struct FlatteningUtils::LegacyBlockInfo const LegacyTallGrassInfo;

MCAPI extern struct FlatteningUtils::LegacyBlockInfo const LegacyTerracottaInfo;

MCAPI extern struct FlatteningUtils::LegacyBlockInfo const LegacyWoodInfo;

MCAPI extern struct FlatteningUtils::LegacyBlockInfo const LegacyWoodenDoubleSlabInfo;

MCAPI extern struct FlatteningUtils::LegacyBlockInfo const LegacyWoodenSlabInfo;

MCAPI extern struct FlatteningUtils::LegacyBlockInfo const LegacyWoolInfo;

MCAPI void addUpdate(
    class CompoundTagUpdaterContext&                                         context,
    uchar                                                                    major,
    uchar                                                                    minor,
    uchar                                                                    patch,
    struct FlatteningUtils::LegacyBlockInfo const&                           legacyBlockInfo,
    std::vector<std::shared_ptr<class FlatteningUtils::RemovedState>> const& removedStates
);

MCAPI std::vector<class WeakPtr<class BlockLegacy const>>
      getComplexAliasBlocks(struct FlatteningUtils::LegacyBlockInfo const& legacyBlockInfo, uint64 expectedCount);

MCAPI std::function<class Block const*(int)> getSimpleBlockComplexAliasCallback(
    struct FlatteningUtils::LegacyBlockInfo const& legacyBlockInfo,
    uint64                                         expectedCount
);
// NOLINTEND

}; // namespace FlatteningUtils
