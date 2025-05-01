#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/WeakPtr.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockLegacy;
class CompoundTagUpdaterContext;
namespace FlatteningUtils { class RemovedState; }
namespace FlatteningUtils { struct LegacyBlockInfo; }
// clang-format on

namespace FlatteningUtils {
// functions
// NOLINTBEGIN
MCNAPI void addUpdate(
    ::CompoundTagUpdaterContext&                                             context,
    uchar const* const                                                       version,
    ::FlatteningUtils::LegacyBlockInfo const&                                legacyBlockInfo,
    ::std::vector<::std::shared_ptr<::FlatteningUtils::RemovedState>> const& removedStates
);

MCNAPI ::std::vector<::WeakPtr<::BlockLegacy const>>
getComplexAliasBlocks(::FlatteningUtils::LegacyBlockInfo const& legacyBlockInfo, uint64 expectedCount);

MCNAPI ::std::function<::Block const*(int)>
getSimpleBlockComplexAliasCallback(::FlatteningUtils::LegacyBlockInfo const& legacyBlockInfo, uint64 expectedCount);
// NOLINTEND

// static variables
// NOLINTBEGIN
MCAPI ::FlatteningUtils::LegacyBlockInfo const& LegacyAnvilInfo();

MCAPI ::std::vector<::std::reference_wrapper<::FlatteningUtils::LegacyBlockInfo const>> const& LegacyBlockInfos();

MCAPI ::FlatteningUtils::LegacyBlockInfo const& LegacyBrownMushroomInfo();

MCAPI ::FlatteningUtils::LegacyBlockInfo const& LegacyCarpetInfo();

MCAPI ::FlatteningUtils::LegacyBlockInfo const& LegacyChemistryTableInfo();

MCAPI ::FlatteningUtils::LegacyBlockInfo const& LegacyCobblestoneWallInfo();

MCAPI ::FlatteningUtils::LegacyBlockInfo const& LegacyColoredTorchBPInfo();

MCAPI ::FlatteningUtils::LegacyBlockInfo const& LegacyColoredTorchRGInfo();

MCAPI ::FlatteningUtils::LegacyBlockInfo const& LegacyConcreteInfo();

MCAPI ::FlatteningUtils::LegacyBlockInfo const& LegacyConcretePowderInfo();

MCAPI ::FlatteningUtils::LegacyBlockInfo const& LegacyCoralBlockInfo();

MCAPI ::FlatteningUtils::LegacyBlockInfo const& LegacyCoralFanInfo();

MCAPI ::FlatteningUtils::LegacyBlockInfo const& LegacyCoralInfo();

MCAPI ::FlatteningUtils::LegacyBlockInfo const& LegacyCoralWallFan1Info();

MCAPI ::FlatteningUtils::LegacyBlockInfo const& LegacyCoralWallFan2Info();

MCAPI ::FlatteningUtils::LegacyBlockInfo const& LegacyCoralWallFan3Info();

MCAPI ::FlatteningUtils::LegacyBlockInfo const& LegacyDeadCoralFanInfo();

MCAPI ::FlatteningUtils::LegacyBlockInfo const& LegacyDirtInfo();

MCAPI ::FlatteningUtils::LegacyBlockInfo const& LegacyDoublePlantInfo();

MCAPI ::FlatteningUtils::LegacyBlockInfo const& LegacyFenceInfo();

MCAPI ::FlatteningUtils::LegacyBlockInfo const& LegacyHardStainedGlassInfo();

MCAPI ::FlatteningUtils::LegacyBlockInfo const& LegacyHardStainedGlassPaneInfo();

MCAPI ::FlatteningUtils::LegacyBlockInfo const& LegacyInfestedBlockInfo();

MCAPI ::FlatteningUtils::LegacyBlockInfo const& LegacyLavaCauldronInfo();

MCAPI ::FlatteningUtils::LegacyBlockInfo const& LegacyLeaves2Info();

MCAPI ::FlatteningUtils::LegacyBlockInfo const& LegacyLeavesInfo();

MCAPI ::FlatteningUtils::LegacyBlockInfo const& LegacyLightBlockInfo();

MCAPI ::FlatteningUtils::LegacyBlockInfo const& LegacyLog2Info();

MCAPI ::FlatteningUtils::LegacyBlockInfo const& LegacyLogInfo();

MCAPI ::FlatteningUtils::LegacyBlockInfo const& LegacyPlanksInfo();

MCAPI ::FlatteningUtils::LegacyBlockInfo const& LegacyPrismarineInfo();

MCAPI ::FlatteningUtils::LegacyBlockInfo const& LegacyPurpurInfo();

MCAPI ::FlatteningUtils::LegacyBlockInfo const& LegacyQuartzInfo();

MCAPI ::FlatteningUtils::LegacyBlockInfo const& LegacyRedFlowerInfo();

MCAPI ::FlatteningUtils::LegacyBlockInfo const& LegacyRedMushroomInfo();

MCAPI ::FlatteningUtils::LegacyBlockInfo const& LegacyRedSandstoneInfo();

MCAPI ::FlatteningUtils::LegacyBlockInfo const& LegacySandInfo();

MCAPI ::FlatteningUtils::LegacyBlockInfo const& LegacySandstoneInfo();

MCAPI ::FlatteningUtils::LegacyBlockInfo const& LegacySaplingInfo();

MCAPI ::FlatteningUtils::LegacyBlockInfo const& LegacyShulkerBoxInfo();

MCAPI ::FlatteningUtils::LegacyBlockInfo const& LegacySkullInfo();

MCAPI ::FlatteningUtils::LegacyBlockInfo const& LegacySpongeInfo();

MCAPI ::FlatteningUtils::LegacyBlockInfo const& LegacyStainedGlassInfo();

MCAPI ::FlatteningUtils::LegacyBlockInfo const& LegacyStainedGlassPaneInfo();

MCAPI ::FlatteningUtils::LegacyBlockInfo const& LegacyStoneBricksInfo();

MCAPI ::FlatteningUtils::LegacyBlockInfo const& LegacyStoneDoubleSlab1Info();

MCAPI ::FlatteningUtils::LegacyBlockInfo const& LegacyStoneDoubleSlab2Info();

MCAPI ::FlatteningUtils::LegacyBlockInfo const& LegacyStoneDoubleSlab3Info();

MCAPI ::FlatteningUtils::LegacyBlockInfo const& LegacyStoneDoubleSlab4Info();

MCAPI ::FlatteningUtils::LegacyBlockInfo const& LegacyStoneInfo();

MCAPI ::FlatteningUtils::LegacyBlockInfo const& LegacyStoneSlab1Info();

MCAPI ::FlatteningUtils::LegacyBlockInfo const& LegacyStoneSlab2Info();

MCAPI ::FlatteningUtils::LegacyBlockInfo const& LegacyStoneSlab3Info();

MCAPI ::FlatteningUtils::LegacyBlockInfo const& LegacyStoneSlab4Info();

MCAPI ::FlatteningUtils::LegacyBlockInfo const& LegacyStructureVoidInfo();

MCAPI ::FlatteningUtils::LegacyBlockInfo const& LegacyTallGrassInfo();

MCAPI ::FlatteningUtils::LegacyBlockInfo const& LegacyTerracottaInfo();

MCAPI ::FlatteningUtils::LegacyBlockInfo const& LegacyTntInfo();

MCAPI ::FlatteningUtils::LegacyBlockInfo const& LegacyWoodInfo();

MCAPI ::FlatteningUtils::LegacyBlockInfo const& LegacyWoodenDoubleSlabInfo();

MCAPI ::FlatteningUtils::LegacyBlockInfo const& LegacyWoodenSlabInfo();

MCAPI ::FlatteningUtils::LegacyBlockInfo const& LegacyWoolInfo();
// NOLINTEND

} // namespace FlatteningUtils
