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

// thunks
// NOLINTBEGIN
MCAPI std::vector<std::reference_wrapper<struct FlatteningUtils::LegacyBlockInfo const>> const& LegacyBlockInfos();

MCAPI struct FlatteningUtils::LegacyBlockInfo const& LegacyCarpetInfo();

MCAPI struct FlatteningUtils::LegacyBlockInfo const& LegacyConcreteInfo();

MCAPI struct FlatteningUtils::LegacyBlockInfo const& LegacyConcretePowderInfo();

MCAPI struct FlatteningUtils::LegacyBlockInfo const& LegacyCoralBlockInfo();

MCAPI struct FlatteningUtils::LegacyBlockInfo const& LegacyCoralFanInfo();

MCAPI struct FlatteningUtils::LegacyBlockInfo const& LegacyCoralInfo();

MCAPI struct FlatteningUtils::LegacyBlockInfo const& LegacyDeadCoralFanInfo();

MCAPI struct FlatteningUtils::LegacyBlockInfo const& LegacyDoublePlantInfo();

MCAPI struct FlatteningUtils::LegacyBlockInfo const& LegacyFenceInfo();

MCAPI struct FlatteningUtils::LegacyBlockInfo const& LegacyHardStainedGlassInfo();

MCAPI struct FlatteningUtils::LegacyBlockInfo const& LegacyHardStainedGlassPaneInfo();

MCAPI struct FlatteningUtils::LegacyBlockInfo const& LegacyLavaCauldronInfo();

MCAPI struct FlatteningUtils::LegacyBlockInfo const& LegacyLeaves2Info();

MCAPI struct FlatteningUtils::LegacyBlockInfo const& LegacyLeavesInfo();

MCAPI struct FlatteningUtils::LegacyBlockInfo const& LegacyLog2Info();

MCAPI struct FlatteningUtils::LegacyBlockInfo const& LegacyLogInfo();

MCAPI struct FlatteningUtils::LegacyBlockInfo const& LegacyPlanksInfo();

MCAPI struct FlatteningUtils::LegacyBlockInfo const& LegacyRedFlowerInfo();

MCAPI struct FlatteningUtils::LegacyBlockInfo const& LegacySaplingInfo();

MCAPI struct FlatteningUtils::LegacyBlockInfo const& LegacyShulkerBoxInfo();

MCAPI struct FlatteningUtils::LegacyBlockInfo const& LegacyStainedGlassInfo();

MCAPI struct FlatteningUtils::LegacyBlockInfo const& LegacyStainedGlassPaneInfo();

MCAPI struct FlatteningUtils::LegacyBlockInfo const& LegacyStoneInfo();

MCAPI struct FlatteningUtils::LegacyBlockInfo const& LegacyStoneSlab1Info();

MCAPI struct FlatteningUtils::LegacyBlockInfo const& LegacyTallGrassInfo();

MCAPI struct FlatteningUtils::LegacyBlockInfo const& LegacyTerracottaInfo();

MCAPI struct FlatteningUtils::LegacyBlockInfo const& LegacyWoodInfo();

MCAPI struct FlatteningUtils::LegacyBlockInfo const& LegacyWoodenDoubleSlabInfo();

MCAPI struct FlatteningUtils::LegacyBlockInfo const& LegacyWoodenSlabInfo();

MCAPI struct FlatteningUtils::LegacyBlockInfo const& LegacyWoolInfo();
// NOLINTEND

}; // namespace FlatteningUtils
