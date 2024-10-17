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

namespace VanillaStates {
// NOLINTBEGIN
MCAPI class BlockState const* getState(class HashedString const& name);

MCAPI void registerStates();

MCAPI void unregisterStates();
// NOLINTEND

// thunks
// NOLINTBEGIN
MCAPI class BlockStateVariant<bool> const& Active();

MCAPI class BlockStateVariant<int> const& Age();

MCAPI class BlockStateVariant<bool> const& AgeBit();

MCAPI class BlockStateVariant<bool> const& AllowUnderwaterBit();

MCAPI class BlockStateVariant<bool> const& AttachedBit();

MCAPI class BlockStateVariant<::AttachmentType> const& Attachment();

MCAPI class BlockStateVariant<::LeafSize> const& BambooLeafSize();

MCAPI class BlockStateVariant<::StalkThickness> const& BambooThickness();

MCAPI class BlockStateVariant<int> const& BeehiveHoneyLevel();

MCAPI class BlockStateVariant<bool> const& BigDripleafHead();

MCAPI class BlockStateVariant<::BigDripleafTilt> const& BigDripleafTilt();

MCAPI class BlockStateVariant<int> const& BiteCounter();

MCAPI class BlockStateVariant<int> const& BlockLightLevel();

MCAPI class BlockStateVariant<bool> const& Bloom();

MCAPI class BlockStateVariant<int> const& BookshelfOccupiedSlots();

MCAPI class BlockStateVariant<bool> const& BrewingStandSlotABit();

MCAPI class BlockStateVariant<bool> const& BrewingStandSlotBBit();

MCAPI class BlockStateVariant<bool> const& BrewingStandSlotCBit();

MCAPI class BlockStateVariant<int> const& BrushedProgress();

MCAPI class BlockStateVariant<bool> const& ButtonPressedBit();

MCAPI class BlockStateVariant<bool> const& CanSummon();

MCAPI class BlockStateVariant<int> const& Candles();

MCAPI class BlockStateVariant<::CauldronLiquidType> const& CauldronLiquid();

MCAPI class BlockStateVariant<::ChemistryTableType> const& ChemistryTableType();

MCAPI class BlockStateVariant<::ChiselType> const& ChiselType();

MCAPI class BlockStateVariant<int> const& ClusterCount();

MCAPI class BlockStateVariant<bool> const& ColorBit();

MCAPI class BlockStateVariant<int> const& ComposterFillLevel();

MCAPI class BlockStateVariant<bool> const& ConditionalBit();

MCAPI class BlockStateVariant<::CoralColor> const& CoralColor();

MCAPI class BlockStateVariant<int> const& CoralDirection();

MCAPI class BlockStateVariant<int> const& CoralFanDirection();

MCAPI class BlockStateVariant<bool> const& CoralHangTypeBit();

MCAPI class BlockStateVariant<bool> const& CoveredBit();

MCAPI class BlockStateVariant<::HatchLevel> const& CrackedState();

MCAPI class BlockStateVariant<bool> const& Crafting();

MCAPI class BlockStateVariant<int> const& DEPRECATED();

MCAPI class BlockStateVariant<::BlockColor> const& DEPRECATED_Color();

MCAPI class BlockStateVariant<::DoublePlantType> const& DEPRECATED_DoublePlantType();

MCAPI class BlockStateVariant<::AnvilDamage> const& Damage();

MCAPI class BlockStateVariant<bool> const& DeadBit();

MCAPI class BlockStateVariant<int> const& Direction();

MCAPI class BlockStateVariant<::DirtType> const& DirtType();

MCAPI class BlockStateVariant<bool> const& DisarmedBit();

MCAPI class BlockStateVariant<bool> const& DoorHingeBit();

MCAPI class BlockStateVariant<bool> const& DragDown();

MCAPI class BlockStateVariant<::DripstoneThickness> const& DripstoneThickness();

MCAPI class BlockStateVariant<bool> const& EndPortalEyeBit();

MCAPI class BlockStateVariant<bool> const& ExplodeBit();

MCAPI class BlockStateVariant<bool> const& Extinguished();

MCAPI class BlockStateVariant<int> const& FacingDirection();

MCAPI class BlockStateVariant<int> const& FillLevel();

MCAPI class BlockStateVariant<::FlowerType> const& FlowerType();

MCAPI class BlockStateVariant<int> const& GrowingPlantAge();

MCAPI class BlockStateVariant<int> const& Growth();

MCAPI class BlockStateVariant<bool> const& HangingBit();

MCAPI class BlockStateVariant<bool> const& HeadPieceBit();

MCAPI class BlockStateVariant<int> const& Height();

MCAPI class BlockStateVariant<int> const& HugeMushroomBits();

MCAPI class BlockStateVariant<bool> const& InWallBit();

MCAPI class BlockStateVariant<bool> const& InfiniburnBit();

MCAPI class BlockStateVariant<bool> const& ItemFrameMapBit();

MCAPI class BlockStateVariant<bool> const& ItemFramePhotoBit();

MCAPI class BlockStateVariant<int> const& KelpAge();

MCAPI class BlockStateVariant<::LeverDirection> const& LeverDirection();

MCAPI class BlockStateVariant<int> const& LiquidDepth();

MCAPI class BlockStateVariant<bool> const& Lit();

MCAPI class BlockStateVariant<int> const& MoisturizedAmount();

MCAPI class BlockStateVariant<::MonsterEggStoneType> const& MonsterEggStoneType();

MCAPI class BlockStateVariant<int> const& MultiFaceDirectionBits();

MCAPI class BlockStateVariant<::NewLeavesType> const& NewLeavesType();

MCAPI class BlockStateVariant<::NewLogType> const& NewLogType();

MCAPI class BlockStateVariant<bool> const& NoDropBit();

MCAPI class BlockStateVariant<bool> const& OccupiedBit();

MCAPI class BlockStateVariant<::OldLeavesType> const& OldLeavesType();

MCAPI class BlockStateVariant<::OldLogType> const& OldLogType();

MCAPI class BlockStateVariant<bool> const& Ominous();

MCAPI class BlockStateVariant<bool> const& OpenBit();

MCAPI class BlockStateVariant<::FrontAndTop> const& Orientation();

MCAPI class BlockStateVariant<bool> const& OutputLitBit();

MCAPI class BlockStateVariant<bool> const& OutputSubtractBit();

MCAPI class BlockStateVariant<bool> const& PersistentBit();

MCAPI class BlockStateVariant<::PillarAxis> const& PillarAxis();

MCAPI class BlockStateVariant<::PortalAxis> const& PortalAxis();

MCAPI class BlockStateVariant<bool> const& PoweredBit();

MCAPI class BlockStateVariant<::PrismarineBlockType> const& PrismarineBlockType();

MCAPI class BlockStateVariant<int> const& PropaguleStage();

MCAPI class BlockStateVariant<bool> const& RailDataBit();

MCAPI class BlockStateVariant<int> const& RailDirection();

MCAPI class BlockStateVariant<int> const& RedstoneSignal();

MCAPI class BlockStateVariant<int> const& RepeaterDelay();

MCAPI class BlockStateVariant<int> const& RespawnAnchorCharge();

MCAPI class BlockStateVariant<int> const& Rotation();

MCAPI class BlockStateVariant<::SandType> const& SandType();

MCAPI class BlockStateVariant<::SandstoneType> const& SandstoneType();

MCAPI class BlockStateVariant<::SaplingType> const& SaplingType();

MCAPI class BlockStateVariant<int> const& SculkSensorPhase();

MCAPI class BlockStateVariant<::SeagrassType> const& SeagrassType();

MCAPI class BlockStateVariant<::SpongeType> const& SpongeType();

MCAPI class BlockStateVariant<int> const& Stability();

MCAPI class BlockStateVariant<bool> const& StabilityCheckBit();

MCAPI class BlockStateVariant<int> const& StandingRotation();

MCAPI class BlockStateVariant<::StoneBrickType> const& StoneBrickType();

MCAPI class BlockStateVariant<::StoneSlabType> const& StoneSlabType();

MCAPI class BlockStateVariant<::StoneSlabType2> const& StoneSlabType2();

MCAPI class BlockStateVariant<::StoneSlabType3> const& StoneSlabType3();

MCAPI class BlockStateVariant<::StoneSlabType4> const& StoneSlabType4();

MCAPI class BlockStateVariant<::StoneType> const& StoneType();

MCAPI class BlockStateVariant<bool> const& StrippedBit();

MCAPI class BlockStateVariant<::StructureBlockType> const& StructureBlockType();

MCAPI class BlockStateVariant<::StructureVoidType> const& StructureVoidType();

MCAPI class BlockStateVariant<bool> const& SuspendedBit();

MCAPI class BlockStateVariant<::TallGrassType> const& TallGrassType();

MCAPI class BlockStateVariant<bool> const& ToggleBit();

MCAPI class BlockStateVariant<bool> const& TopSlotBit();

MCAPI class BlockStateVariant<::TorchFacing> const& TorchFacingDirection();

MCAPI class BlockStateVariant<int> const& TrialSpawnerState();

MCAPI class BlockStateVariant<bool> const& TriggeredBit();

MCAPI class BlockStateVariant<::EggCount> const& TurtleEggCount();

MCAPI class BlockStateVariant<int> const& TwistingVinesAge();

MCAPI class BlockStateVariant<bool> const& UpdateBit();

MCAPI class BlockStateVariant<bool> const& UpperBlockBit();

MCAPI class BlockStateVariant<bool> const& UpsideDownBit();

MCAPI class BlockStateVariant<::VaultBlockState> const& VaultState();

MCAPI class BlockStateVariant<int> const& VineDirectionBits();

MCAPI class BlockStateVariant<::WallBlockType> const& WallBlockType();

MCAPI class BlockStateVariant<::WallConnectionType> const& WallConnectionTypeEast();

MCAPI class BlockStateVariant<::WallConnectionType> const& WallConnectionTypeNorth();

MCAPI class BlockStateVariant<::WallConnectionType> const& WallConnectionTypeSouth();

MCAPI class BlockStateVariant<::WallConnectionType> const& WallConnectionTypeWest();

MCAPI class BlockStateVariant<bool> const& WallPostBit();

MCAPI class BlockStateVariant<int> const& WeepingVinesAge();

MCAPI class BlockStateVariant<int> const& WeirdoDirection();

MCAPI class BlockStateVariant<::WoodType> const& WoodType();
// NOLINTEND

}; // namespace VanillaStates
