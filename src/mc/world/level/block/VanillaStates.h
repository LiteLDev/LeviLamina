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
// symbol: ?Active@VanillaStates@@3V?$BlockStateVariant@_N@@B
MCAPI extern class BlockStateVariant<bool> const Active;

// symbol: ?Age@VanillaStates@@3V?$BlockStateVariant@H@@B
MCAPI extern class BlockStateVariant<int> const Age;

// symbol: ?AgeBit@VanillaStates@@3V?$BlockStateVariant@_N@@B
MCAPI extern class BlockStateVariant<bool> const AgeBit;

// symbol: ?AllowUnderwaterBit@VanillaStates@@3V?$BlockStateVariant@_N@@B
MCAPI extern class BlockStateVariant<bool> const AllowUnderwaterBit;

// symbol: ?AttachedBit@VanillaStates@@3V?$BlockStateVariant@_N@@B
MCAPI extern class BlockStateVariant<bool> const AttachedBit;

// symbol: ?Attachment@VanillaStates@@3V?$BlockStateVariant@W4AttachmentType@@@@B
MCAPI extern class BlockStateVariant<::AttachmentType> const Attachment;

// symbol: ?BambooLeafSize@VanillaStates@@3V?$BlockStateVariant@W4LeafSize@@@@B
MCAPI extern class BlockStateVariant<::LeafSize> const BambooLeafSize;

// symbol: ?BambooThickness@VanillaStates@@3V?$BlockStateVariant@W4StalkThickness@@@@B
MCAPI extern class BlockStateVariant<::StalkThickness> const BambooThickness;

// symbol: ?BeehiveHoneyLevel@VanillaStates@@3V?$BlockStateVariant@H@@B
MCAPI extern class BlockStateVariant<int> const BeehiveHoneyLevel;

// symbol: ?BigDripleafHead@VanillaStates@@3V?$BlockStateVariant@_N@@B
MCAPI extern class BlockStateVariant<bool> const BigDripleafHead;

// symbol: ?BigDripleafTilt@VanillaStates@@3V?$BlockStateVariant@W4BigDripleafTilt@@@@B
MCAPI extern class BlockStateVariant<::BigDripleafTilt> const BigDripleafTilt;

// symbol: ?BiteCounter@VanillaStates@@3V?$BlockStateVariant@H@@B
MCAPI extern class BlockStateVariant<int> const BiteCounter;

// symbol: ?BlockLightLevel@VanillaStates@@3V?$BlockStateVariant@H@@B
MCAPI extern class BlockStateVariant<int> const BlockLightLevel;

// symbol: ?Bloom@VanillaStates@@3V?$BlockStateVariant@_N@@B
MCAPI extern class BlockStateVariant<bool> const Bloom;

// symbol: ?BookshelfOccupiedSlots@VanillaStates@@3V?$BlockStateVariant@H@@B
MCAPI extern class BlockStateVariant<int> const BookshelfOccupiedSlots;

// symbol: ?BrewingStandSlotABit@VanillaStates@@3V?$BlockStateVariant@_N@@B
MCAPI extern class BlockStateVariant<bool> const BrewingStandSlotABit;

// symbol: ?BrewingStandSlotBBit@VanillaStates@@3V?$BlockStateVariant@_N@@B
MCAPI extern class BlockStateVariant<bool> const BrewingStandSlotBBit;

// symbol: ?BrewingStandSlotCBit@VanillaStates@@3V?$BlockStateVariant@_N@@B
MCAPI extern class BlockStateVariant<bool> const BrewingStandSlotCBit;

// symbol: ?BrushedProgress@VanillaStates@@3V?$BlockStateVariant@H@@B
MCAPI extern class BlockStateVariant<int> const BrushedProgress;

// symbol: ?ButtonPressedBit@VanillaStates@@3V?$BlockStateVariant@_N@@B
MCAPI extern class BlockStateVariant<bool> const ButtonPressedBit;

// symbol: ?CanSummon@VanillaStates@@3V?$BlockStateVariant@_N@@B
MCAPI extern class BlockStateVariant<bool> const CanSummon;

// symbol: ?Candles@VanillaStates@@3V?$BlockStateVariant@H@@B
MCAPI extern class BlockStateVariant<int> const Candles;

