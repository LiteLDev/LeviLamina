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
#include "mc/world/level/block/SaplingType.h"
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
MCAPI ::BlockState const* getState(::HashedString const& name);

MCAPI void registerStates();

MCAPI void unregisterStates();
// NOLINTEND

// static variables
// NOLINTBEGIN
MCAPI ::BlockStateVariant<bool> const& Active();

MCAPI ::BlockStateVariant<int> const& Age();

MCAPI ::BlockStateVariant<bool> const& AgeBit();

MCAPI ::BlockStateVariant<bool> const& AttachedBit();

MCAPI ::BlockStateVariant<::AttachmentType> const& Attachment();

MCAPI ::BlockStateVariant<::LeafSize> const& BambooLeafSize();

MCAPI ::BlockStateVariant<::StalkThickness> const& BambooThickness();

MCAPI ::BlockStateVariant<int> const& BeehiveHoneyLevel();

MCAPI ::BlockStateVariant<bool> const& BigDripleafHead();

MCAPI ::BlockStateVariant<::BigDripleafTilt> const& BigDripleafTilt();

MCAPI ::BlockStateVariant<int> const& BiteCounter();

MCAPI ::BlockStateVariant<bool> const& Bloom();

MCAPI ::BlockStateVariant<int> const& BookshelfOccupiedSlots();

MCAPI ::BlockStateVariant<bool> const& BrewingStandSlotABit();

MCAPI ::BlockStateVariant<bool> const& BrewingStandSlotBBit();

MCAPI ::BlockStateVariant<bool> const& BrewingStandSlotCBit();

MCAPI ::BlockStateVariant<int> const& BrushedProgress();

MCAPI ::BlockStateVariant<bool> const& ButtonPressedBit();

MCAPI ::BlockStateVariant<bool> const& CanSummon();

MCAPI ::BlockStateVariant<int> const& Candles();

MCAPI ::BlockStateVariant<::CauldronLiquidType> const& CauldronLiquid();

MCAPI ::BlockStateVariant<int> const& ClusterCount();

MCAPI ::BlockStateVariant<int> const& ComposterFillLevel();

MCAPI ::BlockStateVariant<bool> const& ConditionalBit();

MCAPI ::BlockStateVariant<int> const& CoralDirection();

MCAPI ::BlockStateVariant<int> const& CoralFanDirection();

MCAPI ::BlockStateVariant<bool> const& CoveredBit();

MCAPI ::BlockStateVariant<::HatchLevel> const& CrackedState();

MCAPI ::BlockStateVariant<bool> const& Crafting();

MCAPI ::BlockStateVariant<int> const& DEPRECATED();

MCAPI ::BlockStateVariant<bool> const& DEPRECATED_AllowUnderwaterBit();

MCAPI ::BlockStateVariant<int> const& DEPRECATED_BlockLightLevel();

MCAPI ::BlockStateVariant<::ChemistryTableType> const& DEPRECATED_ChemistryTableType();

MCAPI ::BlockStateVariant<::ChiselType> const& DEPRECATED_ChiselType();

MCAPI ::BlockStateVariant<::BlockColor> const& DEPRECATED_Color();

MCAPI ::BlockStateVariant<bool> const& DEPRECATED_ColorBit();

MCAPI ::BlockStateVariant<::CoralColor> const& DEPRECATED_CoralColor();

MCAPI ::BlockStateVariant<bool> const& DEPRECATED_CoralHangTypeBit();

MCAPI ::BlockStateVariant<::AnvilDamage> const& DEPRECATED_Damage();

MCAPI ::BlockStateVariant<::DirtType> const& DEPRECATED_DirtType();

MCAPI ::BlockStateVariant<::DoublePlantType> const& DEPRECATED_DoublePlantType();

MCAPI ::BlockStateVariant<::FlowerType> const& DEPRECATED_FlowerType();

MCAPI ::BlockStateVariant<::MonsterEggStoneType> const& DEPRECATED_MonsterEggStoneType();

MCAPI ::BlockStateVariant<::NewLeavesType> const& DEPRECATED_NewLeavesType();

