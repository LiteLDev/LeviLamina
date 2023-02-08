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
     * @hash   665742471
     * @symbol  ?Active\@VanillaStates\@\@3V?$ItemStateVariant\@_N\@\@B
     */
    MCAPI extern class ItemStateVariant<bool> const Active;
    /**
     * @hash   1149166017
     * @symbol  ?Age\@VanillaStates\@\@3V?$ItemStateVariant\@H\@\@B
     */
    MCAPI extern class ItemStateVariant<int> const Age;
    /**
     * @hash   -1829755449
     * @symbol  ?AgeBit\@VanillaStates\@\@3V?$ItemStateVariant\@_N\@\@B
     */
    MCAPI extern class ItemStateVariant<bool> const AgeBit;
    /**
     * @hash   -1643473497
     * @symbol  ?AllowUnderwaterBit\@VanillaStates\@\@3V?$ItemStateVariant\@_N\@\@B
     */
    MCAPI extern class ItemStateVariant<bool> const AllowUnderwaterBit;
    /**
     * @hash   520186757
     * @symbol  ?AttachedBit\@VanillaStates\@\@3V?$ItemStateVariant\@_N\@\@B
     */
    MCAPI extern class ItemStateVariant<bool> const AttachedBit;
    /**
     * @hash   1000064330
     * @symbol  ?Attachment\@VanillaStates\@\@3V?$ItemStateVariant\@W4AttachmentType\@\@\@\@B
     */
    MCAPI extern class ItemStateVariant<enum class AttachmentType> const Attachment;
    /**
     * @hash   -487577394
     * @symbol  ?BambooLeafSize\@VanillaStates\@\@3V?$ItemStateVariant\@W4LeafSize\@\@\@\@B
     */
    MCAPI extern class ItemStateVariant<enum class LeafSize> const BambooLeafSize;
    /**
     * @hash   39252248
     * @symbol  ?BambooThickness\@VanillaStates\@\@3V?$ItemStateVariant\@W4StalkThickness\@\@\@\@B
     */
    MCAPI extern class ItemStateVariant<enum class StalkThickness> const BambooThickness;
    /**
     * @hash   -1992607015
     * @symbol  ?BeehiveHoneyLevel\@VanillaStates\@\@3V?$ItemStateVariant\@H\@\@B
     */
    MCAPI extern class ItemStateVariant<int> const BeehiveHoneyLevel;
    /**
     * @hash   14525413
     * @symbol  ?BigDripleafHead\@VanillaStates\@\@3V?$ItemStateVariant\@_N\@\@B
     */
    MCAPI extern class ItemStateVariant<bool> const BigDripleafHead;
    /**
     * @hash   1164199914
     * @symbol  ?BigDripleafTilt\@VanillaStates\@\@3V?$ItemStateVariant\@W4BigDripleafTilt\@\@\@\@B
     */
    MCAPI extern class ItemStateVariant<enum class BigDripleafTilt> const BigDripleafTilt;
    /**
     * @hash   826495723
     * @symbol  ?BiteCounter\@VanillaStates\@\@3V?$ItemStateVariant\@H\@\@B
     */
    MCAPI extern class ItemStateVariant<int> const BiteCounter;
    /**
     * @hash   -1206774663
     * @symbol  ?BlockLightLevel\@VanillaStates\@\@3V?$ItemStateVariant\@H\@\@B
     */
    MCAPI extern class ItemStateVariant<int> const BlockLightLevel;
    /**
     * @hash   -1776632091
     * @symbol  ?Bloom\@VanillaStates\@\@3V?$ItemStateVariant\@_N\@\@B
     */
    MCAPI extern class ItemStateVariant<bool> const Bloom;
    /**
     * @symbol  ?BookshelfOccupiedSlots\@VanillaStates\@\@3V?$ItemStateVariant\@H\@\@B
     */
    MCAPI extern class ItemStateVariant<int> const BookshelfOccupiedSlots;
    /**
     * @hash   -651551321
     * @symbol  ?BrewingStandSlotABit\@VanillaStates\@\@3V?$ItemStateVariant\@_N\@\@B
     */
    MCAPI extern class ItemStateVariant<bool> const BrewingStandSlotABit;
    /**
     * @hash   -1232676569
     * @symbol  ?BrewingStandSlotBBit\@VanillaStates\@\@3V?$ItemStateVariant\@_N\@\@B
     */
    MCAPI extern class ItemStateVariant<bool> const BrewingStandSlotBBit;
    /**
     * @hash   -1813801817
     * @symbol  ?BrewingStandSlotCBit\@VanillaStates\@\@3V?$ItemStateVariant\@_N\@\@B
     */
    MCAPI extern class ItemStateVariant<bool> const BrewingStandSlotCBit;
    /**
     * @hash   1657243815
     * @symbol  ?ButtonPressedBit\@VanillaStates\@\@3V?$ItemStateVariant\@_N\@\@B
     */
    MCAPI extern class ItemStateVariant<bool> const ButtonPressedBit;
    /**
     * @hash   300114949
     * @symbol  ?CanSummon\@VanillaStates\@\@3V?$ItemStateVariant\@_N\@\@B
     */
    MCAPI extern class ItemStateVariant<bool> const CanSummon;
    /**
     * @hash   2068063663
     * @symbol  ?Candles\@VanillaStates\@\@3V?$ItemStateVariant\@H\@\@B
     */
    MCAPI extern class ItemStateVariant<int> const Candles;
    /**
     * @hash   -1556220768
     * @symbol  ?CauldronLiquid\@VanillaStates\@\@3V?$ItemStateVariant\@W4CauldronLiquidType\@\@\@\@B
     */
    MCAPI extern class ItemStateVariant<enum class CauldronLiquidType> const CauldronLiquid;
    /**
     * @hash   -788966184
     * @symbol  ?ChemistryTableType\@VanillaStates\@\@3V?$ItemStateVariant\@W4ChemistryTableType\@\@\@\@B
     */
    MCAPI extern class ItemStateVariant<enum class ChemistryTableType> const ChemistryTableType;
    /**
     * @hash   620928240
     * @symbol  ?ChiselType\@VanillaStates\@\@3V?$ItemStateVariant\@W4ChiselType\@\@\@\@B
     */
    MCAPI extern class ItemStateVariant<enum class ChiselType> const ChiselType;
    /**
     * @hash   -567635189
     * @symbol  ?ClusterCount\@VanillaStates\@\@3V?$ItemStateVariant\@H\@\@B
     */
    MCAPI extern class ItemStateVariant<int> const ClusterCount;
    /**
     * @hash   -386045542
     * @symbol  ?Color\@VanillaStates\@\@3V?$ItemStateVariant\@W4BlockColor\@\@\@\@B
     */
    MCAPI extern class ItemStateVariant<enum class BlockColor> const Color;
    /**
     * @hash   233743271
     * @symbol  ?ColorBit\@VanillaStates\@\@3V?$ItemStateVariant\@_N\@\@B
     */
    MCAPI extern class ItemStateVariant<bool> const ColorBit;
    /**
     * @hash   -1776297401
     * @symbol  ?ComposterFillLevel\@VanillaStates\@\@3V?$ItemStateVariant\@H\@\@B
     */
    MCAPI extern class ItemStateVariant<int> const ComposterFillLevel;
    /**
     * @hash   1065752071
     * @symbol  ?ConditionalBit\@VanillaStates\@\@3V?$ItemStateVariant\@_N\@\@B
     */
    MCAPI extern class ItemStateVariant<bool> const ConditionalBit;
    /**
     * @hash   48382068
     * @symbol  ?CoralColor\@VanillaStates\@\@3V?$ItemStateVariant\@W4CoralColor\@\@\@\@B
     */
    MCAPI extern class ItemStateVariant<enum class CoralColor> const CoralColor;
    /**
     * @hash   671638813
     * @symbol  ?CoralDirection\@VanillaStates\@\@3V?$ItemStateVariant\@H\@\@B
     */
    MCAPI extern class ItemStateVariant<int> const CoralDirection;
    /**
     * @hash   -2008927331
     * @symbol  ?CoralFanDirection\@VanillaStates\@\@3V?$ItemStateVariant\@H\@\@B
     */
    MCAPI extern class ItemStateVariant<int> const CoralFanDirection;
    /**
     * @hash   -1507556985
     * @symbol  ?CoralHangTypeBit\@VanillaStates\@\@3V?$ItemStateVariant\@_N\@\@B
     */
    MCAPI extern class ItemStateVariant<bool> const CoralHangTypeBit;
    /**
     * @hash   -600037145
     * @symbol  ?CoveredBit\@VanillaStates\@\@3V?$ItemStateVariant\@_N\@\@B
     */
    MCAPI extern class ItemStateVariant<bool> const CoveredBit;
    /**
     * @hash   -1070124232
     * @symbol  ?CrackedState\@VanillaStates\@\@3V?$ItemStateVariant\@W4HatchLevel\@\@\@\@B
     */
    MCAPI extern class ItemStateVariant<enum class HatchLevel> const CrackedState;
    /**
     * @hash   -1372516537
     * @symbol  ?DEPRECATED\@VanillaStates\@\@3V?$ItemStateVariant\@H\@\@B
     */
    MCAPI extern class ItemStateVariant<int> const DEPRECATED;
    /**
     * @hash   768703612
     * @symbol  ?Damage\@VanillaStates\@\@3V?$ItemStateVariant\@W4AnvilDamage\@\@\@\@B
     */
    MCAPI extern class ItemStateVariant<enum class AnvilDamage> const Damage;
    /**
     * @hash   259497029
     * @symbol  ?DeadBit\@VanillaStates\@\@3V?$ItemStateVariant\@_N\@\@B
     */
    MCAPI extern class ItemStateVariant<bool> const DeadBit;
    /**
     * @hash   1149740865
     * @symbol  ?Direction\@VanillaStates\@\@3V?$ItemStateVariant\@H\@\@B
     */
    MCAPI extern class ItemStateVariant<int> const Direction;
    /**
     * @hash   1883331058
     * @symbol  ?DirtType\@VanillaStates\@\@3V?$ItemStateVariant\@W4DirtType\@\@\@\@B
     */
    MCAPI extern class ItemStateVariant<enum class DirtType> const DirtType;
    /**
     * @hash   1040300901
     * @symbol  ?DisarmedBit\@VanillaStates\@\@3V?$ItemStateVariant\@_N\@\@B
     */
    MCAPI extern class ItemStateVariant<bool> const DisarmedBit;
    /**
     * @hash   -1781345369
     * @symbol  ?DoorHingeBit\@VanillaStates\@\@3V?$ItemStateVariant\@_N\@\@B
     */
    MCAPI extern class ItemStateVariant<bool> const DoorHingeBit;
    /**
     * @hash   -419007846
     * @symbol  ?DoublePlantType\@VanillaStates\@\@3V?$ItemStateVariant\@W4DoublePlantType\@\@\@\@B
     */
    MCAPI extern class ItemStateVariant<enum class DoublePlantType> const DoublePlantType;
    /**
     * @hash   490190951
     * @symbol  ?DragDown\@VanillaStates\@\@3V?$ItemStateVariant\@_N\@\@B
     */
    MCAPI extern class ItemStateVariant<bool> const DragDown;
    /**
     * @hash   834111192
     * @symbol  ?DripstoneThickness\@VanillaStates\@\@3V?$ItemStateVariant\@W4DripstoneThickness\@\@\@\@B
     */
    MCAPI extern class ItemStateVariant<enum class DripstoneThickness> const DripstoneThickness;
    /**
     * @hash   -829466619
     * @symbol  ?EndPortalEyeBit\@VanillaStates\@\@3V?$ItemStateVariant\@_N\@\@B
     */
    MCAPI extern class ItemStateVariant<bool> const EndPortalEyeBit;
    /**
     * @hash   -671441433
     * @symbol  ?ExplodeBit\@VanillaStates\@\@3V?$ItemStateVariant\@_N\@\@B
     */
    MCAPI extern class ItemStateVariant<bool> const ExplodeBit;
    /**
     * @hash   567817575
     * @symbol  ?Extinguished\@VanillaStates\@\@3V?$ItemStateVariant\@_N\@\@B
     */
    MCAPI extern class ItemStateVariant<bool> const Extinguished;
    /**
     * @hash   600753069
     * @symbol  ?FacingDirection\@VanillaStates\@\@3V?$ItemStateVariant\@H\@\@B
     */
    MCAPI extern class ItemStateVariant<int> const FacingDirection;
    /**
     * @hash   -1388497467
     * @symbol  ?FillLevel\@VanillaStates\@\@3V?$ItemStateVariant\@H\@\@B
     */
    MCAPI extern class ItemStateVariant<int> const FillLevel;
    /**
     * @hash   1682382906
     * @symbol  ?FlowerType\@VanillaStates\@\@3V?$ItemStateVariant\@W4FlowerType\@\@\@\@B
     */
    MCAPI extern class ItemStateVariant<enum class FlowerType> const FlowerType;
    /**
     * @hash   -1271505079
     * @symbol  ?GrowingPlantAge\@VanillaStates\@\@3V?$ItemStateVariant\@H\@\@B
     */
    MCAPI extern class ItemStateVariant<int> const GrowingPlantAge;
    /**
     * @hash   -1987331825
     * @symbol  ?Growth\@VanillaStates\@\@3V?$ItemStateVariant\@H\@\@B
     */
    MCAPI extern class ItemStateVariant<int> const Growth;
    /**
     * @hash   1921775847
     * @symbol  ?HangingBit\@VanillaStates\@\@3V?$ItemStateVariant\@_N\@\@B
     */
    MCAPI extern class ItemStateVariant<bool> const HangingBit;
    /**
     * @hash   683062215
     * @symbol  ?HeadPieceBit\@VanillaStates\@\@3V?$ItemStateVariant\@_N\@\@B
     */
    MCAPI extern class ItemStateVariant<bool> const HeadPieceBit;
    /**
     * @hash   10223759
     * @symbol  ?Height\@VanillaStates\@\@3V?$ItemStateVariant\@H\@\@B
     */
    MCAPI extern class ItemStateVariant<int> const Height;
    /**
     * @hash   781821651
     * @symbol  ?HugeMushroomBits\@VanillaStates\@\@3V?$ItemStateVariant\@H\@\@B
     */
    MCAPI extern class ItemStateVariant<int> const HugeMushroomBits;
    /**
     * @hash   -1903385115
     * @symbol  ?InWallBit\@VanillaStates\@\@3V?$ItemStateVariant\@_N\@\@B
     */
    MCAPI extern class ItemStateVariant<bool> const InWallBit;
    /**
     * @hash   -561699995
     * @symbol  ?InfiniburnBit\@VanillaStates\@\@3V?$ItemStateVariant\@_N\@\@B
     */
    MCAPI extern class ItemStateVariant<bool> const InfiniburnBit;
    /**
     * @hash   1068263365
     * @symbol  ?ItemFrameMapBit\@VanillaStates\@\@3V?$ItemStateVariant\@_N\@\@B
     */
    MCAPI extern class ItemStateVariant<bool> const ItemFrameMapBit;
    /**
     * @hash   153174885
     * @symbol  ?ItemFramePhotoBit\@VanillaStates\@\@3V?$ItemStateVariant\@_N\@\@B
     */
    MCAPI extern class ItemStateVariant<bool> const ItemFramePhotoBit;
    /**
     * @hash   1986884965
     * @symbol  ?KelpAge\@VanillaStates\@\@3V?$ItemStateVariant\@H\@\@B
     */
    MCAPI extern class ItemStateVariant<int> const KelpAge;
    /**
     * @hash   1260045050
     * @symbol  ?LeverDirection\@VanillaStates\@\@3V?$ItemStateVariant\@W4LeverDirection\@\@\@\@B
     */
    MCAPI extern class ItemStateVariant<enum class LeverDirection> const LeverDirection;
    /**
     * @hash   -1913823343
     * @symbol  ?LiquidDepth\@VanillaStates\@\@3V?$ItemStateVariant\@H\@\@B
     */
    MCAPI extern class ItemStateVariant<int> const LiquidDepth;
    /**
     * @hash   769893029
     * @symbol  ?Lit\@VanillaStates\@\@3V?$ItemStateVariant\@_N\@\@B
     */
    MCAPI extern class ItemStateVariant<bool> const Lit;
    /**
     * @hash   930521853
     * @symbol  ?MoisturizedAmount\@VanillaStates\@\@3V?$ItemStateVariant\@H\@\@B
     */
    MCAPI extern class ItemStateVariant<int> const MoisturizedAmount;
    /**
     * @hash   10311738
     * @symbol  ?MonsterEggStoneType\@VanillaStates\@\@3V?$ItemStateVariant\@W4MonsterEggStoneType\@\@\@\@B
     */
    MCAPI extern class ItemStateVariant<enum class MonsterEggStoneType> const MonsterEggStoneType;
    /**
     * @hash   -1633175201
     * @symbol  ?MultiFaceDirectionBits\@VanillaStates\@\@3V?$ItemStateVariant\@H\@\@B
     */
    MCAPI extern class ItemStateVariant<int> const MultiFaceDirectionBits;
    /**
     * @hash   -1990099222
     * @symbol  ?NewLeafType\@VanillaStates\@\@3V?$ItemStateVariant\@W4NewLeafType\@\@\@\@B
     */
    MCAPI extern class ItemStateVariant<enum class NewLeafType> const NewLeafType;
    /**
     * @hash   -1389468308
     * @symbol  ?NewLogType\@VanillaStates\@\@3V?$ItemStateVariant\@W4NewLogType\@\@\@\@B
     */
    MCAPI extern class ItemStateVariant<enum class NewLogType> const NewLogType;
    /**
     * @hash   2074438181
     * @symbol  ?NoDropBit\@VanillaStates\@\@3V?$ItemStateVariant\@_N\@\@B
     */
    MCAPI extern class ItemStateVariant<bool> const NoDropBit;
    /**
     * @hash   -574678299
     * @symbol  ?OccupiedBit\@VanillaStates\@\@3V?$ItemStateVariant\@_N\@\@B
     */
    MCAPI extern class ItemStateVariant<bool> const OccupiedBit;
    /**
     * @hash   290829990
     * @symbol  ?OldLeafType\@VanillaStates\@\@3V?$ItemStateVariant\@W4OldLeafType\@\@\@\@B
     */
    MCAPI extern class ItemStateVariant<enum class OldLeafType> const OldLeafType;
    /**
     * @hash   -876862178
     * @symbol  ?OldLogType\@VanillaStates\@\@3V?$ItemStateVariant\@W4OldLogType\@\@\@\@B
     */
    MCAPI extern class ItemStateVariant<enum class OldLogType> const OldLogType;
    /**
     * @hash   794498117
     * @symbol  ?OpenBit\@VanillaStates\@\@3V?$ItemStateVariant\@_N\@\@B
     */
    MCAPI extern class ItemStateVariant<bool> const OpenBit;
    /**
     * @hash   -325384985
     * @symbol  ?OutputLitBit\@VanillaStates\@\@3V?$ItemStateVariant\@_N\@\@B
     */
    MCAPI extern class ItemStateVariant<bool> const OutputLitBit;
    /**
     * @hash   -1938360251
     * @symbol  ?OutputSubtractBit\@VanillaStates\@\@3V?$ItemStateVariant\@_N\@\@B
     */
    MCAPI extern class ItemStateVariant<bool> const OutputSubtractBit;
    /**
     * @hash   326316741
     * @symbol  ?PersistentBit\@VanillaStates\@\@3V?$ItemStateVariant\@_N\@\@B
     */
    MCAPI extern class ItemStateVariant<bool> const PersistentBit;
    /**
     * @hash   -58491322
     * @symbol  ?PillarAxis\@VanillaStates\@\@3V?$ItemStateVariant\@W4PillarAxis\@\@\@\@B
     */
    MCAPI extern class ItemStateVariant<enum class PillarAxis> const PillarAxis;
    /**
     * @hash   -328752790
     * @symbol  ?PortalAxis\@VanillaStates\@\@3V?$ItemStateVariant\@W4PortalAxis\@\@\@\@B
     */
    MCAPI extern class ItemStateVariant<enum class PortalAxis> const PortalAxis;
    /**
     * @hash   -874973785
     * @symbol  ?PoweredBit\@VanillaStates\@\@3V?$ItemStateVariant\@_N\@\@B
     */
    MCAPI extern class ItemStateVariant<bool> const PoweredBit;
    /**
     * @hash   -2133661106
     * @symbol  ?PrismarineBlockType\@VanillaStates\@\@3V?$ItemStateVariant\@W4PrismarineBlockType\@\@\@\@B
     */
    MCAPI extern class ItemStateVariant<enum class PrismarineBlockType> const PrismarineBlockType;
    /**
     * @hash   1285744595
     * @symbol  ?PropaguleStage\@VanillaStates\@\@3V?$ItemStateVariant\@H\@\@B
     */
    MCAPI extern class ItemStateVariant<int> const PropaguleStage;
    /**
     * @hash   473865957
     * @symbol  ?RailDataBit\@VanillaStates\@\@3V?$ItemStateVariant\@_N\@\@B
     */
    MCAPI extern class ItemStateVariant<bool> const RailDataBit;
    /**
     * @hash   567650109
     * @symbol  ?RailDirection\@VanillaStates\@\@3V?$ItemStateVariant\@H\@\@B
     */
    MCAPI extern class ItemStateVariant<int> const RailDirection;
    /**
     * @hash   2144050329
     * @symbol  ?RedstoneSignal\@VanillaStates\@\@3V?$ItemStateVariant\@H\@\@B
     */
    MCAPI extern class ItemStateVariant<int> const RedstoneSignal;
    /**
     * @hash   -1979417319
     * @symbol  ?RepeaterDelay\@VanillaStates\@\@3V?$ItemStateVariant\@H\@\@B
     */
    MCAPI extern class ItemStateVariant<int> const RepeaterDelay;
    /**
     * @hash   -295870875
     * @symbol  ?RespawnAnchorCharge\@VanillaStates\@\@3V?$ItemStateVariant\@H\@\@B
     */
    MCAPI extern class ItemStateVariant<int> const RespawnAnchorCharge;
    /**
     * @hash   -882064739
     * @symbol  ?Rotation\@VanillaStates\@\@3V?$ItemStateVariant\@H\@\@B
     */
    MCAPI extern class ItemStateVariant<int> const Rotation;
    /**
     * @hash   -756373066
     * @symbol  ?SandStoneType\@VanillaStates\@\@3V?$ItemStateVariant\@W4SandStoneType\@\@\@\@B
     */
    MCAPI extern class ItemStateVariant<enum class SandStoneType> const SandStoneType;
    /**
     * @hash   820787308
     * @symbol  ?SandType\@VanillaStates\@\@3V?$ItemStateVariant\@W4SandType\@\@\@\@B
     */
    MCAPI extern class ItemStateVariant<enum class SandType> const SandType;
    /**
     * @hash   -1722178158
     * @symbol  ?SaplingType\@VanillaStates\@\@3V?$ItemStateVariant\@W4SaplingType\@\@\@\@B
     */
    MCAPI extern class ItemStateVariant<enum class SaplingType> const SaplingType;
    /**
     * @hash   -1768579374
     * @symbol  ?SeaGrassType\@VanillaStates\@\@3V?$ItemStateVariant\@W4SeaGrassType\@\@\@\@B
     */
    MCAPI extern class ItemStateVariant<enum class SeaGrassType> const SeaGrassType;
    /**
     * @hash   1920860472
     * @symbol  ?SpongeType\@VanillaStates\@\@3V?$ItemStateVariant\@W4SpongeType\@\@\@\@B
     */
    MCAPI extern class ItemStateVariant<enum class SpongeType> const SpongeType;
    /**
     * @hash   1715312565
     * @symbol  ?Stability\@VanillaStates\@\@3V?$ItemStateVariant\@H\@\@B
     */
    MCAPI extern class ItemStateVariant<int> const Stability;
    /**
     * @hash   -1661266043
     * @symbol  ?StabilityCheckBit\@VanillaStates\@\@3V?$ItemStateVariant\@_N\@\@B
     */
    MCAPI extern class ItemStateVariant<bool> const StabilityCheckBit;
    /**
     * @hash   -1557204267
     * @symbol  ?StandingRotation\@VanillaStates\@\@3V?$ItemStateVariant\@H\@\@B
     */
    MCAPI extern class ItemStateVariant<int> const StandingRotation;
    /**
     * @hash   -1838126372
     * @symbol  ?StoneBrickType\@VanillaStates\@\@3V?$ItemStateVariant\@W4StoneBrickType\@\@\@\@B
     */
    MCAPI extern class ItemStateVariant<enum class StoneBrickType> const StoneBrickType;
    /**
     * @hash   -2035330226
     * @symbol  ?StoneSlabType\@VanillaStates\@\@3V?$ItemStateVariant\@W4StoneSlabType\@\@\@\@B
     */
    MCAPI extern class ItemStateVariant<enum class StoneSlabType> const StoneSlabType;
    /**
     * @hash   1276388482
     * @symbol  ?StoneSlabType2\@VanillaStates\@\@3V?$ItemStateVariant\@W4StoneSlabType2\@\@\@\@B
     */
    MCAPI extern class ItemStateVariant<enum class StoneSlabType2> const StoneSlabType2;
    /**
     * @hash   -521595580
     * @symbol  ?StoneSlabType3\@VanillaStates\@\@3V?$ItemStateVariant\@W4StoneSlabType3\@\@\@\@B
     */
    MCAPI extern class ItemStateVariant<enum class StoneSlabType3> const StoneSlabType3;
    /**
     * @hash   1975387654
     * @symbol  ?StoneSlabType4\@VanillaStates\@\@3V?$ItemStateVariant\@W4StoneSlabType4\@\@\@\@B
     */
    MCAPI extern class ItemStateVariant<enum class StoneSlabType4> const StoneSlabType4;
    /**
     * @hash   -1467308922
     * @symbol  ?StoneType\@VanillaStates\@\@3V?$ItemStateVariant\@W4StoneType\@\@\@\@B
     */
    MCAPI extern class ItemStateVariant<enum class StoneType> const StoneType;
    /**
     * @hash   -606103291
     * @symbol  ?StrippedBit\@VanillaStates\@\@3V?$ItemStateVariant\@_N\@\@B
     */
    MCAPI extern class ItemStateVariant<bool> const StrippedBit;
    /**
     * @hash   1645101272
     * @symbol  ?StructureBlockType\@VanillaStates\@\@3V?$ItemStateVariant\@W4StructureBlockType\@\@\@\@B
     */
    MCAPI extern class ItemStateVariant<enum class StructureBlockType> const StructureBlockType;
    /**
     * @hash   153910702
     * @symbol  ?StructureVoidType\@VanillaStates\@\@3V?$ItemStateVariant\@W4StructureVoidType\@\@\@\@B
     */
    MCAPI extern class ItemStateVariant<enum class StructureVoidType> const StructureVoidType;
    /**
     * @hash   -1680179417
     * @symbol  ?SuspendedBit\@VanillaStates\@\@3V?$ItemStateVariant\@_N\@\@B
     */
    MCAPI extern class ItemStateVariant<bool> const SuspendedBit;
    /**
     * @hash   1730853686
     * @symbol  ?TallGrassType\@VanillaStates\@\@3V?$ItemStateVariant\@W4TallGrassType\@\@\@\@B
     */
    MCAPI extern class ItemStateVariant<enum class TallGrassType> const TallGrassType;
    /**
     * @hash   606626693
     * @symbol  ?ToggleBit\@VanillaStates\@\@3V?$ItemStateVariant\@_N\@\@B
     */
    MCAPI extern class ItemStateVariant<bool> const ToggleBit;
    /**
     * @hash   787660583
     * @symbol  ?TopSlotBit\@VanillaStates\@\@3V?$ItemStateVariant\@_N\@\@B
     */
    MCAPI extern class ItemStateVariant<bool> const TopSlotBit;
    /**
     * @hash   -1021866554
     * @symbol  ?TorchFacingDirection\@VanillaStates\@\@3V?$ItemStateVariant\@W4TorchFacing\@\@\@\@B
     */
    MCAPI extern class ItemStateVariant<enum class TorchFacing> const TorchFacingDirection;
    /**
     * @hash   632667079
     * @symbol  ?TriggeredBit\@VanillaStates\@\@3V?$ItemStateVariant\@_N\@\@B
     */
    MCAPI extern class ItemStateVariant<bool> const TriggeredBit;
    /**
     * @hash   1692304932
     * @symbol  ?TurtleEggCount\@VanillaStates\@\@3V?$ItemStateVariant\@W4EggCount\@\@\@\@B
     */
    MCAPI extern class ItemStateVariant<enum class EggCount> const TurtleEggCount;
    /**
     * @hash   -152469213
     * @symbol  ?TwistingVinesAge\@VanillaStates\@\@3V?$ItemStateVariant\@H\@\@B
     */
    MCAPI extern class ItemStateVariant<int> const TwistingVinesAge;
    /**
     * @hash   -1314899387
     * @symbol  ?UpdateBit\@VanillaStates\@\@3V?$ItemStateVariant\@_N\@\@B
     */
    MCAPI extern class ItemStateVariant<bool> const UpdateBit;
    /**
     * @hash   1893752357
     * @symbol  ?UpperBlockBit\@VanillaStates\@\@3V?$ItemStateVariant\@_N\@\@B
     */
    MCAPI extern class ItemStateVariant<bool> const UpperBlockBit;
    /**
     * @hash   -258045563
     * @symbol  ?UpsideDownBit\@VanillaStates\@\@3V?$ItemStateVariant\@_N\@\@B
     */
    MCAPI extern class ItemStateVariant<bool> const UpsideDownBit;
    /**
     * @hash   -54569799
     * @symbol  ?VineDirectionBits\@VanillaStates\@\@3V?$ItemStateVariant\@H\@\@B
     */
    MCAPI extern class ItemStateVariant<int> const VineDirectionBits;
    /**
     * @hash   -2147385474
     * @symbol  ?WallBlockType\@VanillaStates\@\@3V?$ItemStateVariant\@W4WallBlockType\@\@\@\@B
     */
    MCAPI extern class ItemStateVariant<enum class WallBlockType> const WallBlockType;
    /**
     * @hash   -209202316
     * @symbol  ?WallConnectionTypeEast\@VanillaStates\@\@3V?$ItemStateVariant\@W4WallConnectionType\@\@\@\@B
     */
    MCAPI extern class ItemStateVariant<enum class WallConnectionType> const WallConnectionTypeEast;
    /**
     * @hash   -349797774
     * @symbol  ?WallConnectionTypeNorth\@VanillaStates\@\@3V?$ItemStateVariant\@W4WallConnectionType\@\@\@\@B
     */
    MCAPI extern class ItemStateVariant<enum class WallConnectionType> const WallConnectionTypeNorth;
    /**
     * @hash   -1142507982
     * @symbol  ?WallConnectionTypeSouth\@VanillaStates\@\@3V?$ItemStateVariant\@W4WallConnectionType\@\@\@\@B
     */
    MCAPI extern class ItemStateVariant<enum class WallConnectionType> const WallConnectionTypeSouth;
    /**
     * @hash   827428084
     * @symbol  ?WallConnectionTypeWest\@VanillaStates\@\@3V?$ItemStateVariant\@W4WallConnectionType\@\@\@\@B
     */
    MCAPI extern class ItemStateVariant<enum class WallConnectionType> const WallConnectionTypeWest;
    /**
     * @hash   -109649595
     * @symbol  ?WallPostBit\@VanillaStates\@\@3V?$ItemStateVariant\@_N\@\@B
     */
    MCAPI extern class ItemStateVariant<bool> const WallPostBit;
    /**
     * @hash   806001281
     * @symbol  ?WeepingVinesAge\@VanillaStates\@\@3V?$ItemStateVariant\@H\@\@B
     */
    MCAPI extern class ItemStateVariant<int> const WeepingVinesAge;
    /**
     * @hash   -1909517443
     * @symbol  ?WeirdoDirection\@VanillaStates\@\@3V?$ItemStateVariant\@H\@\@B
     */
    MCAPI extern class ItemStateVariant<int> const WeirdoDirection;
    /**
     * @hash   61116222
     * @symbol  ?WoodType\@VanillaStates\@\@3V?$ItemStateVariant\@W4WoodType\@\@\@\@B
     */
    MCAPI extern class ItemStateVariant<enum class WoodType> const WoodType;
    /**
     * @hash   1567017199
     * @symbol  ?getState\@VanillaStates\@\@YAPEBVItemState\@\@AEBVHashedString\@\@\@Z
     */
    MCAPI class ItemState const * getState(class HashedString const &);
    /**
     * @hash   -1010515608
     * @symbol  ?getState\@VanillaStates\@\@YAPEBVItemState\@\@AEBVHashedString\@\@AEAUCachedItemStateMapPtr\@1\@\@Z
     */
    MCAPI class ItemState const * getState(class HashedString const &, struct VanillaStates::CachedItemStateMapPtr &);
    /**
     * @hash   1890906374
     * @symbol  ?registerStates\@VanillaStates\@\@YAXXZ
     */
    MCAPI void registerStates();
    /**
     * @hash   990959480
     * @symbol  ?unregisterStates\@VanillaStates\@\@YAXXZ
     */
    MCAPI void unregisterStates();

};