// symbol: ?CauldronLiquid@VanillaStates@@3V?$BlockStateVariant@W4CauldronLiquidType@@@@B
MCAPI extern class BlockStateVariant<::CauldronLiquidType> const CauldronLiquid;

// symbol: ?ChemistryTableType@VanillaStates@@3V?$BlockStateVariant@W4ChemistryTableType@@@@B
MCAPI extern class BlockStateVariant<::ChemistryTableType> const ChemistryTableType;

// symbol: ?ChiselType@VanillaStates@@3V?$BlockStateVariant@W4ChiselType@@@@B
MCAPI extern class BlockStateVariant<::ChiselType> const ChiselType;

// symbol: ?ClusterCount@VanillaStates@@3V?$BlockStateVariant@H@@B
MCAPI extern class BlockStateVariant<int> const ClusterCount;

// symbol: ?ColorBit@VanillaStates@@3V?$BlockStateVariant@_N@@B
MCAPI extern class BlockStateVariant<bool> const ColorBit;

// symbol: ?ComposterFillLevel@VanillaStates@@3V?$BlockStateVariant@H@@B
MCAPI extern class BlockStateVariant<int> const ComposterFillLevel;

// symbol: ?ConditionalBit@VanillaStates@@3V?$BlockStateVariant@_N@@B
MCAPI extern class BlockStateVariant<bool> const ConditionalBit;

// symbol: ?CoralColor@VanillaStates@@3V?$BlockStateVariant@W4CoralColor@@@@B
MCAPI extern class BlockStateVariant<::CoralColor> const CoralColor;

// symbol: ?CoralDirection@VanillaStates@@3V?$BlockStateVariant@H@@B
MCAPI extern class BlockStateVariant<int> const CoralDirection;

// symbol: ?CoralFanDirection@VanillaStates@@3V?$BlockStateVariant@H@@B
MCAPI extern class BlockStateVariant<int> const CoralFanDirection;

// symbol: ?CoralHangTypeBit@VanillaStates@@3V?$BlockStateVariant@_N@@B
MCAPI extern class BlockStateVariant<bool> const CoralHangTypeBit;

// symbol: ?CoveredBit@VanillaStates@@3V?$BlockStateVariant@_N@@B
MCAPI extern class BlockStateVariant<bool> const CoveredBit;

// symbol: ?CrackedState@VanillaStates@@3V?$BlockStateVariant@W4HatchLevel@@@@B
MCAPI extern class BlockStateVariant<::HatchLevel> const CrackedState;

// symbol: ?Crafting@VanillaStates@@3V?$BlockStateVariant@_N@@B
MCAPI extern class BlockStateVariant<bool> const Crafting;

// symbol: ?DEPRECATED@VanillaStates@@3V?$BlockStateVariant@H@@B
MCAPI extern class BlockStateVariant<int> const DEPRECATED;

// symbol: ?DEPRECATED_Color@VanillaStates@@3V?$BlockStateVariant@W4BlockColor@@@@B
MCAPI extern class BlockStateVariant<::BlockColor> const DEPRECATED_Color;

// symbol: ?Damage@VanillaStates@@3V?$BlockStateVariant@W4AnvilDamage@@@@B
MCAPI extern class BlockStateVariant<::AnvilDamage> const Damage;

// symbol: ?DeadBit@VanillaStates@@3V?$BlockStateVariant@_N@@B
MCAPI extern class BlockStateVariant<bool> const DeadBit;

// symbol: ?Direction@VanillaStates@@3V?$BlockStateVariant@H@@B
MCAPI extern class BlockStateVariant<int> const Direction;

// symbol: ?DirtType@VanillaStates@@3V?$BlockStateVariant@W4DirtType@@@@B
MCAPI extern class BlockStateVariant<::DirtType> const DirtType;

// symbol: ?DisarmedBit@VanillaStates@@3V?$BlockStateVariant@_N@@B
MCAPI extern class BlockStateVariant<bool> const DisarmedBit;

// symbol: ?DoorHingeBit@VanillaStates@@3V?$BlockStateVariant@_N@@B
MCAPI extern class BlockStateVariant<bool> const DoorHingeBit;

// symbol: ?DoublePlantType@VanillaStates@@3V?$BlockStateVariant@W4DoublePlantType@@@@B
MCAPI extern class BlockStateVariant<::DoublePlantType> const DoublePlantType;

