#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/AnvilDamage.h"
#include "mc/world/level/block/AttachmentType.h"
#include "mc/world/level/block/BigDripleafTilt.h"
#include "mc/world/level/block/BlockColor.h"
#include "mc/world/level/block/CauldronLiquidType.h"
#include "mc/world/level/block/ChemistryTableType.h"
#include "mc/world/level/block/ChiselType.h"
#include "mc/world/level/block/CoralColor.h"
#include "mc/world/level/block/CreakingHeartState.h"
#include "mc/world/level/block/DirtType.h"
#include "mc/world/level/block/DoublePlantType.h"
#include "mc/world/level/block/EggCount.h"
#include "mc/world/level/block/FlowerType.h"
#include "mc/world/level/block/FrontAndTop.h"
#include "mc/world/level/block/HatchLevel.h"
#include "mc/world/level/block/LeafSize.h"
#include "mc/world/level/block/LeverDirection.h"
#include "mc/world/level/block/MonsterEggStoneType.h"
#include "mc/world/level/block/NewLeavesType.h"
#include "mc/world/level/block/NewLogType.h"
#include "mc/world/level/block/OldLeavesType.h"
#include "mc/world/level/block/OldLogType.h"
#include "mc/world/level/block/PaleMossCarpetSide.h"
#include "mc/world/level/block/PillarAxis.h"
#include "mc/world/level/block/PortalAxis.h"
#include "mc/world/level/block/PotentSulfurState.h"
#include "mc/world/level/block/PrismarineBlockType.h"
#include "mc/world/level/block/RedstoneSide.h"
#include "mc/world/level/block/SandType.h"
#include "mc/world/level/block/SandstoneType.h"
#include "mc/world/level/block/SaplingType_DEPRECATED.h"
#include "mc/world/level/block/SeagrassType.h"
#include "mc/world/level/block/SpeleothemThickness.h"
#include "mc/world/level/block/SpongeType.h"
#include "mc/world/level/block/StalkThickness.h"
#include "mc/world/level/block/StoneBrickType.h"
#include "mc/world/level/block/StoneSlabType.h"
#include "mc/world/level/block/StoneSlabType2.h"
#include "mc/world/level/block/StoneSlabType3.h"
#include "mc/world/level/block/StoneSlabType4.h"
#include "mc/world/level/block/StoneType.h"
#include "mc/world/level/block/StructureBlockType.h"
#include "mc/world/level/block/StructureVoidType.h"
#include "mc/world/level/block/TallGrassType.h"
#include "mc/world/level/block/TorchFacing.h"
#include "mc/world/level/block/VaultBlockState.h"
#include "mc/world/level/block/WallBlockType.h"
#include "mc/world/level/block/WallConnectionType.h"
#include "mc/world/level/block/WoodType.h"
#include "mc/world/level/block/states/BlockStateVariant.h"

// auto generated forward declare list
// clang-format off
class BlockState;
class HashedString;
// clang-format on

