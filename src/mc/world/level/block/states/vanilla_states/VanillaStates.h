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
#include "mc/world/level/block/DripstoneThickness.h"
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
#include "mc/world/level/block/PrismarineBlockType.h"
#include "mc/world/level/block/SandType.h"
#include "mc/world/level/block/SandstoneType.h"
#include "mc/world/level/block/SaplingType_DEPRECATED.h"
#include "mc/world/level/block/SeagrassType.h"
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

MCNAPI ::BlockStateVariant<int> const& Age();

MCNAPI ::BlockStateVariant<bool> const& AgeBit();

MCNAPI ::BlockStateVariant<bool> const& AttachedBit();

MCNAPI ::BlockStateVariant<::AttachmentType> const& Attachment();

MCNAPI ::BlockStateVariant<::LeafSize> const& BambooLeafSize();

MCNAPI ::BlockStateVariant<::StalkThickness> const& BambooThickness();

MCNAPI ::BlockStateVariant<int> const& BeehiveHoneyLevel();

MCNAPI ::BlockStateVariant<bool> const& BigDripleafHead();

MCNAPI ::BlockStateVariant<::BigDripleafTilt> const& BigDripleafTilt();

MCNAPI ::BlockStateVariant<int> const& BiteCounter();

MCNAPI ::BlockStateVariant<bool> const& Bloom();

MCNAPI ::BlockStateVariant<int> const& BookshelfOccupiedSlots();

MCNAPI ::BlockStateVariant<bool> const& BrewingStandSlotABit();

MCNAPI ::BlockStateVariant<bool> const& BrewingStandSlotBBit();

MCNAPI ::BlockStateVariant<bool> const& BrewingStandSlotCBit();

MCNAPI ::BlockStateVariant<int> const& BrushedProgress();

MCNAPI ::BlockStateVariant<bool> const& ButtonPressedBit();

MCNAPI ::BlockStateVariant<bool> const& CanSummon();

MCNAPI ::BlockStateVariant<int> const& Candles();

MCNAPI ::BlockStateVariant<::CauldronLiquidType> const& CauldronLiquid();

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

MCNAPI ::BlockStateVariant<bool> const& DEPRECATED_NoDropBit();

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

MCNAPI ::BlockStateVariant<int> const& Direction();

MCNAPI ::BlockStateVariant<bool> const& DisarmedBit();

MCNAPI ::BlockStateVariant<bool> const& DoorHingeBit();

MCNAPI ::BlockStateVariant<bool> const& DragDown();

MCNAPI ::BlockStateVariant<::DripstoneThickness> const& DripstoneThickness();

MCNAPI ::BlockStateVariant<bool> const& EndPortalEyeBit();

MCNAPI ::BlockStateVariant<bool> const& ExplodeBit();

MCNAPI ::BlockStateVariant<bool> const& Extinguished();

MCNAPI ::BlockStateVariant<int> const& FacingDirection();

MCNAPI ::BlockStateVariant<int> const& FillLevel();

MCNAPI ::BlockStateVariant<int> const& GrowingPlantAge();

MCNAPI ::BlockStateVariant<int> const& Growth();

MCNAPI ::BlockStateVariant<bool> const& HangingBit();

MCNAPI ::BlockStateVariant<bool> const& HeadPieceBit();

MCNAPI ::BlockStateVariant<int> const& Height();

MCNAPI ::BlockStateVariant<int> const& HugeMushroomBits();

MCNAPI ::BlockStateVariant<bool> const& InWallBit();

MCNAPI ::BlockStateVariant<bool> const& InfiniburnBit();

MCNAPI ::BlockStateVariant<bool> const& ItemFrameMapBit();

MCNAPI ::BlockStateVariant<bool> const& ItemFramePhotoBit();

MCNAPI ::BlockStateVariant<int> const& KelpAge();

MCNAPI ::BlockStateVariant<::LeverDirection> const& LeverDirection();

MCNAPI ::BlockStateVariant<int> const& LiquidDepth();

MCNAPI ::BlockStateVariant<bool> const& Lit();

MCNAPI ::BlockStateVariant<int> const& MoisturizedAmount();

MCNAPI ::BlockStateVariant<int> const& MultiFaceDirectionBits();

MCNAPI ::BlockStateVariant<bool> const& Natural();

MCNAPI ::BlockStateVariant<bool> const& OccupiedBit();

MCNAPI ::BlockStateVariant<bool> const& Ominous();

MCNAPI ::BlockStateVariant<bool> const& OpenBit();

MCNAPI ::BlockStateVariant<::FrontAndTop> const& Orientation();

MCNAPI ::BlockStateVariant<bool> const& OutputLitBit();

MCNAPI ::BlockStateVariant<bool> const& OutputSubtractBit();

MCNAPI ::BlockStateVariant<::PaleMossCarpetSide> const& PaleMossCarpetSideEast();

MCNAPI ::BlockStateVariant<::PaleMossCarpetSide> const& PaleMossCarpetSideNorth();

MCNAPI ::BlockStateVariant<::PaleMossCarpetSide> const& PaleMossCarpetSideSouth();

MCNAPI ::BlockStateVariant<::PaleMossCarpetSide> const& PaleMossCarpetSideWest();

MCNAPI ::BlockStateVariant<bool> const& PersistentBit();

MCNAPI ::BlockStateVariant<::PillarAxis> const& PillarAxis();

MCNAPI ::BlockStateVariant<::PortalAxis> const& PortalAxis();

MCNAPI ::BlockStateVariant<bool> const& PoweredBit();

MCNAPI ::BlockStateVariant<int> const& PropaguleStage();

MCNAPI ::BlockStateVariant<bool> const& RailDataBit();

MCNAPI ::BlockStateVariant<int> const& RailDirection();

MCNAPI ::BlockStateVariant<int> const& RedstoneSignal();

MCNAPI ::BlockStateVariant<int> const& RepeaterDelay();

MCNAPI ::BlockStateVariant<int> const& RespawnAnchorCharge();

MCNAPI ::BlockStateVariant<int> const& Rotation();

MCNAPI ::BlockStateVariant<int> const& SculkSensorPhase();

MCNAPI ::BlockStateVariant<::SeagrassType> const& SeagrassType();

MCNAPI ::BlockStateVariant<int> const& Stability();

MCNAPI ::BlockStateVariant<bool> const& StabilityCheckBit();

MCNAPI ::BlockStateVariant<int> const& StandingRotation();

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

MCNAPI ::BlockStateVariant<bool> const& UpdateBit();

MCNAPI ::BlockStateVariant<bool> const& UpperBlockBit();

MCNAPI ::BlockStateVariant<bool> const& UpsideDownBit();

MCNAPI ::BlockStateVariant<::VaultBlockState> const& VaultState();

MCNAPI ::BlockStateVariant<int> const& VineDirectionBits();

MCNAPI ::BlockStateVariant<::WallConnectionType> const& WallConnectionTypeEast();

MCNAPI ::BlockStateVariant<::WallConnectionType> const& WallConnectionTypeNorth();

MCNAPI ::BlockStateVariant<::WallConnectionType> const& WallConnectionTypeSouth();

MCNAPI ::BlockStateVariant<::WallConnectionType> const& WallConnectionTypeWest();

MCNAPI ::BlockStateVariant<bool> const& WallPostBit();

MCNAPI ::BlockStateVariant<int> const& WeepingVinesAge();

MCNAPI ::BlockStateVariant<int> const& WeirdoDirection();
// NOLINTEND

} // namespace VanillaStates