// symbol: ?DragDown@VanillaStates@@3V?$BlockStateVariant@_N@@B
MCAPI extern class BlockStateVariant<bool> const DragDown;

// symbol: ?DripstoneThickness@VanillaStates@@3V?$BlockStateVariant@W4DripstoneThickness@@@@B
MCAPI extern class BlockStateVariant<::DripstoneThickness> const DripstoneThickness;

// symbol: ?EndPortalEyeBit@VanillaStates@@3V?$BlockStateVariant@_N@@B
MCAPI extern class BlockStateVariant<bool> const EndPortalEyeBit;

// symbol: ?ExplodeBit@VanillaStates@@3V?$BlockStateVariant@_N@@B
MCAPI extern class BlockStateVariant<bool> const ExplodeBit;

// symbol: ?Extinguished@VanillaStates@@3V?$BlockStateVariant@_N@@B
MCAPI extern class BlockStateVariant<bool> const Extinguished;

// symbol: ?FacingDirection@VanillaStates@@3V?$BlockStateVariant@H@@B
MCAPI extern class BlockStateVariant<int> const FacingDirection;

// symbol: ?FillLevel@VanillaStates@@3V?$BlockStateVariant@H@@B
MCAPI extern class BlockStateVariant<int> const FillLevel;

// symbol: ?FlowerType@VanillaStates@@3V?$BlockStateVariant@W4FlowerType@@@@B
MCAPI extern class BlockStateVariant<::FlowerType> const FlowerType;

// symbol: ?GrowingPlantAge@VanillaStates@@3V?$BlockStateVariant@H@@B
MCAPI extern class BlockStateVariant<int> const GrowingPlantAge;

// symbol: ?Growth@VanillaStates@@3V?$BlockStateVariant@H@@B
MCAPI extern class BlockStateVariant<int> const Growth;

// symbol: ?HangingBit@VanillaStates@@3V?$BlockStateVariant@_N@@B
MCAPI extern class BlockStateVariant<bool> const HangingBit;

// symbol: ?HeadPieceBit@VanillaStates@@3V?$BlockStateVariant@_N@@B
MCAPI extern class BlockStateVariant<bool> const HeadPieceBit;

// symbol: ?Height@VanillaStates@@3V?$BlockStateVariant@H@@B
MCAPI extern class BlockStateVariant<int> const Height;

// symbol: ?HugeMushroomBits@VanillaStates@@3V?$BlockStateVariant@H@@B
MCAPI extern class BlockStateVariant<int> const HugeMushroomBits;

// symbol: ?InWallBit@VanillaStates@@3V?$BlockStateVariant@_N@@B
MCAPI extern class BlockStateVariant<bool> const InWallBit;

// symbol: ?InfiniburnBit@VanillaStates@@3V?$BlockStateVariant@_N@@B
MCAPI extern class BlockStateVariant<bool> const InfiniburnBit;

// symbol: ?ItemFrameMapBit@VanillaStates@@3V?$BlockStateVariant@_N@@B
MCAPI extern class BlockStateVariant<bool> const ItemFrameMapBit;

// symbol: ?ItemFramePhotoBit@VanillaStates@@3V?$BlockStateVariant@_N@@B
MCAPI extern class BlockStateVariant<bool> const ItemFramePhotoBit;

// symbol: ?KelpAge@VanillaStates@@3V?$BlockStateVariant@H@@B
MCAPI extern class BlockStateVariant<int> const KelpAge;

// symbol: ?LeverDirection@VanillaStates@@3V?$BlockStateVariant@W4LeverDirection@@@@B
MCAPI extern class BlockStateVariant<::LeverDirection> const LeverDirection;

// symbol: ?LiquidDepth@VanillaStates@@3V?$BlockStateVariant@H@@B
MCAPI extern class BlockStateVariant<int> const LiquidDepth;

// symbol: ?Lit@VanillaStates@@3V?$BlockStateVariant@_N@@B
MCAPI extern class BlockStateVariant<bool> const Lit;

// symbol: ?MoisturizedAmount@VanillaStates@@3V?$BlockStateVariant@H@@B
MCAPI extern class BlockStateVariant<int> const MoisturizedAmount;

// symbol: ?MonsterEggStoneType@VanillaStates@@3V?$BlockStateVariant@W4MonsterEggStoneType@@@@B
MCAPI extern class BlockStateVariant<::MonsterEggStoneType> const MonsterEggStoneType;

