/**
 * @file  VanillaStates.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC namespace VanillaStates.
 *
 */
namespace VanillaStates {

#define AFTER_EXTRA
// Add Member There
struct CachedItemStateMapPtr {
    CachedItemStateMapPtr() = delete;
    CachedItemStateMapPtr(CachedItemStateMapPtr const&) = delete;
    CachedItemStateMapPtr(CachedItemStateMapPtr const&&) = delete;
};

#undef AFTER_EXTRA
    /**
     * @symbol  ?Active\@VanillaStates\@\@3V?$ItemStateVariant\@_N\@\@B
     */
    MCAPI extern class ItemStateVariant<bool> const Active;
    /**
     * @symbol  ?Age\@VanillaStates\@\@3V?$ItemStateVariant\@H\@\@B
     */
    MCAPI extern class ItemStateVariant<int> const Age;
    /**
     * @symbol  ?AgeBit\@VanillaStates\@\@3V?$ItemStateVariant\@_N\@\@B
     */
    MCAPI extern class ItemStateVariant<bool> const AgeBit;
    /**
     * @symbol  ?AllowUnderwaterBit\@VanillaStates\@\@3V?$ItemStateVariant\@_N\@\@B
     */
    MCAPI extern class ItemStateVariant<bool> const AllowUnderwaterBit;
    /**
     * @symbol  ?AttachedBit\@VanillaStates\@\@3V?$ItemStateVariant\@_N\@\@B
     */
    MCAPI extern class ItemStateVariant<bool> const AttachedBit;
    /**
     * @symbol  ?Attachment\@VanillaStates\@\@3V?$ItemStateVariant\@W4AttachmentType\@\@\@\@B
     */
    MCAPI extern class ItemStateVariant<enum class AttachmentType> const Attachment;
    /**
     * @symbol  ?BambooLeafSize\@VanillaStates\@\@3V?$ItemStateVariant\@W4LeafSize\@\@\@\@B
     */
    MCAPI extern class ItemStateVariant<enum class LeafSize> const BambooLeafSize;
    /**
     * @symbol  ?BambooThickness\@VanillaStates\@\@3V?$ItemStateVariant\@W4StalkThickness\@\@\@\@B
     */
    MCAPI extern class ItemStateVariant<enum class StalkThickness> const BambooThickness;
    /**
     * @symbol  ?BeehiveHoneyLevel\@VanillaStates\@\@3V?$ItemStateVariant\@H\@\@B
     */
    MCAPI extern class ItemStateVariant<int> const BeehiveHoneyLevel;
    /**
     * @symbol  ?BigDripleafHead\@VanillaStates\@\@3V?$ItemStateVariant\@_N\@\@B
     */
    MCAPI extern class ItemStateVariant<bool> const BigDripleafHead;
    /**
     * @symbol  ?BigDripleafTilt\@VanillaStates\@\@3V?$ItemStateVariant\@W4BigDripleafTilt\@\@\@\@B
     */
    MCAPI extern class ItemStateVariant<enum class BigDripleafTilt> const BigDripleafTilt;
    /**
     * @symbol  ?BiteCounter\@VanillaStates\@\@3V?$ItemStateVariant\@H\@\@B
     */
    MCAPI extern class ItemStateVariant<int> const BiteCounter;
    /**
     * @symbol  ?BlockLightLevel\@VanillaStates\@\@3V?$ItemStateVariant\@H\@\@B
     */
    MCAPI extern class ItemStateVariant<int> const BlockLightLevel;
    /**
     * @symbol  ?Bloom\@VanillaStates\@\@3V?$ItemStateVariant\@_N\@\@B
     */
    MCAPI extern class ItemStateVariant<bool> const Bloom;
    /**
     * @symbol  ?BookshelfOccupiedSlots\@VanillaStates\@\@3V?$ItemStateVariant\@H\@\@B
     */
    MCAPI extern class ItemStateVariant<int> const BookshelfOccupiedSlots;
    /**
     * @symbol  ?BrewingStandSlotABit\@VanillaStates\@\@3V?$ItemStateVariant\@_N\@\@B
     */
    MCAPI extern class ItemStateVariant<bool> const BrewingStandSlotABit;
    /**
     * @symbol  ?BrewingStandSlotBBit\@VanillaStates\@\@3V?$ItemStateVariant\@_N\@\@B
     */
    MCAPI extern class ItemStateVariant<bool> const BrewingStandSlotBBit;
    /**
     * @symbol  ?BrewingStandSlotCBit\@VanillaStates\@\@3V?$ItemStateVariant\@_N\@\@B
     */
    MCAPI extern class ItemStateVariant<bool> const BrewingStandSlotCBit;
    /**
     * @symbol  ?ButtonPressedBit\@VanillaStates\@\@3V?$ItemStateVariant\@_N\@\@B
     */
    MCAPI extern class ItemStateVariant<bool> const ButtonPressedBit;
    /**
     * @symbol  ?CanSummon\@VanillaStates\@\@3V?$ItemStateVariant\@_N\@\@B
     */
    MCAPI extern class ItemStateVariant<bool> const CanSummon;
    /**
     * @symbol  ?Candles\@VanillaStates\@\@3V?$ItemStateVariant\@H\@\@B
     */
    MCAPI extern class ItemStateVariant<int> const Candles;
    /**
     * @symbol  ?CauldronLiquid\@VanillaStates\@\@3V?$ItemStateVariant\@W4CauldronLiquidType\@\@\@\@B
     */
    MCAPI extern class ItemStateVariant<enum class CauldronLiquidType> const CauldronLiquid;
    /**
     * @symbol  ?ChemistryTableType\@VanillaStates\@\@3V?$ItemStateVariant\@W4ChemistryTableType\@\@\@\@B
     */
    MCAPI extern class ItemStateVariant<enum class ChemistryTableType> const ChemistryTableType;
    /**
     * @symbol  ?ChiselType\@VanillaStates\@\@3V?$ItemStateVariant\@W4ChiselType\@\@\@\@B
     */
    MCAPI extern class ItemStateVariant<enum class ChiselType> const ChiselType;
    /**
     * @symbol  ?ClusterCount\@VanillaStates\@\@3V?$ItemStateVariant\@H\@\@B
     */
    MCAPI extern class ItemStateVariant<int> const ClusterCount;
    /**
     * @symbol  ?Color\@VanillaStates\@\@3V?$ItemStateVariant\@W4BlockColor\@\@\@\@B
     */
    MCAPI extern class ItemStateVariant<enum class BlockColor> const Color;
    /**
     * @symbol  ?ColorBit\@VanillaStates\@\@3V?$ItemStateVariant\@_N\@\@B
     */
    MCAPI extern class ItemStateVariant<bool> const ColorBit;
    /**
     * @symbol  ?ComposterFillLevel\@VanillaStates\@\@3V?$ItemStateVariant\@H\@\@B
     */
    MCAPI extern class ItemStateVariant<int> const ComposterFillLevel;
    /**
     * @symbol  ?ConditionalBit\@VanillaStates\@\@3V?$ItemStateVariant\@_N\@\@B
     */
    MCAPI extern class ItemStateVariant<bool> const ConditionalBit;
    /**
     * @symbol  ?CoralColor\@VanillaStates\@\@3V?$ItemStateVariant\@W4CoralColor\@\@\@\@B
     */
    MCAPI extern class ItemStateVariant<enum class CoralColor> const CoralColor;
    /**
     * @symbol  ?CoralDirection\@VanillaStates\@\@3V?$ItemStateVariant\@H\@\@B
     */
    MCAPI extern class ItemStateVariant<int> const CoralDirection;
    /**
     * @symbol  ?CoralFanDirection\@VanillaStates\@\@3V?$ItemStateVariant\@H\@\@B
     */
    MCAPI extern class ItemStateVariant<int> const CoralFanDirection;
    /**
     * @symbol  ?CoralHangTypeBit\@VanillaStates\@\@3V?$ItemStateVariant\@_N\@\@B
     */
    MCAPI extern class ItemStateVariant<bool> const CoralHangTypeBit;
    /**
     * @symbol  ?CoveredBit\@VanillaStates\@\@3V?$ItemStateVariant\@_N\@\@B
     */
    MCAPI extern class ItemStateVariant<bool> const CoveredBit;
    /**
     * @symbol  ?CrackedState\@VanillaStates\@\@3V?$ItemStateVariant\@W4HatchLevel\@\@\@\@B
     */
    MCAPI extern class ItemStateVariant<enum class HatchLevel> const CrackedState;
    /**
     * @symbol  ?DEPRECATED\@VanillaStates\@\@3V?$ItemStateVariant\@H\@\@B
     */
    MCAPI extern class ItemStateVariant<int> const DEPRECATED;
    /**
     * @symbol  ?Damage\@VanillaStates\@\@3V?$ItemStateVariant\@W4AnvilDamage\@\@\@\@B
     */
    MCAPI extern class ItemStateVariant<enum class AnvilDamage> const Damage;
    /**
     * @symbol  ?DeadBit\@VanillaStates\@\@3V?$ItemStateVariant\@_N\@\@B
     */
    MCAPI extern class ItemStateVariant<bool> const DeadBit;
    /**
     * @symbol  ?Direction\@VanillaStates\@\@3V?$ItemStateVariant\@H\@\@B
     */
    MCAPI extern class ItemStateVariant<int> const Direction;
    /**
     * @symbol  ?DirtType\@VanillaStates\@\@3V?$ItemStateVariant\@W4DirtType\@\@\@\@B
     */
    MCAPI extern class ItemStateVariant<enum class DirtType> const DirtType;
    /**
     * @symbol  ?DisarmedBit\@VanillaStates\@\@3V?$ItemStateVariant\@_N\@\@B
     */
    MCAPI extern class ItemStateVariant<bool> const DisarmedBit;
    /**
     * @symbol  ?DoorHingeBit\@VanillaStates\@\@3V?$ItemStateVariant\@_N\@\@B
     */
    MCAPI extern class ItemStateVariant<bool> const DoorHingeBit;
    /**
     * @symbol  ?DoublePlantType\@VanillaStates\@\@3V?$ItemStateVariant\@W4DoublePlantType\@\@\@\@B
     */
    MCAPI extern class ItemStateVariant<enum class DoublePlantType> const DoublePlantType;
    /**
     * @symbol  ?DragDown\@VanillaStates\@\@3V?$ItemStateVariant\@_N\@\@B
     */
    MCAPI extern class ItemStateVariant<bool> const DragDown;
    /**
     * @symbol  ?DripstoneThickness\@VanillaStates\@\@3V?$ItemStateVariant\@W4DripstoneThickness\@\@\@\@B
     */
    MCAPI extern class ItemStateVariant<enum class DripstoneThickness> const DripstoneThickness;
    /**
     * @symbol  ?EndPortalEyeBit\@VanillaStates\@\@3V?$ItemStateVariant\@_N\@\@B
     */
    MCAPI extern class ItemStateVariant<bool> const EndPortalEyeBit;
    /**
     * @symbol  ?ExplodeBit\@VanillaStates\@\@3V?$ItemStateVariant\@_N\@\@B
     */
    MCAPI extern class ItemStateVariant<bool> const ExplodeBit;
    /**
     * @symbol  ?Extinguished\@VanillaStates\@\@3V?$ItemStateVariant\@_N\@\@B
     */
    MCAPI extern class ItemStateVariant<bool> const Extinguished;
    /**
     * @symbol  ?FacingDirection\@VanillaStates\@\@3V?$ItemStateVariant\@H\@\@B
     */
    MCAPI extern class ItemStateVariant<int> const FacingDirection;
    /**
     * @symbol  ?FillLevel\@VanillaStates\@\@3V?$ItemStateVariant\@H\@\@B
     */
    MCAPI extern class ItemStateVariant<int> const FillLevel;
    /**
     * @symbol  ?FlowerType\@VanillaStates\@\@3V?$ItemStateVariant\@W4FlowerType\@\@\@\@B
     */
    MCAPI extern class ItemStateVariant<enum class FlowerType> const FlowerType;
    /**
     * @symbol  ?GrowingPlantAge\@VanillaStates\@\@3V?$ItemStateVariant\@H\@\@B
     */
    MCAPI extern class ItemStateVariant<int> const GrowingPlantAge;
    /**
     * @symbol  ?Growth\@VanillaStates\@\@3V?$ItemStateVariant\@H\@\@B
     */
    MCAPI extern class ItemStateVariant<int> const Growth;
    /**
     * @symbol  ?HangingBit\@VanillaStates\@\@3V?$ItemStateVariant\@_N\@\@B
     */
    MCAPI extern class ItemStateVariant<bool> const HangingBit;
    /**
     * @symbol  ?HeadPieceBit\@VanillaStates\@\@3V?$ItemStateVariant\@_N\@\@B
     */
    MCAPI extern class ItemStateVariant<bool> const HeadPieceBit;
    /**
     * @symbol  ?Height\@VanillaStates\@\@3V?$ItemStateVariant\@H\@\@B
     */
    MCAPI extern class ItemStateVariant<int> const Height;
    /**
     * @symbol  ?HugeMushroomBits\@VanillaStates\@\@3V?$ItemStateVariant\@H\@\@B
     */
    MCAPI extern class ItemStateVariant<int> const HugeMushroomBits;
    /**
     * @symbol  ?InWallBit\@VanillaStates\@\@3V?$ItemStateVariant\@_N\@\@B
     */
    MCAPI extern class ItemStateVariant<bool> const InWallBit;
    /**
     * @symbol  ?InfiniburnBit\@VanillaStates\@\@3V?$ItemStateVariant\@_N\@\@B
     */
    MCAPI extern class ItemStateVariant<bool> const InfiniburnBit;
    /**
     * @symbol  ?ItemFrameMapBit\@VanillaStates\@\@3V?$ItemStateVariant\@_N\@\@B
     */
    MCAPI extern class ItemStateVariant<bool> const ItemFrameMapBit;
    /**
     * @symbol  ?ItemFramePhotoBit\@VanillaStates\@\@3V?$ItemStateVariant\@_N\@\@B
     */
    MCAPI extern class ItemStateVariant<bool> const ItemFramePhotoBit;
    /**
     * @symbol  ?KelpAge\@VanillaStates\@\@3V?$ItemStateVariant\@H\@\@B
     */
    MCAPI extern class ItemStateVariant<int> const KelpAge;
    /**
     * @symbol  ?LeverDirection\@VanillaStates\@\@3V?$ItemStateVariant\@W4LeverDirection\@\@\@\@B
     */
    MCAPI extern class ItemStateVariant<enum class LeverDirection> const LeverDirection;
    /**
     * @symbol  ?LiquidDepth\@VanillaStates\@\@3V?$ItemStateVariant\@H\@\@B
     */
    MCAPI extern class ItemStateVariant<int> const LiquidDepth;
    /**
     * @symbol  ?Lit\@VanillaStates\@\@3V?$ItemStateVariant\@_N\@\@B
     */
    MCAPI extern class ItemStateVariant<bool> const Lit;
    /**
     * @symbol  ?MoisturizedAmount\@VanillaStates\@\@3V?$ItemStateVariant\@H\@\@B
     */
    MCAPI extern class ItemStateVariant<int> const MoisturizedAmount;
    /**
     * @symbol  ?MonsterEggStoneType\@VanillaStates\@\@3V?$ItemStateVariant\@W4MonsterEggStoneType\@\@\@\@B
     */
    MCAPI extern class ItemStateVariant<enum class MonsterEggStoneType> const MonsterEggStoneType;
    /**
     * @symbol  ?MultiFaceDirectionBits\@VanillaStates\@\@3V?$ItemStateVariant\@H\@\@B
     */
    MCAPI extern class ItemStateVariant<int> const MultiFaceDirectionBits;
    /**
     * @symbol  ?NewLeafType\@VanillaStates\@\@3V?$ItemStateVariant\@W4NewLeafType\@\@\@\@B
     */
    MCAPI extern class ItemStateVariant<enum class NewLeafType> const NewLeafType;
    /**
     * @symbol  ?NewLogType\@VanillaStates\@\@3V?$ItemStateVariant\@W4NewLogType\@\@\@\@B
     */
    MCAPI extern class ItemStateVariant<enum class NewLogType> const NewLogType;
    /**
     * @symbol  ?NoDropBit\@VanillaStates\@\@3V?$ItemStateVariant\@_N\@\@B
     */
    MCAPI extern class ItemStateVariant<bool> const NoDropBit;
    /**
     * @symbol  ?OccupiedBit\@VanillaStates\@\@3V?$ItemStateVariant\@_N\@\@B
     */
    MCAPI extern class ItemStateVariant<bool> const OccupiedBit;
    /**
     * @symbol  ?OldLeafType\@VanillaStates\@\@3V?$ItemStateVariant\@W4OldLeafType\@\@\@\@B
     */
    MCAPI extern class ItemStateVariant<enum class OldLeafType> const OldLeafType;
    /**
     * @symbol  ?OldLogType\@VanillaStates\@\@3V?$ItemStateVariant\@W4OldLogType\@\@\@\@B
     */
    MCAPI extern class ItemStateVariant<enum class OldLogType> const OldLogType;
    /**
     * @symbol  ?OpenBit\@VanillaStates\@\@3V?$ItemStateVariant\@_N\@\@B
     */
    MCAPI extern class ItemStateVariant<bool> const OpenBit;
    /**
     * @symbol  ?OutputLitBit\@VanillaStates\@\@3V?$ItemStateVariant\@_N\@\@B
     */
    MCAPI extern class ItemStateVariant<bool> const OutputLitBit;
    /**
     * @symbol  ?OutputSubtractBit\@VanillaStates\@\@3V?$ItemStateVariant\@_N\@\@B
     */
    MCAPI extern class ItemStateVariant<bool> const OutputSubtractBit;
    /**
     * @symbol  ?PersistentBit\@VanillaStates\@\@3V?$ItemStateVariant\@_N\@\@B
     */
    MCAPI extern class ItemStateVariant<bool> const PersistentBit;
    /**
     * @symbol  ?PillarAxis\@VanillaStates\@\@3V?$ItemStateVariant\@W4PillarAxis\@\@\@\@B
     */
    MCAPI extern class ItemStateVariant<enum class PillarAxis> const PillarAxis;
    /**
     * @symbol  ?PortalAxis\@VanillaStates\@\@3V?$ItemStateVariant\@W4PortalAxis\@\@\@\@B
     */
    MCAPI extern class ItemStateVariant<enum class PortalAxis> const PortalAxis;
    /**
     * @symbol  ?PoweredBit\@VanillaStates\@\@3V?$ItemStateVariant\@_N\@\@B
     */
    MCAPI extern class ItemStateVariant<bool> const PoweredBit;
    /**
     * @symbol  ?PrismarineBlockType\@VanillaStates\@\@3V?$ItemStateVariant\@W4PrismarineBlockType\@\@\@\@B
     */
    MCAPI extern class ItemStateVariant<enum class PrismarineBlockType> const PrismarineBlockType;
    /**
     * @symbol  ?PropaguleStage\@VanillaStates\@\@3V?$ItemStateVariant\@H\@\@B
     */
    MCAPI extern class ItemStateVariant<int> const PropaguleStage;
    /**
     * @symbol  ?RailDataBit\@VanillaStates\@\@3V?$ItemStateVariant\@_N\@\@B
     */
    MCAPI extern class ItemStateVariant<bool> const RailDataBit;
    /**
     * @symbol  ?RailDirection\@VanillaStates\@\@3V?$ItemStateVariant\@H\@\@B
     */
    MCAPI extern class ItemStateVariant<int> const RailDirection;
    /**
     * @symbol  ?RedstoneSignal\@VanillaStates\@\@3V?$ItemStateVariant\@H\@\@B
     */
    MCAPI extern class ItemStateVariant<int> const RedstoneSignal;
    /**
     * @symbol  ?RepeaterDelay\@VanillaStates\@\@3V?$ItemStateVariant\@H\@\@B
     */
    MCAPI extern class ItemStateVariant<int> const RepeaterDelay;
    /**
     * @symbol  ?RespawnAnchorCharge\@VanillaStates\@\@3V?$ItemStateVariant\@H\@\@B
     */
    MCAPI extern class ItemStateVariant<int> const RespawnAnchorCharge;
    /**
     * @symbol  ?Rotation\@VanillaStates\@\@3V?$ItemStateVariant\@H\@\@B
     */
    MCAPI extern class ItemStateVariant<int> const Rotation;
    /**
     * @symbol  ?SandStoneType\@VanillaStates\@\@3V?$ItemStateVariant\@W4SandStoneType\@\@\@\@B
     */
    MCAPI extern class ItemStateVariant<enum class SandStoneType> const SandStoneType;
    /**
     * @symbol  ?SandType\@VanillaStates\@\@3V?$ItemStateVariant\@W4SandType\@\@\@\@B
     */
    MCAPI extern class ItemStateVariant<enum class SandType> const SandType;
    /**
     * @symbol  ?SaplingType\@VanillaStates\@\@3V?$ItemStateVariant\@W4SaplingType\@\@\@\@B
     */
    MCAPI extern class ItemStateVariant<enum class SaplingType> const SaplingType;
    /**
     * @symbol  ?SeaGrassType\@VanillaStates\@\@3V?$ItemStateVariant\@W4SeaGrassType\@\@\@\@B
     */
    MCAPI extern class ItemStateVariant<enum class SeaGrassType> const SeaGrassType;
    /**
     * @symbol  ?SpongeType\@VanillaStates\@\@3V?$ItemStateVariant\@W4SpongeType\@\@\@\@B
     */
    MCAPI extern class ItemStateVariant<enum class SpongeType> const SpongeType;
    /**
     * @symbol  ?Stability\@VanillaStates\@\@3V?$ItemStateVariant\@H\@\@B
     */
    MCAPI extern class ItemStateVariant<int> const Stability;
    /**
     * @symbol  ?StabilityCheckBit\@VanillaStates\@\@3V?$ItemStateVariant\@_N\@\@B
     */
    MCAPI extern class ItemStateVariant<bool> const StabilityCheckBit;
    /**
     * @symbol  ?StandingRotation\@VanillaStates\@\@3V?$ItemStateVariant\@H\@\@B
     */
    MCAPI extern class ItemStateVariant<int> const StandingRotation;
    /**
     * @symbol  ?StoneBrickType\@VanillaStates\@\@3V?$ItemStateVariant\@W4StoneBrickType\@\@\@\@B
     */
    MCAPI extern class ItemStateVariant<enum class StoneBrickType> const StoneBrickType;
    /**
     * @symbol  ?StoneSlabType\@VanillaStates\@\@3V?$ItemStateVariant\@W4StoneSlabType\@\@\@\@B
     */
    MCAPI extern class ItemStateVariant<enum class StoneSlabType> const StoneSlabType;
    /**
     * @symbol  ?StoneSlabType2\@VanillaStates\@\@3V?$ItemStateVariant\@W4StoneSlabType2\@\@\@\@B
     */
    MCAPI extern class ItemStateVariant<enum class StoneSlabType2> const StoneSlabType2;
    /**
     * @symbol  ?StoneSlabType3\@VanillaStates\@\@3V?$ItemStateVariant\@W4StoneSlabType3\@\@\@\@B
     */
    MCAPI extern class ItemStateVariant<enum class StoneSlabType3> const StoneSlabType3;
    /**
     * @symbol  ?StoneSlabType4\@VanillaStates\@\@3V?$ItemStateVariant\@W4StoneSlabType4\@\@\@\@B
     */
    MCAPI extern class ItemStateVariant<enum class StoneSlabType4> const StoneSlabType4;
    /**
     * @symbol  ?StoneType\@VanillaStates\@\@3V?$ItemStateVariant\@W4StoneType\@\@\@\@B
     */
    MCAPI extern class ItemStateVariant<enum class StoneType> const StoneType;
    /**
     * @symbol  ?StrippedBit\@VanillaStates\@\@3V?$ItemStateVariant\@_N\@\@B
     */
    MCAPI extern class ItemStateVariant<bool> const StrippedBit;
    /**
     * @symbol  ?StructureBlockType\@VanillaStates\@\@3V?$ItemStateVariant\@W4StructureBlockType\@\@\@\@B
     */
    MCAPI extern class ItemStateVariant<enum class StructureBlockType> const StructureBlockType;
    /**
     * @symbol  ?StructureVoidType\@VanillaStates\@\@3V?$ItemStateVariant\@W4StructureVoidType\@\@\@\@B
     */
    MCAPI extern class ItemStateVariant<enum class StructureVoidType> const StructureVoidType;
    /**
     * @symbol  ?SuspendedBit\@VanillaStates\@\@3V?$ItemStateVariant\@_N\@\@B
     */
    MCAPI extern class ItemStateVariant<bool> const SuspendedBit;
    /**
     * @symbol  ?TallGrassType\@VanillaStates\@\@3V?$ItemStateVariant\@W4TallGrassType\@\@\@\@B
     */
    MCAPI extern class ItemStateVariant<enum class TallGrassType> const TallGrassType;
    /**
     * @symbol  ?ToggleBit\@VanillaStates\@\@3V?$ItemStateVariant\@_N\@\@B
     */
    MCAPI extern class ItemStateVariant<bool> const ToggleBit;
    /**
     * @symbol  ?TopSlotBit\@VanillaStates\@\@3V?$ItemStateVariant\@_N\@\@B
     */
    MCAPI extern class ItemStateVariant<bool> const TopSlotBit;
    /**
     * @symbol  ?TorchFacingDirection\@VanillaStates\@\@3V?$ItemStateVariant\@W4TorchFacing\@\@\@\@B
     */
    MCAPI extern class ItemStateVariant<enum class TorchFacing> const TorchFacingDirection;
    /**
     * @symbol  ?TriggeredBit\@VanillaStates\@\@3V?$ItemStateVariant\@_N\@\@B
     */
    MCAPI extern class ItemStateVariant<bool> const TriggeredBit;
    /**
     * @symbol  ?TurtleEggCount\@VanillaStates\@\@3V?$ItemStateVariant\@W4EggCount\@\@\@\@B
     */
    MCAPI extern class ItemStateVariant<enum class EggCount> const TurtleEggCount;
    /**
     * @symbol  ?TwistingVinesAge\@VanillaStates\@\@3V?$ItemStateVariant\@H\@\@B
     */
    MCAPI extern class ItemStateVariant<int> const TwistingVinesAge;
    /**
     * @symbol  ?UpdateBit\@VanillaStates\@\@3V?$ItemStateVariant\@_N\@\@B
     */
    MCAPI extern class ItemStateVariant<bool> const UpdateBit;
    /**
     * @symbol  ?UpperBlockBit\@VanillaStates\@\@3V?$ItemStateVariant\@_N\@\@B
     */
    MCAPI extern class ItemStateVariant<bool> const UpperBlockBit;
    /**
     * @symbol  ?UpsideDownBit\@VanillaStates\@\@3V?$ItemStateVariant\@_N\@\@B
     */
    MCAPI extern class ItemStateVariant<bool> const UpsideDownBit;
    /**
     * @symbol  ?VineDirectionBits\@VanillaStates\@\@3V?$ItemStateVariant\@H\@\@B
     */
    MCAPI extern class ItemStateVariant<int> const VineDirectionBits;
    /**
     * @symbol  ?WallBlockType\@VanillaStates\@\@3V?$ItemStateVariant\@W4WallBlockType\@\@\@\@B
     */
    MCAPI extern class ItemStateVariant<enum class WallBlockType> const WallBlockType;
    /**
     * @symbol  ?WallConnectionTypeEast\@VanillaStates\@\@3V?$ItemStateVariant\@W4WallConnectionType\@\@\@\@B
     */
    MCAPI extern class ItemStateVariant<enum class WallConnectionType> const WallConnectionTypeEast;
    /**
     * @symbol  ?WallConnectionTypeNorth\@VanillaStates\@\@3V?$ItemStateVariant\@W4WallConnectionType\@\@\@\@B
     */
    MCAPI extern class ItemStateVariant<enum class WallConnectionType> const WallConnectionTypeNorth;
    /**
     * @symbol  ?WallConnectionTypeSouth\@VanillaStates\@\@3V?$ItemStateVariant\@W4WallConnectionType\@\@\@\@B
     */
    MCAPI extern class ItemStateVariant<enum class WallConnectionType> const WallConnectionTypeSouth;
    /**
     * @symbol  ?WallConnectionTypeWest\@VanillaStates\@\@3V?$ItemStateVariant\@W4WallConnectionType\@\@\@\@B
     */
    MCAPI extern class ItemStateVariant<enum class WallConnectionType> const WallConnectionTypeWest;
    /**
     * @symbol  ?WallPostBit\@VanillaStates\@\@3V?$ItemStateVariant\@_N\@\@B
     */
    MCAPI extern class ItemStateVariant<bool> const WallPostBit;
    /**
     * @symbol  ?WeepingVinesAge\@VanillaStates\@\@3V?$ItemStateVariant\@H\@\@B
     */
    MCAPI extern class ItemStateVariant<int> const WeepingVinesAge;
    /**
     * @symbol  ?WeirdoDirection\@VanillaStates\@\@3V?$ItemStateVariant\@H\@\@B
     */
    MCAPI extern class ItemStateVariant<int> const WeirdoDirection;
    /**
     * @symbol  ?WoodType\@VanillaStates\@\@3V?$ItemStateVariant\@W4WoodType\@\@\@\@B
     */
    MCAPI extern class ItemStateVariant<enum class WoodType> const WoodType;
    /**
     * @symbol  ?getState\@VanillaStates\@\@YAPEBVItemState\@\@AEBVHashedString\@\@\@Z
     */
    MCAPI class ItemState const * getState(class HashedString const &);
    /**
     * @symbol  ?getState\@VanillaStates\@\@YAPEBVItemState\@\@AEBVHashedString\@\@AEAUCachedItemStateMapPtr\@1\@\@Z
     */
    MCAPI class ItemState const * getState(class HashedString const &, struct VanillaStates::CachedItemStateMapPtr &);
    /**
     * @symbol  ?registerStates\@VanillaStates\@\@YAXXZ
     */
    MCAPI void registerStates();
    /**
     * @symbol  ?unregisterStates\@VanillaStates\@\@YAXXZ
     */
    MCAPI void unregisterStates();

};