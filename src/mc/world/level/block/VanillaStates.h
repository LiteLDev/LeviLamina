#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/AnvilDamage.h"
#include "mc/enums/AttachmentType.h"
#include "mc/enums/BigDripleafTilt.h"
#include "mc/enums/CauldronLiquidType.h"
#include "mc/enums/ChemistryTableType.h"
#include "mc/enums/ChiselType.h"
#include "mc/enums/CoralColor.h"
#include "mc/enums/DirtType.h"
#include "mc/enums/DoublePlantType.h"
#include "mc/enums/DripstoneThickness.h"
#include "mc/enums/EggCount.h"
#include "mc/enums/FlowerType.h"
#include "mc/enums/FrontAndTop.h"
#include "mc/enums/HatchLevel.h"
#include "mc/enums/LeafSize.h"
#include "mc/enums/LeverDirection.h"
#include "mc/enums/MonsterEggStoneType.h"
#include "mc/enums/NewLeavesType.h"
#include "mc/enums/NewLogType.h"
#include "mc/enums/OldLeavesType.h"
#include "mc/enums/OldLogType.h"
#include "mc/enums/PillarAxis.h"
#include "mc/enums/PortalAxis.h"
#include "mc/enums/SandType.h"
#include "mc/enums/SandstoneType.h"
#include "mc/enums/SaplingType.h"
#include "mc/enums/SeagrassType.h"
#include "mc/enums/SpongeType.h"
#include "mc/enums/StalkThickness.h"
#include "mc/enums/StoneBrickType.h"
#include "mc/enums/StoneSlabType.h"
#include "mc/enums/StoneSlabType2.h"
#include "mc/enums/StoneSlabType3.h"
#include "mc/enums/StoneSlabType4.h"
#include "mc/enums/StoneType.h"
#include "mc/enums/TallGrassType.h"
#include "mc/enums/TorchFacing.h"
#include "mc/enums/WallConnectionType.h"
#include "mc/enums/WoodType.h"
#include "mc/world/level/block/states/BlockStateVariant.h"
#include "mc/world/level/block/states/VaultBlockState.h"
#include "mc/world/level/block/utils/BlockColor.h"
#include "mc/world/level/block/utils/PrismarineBlockType.h"
#include "mc/world/level/block/utils/WallBlockType.h"
#include "mc/world/level/levelgen/structure/StructureBlockType.h"
#include "mc/world/level/levelgen/structure/StructureVoidType.h"