// symbol: ?MultiFaceDirectionBits@VanillaStates@@3V?$BlockStateVariant@H@@B
MCAPI extern class BlockStateVariant<int> const MultiFaceDirectionBits;

// symbol: ?NewLeavesType@VanillaStates@@3V?$BlockStateVariant@W4NewLeavesType@@@@B
MCAPI extern class BlockStateVariant<::NewLeavesType> const NewLeavesType;

// symbol: ?NewLogType@VanillaStates@@3V?$BlockStateVariant@W4NewLogType@@@@B
MCAPI extern class BlockStateVariant<::NewLogType> const NewLogType;

// symbol: ?NoDropBit@VanillaStates@@3V?$BlockStateVariant@_N@@B
MCAPI extern class BlockStateVariant<bool> const NoDropBit;

// symbol: ?OccupiedBit@VanillaStates@@3V?$BlockStateVariant@_N@@B
MCAPI extern class BlockStateVariant<bool> const OccupiedBit;

// symbol: ?OldLeavesType@VanillaStates@@3V?$BlockStateVariant@W4OldLeavesType@@@@B
MCAPI extern class BlockStateVariant<::OldLeavesType> const OldLeavesType;

// symbol: ?OldLogType@VanillaStates@@3V?$BlockStateVariant@W4OldLogType@@@@B
MCAPI extern class BlockStateVariant<::OldLogType> const OldLogType;

// symbol: ?OpenBit@VanillaStates@@3V?$BlockStateVariant@_N@@B
MCAPI extern class BlockStateVariant<bool> const OpenBit;

// symbol: ?Orientation@VanillaStates@@3V?$BlockStateVariant@W4FrontAndTop@@@@B
MCAPI extern class BlockStateVariant<::FrontAndTop> const Orientation;

// symbol: ?OutputLitBit@VanillaStates@@3V?$BlockStateVariant@_N@@B
MCAPI extern class BlockStateVariant<bool> const OutputLitBit;

// symbol: ?OutputSubtractBit@VanillaStates@@3V?$BlockStateVariant@_N@@B
MCAPI extern class BlockStateVariant<bool> const OutputSubtractBit;

// symbol: ?PersistentBit@VanillaStates@@3V?$BlockStateVariant@_N@@B
MCAPI extern class BlockStateVariant<bool> const PersistentBit;

// symbol: ?PillarAxis@VanillaStates@@3V?$BlockStateVariant@W4PillarAxis@@@@B
MCAPI extern class BlockStateVariant<::PillarAxis> const PillarAxis;

// symbol: ?PortalAxis@VanillaStates@@3V?$BlockStateVariant@W4PortalAxis@@@@B
MCAPI extern class BlockStateVariant<::PortalAxis> const PortalAxis;

// symbol: ?PoweredBit@VanillaStates@@3V?$BlockStateVariant@_N@@B
MCAPI extern class BlockStateVariant<bool> const PoweredBit;

// symbol: ?PrismarineBlockType@VanillaStates@@3V?$BlockStateVariant@W4PrismarineBlockType@@@@B
MCAPI extern class BlockStateVariant<::PrismarineBlockType> const PrismarineBlockType;

// symbol: ?PropaguleStage@VanillaStates@@3V?$BlockStateVariant@H@@B
MCAPI extern class BlockStateVariant<int> const PropaguleStage;

// symbol: ?RailDataBit@VanillaStates@@3V?$BlockStateVariant@_N@@B
MCAPI extern class BlockStateVariant<bool> const RailDataBit;

// symbol: ?RailDirection@VanillaStates@@3V?$BlockStateVariant@H@@B
MCAPI extern class BlockStateVariant<int> const RailDirection;

// symbol: ?RedstoneSignal@VanillaStates@@3V?$BlockStateVariant@H@@B
MCAPI extern class BlockStateVariant<int> const RedstoneSignal;

// symbol: ?RepeaterDelay@VanillaStates@@3V?$BlockStateVariant@H@@B
MCAPI extern class BlockStateVariant<int> const RepeaterDelay;

// symbol: ?RespawnAnchorCharge@VanillaStates@@3V?$BlockStateVariant@H@@B
MCAPI extern class BlockStateVariant<int> const RespawnAnchorCharge;

// symbol: ?Rotation@VanillaStates@@3V?$BlockStateVariant@H@@B
MCAPI extern class BlockStateVariant<int> const Rotation;