MCAPI ::BlockStateVariant<::NewLogType> const& DEPRECATED_NewLogType();

MCAPI ::BlockStateVariant<bool> const& DEPRECATED_NoDropBit();

MCAPI ::BlockStateVariant<::OldLeavesType> const& DEPRECATED_OldLeavesType();

MCAPI ::BlockStateVariant<::OldLogType> const& DEPRECATED_OldLogType();

MCAPI ::BlockStateVariant<::PrismarineBlockType> const& DEPRECATED_PrismarineBlockType();

MCAPI ::BlockStateVariant<::SandType> const& DEPRECATED_SandType();

MCAPI ::BlockStateVariant<::SandstoneType> const& DEPRECATED_SandstoneType();

MCAPI ::BlockStateVariant<::SaplingType> const& DEPRECATED_SaplingType();

MCAPI ::BlockStateVariant<::SpongeType> const& DEPRECATED_SpongeType();

MCAPI ::BlockStateVariant<::StoneBrickType> const& DEPRECATED_StoneBrickType();

MCAPI ::BlockStateVariant<::StoneSlabType> const& DEPRECATED_StoneSlabType();

MCAPI ::BlockStateVariant<::StoneSlabType2> const& DEPRECATED_StoneSlabType2();

MCAPI ::BlockStateVariant<::StoneSlabType3> const& DEPRECATED_StoneSlabType3();

MCAPI ::BlockStateVariant<::StoneSlabType4> const& DEPRECATED_StoneSlabType4();

MCAPI ::BlockStateVariant<::StoneType> const& DEPRECATED_StoneType();

MCAPI ::BlockStateVariant<bool> const& DEPRECATED_StrippedBit();

MCAPI ::BlockStateVariant<::StructureVoidType> const& DEPRECATED_StructureVoidType();

MCAPI ::BlockStateVariant<::TallGrassType> const& DEPRECATED_TallGrassType();

MCAPI ::BlockStateVariant<::WallBlockType> const& DEPRECATED_WallBlockType();

MCAPI ::BlockStateVariant<::WoodType> const& DEPRECATED_WoodType();

MCAPI ::BlockStateVariant<bool> const& DeadBit();

MCAPI ::BlockStateVariant<int> const& Direction();

MCAPI ::BlockStateVariant<bool> const& DisarmedBit();

MCAPI ::BlockStateVariant<bool> const& DoorHingeBit();

MCAPI ::BlockStateVariant<bool> const& DragDown();

MCAPI ::BlockStateVariant<::DripstoneThickness> const& DripstoneThickness();

MCAPI ::BlockStateVariant<bool> const& EndPortalEyeBit();

MCAPI ::BlockStateVariant<bool> const& ExplodeBit();

MCAPI ::BlockStateVariant<bool> const& Extinguished();

MCAPI ::BlockStateVariant<int> const& FacingDirection();

MCAPI ::BlockStateVariant<int> const& FillLevel();

MCAPI ::BlockStateVariant<int> const& GrowingPlantAge();

MCAPI ::BlockStateVariant<int> const& Growth();

MCAPI ::BlockStateVariant<bool> const& HangingBit();

MCAPI ::BlockStateVariant<bool> const& HeadPieceBit();

MCAPI ::BlockStateVariant<int> const& Height();

MCAPI ::BlockStateVariant<int> const& HugeMushroomBits();

MCAPI ::BlockStateVariant<bool> const& InWallBit();

MCAPI ::BlockStateVariant<bool> const& InfiniburnBit();

MCAPI ::BlockStateVariant<bool> const& ItemFrameMapBit();

MCAPI ::BlockStateVariant<bool> const& ItemFramePhotoBit();

MCAPI ::BlockStateVariant<int> const& KelpAge();

MCAPI ::BlockStateVariant<::LeverDirection> const& LeverDirection();

MCAPI ::BlockStateVariant<int> const& LiquidDepth();

MCAPI ::BlockStateVariant<bool> const& Lit();

MCAPI ::BlockStateVariant<int> const& MoisturizedAmount();

MCAPI ::BlockStateVariant<int> const& MultiFaceDirectionBits();