namespace VanillaStates {
// NOLINTBEGIN
MCAPI extern class BlockStateVariant<bool> const Active;

MCAPI extern class BlockStateVariant<int> const Age;

MCAPI extern class BlockStateVariant<bool> const AgeBit;

MCAPI extern class BlockStateVariant<bool> const AllowUnderwaterBit;

MCAPI extern class BlockStateVariant<bool> const AttachedBit;

MCAPI extern class BlockStateVariant<::AttachmentType> const Attachment;

MCAPI extern class BlockStateVariant<::LeafSize> const BambooLeafSize;

MCAPI extern class BlockStateVariant<::StalkThickness> const BambooThickness;

MCAPI extern class BlockStateVariant<int> const BeehiveHoneyLevel;

MCAPI extern class BlockStateVariant<bool> const BigDripleafHead;

MCAPI extern class BlockStateVariant<::BigDripleafTilt> const BigDripleafTilt;

MCAPI extern class BlockStateVariant<int> const BiteCounter;

MCAPI extern class BlockStateVariant<int> const BlockLightLevel;

MCAPI extern class BlockStateVariant<bool> const Bloom;

MCAPI extern class BlockStateVariant<int> const BookshelfOccupiedSlots;

MCAPI extern class BlockStateVariant<bool> const BrewingStandSlotABit;

MCAPI extern class BlockStateVariant<bool> const BrewingStandSlotBBit;

MCAPI extern class BlockStateVariant<bool> const BrewingStandSlotCBit;

MCAPI extern class BlockStateVariant<int> const BrushedProgress;

MCAPI extern class BlockStateVariant<bool> const ButtonPressedBit;

MCAPI extern class BlockStateVariant<bool> const CanSummon;

MCAPI extern class BlockStateVariant<int> const Candles;

MCAPI extern class BlockStateVariant<::CauldronLiquidType> const CauldronLiquid;

MCAPI extern class BlockStateVariant<::ChemistryTableType> const ChemistryTableType;

MCAPI extern class BlockStateVariant<::ChiselType> const ChiselType;

MCAPI extern class BlockStateVariant<int> const ClusterCount;

MCAPI extern class BlockStateVariant<bool> const ColorBit;

MCAPI extern class BlockStateVariant<int> const ComposterFillLevel;

MCAPI extern class BlockStateVariant<bool> const ConditionalBit;

MCAPI extern class BlockStateVariant<::CoralColor> const CoralColor;

MCAPI extern class BlockStateVariant<int> const CoralDirection;

MCAPI extern class BlockStateVariant<int> const CoralFanDirection;

MCAPI extern class BlockStateVariant<bool> const CoralHangTypeBit;

MCAPI extern class BlockStateVariant<bool> const CoveredBit;

MCAPI extern class BlockStateVariant<::HatchLevel> const CrackedState;

MCAPI extern class BlockStateVariant<bool> const Crafting;

MCAPI extern class BlockStateVariant<int> const DEPRECATED;

MCAPI extern class BlockStateVariant<::BlockColor> const DEPRECATED_Color;

MCAPI extern class BlockStateVariant<::DoublePlantType> const DEPRECATED_DoublePlantType;

MCAPI extern class BlockStateVariant<::AnvilDamage> const Damage;

MCAPI extern class BlockStateVariant<bool> const DeadBit;

MCAPI extern class BlockStateVariant<int> const Direction;

MCAPI extern class BlockStateVariant<::DirtType> const DirtType;

MCAPI extern class BlockStateVariant<bool> const DisarmedBit;

MCAPI extern class BlockStateVariant<bool> const DoorHingeBit;

MCAPI extern class BlockStateVariant<bool> const DragDown;

MCAPI extern class BlockStateVariant<::DripstoneThickness> const DripstoneThickness;

MCAPI extern class BlockStateVariant<bool> const EndPortalEyeBit;

MCAPI extern class BlockStateVariant<bool> const ExplodeBit;

MCAPI extern class BlockStateVariant<bool> const Extinguished;

MCAPI extern class BlockStateVariant<int> const FacingDirection;

MCAPI extern class BlockStateVariant<int> const FillLevel;

MCAPI extern class BlockStateVariant<::FlowerType> const FlowerType;

MCAPI extern class BlockStateVariant<int> const GrowingPlantAge;

MCAPI extern class BlockStateVariant<int> const Growth;

MCAPI extern class BlockStateVariant<bool> const HangingBit;

MCAPI extern class BlockStateVariant<bool> const HeadPieceBit;

MCAPI extern class BlockStateVariant<int> const Height;

MCAPI extern class BlockStateVariant<int> const HugeMushroomBits;

MCAPI extern class BlockStateVariant<bool> const InWallBit;

MCAPI extern class BlockStateVariant<bool> const InfiniburnBit;

MCAPI extern class BlockStateVariant<bool> const ItemFrameMapBit;

MCAPI extern class BlockStateVariant<bool> const ItemFramePhotoBit;

MCAPI extern class BlockStateVariant<int> const KelpAge;

MCAPI extern class BlockStateVariant<::LeverDirection> const LeverDirection;

MCAPI extern class BlockStateVariant<int> const LiquidDepth;

MCAPI extern class BlockStateVariant<bool> const Lit;

MCAPI extern class BlockStateVariant<int> const MoisturizedAmount;

MCAPI extern class BlockStateVariant<::MonsterEggStoneType> const MonsterEggStoneType;

MCAPI extern class BlockStateVariant<int> const MultiFaceDirectionBits;

MCAPI extern class BlockStateVariant<::NewLeavesType> const NewLeavesType;

MCAPI extern class BlockStateVariant<::NewLogType> const NewLogType;

MCAPI extern class BlockStateVariant<bool> const NoDropBit;

MCAPI extern class BlockStateVariant<bool> const OccupiedBit;

MCAPI extern class BlockStateVariant<::OldLeavesType> const OldLeavesType;

MCAPI extern class BlockStateVariant<::OldLogType> const OldLogType;

MCAPI extern class BlockStateVariant<bool> const Ominous;

MCAPI extern class BlockStateVariant<bool> const OpenBit;

MCAPI extern class BlockStateVariant<::FrontAndTop> const Orientation;

MCAPI extern class BlockStateVariant<bool> const OutputLitBit;

MCAPI extern class BlockStateVariant<bool> const OutputSubtractBit;

MCAPI extern class BlockStateVariant<bool> const PersistentBit;

MCAPI extern class BlockStateVariant<::PillarAxis> const PillarAxis;

MCAPI extern class BlockStateVariant<::PortalAxis> const PortalAxis;

MCAPI extern class BlockStateVariant<bool> const PoweredBit;

MCAPI extern class BlockStateVariant<::PrismarineBlockType> const PrismarineBlockType;

MCAPI extern class BlockStateVariant<int> const PropaguleStage;

MCAPI extern class BlockStateVariant<bool> const RailDataBit;

MCAPI extern class BlockStateVariant<int> const RailDirection;

MCAPI extern class BlockStateVariant<int> const RedstoneSignal;

MCAPI extern class BlockStateVariant<int> const RepeaterDelay;

MCAPI extern class BlockStateVariant<int> const RespawnAnchorCharge;

MCAPI extern class BlockStateVariant<int> const Rotation;

MCAPI extern class BlockStateVariant<::SandType> const SandType;

MCAPI extern class BlockStateVariant<::SandstoneType> const SandstoneType;

MCAPI extern class BlockStateVariant<::SaplingType> const SaplingType;

MCAPI extern class BlockStateVariant<int> const SculkSensorPhase;

MCAPI extern class BlockStateVariant<::SeagrassType> const SeagrassType;

MCAPI extern class BlockStateVariant<::SpongeType> const SpongeType;

MCAPI extern class BlockStateVariant<int> const Stability;

MCAPI extern class BlockStateVariant<bool> const StabilityCheckBit;

MCAPI extern class BlockStateVariant<int> const StandingRotation;

MCAPI extern class BlockStateVariant<::StoneBrickType> const StoneBrickType;

MCAPI extern class BlockStateVariant<::StoneSlabType> const StoneSlabType;

MCAPI extern class BlockStateVariant<::StoneSlabType2> const StoneSlabType2;

MCAPI extern class BlockStateVariant<::StoneSlabType3> const StoneSlabType3;

MCAPI extern class BlockStateVariant<::StoneSlabType4> const StoneSlabType4;

MCAPI extern class BlockStateVariant<::StoneType> const StoneType;

MCAPI extern class BlockStateVariant<bool> const StrippedBit;

MCAPI extern class BlockStateVariant<::StructureBlockType> const StructureBlockType;

MCAPI extern class BlockStateVariant<::StructureVoidType> const StructureVoidType;

MCAPI extern class BlockStateVariant<bool> const SuspendedBit;

MCAPI extern class BlockStateVariant<::TallGrassType> const TallGrassType;

MCAPI extern class BlockStateVariant<bool> const ToggleBit;

MCAPI extern class BlockStateVariant<bool> const TopSlotBit;

MCAPI extern class BlockStateVariant<::TorchFacing> const TorchFacingDirection;

MCAPI extern class BlockStateVariant<int> const TrialSpawnerState;

MCAPI extern class BlockStateVariant<bool> const TriggeredBit;

MCAPI extern class BlockStateVariant<::EggCount> const TurtleEggCount;

MCAPI extern class BlockStateVariant<int> const TwistingVinesAge;

MCAPI extern class BlockStateVariant<bool> const UpdateBit;

MCAPI extern class BlockStateVariant<bool> const UpperBlockBit;

MCAPI extern class BlockStateVariant<bool> const UpsideDownBit;

MCAPI extern class BlockStateVariant<::VaultBlockState> const VaultState;

MCAPI extern class BlockStateVariant<int> const VineDirectionBits;

MCAPI extern class BlockStateVariant<::WallBlockType> const WallBlockType;

MCAPI extern class BlockStateVariant<::WallConnectionType> const WallConnectionTypeEast;

MCAPI extern class BlockStateVariant<::WallConnectionType> const WallConnectionTypeNorth;

MCAPI extern class BlockStateVariant<::WallConnectionType> const WallConnectionTypeSouth;

MCAPI extern class BlockStateVariant<::WallConnectionType> const WallConnectionTypeWest;

MCAPI extern class BlockStateVariant<bool> const WallPostBit;

MCAPI extern class BlockStateVariant<int> const WeepingVinesAge;

MCAPI extern class BlockStateVariant<int> const WeirdoDirection;

MCAPI extern class BlockStateVariant<::WoodType> const WoodType;

MCAPI class BlockState const* getState(class HashedString const& name);

MCAPI void registerStates();

MCAPI void unregisterStates();
// NOLINTEND

}; // namespace VanillaStates