// symbol: ?SandType@VanillaStates@@3V?$BlockStateVariant@W4SandType@@@@B
MCAPI extern class BlockStateVariant<::SandType> const SandType;

// symbol: ?SandstoneType@VanillaStates@@3V?$BlockStateVariant@W4SandstoneType@@@@B
MCAPI extern class BlockStateVariant<::SandstoneType> const SandstoneType;

// symbol: ?SaplingType@VanillaStates@@3V?$BlockStateVariant@W4SaplingType@@@@B
MCAPI extern class BlockStateVariant<::SaplingType> const SaplingType;

// symbol: ?SculkSensorPhase@VanillaStates@@3V?$BlockStateVariant@H@@B
MCAPI extern class BlockStateVariant<int> const SculkSensorPhase;

// symbol: ?SeagrassType@VanillaStates@@3V?$BlockStateVariant@W4SeagrassType@@@@B
MCAPI extern class BlockStateVariant<::SeagrassType> const SeagrassType;

// symbol: ?SpongeType@VanillaStates@@3V?$BlockStateVariant@W4SpongeType@@@@B
MCAPI extern class BlockStateVariant<::SpongeType> const SpongeType;

// symbol: ?Stability@VanillaStates@@3V?$BlockStateVariant@H@@B
MCAPI extern class BlockStateVariant<int> const Stability;

// symbol: ?StabilityCheckBit@VanillaStates@@3V?$BlockStateVariant@_N@@B
MCAPI extern class BlockStateVariant<bool> const StabilityCheckBit;

// symbol: ?StandingRotation@VanillaStates@@3V?$BlockStateVariant@H@@B
MCAPI extern class BlockStateVariant<int> const StandingRotation;

// symbol: ?StoneBrickType@VanillaStates@@3V?$BlockStateVariant@W4StoneBrickType@@@@B
MCAPI extern class BlockStateVariant<::StoneBrickType> const StoneBrickType;

// symbol: ?StoneSlabType@VanillaStates@@3V?$BlockStateVariant@W4StoneSlabType@@@@B
MCAPI extern class BlockStateVariant<::StoneSlabType> const StoneSlabType;

// symbol: ?StoneSlabType2@VanillaStates@@3V?$BlockStateVariant@W4StoneSlabType2@@@@B
MCAPI extern class BlockStateVariant<::StoneSlabType2> const StoneSlabType2;

// symbol: ?StoneSlabType3@VanillaStates@@3V?$BlockStateVariant@W4StoneSlabType3@@@@B
MCAPI extern class BlockStateVariant<::StoneSlabType3> const StoneSlabType3;

// symbol: ?StoneSlabType4@VanillaStates@@3V?$BlockStateVariant@W4StoneSlabType4@@@@B
MCAPI extern class BlockStateVariant<::StoneSlabType4> const StoneSlabType4;

// symbol: ?StoneType@VanillaStates@@3V?$BlockStateVariant@W4StoneType@@@@B
MCAPI extern class BlockStateVariant<::StoneType> const StoneType;

// symbol: ?StrippedBit@VanillaStates@@3V?$BlockStateVariant@_N@@B
MCAPI extern class BlockStateVariant<bool> const StrippedBit;

// symbol: ?StructureBlockType@VanillaStates@@3V?$BlockStateVariant@W4StructureBlockType@@@@B
MCAPI extern class BlockStateVariant<::StructureBlockType> const StructureBlockType;

// symbol: ?StructureVoidType@VanillaStates@@3V?$BlockStateVariant@W4StructureVoidType@@@@B
MCAPI extern class BlockStateVariant<::StructureVoidType> const StructureVoidType;

// symbol: ?SuspendedBit@VanillaStates@@3V?$BlockStateVariant@_N@@B
MCAPI extern class BlockStateVariant<bool> const SuspendedBit;

// symbol: ?TallGrassType@VanillaStates@@3V?$BlockStateVariant@W4TallGrassType@@@@B
MCAPI extern class BlockStateVariant<::TallGrassType> const TallGrassType;

// symbol: ?ToggleBit@VanillaStates@@3V?$BlockStateVariant@_N@@B
MCAPI extern class BlockStateVariant<bool> const ToggleBit;

// symbol: ?TopSlotBit@VanillaStates@@3V?$BlockStateVariant@_N@@B
MCAPI extern class BlockStateVariant<bool> const TopSlotBit;