namespace VanillaStates {
// functions
// NOLINTBEGIN
MCNAPI ::BlockState const* getState(::HashedString const& name);
// NOLINTEND

// static variables
// NOLINTBEGIN
MCNAPI ::BlockStateVariant<bool> const& Active();

MCAPI ::BlockStateVariant<int> const& Age();

MCAPI ::BlockStateVariant<bool> const& AgeBit();

MCAPI ::BlockStateVariant<bool> const& AttachedBit();

MCNAPI ::BlockStateVariant<::AttachmentType> const& Attachment();

MCNAPI ::BlockStateVariant<::LeafSize> const& BambooLeafSize();

MCNAPI ::BlockStateVariant<::StalkThickness> const& BambooThickness();

MCAPI ::BlockStateVariant<int> const& BeehiveHoneyLevel();

MCNAPI ::BlockStateVariant<bool> const& BigDripleafHead();

MCNAPI ::BlockStateVariant<::BigDripleafTilt> const& BigDripleafTilt();

MCAPI ::BlockStateVariant<int> const& BiteCounter();

MCNAPI ::BlockStateVariant<bool> const& Bloom();

MCNAPI ::BlockStateVariant<int> const& BookshelfOccupiedSlots();

MCNAPI ::BlockStateVariant<bool> const& BrewingStandSlotABit();

MCNAPI ::BlockStateVariant<bool> const& BrewingStandSlotBBit();

MCNAPI ::BlockStateVariant<bool> const& BrewingStandSlotCBit();

MCNAPI ::BlockStateVariant<int> const& BrushedProgress();

MCNAPI ::BlockStateVariant<bool> const& ButtonPressedBit();

MCNAPI ::BlockStateVariant<bool> const& CanSummon();

MCAPI ::BlockStateVariant<int> const& Candles();

MCAPI ::BlockStateVariant<::CauldronLiquidType> const& CauldronLiquid();

MCNAPI ::BlockStateVariant<int> const& ClusterCount();

MCNAPI ::BlockStateVariant<int> const& ComposterFillLevel();

MCNAPI ::BlockStateVariant<bool> const& ConditionalBit();

MCNAPI ::BlockStateVariant<int> const& CoralDirection();

MCNAPI ::BlockStateVariant<int> const& CoralFanDirection();

MCNAPI ::BlockStateVariant<bool> const& CoveredBit();

MCNAPI ::BlockStateVariant<::HatchLevel> const& CrackedState();

MCNAPI ::BlockStateVariant<bool> const& Crafting();

MCNAPI ::BlockStateVariant<::CreakingHeartState> const& CreakingHeartState();

MCNAPI ::BlockStateVariant<int> const& DEPRECATED();

MCNAPI ::BlockStateVariant<bool> const& DEPRECATED_AllowUnderwaterBit();

MCNAPI ::BlockStateVariant<int> const& DEPRECATED_BlockLightLevel();

MCNAPI ::BlockStateVariant<::ChemistryTableType> const& DEPRECATED_ChemistryTableType();

MCNAPI ::BlockStateVariant<::ChiselType> const& DEPRECATED_ChiselType();

MCNAPI ::BlockStateVariant<::BlockColor> const& DEPRECATED_Color();

MCNAPI ::BlockStateVariant<bool> const& DEPRECATED_ColorBit();

MCNAPI ::BlockStateVariant<::CoralColor> const& DEPRECATED_CoralColor();

MCNAPI ::BlockStateVariant<bool> const& DEPRECATED_CoralHangTypeBit();

MCNAPI ::BlockStateVariant<::AnvilDamage> const& DEPRECATED_Damage();

MCNAPI ::BlockStateVariant<::DirtType> const& DEPRECATED_DirtType();

MCNAPI ::BlockStateVariant<::DoublePlantType> const& DEPRECATED_DoublePlantType();

MCNAPI ::BlockStateVariant<::FlowerType> const& DEPRECATED_FlowerType();

MCNAPI ::BlockStateVariant<::MonsterEggStoneType> const& DEPRECATED_MonsterEggStoneType();

MCNAPI ::BlockStateVariant<::NewLeavesType> const& DEPRECATED_NewLeavesType();

MCNAPI ::BlockStateVariant<::NewLogType> const& DEPRECATED_NewLogType();

MCNAPI ::BlockStateVariant<::OldLeavesType> const& DEPRECATED_OldLeavesType();

MCNAPI ::BlockStateVariant<::OldLogType> const& DEPRECATED_OldLogType();

MCNAPI ::BlockStateVariant<::PrismarineBlockType> const& DEPRECATED_PrismarineBlockType();

MCNAPI ::BlockStateVariant<::SandType> const& DEPRECATED_SandType();

MCNAPI ::BlockStateVariant<::SandstoneType> const& DEPRECATED_SandstoneType();

MCNAPI ::BlockStateVariant<::SaplingType_DEPRECATED> const& DEPRECATED_SaplingType();

MCNAPI ::BlockStateVariant<::SpongeType> const& DEPRECATED_SpongeType();

MCNAPI ::BlockStateVariant<::StoneBrickType> const& DEPRECATED_StoneBrickType();

MCNAPI ::BlockStateVariant<::StoneSlabType> const& DEPRECATED_StoneSlabType();

MCNAPI ::BlockStateVariant<::StoneSlabType2> const& DEPRECATED_StoneSlabType2();

MCNAPI ::BlockStateVariant<::StoneSlabType3> const& DEPRECATED_StoneSlabType3();

MCNAPI ::BlockStateVariant<::StoneSlabType4> const& DEPRECATED_StoneSlabType4();

MCNAPI ::BlockStateVariant<::StoneType> const& DEPRECATED_StoneType();

MCNAPI ::BlockStateVariant<bool> const& DEPRECATED_StrippedBit();

MCNAPI ::BlockStateVariant<::StructureVoidType> const& DEPRECATED_StructureVoidType();

MCNAPI ::BlockStateVariant<::TallGrassType> const& DEPRECATED_TallGrassType();

MCNAPI ::BlockStateVariant<::WallBlockType> const& DEPRECATED_WallBlockType();

MCNAPI ::BlockStateVariant<::WoodType> const& DEPRECATED_WoodType();

MCNAPI ::BlockStateVariant<bool> const& DeadBit();

MCAPI ::BlockStateVariant<int> const& Direction();

MCNAPI ::BlockStateVariant<bool> const& DisarmedBit();

MCAPI ::BlockStateVariant<bool> const& DoorHingeBit();

MCNAPI ::BlockStateVariant<bool> const& DragDown();

MCNAPI ::BlockStateVariant<bool> const& EndPortalEyeBit();

MCNAPI ::BlockStateVariant<bool> const& ExplodeBit();

MCAPI ::BlockStateVariant<bool> const& Extinguished();

MCAPI ::BlockStateVariant<int> const& FacingDirection();

MCAPI ::BlockStateVariant<int> const& FillLevel();

MCAPI ::BlockStateVariant<int> const& GrowingPlantAge();

MCAPI ::BlockStateVariant<int> const& Growth();

MCAPI ::BlockStateVariant<bool> const& HangingBit();

MCAPI ::BlockStateVariant<bool> const& HeadPieceBit();

MCNAPI ::BlockStateVariant<int> const& Height();

MCNAPI ::BlockStateVariant<int> const& HugeMushroomBits();

MCNAPI ::BlockStateVariant<bool> const& InWallBit();

MCNAPI ::BlockStateVariant<bool> const& InfiniburnBit();

MCNAPI ::BlockStateVariant<bool> const& ItemFrameMapBit();

MCNAPI ::BlockStateVariant<bool> const& ItemFramePhotoBit();

MCAPI ::BlockStateVariant<int> const& KelpAge();

MCNAPI ::BlockStateVariant<::LeverDirection> const& LeverDirection();

MCAPI ::BlockStateVariant<int> const& LiquidDepth();

MCAPI ::BlockStateVariant<bool> const& Lit();

MCAPI ::BlockStateVariant<int> const& MoisturizedAmount();

MCAPI ::BlockStateVariant<int> const& MultiFaceDirectionBits();

MCNAPI ::BlockStateVariant<bool> const& Natural();

MCAPI ::BlockStateVariant<bool> const& OccupiedBit();

MCNAPI ::BlockStateVariant<bool> const& Ominous();

MCAPI ::BlockStateVariant<bool> const& OpenBit();

MCNAPI ::BlockStateVariant<::FrontAndTop> const& Orientation();

MCNAPI ::BlockStateVariant<bool> const& OutputLitBit();

MCNAPI ::BlockStateVariant<bool> const& OutputSubtractBit();

MCNAPI ::BlockStateVariant<::PaleMossCarpetSide> const& PaleMossCarpetSideEast();

MCNAPI ::BlockStateVariant<::PaleMossCarpetSide> const& PaleMossCarpetSideNorth();

MCNAPI ::BlockStateVariant<::PaleMossCarpetSide> const& PaleMossCarpetSideSouth();

MCNAPI ::BlockStateVariant<::PaleMossCarpetSide> const& PaleMossCarpetSideWest();

MCAPI ::BlockStateVariant<bool> const& PersistentBit();

MCAPI ::BlockStateVariant<::PillarAxis> const& PillarAxis();

MCAPI ::BlockStateVariant<::PortalAxis> const& PortalAxis();

MCNAPI ::BlockStateVariant<::PotentSulfurState> const& PotentSulfurState();

MCAPI ::BlockStateVariant<bool> const& PoweredBit();

MCAPI ::BlockStateVariant<int> const& PropaguleStage();

MCNAPI ::BlockStateVariant<bool> const& RailDataBit();

MCNAPI ::BlockStateVariant<int> const& RailDirection();

MCNAPI ::BlockStateVariant<::RedstoneSide> const& RedstoneEast();

MCNAPI ::BlockStateVariant<::RedstoneSide> const& RedstoneNorth();

MCAPI ::BlockStateVariant<int> const& RedstoneSignal();

MCNAPI ::BlockStateVariant<::RedstoneSide> const& RedstoneSouth();

MCNAPI ::BlockStateVariant<::RedstoneSide> const& RedstoneWest();

MCNAPI ::BlockStateVariant<int> const& RehydrationLevel();

MCAPI ::BlockStateVariant<int> const& RepeaterDelay();

MCAPI ::BlockStateVariant<int> const& RespawnAnchorCharge();

MCNAPI ::BlockStateVariant<int> const& Rotation();

MCNAPI ::BlockStateVariant<int> const& SculkSensorPhase();

MCNAPI ::BlockStateVariant<::SeagrassType> const& SeagrassType();

MCNAPI ::BlockStateVariant<int> const& ShelfConnectionType();

MCAPI ::BlockStateVariant<::SpeleothemThickness> const& SpeleothemThickness();

MCNAPI ::BlockStateVariant<int> const& Stability();

MCAPI ::BlockStateVariant<bool> const& StabilityCheckBit();

MCAPI ::BlockStateVariant<int> const& StandingRotation();

MCNAPI ::BlockStateVariant<::StructureBlockType> const& StructureBlockType();

MCNAPI ::BlockStateVariant<bool> const& SuspendedBit();

MCNAPI ::BlockStateVariant<bool> const& Tip();

MCNAPI ::BlockStateVariant<bool> const& ToggleBit();

MCNAPI ::BlockStateVariant<bool> const& TopSlotBit();

MCNAPI ::BlockStateVariant<::TorchFacing> const& TorchFacingDirection();

MCNAPI ::BlockStateVariant<int> const& TrialSpawnerState();

MCNAPI ::BlockStateVariant<bool> const& TriggeredBit();

MCNAPI ::BlockStateVariant<::EggCount> const& TurtleEggCount();

MCNAPI ::BlockStateVariant<int> const& TwistingVinesAge();

MCAPI ::BlockStateVariant<bool> const& UpdateBit();

MCAPI ::BlockStateVariant<bool> const& UpperBlockBit();

MCAPI ::BlockStateVariant<bool> const& UpsideDownBit();

MCNAPI ::BlockStateVariant<::VaultBlockState> const& VaultState();

MCNAPI ::BlockStateVariant<int> const& VineDirectionBits();

MCAPI ::BlockStateVariant<::WallConnectionType> const& WallConnectionTypeEast();

MCAPI ::BlockStateVariant<::WallConnectionType> const& WallConnectionTypeNorth();

MCAPI ::BlockStateVariant<::WallConnectionType> const& WallConnectionTypeSouth();

MCAPI ::BlockStateVariant<::WallConnectionType> const& WallConnectionTypeWest();

MCAPI ::BlockStateVariant<bool> const& WallPostBit();

MCNAPI ::BlockStateVariant<int> const& WeepingVinesAge();

MCAPI ::BlockStateVariant<int> const& WeirdoDirection();
// NOLINTEND

} // namespace VanillaStates