MCAPI ::BlockStateVariant<bool> const& Natural();

MCAPI ::BlockStateVariant<bool> const& OccupiedBit();

MCAPI ::BlockStateVariant<bool> const& Ominous();

MCAPI ::BlockStateVariant<bool> const& OpenBit();

MCAPI ::BlockStateVariant<::FrontAndTop> const& Orientation();

MCAPI ::BlockStateVariant<bool> const& OutputLitBit();

MCAPI ::BlockStateVariant<bool> const& OutputSubtractBit();

MCAPI ::BlockStateVariant<::PaleMossCarpetSide> const& PaleMossCarpetSideEast();

MCAPI ::BlockStateVariant<::PaleMossCarpetSide> const& PaleMossCarpetSideNorth();

MCAPI ::BlockStateVariant<::PaleMossCarpetSide> const& PaleMossCarpetSideSouth();

MCAPI ::BlockStateVariant<::PaleMossCarpetSide> const& PaleMossCarpetSideWest();

MCAPI ::BlockStateVariant<bool> const& PersistentBit();

MCAPI ::BlockStateVariant<::PillarAxis> const& PillarAxis();

MCAPI ::BlockStateVariant<::PortalAxis> const& PortalAxis();

MCAPI ::BlockStateVariant<bool> const& PoweredBit();

MCAPI ::BlockStateVariant<int> const& PropaguleStage();

MCAPI ::BlockStateVariant<bool> const& RailDataBit();

MCAPI ::BlockStateVariant<int> const& RailDirection();

MCAPI ::BlockStateVariant<int> const& RedstoneSignal();

MCAPI ::BlockStateVariant<int> const& RepeaterDelay();

MCAPI ::BlockStateVariant<int> const& RespawnAnchorCharge();

MCAPI ::BlockStateVariant<int> const& Rotation();

MCAPI ::BlockStateVariant<int> const& SculkSensorPhase();

MCAPI ::BlockStateVariant<::SeagrassType> const& SeagrassType();

MCAPI ::BlockStateVariant<int> const& Stability();

MCAPI ::BlockStateVariant<bool> const& StabilityCheckBit();

MCAPI ::BlockStateVariant<int> const& StandingRotation();

MCAPI ::BlockStateVariant<::StructureBlockType> const& StructureBlockType();

MCAPI ::BlockStateVariant<bool> const& SuspendedBit();

MCAPI ::BlockStateVariant<bool> const& Tip();

MCAPI ::BlockStateVariant<bool> const& ToggleBit();

MCAPI ::BlockStateVariant<bool> const& TopSlotBit();

MCAPI ::BlockStateVariant<::TorchFacing> const& TorchFacingDirection();

MCAPI ::BlockStateVariant<int> const& TrialSpawnerState();

MCAPI ::BlockStateVariant<bool> const& TriggeredBit();

MCAPI ::BlockStateVariant<::EggCount> const& TurtleEggCount();

MCAPI ::BlockStateVariant<int> const& TwistingVinesAge();

MCAPI ::BlockStateVariant<bool> const& UpdateBit();

MCAPI ::BlockStateVariant<bool> const& UpperBlockBit();

MCAPI ::BlockStateVariant<bool> const& UpsideDownBit();

MCAPI ::BlockStateVariant<::VaultBlockState> const& VaultState();

MCAPI ::BlockStateVariant<int> const& VineDirectionBits();

MCAPI ::BlockStateVariant<::WallConnectionType> const& WallConnectionTypeEast();

MCAPI ::BlockStateVariant<::WallConnectionType> const& WallConnectionTypeNorth();

MCAPI ::BlockStateVariant<::WallConnectionType> const& WallConnectionTypeSouth();

MCAPI ::BlockStateVariant<::WallConnectionType> const& WallConnectionTypeWest();

MCAPI ::BlockStateVariant<bool> const& WallPostBit();

MCAPI ::BlockStateVariant<int> const& WeepingVinesAge();

MCAPI ::BlockStateVariant<int> const& WeirdoDirection();
// NOLINTEND

} // namespace VanillaStates