// symbol: ?TorchFacingDirection@VanillaStates@@3V?$BlockStateVariant@W4TorchFacing@@@@B
MCAPI extern class BlockStateVariant<::TorchFacing> const TorchFacingDirection;

// symbol: ?TrialSpawnerState@VanillaStates@@3V?$BlockStateVariant@H@@B
MCAPI extern class BlockStateVariant<int> const TrialSpawnerState;

// symbol: ?TriggeredBit@VanillaStates@@3V?$BlockStateVariant@_N@@B
MCAPI extern class BlockStateVariant<bool> const TriggeredBit;

// symbol: ?TurtleEggCount@VanillaStates@@3V?$BlockStateVariant@W4EggCount@@@@B
MCAPI extern class BlockStateVariant<::EggCount> const TurtleEggCount;

// symbol: ?TwistingVinesAge@VanillaStates@@3V?$BlockStateVariant@H@@B
MCAPI extern class BlockStateVariant<int> const TwistingVinesAge;

// symbol: ?UpdateBit@VanillaStates@@3V?$BlockStateVariant@_N@@B
MCAPI extern class BlockStateVariant<bool> const UpdateBit;

// symbol: ?UpperBlockBit@VanillaStates@@3V?$BlockStateVariant@_N@@B
MCAPI extern class BlockStateVariant<bool> const UpperBlockBit;

// symbol: ?UpsideDownBit@VanillaStates@@3V?$BlockStateVariant@_N@@B
MCAPI extern class BlockStateVariant<bool> const UpsideDownBit;

// symbol: ?VaultState@VanillaStates@@3V?$BlockStateVariant@W4VaultBlockState@@@@B
MCAPI extern class BlockStateVariant<::VaultBlockState> const VaultState;

// symbol: ?VineDirectionBits@VanillaStates@@3V?$BlockStateVariant@H@@B
MCAPI extern class BlockStateVariant<int> const VineDirectionBits;

// symbol: ?WallBlockType@VanillaStates@@3V?$BlockStateVariant@W4WallBlockType@@@@B
MCAPI extern class BlockStateVariant<::WallBlockType> const WallBlockType;

// symbol: ?WallConnectionTypeEast@VanillaStates@@3V?$BlockStateVariant@W4WallConnectionType@@@@B
MCAPI extern class BlockStateVariant<::WallConnectionType> const WallConnectionTypeEast;

// symbol: ?WallConnectionTypeNorth@VanillaStates@@3V?$BlockStateVariant@W4WallConnectionType@@@@B
MCAPI extern class BlockStateVariant<::WallConnectionType> const WallConnectionTypeNorth;

// symbol: ?WallConnectionTypeSouth@VanillaStates@@3V?$BlockStateVariant@W4WallConnectionType@@@@B
MCAPI extern class BlockStateVariant<::WallConnectionType> const WallConnectionTypeSouth;

// symbol: ?WallConnectionTypeWest@VanillaStates@@3V?$BlockStateVariant@W4WallConnectionType@@@@B
MCAPI extern class BlockStateVariant<::WallConnectionType> const WallConnectionTypeWest;

// symbol: ?WallPostBit@VanillaStates@@3V?$BlockStateVariant@_N@@B
MCAPI extern class BlockStateVariant<bool> const WallPostBit;

// symbol: ?WeepingVinesAge@VanillaStates@@3V?$BlockStateVariant@H@@B
MCAPI extern class BlockStateVariant<int> const WeepingVinesAge;

// symbol: ?WeirdoDirection@VanillaStates@@3V?$BlockStateVariant@H@@B
MCAPI extern class BlockStateVariant<int> const WeirdoDirection;

// symbol: ?WoodType@VanillaStates@@3V?$BlockStateVariant@W4WoodType@@@@B
MCAPI extern class BlockStateVariant<::WoodType> const WoodType;

// symbol: ?getState@VanillaStates@@YAPEBVBlockState@@AEBVHashedString@@@Z
MCAPI class BlockState const* getState(class HashedString const& name);

// symbol: ?registerStates@VanillaStates@@YAXXZ
MCAPI void registerStates();

// symbol: ?unregisterStates@VanillaStates@@YAXXZ
MCAPI void unregisterStates();
// NOLINTEND

}; // namespace VanillaStates
