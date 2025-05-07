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
MCNAPI ::FlatteningUtils::LegacyBlockInfo const& LegacyAnvilInfo();

MCNAPI ::std::vector<::std::reference_wrapper<::FlatteningUtils::LegacyBlockInfo const>> const& LegacyBlockInfos();

MCNAPI ::FlatteningUtils::LegacyBlockInfo const& LegacyBrownMushroomInfo();

MCNAPI ::FlatteningUtils::LegacyBlockInfo const& LegacyCarpetInfo();

MCNAPI ::FlatteningUtils::LegacyBlockInfo const& LegacyChemistryTableInfo();

MCNAPI ::FlatteningUtils::LegacyBlockInfo const& LegacyCobblestoneWallInfo();

MCNAPI ::FlatteningUtils::LegacyBlockInfo const& LegacyColoredTorchBPInfo();

MCNAPI ::FlatteningUtils::LegacyBlockInfo const& LegacyColoredTorchRGInfo();

MCNAPI ::FlatteningUtils::LegacyBlockInfo const& LegacyConcreteInfo();

MCNAPI ::FlatteningUtils::LegacyBlockInfo const& LegacyConcretePowderInfo();

MCNAPI ::FlatteningUtils::LegacyBlockInfo const& LegacyCoralBlockInfo();

MCNAPI ::FlatteningUtils::LegacyBlockInfo const& LegacyCoralFanInfo();

MCNAPI ::FlatteningUtils::LegacyBlockInfo const& LegacyCoralInfo();

MCNAPI ::FlatteningUtils::LegacyBlockInfo const& LegacyCoralWallFan1Info();

MCNAPI ::FlatteningUtils::LegacyBlockInfo const& LegacyCoralWallFan2Info();

MCNAPI ::FlatteningUtils::LegacyBlockInfo const& LegacyCoralWallFan3Info();

MCNAPI ::FlatteningUtils::LegacyBlockInfo const& LegacyDeadCoralFanInfo();

MCNAPI ::FlatteningUtils::LegacyBlockInfo const& LegacyDirtInfo();

MCNAPI ::FlatteningUtils::LegacyBlockInfo const& LegacyDoublePlantInfo();

MCNAPI ::FlatteningUtils::LegacyBlockInfo const& LegacyFenceInfo();

MCNAPI ::FlatteningUtils::LegacyBlockInfo const& LegacyHardStainedGlassInfo();

MCNAPI ::FlatteningUtils::LegacyBlockInfo const& LegacyHardStainedGlassPaneInfo();

MCNAPI ::FlatteningUtils::LegacyBlockInfo const& LegacyInfestedBlockInfo();

MCNAPI ::FlatteningUtils::LegacyBlockInfo const& LegacyLavaCauldronInfo();

MCNAPI ::FlatteningUtils::LegacyBlockInfo const& LegacyLeaves2Info();

MCNAPI ::FlatteningUtils::LegacyBlockInfo const& LegacyLeavesInfo();

MCNAPI ::FlatteningUtils::LegacyBlockInfo const& LegacyLightBlockInfo();

MCNAPI ::FlatteningUtils::LegacyBlockInfo const& LegacyLog2Info();

MCNAPI ::FlatteningUtils::LegacyBlockInfo const& LegacyLogInfo();

MCNAPI ::FlatteningUtils::LegacyBlockInfo const& LegacyPlanksInfo();

MCNAPI ::FlatteningUtils::LegacyBlockInfo const& LegacyPrismarineInfo();

MCNAPI ::FlatteningUtils::LegacyBlockInfo const& LegacyPurpurInfo();

MCNAPI ::FlatteningUtils::LegacyBlockInfo const& LegacyQuartzInfo();

MCNAPI ::FlatteningUtils::LegacyBlockInfo const& LegacyRedFlowerInfo();

MCNAPI ::FlatteningUtils::LegacyBlockInfo const& LegacyRedMushroomInfo();

MCNAPI ::FlatteningUtils::LegacyBlockInfo const& LegacyRedSandstoneInfo();

MCNAPI ::FlatteningUtils::LegacyBlockInfo const& LegacySandInfo();

MCNAPI ::FlatteningUtils::LegacyBlockInfo const& LegacySandstoneInfo();

MCNAPI ::FlatteningUtils::LegacyBlockInfo const& LegacySaplingInfo();

MCNAPI ::FlatteningUtils::LegacyBlockInfo const& LegacyShulkerBoxInfo();

MCNAPI ::FlatteningUtils::LegacyBlockInfo const& LegacySkullInfo();

MCNAPI ::FlatteningUtils::LegacyBlockInfo const& LegacySpongeInfo();

MCNAPI ::FlatteningUtils::LegacyBlockInfo const& LegacyStainedGlassInfo();

MCNAPI ::FlatteningUtils::LegacyBlockInfo const& LegacyStainedGlassPaneInfo();

MCNAPI ::FlatteningUtils::LegacyBlockInfo const& LegacyStoneBricksInfo();

MCNAPI ::FlatteningUtils::LegacyBlockInfo const& LegacyStoneDoubleSlab1Info();

MCNAPI ::FlatteningUtils::LegacyBlockInfo const& LegacyStoneDoubleSlab2Info();

MCNAPI ::FlatteningUtils::LegacyBlockInfo const& LegacyStoneDoubleSlab3Info();

MCNAPI ::FlatteningUtils::LegacyBlockInfo const& LegacyStoneDoubleSlab4Info();

MCNAPI ::FlatteningUtils::LegacyBlockInfo const& LegacyStoneInfo();

MCNAPI ::FlatteningUtils::LegacyBlockInfo const& LegacyStoneSlab1Info();

MCNAPI ::FlatteningUtils::LegacyBlockInfo const& LegacyStoneSlab2Info();

MCNAPI ::FlatteningUtils::LegacyBlockInfo const& LegacyStoneSlab3Info();

MCNAPI ::FlatteningUtils::LegacyBlockInfo const& LegacyStoneSlab4Info();

MCNAPI ::FlatteningUtils::LegacyBlockInfo const& LegacyStructureVoidInfo();

MCNAPI ::FlatteningUtils::LegacyBlockInfo const& LegacyTallGrassInfo();

MCNAPI ::FlatteningUtils::LegacyBlockInfo const& LegacyTerracottaInfo();

MCNAPI ::FlatteningUtils::LegacyBlockInfo const& LegacyTntInfo();

MCNAPI ::FlatteningUtils::LegacyBlockInfo const& LegacyWoodInfo();

MCNAPI ::FlatteningUtils::LegacyBlockInfo const& LegacyWoodenDoubleSlabInfo();

MCNAPI ::FlatteningUtils::LegacyBlockInfo const& LegacyWoodenSlabInfo();

MCNAPI ::FlatteningUtils::LegacyBlockInfo const& LegacyWoolInfo();
// NOLINTEND

} // namespace FlatteningUtils
