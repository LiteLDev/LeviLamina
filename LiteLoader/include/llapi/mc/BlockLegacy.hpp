/**
 * @file  BlockLegacy.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Add include headers & pre-declares
class Block;
class BlockSource;
class ItemStack;

#undef BEFORE_EXTRA

/**
 * @brief MC class BlockLegacy.
 *
 */
class BlockLegacy {

#define AFTER_EXTRA
// Add new members to class
public:
    struct NameInfo;

    LIAPI Block* toBlock(unsigned short tileData);
    LIAPI string getTypeName();
    LIAPI bool applyBoneMeal(class BlockSource* a1, class BlockPos const& a2);
    LIAPI ItemStack* getBlockDrops();
#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKLEGACY
public:
    class BlockLegacy& operator=(class BlockLegacy const &) = delete;
    BlockLegacy(class BlockLegacy const &) = delete;
    BlockLegacy() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~BlockLegacy();
    /**
     * @hash   -651942191
     * @vftbl  1
     * @symbol  ?getStateFromLegacyData\@BlockLegacy\@\@UEBAAEBVBlock\@\@G\@Z
     */
    virtual class Block const & getStateFromLegacyData(unsigned short) const;
    /**
     * @hash   1557962802
     * @vftbl  2
     * @symbol  ?newBlockEntity\@BlockLegacy\@\@UEBA?AV?$shared_ptr\@VBlockActor\@\@\@std\@\@AEBVBlockPos\@\@AEBVBlock\@\@\@Z
     */
    virtual class std::shared_ptr<class BlockActor> newBlockEntity(class BlockPos const &, class Block const &) const;
    /**
     * @hash   2097376226
     * @vftbl  3
     * @symbol  ?getNextBlockPermutation\@BlockLegacy\@\@UEBAPEBVBlock\@\@AEBV2\@\@Z
     */
    virtual class Block const * getNextBlockPermutation(class Block const &) const;
    /**
     * @hash   -1048399784
     * @vftbl  4
     * @symbol  ?hasTag\@BlockLegacy\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@AEBVBlock\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual bool hasTag(class BlockSource &, class BlockPos const &, class Block const &, std::string const &) const;
    /**
     * @hash   -1025008820
     * @vftbl  5
     * @symbol  ?getCollisionShape\@BlockLegacy\@\@UEBA_NAEAVAABB\@\@AEBVBlock\@\@AEBVIConstBlockSource\@\@AEBVBlockPos\@\@V?$optional_ref\@$$CBVGetCollisionShapeInterface\@\@\@\@\@Z
     */
    virtual bool getCollisionShape(class AABB &, class Block const &, class IConstBlockSource const &, class BlockPos const &, class optional_ref<class GetCollisionShapeInterface const>) const;
    /**
     * @hash   989027264
     * @vftbl  6
     * @symbol  ?isObstructingChests\@BlockLegacy\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@AEBVBlock\@\@\@Z
     */
    virtual bool isObstructingChests(class BlockSource &, class BlockPos const &, class Block const &) const;
    /**
     * @hash   -1728846864
     * @vftbl  7
     * @symbol  ?randomlyModifyPosition\@BlockLegacy\@\@UEBA?AVVec3\@\@AEBVBlockPos\@\@AEAH\@Z
     */
    virtual class Vec3 randomlyModifyPosition(class BlockPos const &, int &) const;
    /**
     * @hash   618589323
     * @vftbl  8
     * @symbol  ?randomlyModifyPosition\@BlockLegacy\@\@UEBA?AVVec3\@\@AEBVBlockPos\@\@\@Z
     */
    virtual class Vec3 randomlyModifyPosition(class BlockPos const &) const;
    /**
     * @hash   1375547606
     * @vftbl  9
     * @symbol  ?addAABBs\@BlockLegacy\@\@UEBAXAEBVBlock\@\@AEBVBlockSource\@\@AEBVBlockPos\@\@PEBVAABB\@\@AEAV?$vector\@VAABB\@\@V?$allocator\@VAABB\@\@\@std\@\@\@std\@\@\@Z
     */
    virtual void addAABBs(class Block const &, class BlockSource const &, class BlockPos const &, class AABB const *, std::vector<class AABB> &) const;
    /**
     * @hash   -1892479594
     * @vftbl  10
     * @symbol  ?getAABB\@BlockLegacy\@\@UEBAAEBVAABB\@\@AEBVIConstBlockSource\@\@AEBVBlockPos\@\@AEBVBlock\@\@AEAV2\@_N\@Z
     */
    virtual class AABB const & getAABB(class IConstBlockSource const &, class BlockPos const &, class Block const &, class AABB &, bool) const;
    /**
     * @hash   681085095
     * @vftbl  11
     * @symbol  ?addCollisionShapes\@BlockLegacy\@\@UEBA_NAEBVBlock\@\@AEBVBlockSource\@\@AEBVBlockPos\@\@PEBVAABB\@\@AEAV?$vector\@VAABB\@\@V?$allocator\@VAABB\@\@\@std\@\@\@std\@\@V?$optional_ref\@$$CBVGetCollisionShapeInterface\@\@\@\@\@Z
     */
    virtual bool addCollisionShapes(class Block const &, class BlockSource const &, class BlockPos const &, class AABB const *, std::vector<class AABB> &, class optional_ref<class GetCollisionShapeInterface const>) const;
    /**
     * @hash   -691618077
     * @vftbl  12
     * @symbol  ?updateTallestCollisionShape\@BlockLegacy\@\@UEBA_NAEBVBlock\@\@AEBVBlockSource\@\@AEBVBlockPos\@\@AEBVAABB\@\@V?$optional_ref\@$$CBVGetCollisionShapeInterface\@\@\@\@AEAV5\@AEBVVec3\@\@AEAM\@Z
     */
    virtual bool updateTallestCollisionShape(class Block const &, class BlockSource const &, class BlockPos const &, class AABB const &, class optional_ref<class GetCollisionShapeInterface const>, class AABB &, class Vec3 const &, float &) const;
    /**
     * @hash   -616432791
     * @vftbl  13
     * @symbol  ?getOutline\@BlockLegacy\@\@UEBAAEBVAABB\@\@AEAVBlockSource\@\@AEBVBlockPos\@\@AEAV2\@\@Z
     */
    virtual class AABB const & getOutline(class BlockSource &, class BlockPos const &, class AABB &) const;
    /**
     * @hash   1419327806
     * @vftbl  14
     * @symbol  ?getLiquidClipVolume\@BlockLegacy\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVAABB\@\@\@Z
     */
    virtual bool getLiquidClipVolume(class BlockSource &, class BlockPos const &, class AABB &) const;
    /**
     * @hash   -1495779327
     * @vftbl  15
     * @symbol  ?onProjectileHit\@BlockLegacy\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@AEBVActor\@\@\@Z
     */
    virtual void onProjectileHit(class BlockSource &, class BlockPos const &, class Actor const &) const;
    /**
     * @hash   -570981586
     * @vftbl  16
     * @symbol  ?onLightningHit\@BlockLegacy\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual void onLightningHit(class BlockSource &, class BlockPos const &) const;
    /**
     * @hash   -22969463
     * @vftbl  17
     * @symbol  ?liquidCanFlowIntoFromDirection\@BlockLegacy\@\@UEBA_NEAEBV?$function\@$$A6AAEBVBlock\@\@AEBVBlockPos\@\@\@Z\@std\@\@AEBVBlockPos\@\@\@Z
     */
    virtual bool liquidCanFlowIntoFromDirection(unsigned char, class std::function<class Block const & (class BlockPos const &)> const &, class BlockPos const &) const;
    /**
     * @hash   -1868806365
     * @vftbl  18
     * @symbol  ?isSolid\@BlockLegacy\@\@UEBA_NXZ
     */
    virtual bool isSolid() const;
    /**
     * @vftbl  19
     * @symbol  __unk_vfn_19
     */
    virtual void __unk_vfn_19();
    /**
     * @hash   1424579932
     * @vftbl  20
     * @symbol  ?isStrippable\@BlockLegacy\@\@UEBA_NAEBVBlock\@\@\@Z
     */
    virtual bool isStrippable(class Block const &) const;
    /**
     * @hash   -390713696
     * @vftbl  21
     * @symbol  ?getStrippedBlock\@BlockLegacy\@\@UEBAAEBVBlock\@\@AEBV2\@\@Z
     */
    virtual class Block const & getStrippedBlock(class Block const &) const;
    /**
     * @hash   -2021194443
     * @vftbl  22
     * @symbol  ?canProvideSupport\@BlockLegacy\@\@UEBA_NAEBVBlock\@\@EW4BlockSupportType\@\@\@Z
     */
    virtual bool canProvideSupport(class Block const &, unsigned char, enum class BlockSupportType) const;
    /**
     * @hash   -371618030
     * @vftbl  23
     * @symbol  ?canProvideFullSupport\@BlockLegacy\@\@UEBA_NAEBVBlock\@\@E\@Z
     */
    virtual bool canProvideFullSupport(class Block const &, unsigned char) const;
    /**
     * @hash   -383303603
     * @vftbl  24
     * @symbol  ?canProvideMultifaceSupport\@BlockLegacy\@\@UEBA_NAEBVBlock\@\@E\@Z
     */
    virtual bool canProvideMultifaceSupport(class Block const &, unsigned char) const;
    /**
     * @hash   2005887245
     * @vftbl  25
     * @symbol  ?canConnect\@BlockLegacy\@\@UEBA_NAEBVBlock\@\@E0\@Z
     */
    virtual bool canConnect(class Block const &, unsigned char, class Block const &) const;
    /**
     * @hash   -1124770764
     * @vftbl  26
     * @symbol  ?getConnectedDirections\@BlockLegacy\@\@UEBAXAEBVBlock\@\@AEBVBlockPos\@\@AEBVIConstBlockSource\@\@AEA_N333\@Z
     */
    virtual void getConnectedDirections(class Block const &, class BlockPos const &, class IConstBlockSource const &, bool &, bool &, bool &, bool &) const;
    /**
     * @hash   1157944002
     * @vftbl  27
     * @symbol  ?isAir\@BlockLegacy\@\@UEBA_NXZ
     */
    virtual bool isAir() const;
    /**
     * @hash   -2034895218
     * @vftbl  28
     * @symbol  ?tryGetCopperBehavior\@BlockLegacy\@\@UEBAPEBVCopperBehavior\@\@XZ
     */
    virtual class CopperBehavior const * tryGetCopperBehavior() const;
    /**
     * @vftbl  29
     * @symbol  __unk_vfn_29
     */
    virtual void __unk_vfn_29();
    /**
     * @vftbl  30
     * @symbol  __unk_vfn_30
     */
    virtual void __unk_vfn_30();
    /**
     * @hash   -811955072
     * @vftbl  31
     * @symbol  ?isClimbable\@BlockLegacy\@\@UEBA_NAEBUIActorMovementProxy\@\@\@Z
     */
    virtual bool isClimbable(struct IActorMovementProxy const &) const;
    /**
     * @vftbl  32
     * @symbol  __unk_vfn_32
     */
    virtual void __unk_vfn_32();
    /**
     * @vftbl  33
     * @symbol  __unk_vfn_33
     */
    virtual void __unk_vfn_33();
    /**
     * @vftbl  34
     * @symbol  __unk_vfn_34
     */
    virtual void __unk_vfn_34();
    /**
     * @hash   22657252
     * @vftbl  35
     * @symbol  ?isWaterBlocking\@BlockLegacy\@\@UEBA_NXZ
     */
    virtual bool isWaterBlocking() const;
    /**
     * @vftbl  36
     * @symbol  __unk_vfn_36
     */
    virtual void __unk_vfn_36();
    /**
     * @vftbl  37
     * @symbol  __unk_vfn_37
     */
    virtual void __unk_vfn_37();
    /**
     * @vftbl  38
     * @symbol  __unk_vfn_38
     */
    virtual void __unk_vfn_38();
    /**
     * @vftbl  39
     * @symbol  __unk_vfn_39
     */
    virtual void __unk_vfn_39();
    /**
     * @vftbl  40
     * @symbol  __unk_vfn_40
     */
    virtual void __unk_vfn_40();
    /**
     * @vftbl  41
     * @symbol  __unk_vfn_41
     */
    virtual void __unk_vfn_41();
    /**
     * @vftbl  42
     * @symbol  __unk_vfn_42
     */
    virtual void __unk_vfn_42();
    /**
     * @hash   -1570888326
     * @vftbl  43
     * @symbol  ?isDoubleSlabBlock\@BlockLegacy\@\@UEBA_NXZ
     */
    virtual bool isDoubleSlabBlock() const;
    /**
     * @vftbl  44
     * @symbol  __unk_vfn_44
     */
    virtual void __unk_vfn_44();
    /**
     * @vftbl  45
     * @symbol  __unk_vfn_45
     */
    virtual void __unk_vfn_45();
    /**
     * @vftbl  46
     * @symbol  __unk_vfn_46
     */
    virtual void __unk_vfn_46();
    /**
     * @vftbl  47
     * @symbol  __unk_vfn_47
     */
    virtual void __unk_vfn_47();
    /**
     * @vftbl  48
     * @symbol  __unk_vfn_48
     */
    virtual void __unk_vfn_48();
    /**
     * @vftbl  49
     * @symbol  __unk_vfn_49
     */
    virtual void __unk_vfn_49();
    /**
     * @hash   -1301097540
     * @vftbl  50
     * @symbol  ?canHurtAndBreakItem\@BlockLegacy\@\@UEBA_NXZ
     */
    virtual bool canHurtAndBreakItem() const;
    /**
     * @hash   1899241327
     * @vftbl  51
     * @symbol  ?isSignalSource\@BlockLegacy\@\@UEBA_NXZ
     */
    virtual bool isSignalSource() const;
    /**
     * @hash   197070811
     * @vftbl  52
     * @symbol  ?canBeOriginalSurface\@BlockLegacy\@\@UEBA_NXZ
     */
    virtual bool canBeOriginalSurface() const;
    /**
     * @hash   655794201
     * @vftbl  53
     * @symbol  ?canBeAscendedByJumping\@BlockLegacy\@\@UEBA_NAEBVActor\@\@AEBVBlockPos\@\@\@Z
     */
    virtual bool canBeAscendedByJumping(class Actor const &, class BlockPos const &) const;
    /**
     * @vftbl  54
     * @symbol  __unk_vfn_54
     */
    virtual void __unk_vfn_54();
    /**
     * @hash   -2116431876
     * @vftbl  55
     * @symbol  ?isValidAuxValue\@BlockLegacy\@\@UEBA_NH\@Z
     */
    virtual bool isValidAuxValue(int) const;
    /**
     * @hash   -1339077388
     * @vftbl  56
     * @symbol  ?canFillAtPos\@BlockLegacy\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@AEBVBlock\@\@\@Z
     */
    virtual bool canFillAtPos(class BlockSource &, class BlockPos const &, class Block const &) const;
    /**
     * @hash   1712892825
     * @vftbl  57
     * @symbol  ?sanitizeFillBlock\@BlockLegacy\@\@UEBAAEBVBlock\@\@AEAVBlockSource\@\@AEBVBlockPos\@\@AEBV2\@\@Z
     */
    virtual class Block const & sanitizeFillBlock(class BlockSource &, class BlockPos const &, class Block const &) const;
    /**
     * @hash   915704585
     * @vftbl  58
     * @symbol  ?onFillBlock\@BlockLegacy\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@AEBVBlock\@\@\@Z
     */
    virtual void onFillBlock(class BlockSource &, class BlockPos const &, class Block const &) const;
    /**
     * @hash   931365803
     * @vftbl  59
     * @symbol  ?getDirectSignal\@BlockLegacy\@\@UEBAHAEAVBlockSource\@\@AEBVBlockPos\@\@H\@Z
     */
    virtual int getDirectSignal(class BlockSource &, class BlockPos const &, int) const;
    /**
     * @vftbl  60
     * @symbol  __unk_vfn_60
     */
    virtual void __unk_vfn_60();
    /**
     * @vftbl  61
     * @symbol  __unk_vfn_61
     */
    virtual void __unk_vfn_61();
    /**
     * @hash   1026166834
     * @vftbl  62
     * @symbol  ?canContainLiquid\@BlockLegacy\@\@UEBA_NXZ
     */
    virtual bool canContainLiquid() const;
    /**
     * @hash   -492942540
     * @vftbl  63
     * @symbol  ?getRequiredMedium\@BlockLegacy\@\@UEBA?AV?$optional\@VHashedString\@\@\@std\@\@XZ
     */
    virtual class std::optional<class HashedString> getRequiredMedium() const;
    /**
     * @hash   1687758111
     * @vftbl  64
     * @symbol  ?shouldConnectToRedstone\@BlockLegacy\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@H\@Z
     */
    virtual bool shouldConnectToRedstone(class BlockSource &, class BlockPos const &, int) const;
    /**
     * @hash   1963531681
     * @vftbl  65
     * @symbol  ?handlePrecipitation\@BlockLegacy\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@MM\@Z
     */
    virtual void handlePrecipitation(class BlockSource &, class BlockPos const &, float, float) const;
    /**
     * @hash   -289305485
     * @vftbl  66
     * @symbol  ?canBeUsedInCommands\@BlockLegacy\@\@UEBA_NAEBVBaseGameVersion\@\@\@Z
     */
    virtual bool canBeUsedInCommands(class BaseGameVersion const &) const;
    /**
     * @hash   -818990426
     * @vftbl  67
     * @symbol  ?getThickness\@BlockLegacy\@\@UEBAMXZ
     */
    virtual float getThickness() const;
    /**
     * @hash   -1236969535
     * @vftbl  68
     * @symbol  ?getFlexibility\@BlockLegacy\@\@UEBAMAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual float getFlexibility(class BlockSource &, class BlockPos const &) const;
    /**
     * @hash   1021399082
     * @vftbl  69
     * @symbol  ?checkIsPathable\@BlockLegacy\@\@UEBA_NAEAVActor\@\@AEBVBlockPos\@\@1\@Z
     */
    virtual bool checkIsPathable(class Actor &, class BlockPos const &, class BlockPos const &) const;
    /**
     * @hash   -735438263
     * @vftbl  70
     * @symbol  ?shouldDispense\@BlockLegacy\@\@UEBA_NAEAVBlockSource\@\@AEAVContainer\@\@\@Z
     */
    virtual bool shouldDispense(class BlockSource &, class Container &) const;
    /**
     * @hash   112034386
     * @vftbl  71
     * @symbol  ?dispense\@BlockLegacy\@\@UEBA_NAEAVBlockSource\@\@AEAVContainer\@\@HAEBVVec3\@\@E\@Z
     */
    virtual bool dispense(class BlockSource &, class Container &, int, class Vec3 const &, unsigned char) const;
    /**
     * @hash   -1519104933
     * @vftbl  72
     * @symbol  ?transformOnFall\@BlockLegacy\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@PEAVActor\@\@M\@Z
     */
    virtual void transformOnFall(class BlockSource &, class BlockPos const &, class Actor *, float) const;
    /**
     * @hash   1520425663
     * @vftbl  73
     * @symbol  ?onRedstoneUpdate\@BlockLegacy\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@H_N\@Z
     */
    virtual void onRedstoneUpdate(class BlockSource &, class BlockPos const &, int, bool) const;
    /**
     * @hash   -1433885542
     * @vftbl  74
     * @symbol  ?onMove\@BlockLegacy\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@1\@Z
     */
    virtual void onMove(class BlockSource &, class BlockPos const &, class BlockPos const &) const;
    /**
     * @vftbl  75
     * @symbol  __unk_vfn_75
     */
    virtual void __unk_vfn_75();
    /**
     * @hash   1390694185
     * @vftbl  76
     * @symbol  ?movedByPiston\@BlockLegacy\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual void movedByPiston(class BlockSource &, class BlockPos const &) const;
    /**
     * @hash   -1297316428
     * @vftbl  77
     * @symbol  ?onStructureBlockPlace\@BlockLegacy\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual void onStructureBlockPlace(class BlockSource &, class BlockPos const &) const;
    /**
     * @hash   -1965457658
     * @vftbl  78
     * @symbol  ?onStructureNeighborBlockPlace\@BlockLegacy\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual void onStructureNeighborBlockPlace(class BlockSource &, class BlockPos const &) const;
    /**
     * @hash   847733938
     * @vftbl  79
     * @symbol  ?setupRedstoneComponent\@BlockLegacy\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual void setupRedstoneComponent(class BlockSource &, class BlockPos const &) const;
    /**
     * @hash   -1076256669
     * @vftbl  80
     * @symbol  ?getRedstoneProperty\@BlockLegacy\@\@UEBA?AW4BlockProperty\@\@AEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual enum class BlockProperty getRedstoneProperty(class BlockSource &, class BlockPos const &) const;
    /**
     * @hash   -433720142
     * @vftbl  81
     * @symbol  ?updateEntityAfterFallOn\@BlockLegacy\@\@UEBAXAEBVBlockPos\@\@AEAUUpdateEntityAfterFallOnInterface\@\@\@Z
     */
    virtual void updateEntityAfterFallOn(class BlockPos const &, struct UpdateEntityAfterFallOnInterface &) const;
    /**
     * @vftbl  82
     * @symbol  __unk_vfn_82
     */
    virtual void __unk_vfn_82();
    /**
     * @hash   -843515147
     * @vftbl  83
     * @symbol  ?isFilteredOut\@BlockLegacy\@\@UEBA_NW4BlockRenderLayer\@\@\@Z
     */
    virtual bool isFilteredOut(enum class BlockRenderLayer) const;
    /**
     * @hash   -392278188
     * @vftbl  84
     * @symbol  ?isPreservingMediumWhenPlaced\@BlockLegacy\@\@UEBA_NPEBV1\@\@Z
     */
    virtual bool isPreservingMediumWhenPlaced(class BlockLegacy const *) const;
    /**
     * @hash   -1186858916
     * @vftbl  85
     * @symbol  ?ignoreEntitiesOnPistonMove\@BlockLegacy\@\@UEBA_NAEBVBlock\@\@\@Z
     */
    virtual bool ignoreEntitiesOnPistonMove(class Block const &) const;
    /**
     * @hash   1738625920
     * @vftbl  86
     * @symbol  ?onFertilized\@BlockLegacy\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@PEAVActor\@\@W4FertilizerType\@\@\@Z
     */
    virtual bool onFertilized(class BlockSource &, class BlockPos const &, class Actor *, enum class FertilizerType) const;
    /**
     * @hash   1533091927
     * @vftbl  87
     * @symbol  ?mayConsumeFertilizer\@BlockLegacy\@\@UEBA_NAEAVBlockSource\@\@\@Z
     */
    virtual bool mayConsumeFertilizer(class BlockSource &) const;
    /**
     * @hash   575227819
     * @vftbl  88
     * @symbol  ?canBeFertilized\@BlockLegacy\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@AEBVBlock\@\@\@Z
     */
    virtual bool canBeFertilized(class BlockSource &, class BlockPos const &, class Block const &) const;
    /**
     * @hash   864734200
     * @vftbl  89
     * @symbol  ?mayPick\@BlockLegacy\@\@UEBA_NXZ
     */
    virtual bool mayPick() const;
    /**
     * @hash   -2050294137
     * @vftbl  90
     * @symbol  ?mayPick\@BlockLegacy\@\@UEBA_NAEBVBlockSource\@\@AEBVBlock\@\@_N\@Z
     */
    virtual bool mayPick(class BlockSource const &, class Block const &, bool) const;
    /**
     * @hash   2091002913
     * @vftbl  91
     * @symbol  ?mayPlace\@BlockLegacy\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@E\@Z
     */
    virtual bool mayPlace(class BlockSource &, class BlockPos const &, unsigned char) const;
    /**
     * @hash   -984353478
     * @vftbl  92
     * @symbol  ?mayPlace\@BlockLegacy\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual bool mayPlace(class BlockSource &, class BlockPos const &) const;
    /**
     * @hash   1831318777
     * @vftbl  93
     * @symbol  ?mayPlaceOn\@BlockLegacy\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual bool mayPlaceOn(class BlockSource &, class BlockPos const &) const;
    /**
     * @hash   1106073857
     * @vftbl  94
     * @symbol  ?tryToPlace\@BlockLegacy\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@AEBVBlock\@\@PEBUActorBlockSyncMessage\@\@\@Z
     */
    virtual bool tryToPlace(class BlockSource &, class BlockPos const &, class Block const &, struct ActorBlockSyncMessage const *) const;
    /**
     * @hash   -1981500365
     * @vftbl  95
     * @symbol  ?tryToTill\@BlockLegacy\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVActor\@\@AEAVItemStack\@\@\@Z
     */
    virtual bool tryToTill(class BlockSource &, class BlockPos const &, class Actor &, class ItemStack &) const;
    /**
     * @hash   -1463333547
     * @vftbl  96
     * @symbol  ?breaksFallingBlocks\@BlockLegacy\@\@UEBA_NAEBVBlock\@\@VBaseGameVersion\@\@\@Z
     */
    virtual bool breaksFallingBlocks(class Block const &, class BaseGameVersion) const;
    /**
     * @hash   -1410808521
     * @vftbl  97
     * @symbol  ?destroy\@BlockLegacy\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@AEBVBlock\@\@PEAVActor\@\@\@Z
     */
    virtual void destroy(class BlockSource &, class BlockPos const &, class Block const &, class Actor *) const;
    /**
     * @hash   -2084289430
     * @vftbl  98
     * @symbol  ?getIgnoresDestroyPermissions\@BlockLegacy\@\@UEBA_NAEAVActor\@\@AEBVBlockPos\@\@\@Z
     */
    virtual bool getIgnoresDestroyPermissions(class Actor &, class BlockPos const &) const;
    /**
     * @hash   957106376
     * @vftbl  99
     * @symbol  ?neighborChanged\@BlockLegacy\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@1\@Z
     */
    virtual void neighborChanged(class BlockSource &, class BlockPos const &, class BlockPos const &) const;
    /**
     * @hash   359578723
     * @vftbl  100
     * @symbol  ?getSecondPart\@BlockLegacy\@\@UEBA_NAEBVBlockSource\@\@AEBVBlockPos\@\@AEAV3\@\@Z
     */
    virtual bool getSecondPart(class BlockSource const &, class BlockPos const &, class BlockPos &) const;
    /**
     * @hash   1067695306
     * @vftbl  101
     * @symbol  ?playerWillDestroy\@BlockLegacy\@\@UEBA_NAEAVPlayer\@\@AEBVBlockPos\@\@AEBVBlock\@\@\@Z
     */
    virtual bool playerWillDestroy(class Player &, class BlockPos const &, class Block const &) const;
    /**
     * @vftbl  102
     * @symbol  ?spawnResources\@BlockLegacy\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@AEBVBlock\@\@AEAVRandomize\@\@AEBUResourceDropsContext\@\@\@Z
     */
    virtual void spawnResources(class BlockSource &, class BlockPos const &, class Block const &, class Randomize &, struct ResourceDropsContext const &) const;
    /**
     * @hash   -1444989084
     * @vftbl  103
     * @symbol  ?asItemInstance\@BlockLegacy\@\@UEBA?AVItemInstance\@\@AEBVBlock\@\@PEBVBlockActor\@\@\@Z
     */
    virtual class ItemInstance asItemInstance(class Block const &, class BlockActor const *) const;
    /**
     * @vftbl  104
     * @symbol  ?trySpawnResourcesOnExplosion\@BlockLegacy\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@AEBVBlock\@\@AEAVRandomize\@\@M\@Z
     */
    virtual void trySpawnResourcesOnExplosion(class BlockSource &, class BlockPos const &, class Block const &, class Randomize &, float) const;
    /**
     * @vftbl  105
     * @symbol  __unk_vfn_105
     */
    virtual void __unk_vfn_105();
    /**
     * @hash   1440689925
     * @vftbl  106
     * @symbol  ?getPlacementBlock\@BlockLegacy\@\@UEBAAEBVBlock\@\@AEAVActor\@\@AEBVBlockPos\@\@EAEBVVec3\@\@H\@Z
     */
    virtual class Block const & getPlacementBlock(class Actor &, class BlockPos const &, unsigned char, class Vec3 const &, int) const;
    /**
     * @hash   -1551958328
     * @vftbl  107
     * @symbol  ?calcVariant\@BlockLegacy\@\@UEBAHAEAVBlockSource\@\@AEBVBlockPos\@\@AEBVColor\@mce\@\@\@Z
     */
    virtual int calcVariant(class BlockSource &, class BlockPos const &, class mce::Color const &) const;
    /**
     * @hash   -1709393958
     * @vftbl  108
     * @symbol  ?isAttachedTo\@BlockLegacy\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@AEAV3\@\@Z
     */
    virtual bool isAttachedTo(class BlockSource &, class BlockPos const &, class BlockPos &) const;
    /**
     * @hash   -1020814795
     * @vftbl  109
     * @symbol  ?attack\@BlockLegacy\@\@UEBA_NPEAVPlayer\@\@AEBVBlockPos\@\@\@Z
     */
    virtual bool attack(class Player *, class BlockPos const &) const;
    /**
     * @hash   203923439
     * @vftbl  110
     * @symbol  ?handleEntityInside\@BlockLegacy\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@PEAVActor\@\@AEAVVec3\@\@\@Z
     */
    virtual void handleEntityInside(class BlockSource &, class BlockPos const &, class Actor *, class Vec3 &) const;
    /**
     * @hash   315627750
     * @vftbl  111
     * @symbol  ?shouldTriggerOnStandOn\@BlockLegacy\@\@UEBA_NAEAVActor\@\@AEBVBlockPos\@\@\@Z
     */
    virtual bool shouldTriggerOnStandOn(class Actor &, class BlockPos const &) const;
    /**
     * @hash   454434825
     * @vftbl  112
     * @symbol  ?shouldTriggerEntityInside\@BlockLegacy\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVActor\@\@\@Z
     */
    virtual bool shouldTriggerEntityInside(class BlockSource &, class BlockPos const &, class Actor &) const;
    /**
     * @hash   -1942152816
     * @vftbl  113
     * @symbol  ?entityInside\@BlockLegacy\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVActor\@\@\@Z
     */
    virtual void entityInside(class BlockSource &, class BlockPos const &, class Actor &) const;
    /**
     * @hash   -454533680
     * @vftbl  114
     * @symbol  ?canBeBuiltOver\@BlockLegacy\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@AEBVBlockItem\@\@\@Z
     */
    virtual bool canBeBuiltOver(class BlockSource &, class BlockPos const &, class BlockItem const &) const;
    /**
     * @hash   48399207
     * @vftbl  115
     * @symbol  ?canBeBuiltOver\@BlockLegacy\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual bool canBeBuiltOver(class BlockSource &, class BlockPos const &) const;
    /**
     * @hash   870072936
     * @vftbl  116
     * @symbol  ?triggerEvent\@BlockLegacy\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@HH\@Z
     */
    virtual void triggerEvent(class BlockSource &, class BlockPos const &, int, int) const;
    /**
     * @hash   -144110767
     * @vftbl  117
     * @symbol  ?executeEvent\@BlockLegacy\@\@UEBAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAVRenderParams\@\@\@Z
     */
    virtual void executeEvent(std::string const &, class RenderParams &) const;
    /**
     * @hash   173610426
     * @vftbl  118
     * @symbol  ?executeEvent\@BlockLegacy\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@AEBVBlock\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAVActor\@\@\@Z
     */
    virtual void executeEvent(class BlockSource &, class BlockPos const &, class Block const &, std::string const &, class Actor &) const;
    /**
     * @hash   -1911377255
     * @vftbl  119
     * @symbol  ?executeTrigger\@BlockLegacy\@\@UEBA_NAEBVDefinitionTrigger\@\@AEAVRenderParams\@\@\@Z
     */
    virtual bool executeTrigger(class DefinitionTrigger const &, class RenderParams &) const;
    /**
     * @hash   1226889714
     * @vftbl  120
     * @symbol  ?forceExecuteTrigger\@BlockLegacy\@\@UEBAXAEBVDefinitionTrigger\@\@AEAVRenderParams\@\@\@Z
     */
    virtual void forceExecuteTrigger(class DefinitionTrigger const &, class RenderParams &) const;
    /**
     * @hash   -947619995
     * @vftbl  121
     * @symbol  ?getMobToSpawn\@BlockLegacy\@\@UEBAPEBVMobSpawnerData\@\@AEBVSpawnConditions\@\@AEAVBlockSource\@\@\@Z
     */
    virtual class MobSpawnerData const * getMobToSpawn(class SpawnConditions const &, class BlockSource &) const;
    /**
     * @hash   -1004948831
     * @vftbl  122
     * @symbol  ?shouldStopFalling\@BlockLegacy\@\@UEBA_NAEAVActor\@\@\@Z
     */
    virtual bool shouldStopFalling(class Actor &) const;
    /**
     * @vftbl  123
     * @symbol  __unk_vfn_123
     */
    virtual void __unk_vfn_123();
    /**
     * @hash   -155593660
     * @vftbl  124
     * @symbol  ?calcGroundFriction\@BlockLegacy\@\@UEBAMAEBUIMobMovementProxy\@\@AEBVBlockPos\@\@\@Z
     */
    virtual float calcGroundFriction(struct IMobMovementProxy const &, class BlockPos const &) const;
    /**
     * @vftbl  125
     * @symbol  __unk_vfn_125
     */
    virtual void __unk_vfn_125();
    /**
     * @vftbl  126
     * @symbol  __unk_vfn_126
     */
    virtual void __unk_vfn_126();
    /**
     * @hash   -1832896752
     * @vftbl  127
     * @symbol  ?getComparatorSignal\@BlockLegacy\@\@UEBAHAEAVBlockSource\@\@AEBVBlockPos\@\@AEBVBlock\@\@E\@Z
     */
    virtual int getComparatorSignal(class BlockSource &, class BlockPos const &, class Block const &, unsigned char) const;
    /**
     * @hash   -1835171015
     * @vftbl  128
     * @symbol  ?canSlide\@BlockLegacy\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual bool canSlide(class BlockSource &, class BlockPos const &) const;
    /**
     * @hash   1528550729
     * @vftbl  129
     * @symbol  ?canSpawnAt\@BlockLegacy\@\@UEBA_NAEBVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual bool canSpawnAt(class BlockSource const &, class BlockPos const &) const;
    /**
     * @hash   780557290
     * @vftbl  130
     * @symbol  ?notifySpawnedAt\@BlockLegacy\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual void notifySpawnedAt(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  131
     * @symbol  __unk_vfn_131
     */
    virtual void __unk_vfn_131();
    /**
     * @hash   -1488451806
     * @vftbl  132
     * @symbol  ?getIconYOffset\@BlockLegacy\@\@UEBAHXZ
     */
    virtual int getIconYOffset() const;
    /**
     * @hash   -2142197779
     * @vftbl  133
     * @symbol  ?buildDescriptionId\@BlockLegacy\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVBlock\@\@\@Z
     */
    virtual std::string buildDescriptionId(class Block const &) const;
    /**
     * @hash   -2079379730
     * @vftbl  134
     * @symbol  ?isAuxValueRelevantForPicking\@BlockLegacy\@\@UEBA_NXZ
     */
    virtual bool isAuxValueRelevantForPicking() const;
    /**
     * @hash   -791953160
     * @vftbl  135
     * @symbol  ?getColor\@BlockLegacy\@\@UEBAHAEBVBlock\@\@\@Z
     */
    virtual int getColor(class Block const &) const;
    /**
     * @hash   -1670626110
     * @vftbl  136
     * @symbol  ?getColor\@BlockLegacy\@\@UEBAHAEAVBlockSource\@\@AEBVBlockPos\@\@AEBVBlock\@\@\@Z
     */
    virtual int getColor(class BlockSource &, class BlockPos const &, class Block const &) const;
    /**
     * @hash   -1208413473
     * @vftbl  137
     * @symbol  ?getColorAtPos\@BlockLegacy\@\@UEBAHAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual int getColorAtPos(class BlockSource &, class BlockPos const &) const;
    /**
     * @hash   1714047117
     * @vftbl  138
     * @symbol  ?getColorForParticle\@BlockLegacy\@\@UEBAHAEAVBlockSource\@\@AEBVBlockPos\@\@AEBVBlock\@\@\@Z
     */
    virtual int getColorForParticle(class BlockSource &, class BlockPos const &, class Block const &) const;
    /**
     * @hash   -1454148185
     * @vftbl  139
     * @symbol  ?isSeasonTinted\@BlockLegacy\@\@UEBA_NAEBVBlock\@\@AEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual bool isSeasonTinted(class Block const &, class BlockSource &, class BlockPos const &) const;
    /**
     * @hash   823738338
     * @vftbl  140
     * @symbol  ?onGraphicsModeChanged\@BlockLegacy\@\@UEAAXAEBUBlockGraphicsModeChangeContext\@\@\@Z
     */
    virtual void onGraphicsModeChanged(struct BlockGraphicsModeChangeContext const &);
    /**
     * @hash   9396522
     * @vftbl  141
     * @symbol  ?getShadeBrightness\@BlockLegacy\@\@UEBAMAEBVBlock\@\@\@Z
     */
    virtual float getShadeBrightness(class Block const &) const;
    /**
     * @hash   1536824072
     * @vftbl  142
     * @symbol  ?getVisualShapeInWorld\@BlockLegacy\@\@UEBAAEBVAABB\@\@AEBVBlock\@\@AEBVIConstBlockSource\@\@AEBVBlockPos\@\@AEAV2\@_N\@Z
     */
    virtual class AABB const & getVisualShapeInWorld(class Block const &, class IConstBlockSource const &, class BlockPos const &, class AABB &, bool) const;
    /**
     * @hash   -809738864
     * @vftbl  143
     * @symbol  ?getVisualShape\@BlockLegacy\@\@UEBAAEBVAABB\@\@AEBVBlock\@\@AEAV2\@_N\@Z
     */
    virtual class AABB const & getVisualShape(class Block const &, class AABB &, bool) const;
    /**
     * @hash   -145220666
     * @vftbl  144
     * @symbol  ?getUIShape\@BlockLegacy\@\@UEBAAEBVAABB\@\@AEBVBlock\@\@AEAV2\@\@Z
     */
    virtual class AABB const & getUIShape(class Block const &, class AABB &) const;
    /**
     * @hash   -1111789673
     * @vftbl  145
     * @symbol  ?telemetryVariant\@BlockLegacy\@\@UEBAHAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual int telemetryVariant(class BlockSource &, class BlockPos const &) const;
    /**
     * @hash   -281738394
     * @vftbl  146
     * @symbol  ?getVariant\@BlockLegacy\@\@UEBAHAEBVBlock\@\@\@Z
     */
    virtual int getVariant(class Block const &) const;
    /**
     * @hash   -1414085771
     * @vftbl  147
     * @symbol  ?canSpawnOn\@BlockLegacy\@\@UEBA_NPEAVActor\@\@\@Z
     */
    virtual bool canSpawnOn(class Actor *) const;
    /**
     * @hash   -272357933
     * @vftbl  148
     * @symbol  ?getRenderBlock\@BlockLegacy\@\@UEBAAEBVBlock\@\@XZ
     */
    virtual class Block const & getRenderBlock() const;
    /**
     * @hash   765585480
     * @vftbl  149
     * @symbol  ?getMappedFace\@BlockLegacy\@\@UEBAEEAEBVBlock\@\@\@Z
     */
    virtual unsigned char getMappedFace(unsigned char, class Block const &) const;
    /**
     * @hash   1240583644
     * @vftbl  150
     * @symbol  ?getFaceFlip\@BlockLegacy\@\@UEBA?AW4Flip\@\@EAEBVBlock\@\@\@Z
     */
    virtual enum class Flip getFaceFlip(unsigned char, class Block const &) const;
    /**
     * @hash   2120671003
     * @vftbl  151
     * @symbol  ?animateTick\@BlockLegacy\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    virtual void animateTick(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @hash   134379413
     * @vftbl  152
     * @symbol  ?init\@BlockLegacy\@\@UEAAAEAV1\@XZ
     */
    virtual class BlockLegacy & init();
    /**
     * @hash   1769484341
     * @vftbl  153
     * @symbol  ?getLightEmission\@BlockLegacy\@\@MEBA?AUBrightness\@\@AEBVBlock\@\@\@Z
     */
    virtual struct Brightness getLightEmission(class Block const &) const;
    /**
     * @hash   1999455334
     * @vftbl  154
     * @symbol  ?addState\@BlockLegacy\@\@UEAAAEAV1\@AEBVItemState\@\@\@Z
     */
    virtual class BlockLegacy & addState(class ItemState const &);
    /**
     * @hash   -1092443922
     * @vftbl  155
     * @symbol  ?addState\@BlockLegacy\@\@UEAAAEAV1\@AEBVItemState\@\@_K\@Z
     */
    virtual class BlockLegacy & addState(class ItemState const &, unsigned __int64);
    /**
     * @vftbl  156
     * @symbol  __unk_vfn_156
     */
    virtual void __unk_vfn_156();
    /**
     * @hash   -1367088379
     * @vftbl  157
     * @symbol  ?tryLegacyUpgrade\@BlockLegacy\@\@UEBAPEBVBlock\@\@G\@Z
     */
    virtual class Block const * tryLegacyUpgrade(unsigned short) const;
    /**
     * @hash   1930942120
     * @vftbl  158
     * @symbol  ?dealsContactDamage\@BlockLegacy\@\@UEBA_NAEBVActor\@\@AEBVBlock\@\@_N\@Z
     */
    virtual bool dealsContactDamage(class Actor const &, class Block const &, bool) const;
    /**
     * @hash   -2016779195
     * @vftbl  159
     * @symbol  ?tryGetInfested\@BlockLegacy\@\@UEBAPEBVBlock\@\@AEBV2\@\@Z
     */
    virtual class Block const * tryGetInfested(class Block const &) const;
    /**
     * @hash   1278587372
     * @vftbl  160
     * @symbol  ?tryGetUninfested\@BlockLegacy\@\@UEBAPEBVBlock\@\@AEBV2\@\@Z
     */
    virtual class Block const * tryGetUninfested(class Block const &) const;
    /**
     * @hash   -34671382
     * @vftbl  161
     * @symbol  ?_addHardCodedBlockComponents\@BlockLegacy\@\@UEAAXXZ
     */
    virtual void _addHardCodedBlockComponents();
    /**
     * @hash   -1476192446
     * @vftbl  162
     * @symbol  ?onRemove\@BlockLegacy\@\@MEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual void onRemove(class BlockSource &, class BlockPos const &) const;
    /**
     * @hash   2053500848
     * @vftbl  163
     * @symbol  ?onExploded\@BlockLegacy\@\@MEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@PEAVActor\@\@\@Z
     */
    virtual void onExploded(class BlockSource &, class BlockPos const &, class Actor *) const;
    /**
     * @hash   -866643527
     * @vftbl  164
     * @symbol  ?onStandOn\@BlockLegacy\@\@MEBAXAEAVEntityContext\@\@AEBVBlockPos\@\@\@Z
     */
    virtual void onStandOn(class EntityContext &, class BlockPos const &) const;
    /**
     * @vftbl  165
     * @symbol  __unk_vfn_165
     */
    virtual void __unk_vfn_165();
    /**
     * @vftbl  166
     * @symbol  __unk_vfn_166
     */
    virtual void __unk_vfn_166();
    /**
     * @vftbl  167
     * @symbol  __unk_vfn_167
     */
    virtual void __unk_vfn_167();
    /**
     * @hash   -1259327833
     * @vftbl  168
     * @symbol  ?onPlace\@BlockLegacy\@\@MEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual void onPlace(class BlockSource &, class BlockPos const &) const;
    /**
     * @hash   641344979
     * @vftbl  169
     * @symbol  ?onFallOn\@BlockLegacy\@\@MEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVActor\@\@M\@Z
     */
    virtual void onFallOn(class BlockSource &, class BlockPos const &, class Actor &, float) const;
    /**
     * @vftbl  170
     * @symbol  __unk_vfn_170
     */
    virtual void __unk_vfn_170();
    /**
     * @hash   1488913331
     * @vftbl  171
     * @symbol  ?tick\@BlockLegacy\@\@MEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    virtual void tick(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @hash   -1769061808
     * @vftbl  172
     * @symbol  ?randomTick\@BlockLegacy\@\@MEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    virtual void randomTick(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @hash   1133135406
     * @vftbl  173
     * @symbol  ?shouldRandomTick\@BlockLegacy\@\@MEBA_NXZ
     */
    virtual bool shouldRandomTick() const;
    /**
     * @vftbl  174
     * @symbol  __unk_vfn_174
     */
    virtual void __unk_vfn_174();
    /**
     * @hash   44037007
     * @vftbl  175
     * @symbol  ?clip\@BlockLegacy\@\@MEBA?AVHitResult\@\@AEBVBlockSource\@\@AEBVBlockPos\@\@AEBVVec3\@\@2_N\@Z
     */
    virtual class HitResult clip(class BlockSource const &, class BlockPos const &, class Vec3 const &, class Vec3 const &, bool) const;
    /**
     * @vftbl  176
     * @symbol  ?use\@BlockLegacy\@\@MEBA_NAEAVPlayer\@\@AEBVBlockPos\@\@EV?$optional\@VVec3\@\@\@std\@\@\@Z
     */
    virtual bool use(class Player &, class BlockPos const &, unsigned char, class std::optional<class Vec3>) const;
    /**
     * @hash   -313067230
     * @vftbl  177
     * @symbol  ?use\@BlockLegacy\@\@MEBA_NAEAVPlayer\@\@AEBVBlockPos\@\@E\@Z
     */
    virtual bool use(class Player &, class BlockPos const &, unsigned char) const;
    /**
     * @hash   -903419709
     * @vftbl  178
     * @symbol  ?canSurvive\@BlockLegacy\@\@MEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual bool canSurvive(class BlockSource &, class BlockPos const &) const;
    /**
     * @hash   -1374258646
     * @vftbl  179
     * @symbol  ?getRenderLayer\@BlockLegacy\@\@MEBA?AW4BlockRenderLayer\@\@XZ
     */
    virtual enum class BlockRenderLayer getRenderLayer() const;
    /**
     * @hash   -1222958506
     * @vftbl  180
     * @symbol  ?getRenderLayer\@BlockLegacy\@\@MEBA?AW4BlockRenderLayer\@\@AEBVBlock\@\@AEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual enum class BlockRenderLayer getRenderLayer(class Block const &, class BlockSource &, class BlockPos const &) const;
    /**
     * @hash   -459845248
     * @vftbl  181
     * @symbol  ?getExtraRenderLayers\@BlockLegacy\@\@MEBAHXZ
     */
    virtual int getExtraRenderLayers() const;
    /**
     * @vftbl  182
     * @symbol  ?getExplosionResistance\@BlockLegacy\@\@MEBAMXZ
     */
    virtual float getExplosionResistance() const;
    /**
     * @hash   2023114318
     * @vftbl  183
     * @symbol  ?getEmissiveBrightness\@BlockLegacy\@\@MEBA?AUBrightness\@\@AEBVBlock\@\@\@Z
     */
    virtual struct Brightness getEmissiveBrightness(class Block const &) const;
    /**
     * @hash   -2052431295
     * @vftbl  184
     * @symbol  ?getMapColor\@BlockLegacy\@\@MEBA?AVColor\@mce\@\@AEAVBlockSource\@\@AEBVBlockPos\@\@AEBVBlock\@\@\@Z
     */
    virtual class mce::Color getMapColor(class BlockSource &, class BlockPos const &, class Block const &) const;
    /**
     * @vftbl  185
     * @symbol  __unk_vfn_185
     */
    virtual void __unk_vfn_185();
    /**
     * @hash   1394166449
     * @vftbl  186
     * @symbol  ?playerDestroy\@BlockLegacy\@\@MEBAXAEAVPlayer\@\@AEBVBlockPos\@\@AEBVBlock\@\@\@Z
     */
    virtual void playerDestroy(class Player &, class BlockPos const &, class Block const &) const;
    /**
     * @hash   1616711675
     * @vftbl  187
     * @symbol  ?getResourceItem\@BlockLegacy\@\@MEBA?AVItemInstance\@\@AEAVRandomize\@\@AEBVBlock\@\@H\@Z
     */
    virtual class ItemInstance getResourceItem(class Randomize &, class Block const &, int) const;
    /**
     * @hash   1674995267
     * @vftbl  188
     * @symbol  ?getResourceCount\@BlockLegacy\@\@MEBAHAEAVRandomize\@\@AEBVBlock\@\@H\@Z
     */
    virtual int getResourceCount(class Randomize &, class Block const &, int) const;
    /**
     * @vftbl  189
     * @symbol  ?getSilkTouchItemInstance\@BlockLegacy\@\@MEBA?AVItemInstance\@\@AEBVBlock\@\@\@Z
     */
    virtual class ItemInstance getSilkTouchItemInstance(class Block const &) const;
    /**
     * @hash   463408122
     * @vftbl  190
     * @symbol  ?_executeEvent\@BlockLegacy\@\@EEBAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV?$vector\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@$$CBV12\@\@std\@\@V?$allocator\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@$$CBV12\@\@std\@\@\@2\@\@3\@AEAVRenderParams\@\@\@Z
     */
    virtual void _executeEvent(std::string const &, std::vector<struct std::pair<std::string const, std::string const>> &, class RenderParams &) const;
    /**
     * @hash   1085337018
     * @vftbl  191
     * @symbol  ?_executeTrigger\@BlockLegacy\@\@EEBA_NAEBVDefinitionTrigger\@\@AEAV?$vector\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@$$CBV12\@\@std\@\@V?$allocator\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@$$CBV12\@\@std\@\@\@2\@\@std\@\@AEAVRenderParams\@\@\@Z
     */
    virtual bool _executeTrigger(class DefinitionTrigger const &, std::vector<struct std::pair<std::string const, std::string const>> &, class RenderParams &) const;
    /**
     * @hash   -1427820769
     * @vftbl  192
     * @symbol  ?_forceExecuteTrigger\@BlockLegacy\@\@EEBAXAEBVDefinitionTrigger\@\@AEAV?$vector\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@$$CBV12\@\@std\@\@V?$allocator\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@$$CBV12\@\@std\@\@\@2\@\@std\@\@AEAVRenderParams\@\@\@Z
     */
    virtual void _forceExecuteTrigger(class DefinitionTrigger const &, std::vector<struct std::pair<std::string const, std::string const>> &, class RenderParams &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BLOCKLEGACY
    /**
     * @hash   -81639537
     * @symbol  ?canBeDestroyedByWaterSpread\@BlockLegacy\@\@UEBA_NXZ
     */
    MCVAPI bool canBeDestroyedByWaterSpread() const;
    /**
     * @hash   1956103272
     * @symbol  ?canBeSilkTouched\@BlockLegacy\@\@UEBA_NXZ
     */
    MCVAPI bool canBeSilkTouched() const;
    /**
     * @hash   -1322861152
     * @symbol  ?canDamperVibrations\@BlockLegacy\@\@UEBA_NXZ
     */
    MCVAPI bool canDamperVibrations() const;
    /**
     * @hash   -323993148
     * @symbol  ?canHaveExtraData\@BlockLegacy\@\@UEBA_NXZ
     */
    MCVAPI bool canHaveExtraData() const;
    /**
     * @hash   -1152791092
     * @symbol  ?canOccludeVibrations\@BlockLegacy\@\@UEBA_NXZ
     */
    MCVAPI bool canOccludeVibrations() const;
    /**
     * @hash   -2020910156
     * @symbol  ?causesFreezeEffect\@BlockLegacy\@\@UEBA_NXZ
     */
    MCVAPI bool causesFreezeEffect() const;
    /**
     * @hash   -1320353390
     * @symbol  ?detachesOnPistonMove\@BlockLegacy\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCVAPI bool detachesOnPistonMove(class BlockSource &, class BlockPos const &) const;
    /**
     * @hash   1512445498
     * @symbol  ?hasComparatorSignal\@BlockLegacy\@\@UEBA_NXZ
     */
    MCVAPI bool hasComparatorSignal() const;
    /**
     * @hash   1469198596
     * @symbol  ?hasVariableLighting\@BlockLegacy\@\@UEBA_NXZ
     */
    MCVAPI bool hasVariableLighting() const;
    /**
     * @hash   -1487594851
     * @symbol  ?isBounceBlock\@BlockLegacy\@\@UEBA_NXZ
     */
    MCVAPI bool isBounceBlock() const;
    /**
     * @hash   -1357730829
     * @symbol  ?isButtonBlock\@BlockLegacy\@\@UEBA_NXZ
     */
    MCVAPI bool isButtonBlock() const;
    /**
     * @hash   -1373574080
     * @symbol  ?isCandleCakeBlock\@BlockLegacy\@\@UEBA_NXZ
     */
    MCVAPI bool isCandleCakeBlock() const;
    /**
     * @hash   -373417672
     * @symbol  ?isContainerBlock\@BlockLegacy\@\@UEBA_NXZ
     */
    MCVAPI bool isContainerBlock() const;
    /**
     * @hash   -593435677
     * @symbol  ?isCraftingBlock\@BlockLegacy\@\@UEBA_NXZ
     */
    MCVAPI bool isCraftingBlock() const;
    /**
     * @hash   529748750
     * @symbol  ?isCropBlock\@BlockLegacy\@\@MEBA_NXZ
     */
    MCVAPI bool isCropBlock() const;
    /**
     * @hash   2114836727
     * @symbol  ?isDoorBlock\@BlockLegacy\@\@UEBA_NXZ
     */
    MCVAPI bool isDoorBlock() const;
    /**
     * @hash   357034632
     * @symbol  ?isFenceBlock\@BlockLegacy\@\@UEBA_NXZ
     */
    MCVAPI bool isFenceBlock() const;
    /**
     * @hash   -1012792291
     * @symbol  ?isFenceGateBlock\@BlockLegacy\@\@UEBA_NXZ
     */
    MCVAPI bool isFenceGateBlock() const;
    /**
     * @hash   -1803710788
     * @symbol  ?isHurtableBlock\@BlockLegacy\@\@UEBA_NXZ
     */
    MCVAPI bool isHurtableBlock() const;
    /**
     * @hash   685602896
     * @symbol  ?isInteractiveBlock\@BlockLegacy\@\@MEBA_NXZ
     */
    MCVAPI bool isInteractiveBlock() const;
    /**
     * @hash   -1475570641
     * @symbol  ?isLeverBlock\@BlockLegacy\@\@UEBA_NXZ
     */
    MCVAPI bool isLeverBlock() const;
    /**
     * @hash   -930996317
     * @symbol  ?isMultifaceBlock\@BlockLegacy\@\@UEBA_NXZ
     */
    MCVAPI bool isMultifaceBlock() const;
    /**
     * @hash   -1225947885
     * @symbol  ?isRailBlock\@BlockLegacy\@\@UEBA_NXZ
     */
    MCVAPI bool isRailBlock() const;
    /**
     * @hash   -1583013802
     * @symbol  ?isSilentWhenJumpingOff\@BlockLegacy\@\@UEBA_NXZ
     */
    MCVAPI bool isSilentWhenJumpingOff() const;
    /**
     * @hash   -43650965
     * @symbol  ?isSlabBlock\@BlockLegacy\@\@UEBA_NXZ
     */
    MCVAPI bool isSlabBlock() const;
    /**
     * @hash   -1037447312
     * @symbol  ?isStairBlock\@BlockLegacy\@\@UEBA_NXZ
     */
    MCVAPI bool isStairBlock() const;
    /**
     * @hash   -2118794020
     * @symbol  ?isStemBlock\@BlockLegacy\@\@UEBA_NXZ
     */
    MCVAPI bool isStemBlock() const;
    /**
     * @hash   -704751711
     * @symbol  ?isThinFenceBlock\@BlockLegacy\@\@UEBA_NXZ
     */
    MCVAPI bool isThinFenceBlock() const;
    /**
     * @hash   -1382181157
     * @symbol  ?isWallBlock\@BlockLegacy\@\@UEBA_NXZ
     */
    MCVAPI bool isWallBlock() const;
    /**
     * @hash   -274139127
     * @symbol  ?onPlayerPlacing\@BlockLegacy\@\@MEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVActor\@\@E\@Z
     */
    MCVAPI void onPlayerPlacing(class BlockSource &, class BlockPos const &, class Actor &, unsigned char) const;
    /**
     * @hash   895989104
     * @symbol  ?onStepOff\@BlockLegacy\@\@MEBAXAEAVActor\@\@AEBVBlockPos\@\@\@Z
     */
    MCVAPI void onStepOff(class Actor &, class BlockPos const &) const;
    /**
     * @hash   18287062
     * @symbol  ?onStepOn\@BlockLegacy\@\@MEBAXAEAVActor\@\@AEBVBlockPos\@\@\@Z
     */
    MCVAPI void onStepOn(class Actor &, class BlockPos const &) const;
    /**
     * @hash   -1304402100
     * @symbol  ?pushesUpFallingBlocks\@BlockLegacy\@\@UEBA_NXZ
     */
    MCVAPI bool pushesUpFallingBlocks() const;
    /**
     * @hash   -93042507
     * @symbol  ?shouldTickOnSetBlock\@BlockLegacy\@\@MEBA_NXZ
     */
    MCVAPI bool shouldTickOnSetBlock() const;
    /**
     * @hash   -409733381
     * @symbol  ?spawnBurnResources\@BlockLegacy\@\@UEBA_NAEAVBlockSource\@\@MMM\@Z
     */
    MCVAPI bool spawnBurnResources(class BlockSource &, float, float, float) const;
    /**
     * @hash   -1380877527
     * @symbol  ?waterSpreadCausesSpawn\@BlockLegacy\@\@UEBA_NXZ
     */
    MCVAPI bool waterSpreadCausesSpawn() const;
#endif
    /**
     * @hash   255995709
     * @symbol  ??0BlockLegacy\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@HAEBVMaterial\@\@\@Z
     */
    MCAPI BlockLegacy(std::string const &, int, class Material const &);
    /**
     * @hash   2038140002
     * @symbol  ?_isDataDrivingVanillaBlocksAndItems\@BlockLegacy\@\@QEBA_NXZ
     */
    MCAPI bool _isDataDrivingVanillaBlocksAndItems() const;
    /**
     * @hash   1095953704
     * @symbol  ?addAABB\@BlockLegacy\@\@QEBA_NAEBVAABB\@\@PEBV2\@AEAV?$vector\@VAABB\@\@V?$allocator\@VAABB\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI bool addAABB(class AABB const &, class AABB const *, std::vector<class AABB> &) const;
    /**
     * @hash   370037962
     * @symbol  ?addBlockProperties\@BlockLegacy\@\@QEAAAEAV1\@W4BlockProperty\@\@\@Z
     */
    MCAPI class BlockLegacy & addBlockProperties(enum class BlockProperty);
    /**
     * @hash   56735384
     * @symbol  ?addTag\@BlockLegacy\@\@QEAAAEAV1\@AEBVHashedString\@\@\@Z
     */
    MCAPI class BlockLegacy & addTag(class HashedString const &);
    /**
     * @symbol  ?anyOf\@BlockLegacy\@\@QEBA_NV?$initializer_list\@$$CBVHashedString\@\@\@std\@\@\@Z
     */
    MCAPI bool anyOf(class std::initializer_list<class HashedString const>) const;
    /**
     * @hash   992716647
     * @symbol  ?buildDescriptionName\@BlockLegacy\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVBlock\@\@\@Z
     */
    MCAPI std::string buildDescriptionName(class Block const &) const;
    /**
     * @hash   -1692064524
     * @symbol  ?canInstatick\@BlockLegacy\@\@QEBA_NXZ
     */
    MCAPI bool canInstatick() const;
    /**
     * @hash   247514884
     * @symbol  ?createBlockPermutations\@BlockLegacy\@\@QEAAXI\@Z
     */
    MCAPI void createBlockPermutations(unsigned int);
    /**
     * @hash   -1184138193
     * @symbol  ?createWeakPtr\@BlockLegacy\@\@QEBA?AV?$WeakPtr\@VBlockLegacy\@\@\@\@XZ
     */
    MCAPI class WeakPtr<class BlockLegacy> createWeakPtr() const;
    /**
     * @hash   1871741058
     * @symbol  ?forEachBlockPermutation\@BlockLegacy\@\@QEBAXV?$function\@$$A6A_NAEBVBlock\@\@\@Z\@std\@\@\@Z
     */
    MCAPI void forEachBlockPermutation(class std::function<bool (class Block const &)>) const;
    /**
     * @hash   -1113927372
     * @symbol  ?forEachItemStateInstance\@BlockLegacy\@\@QEBAXV?$function\@$$A6A_NAEBVItemStateInstance\@\@\@Z\@std\@\@\@Z
     */
    MCAPI void forEachItemStateInstance(class std::function<bool (class ItemStateInstance const &)>) const;
    /**
     * @hash   -1929636428
     * @symbol  ?getAllowsRunes\@BlockLegacy\@\@QEBA_NXZ
     */
    MCAPI bool getAllowsRunes() const;
    /**
     * @hash   -1474425432
     * @symbol  ?getBlockEntityType\@BlockLegacy\@\@QEBA?AW4BlockActorType\@\@XZ
     */
    MCAPI enum class BlockActorType getBlockEntityType() const;
    /**
     * @hash   1930762405
     * @symbol  ?getBlockItemId\@BlockLegacy\@\@QEBAFXZ
     */
    MCAPI short getBlockItemId() const;
    /**
     * @hash   -1974462754
     * @symbol  ?getBlockState\@BlockLegacy\@\@QEBAPEBVItemState\@\@AEBVHashedString\@\@\@Z
     */
    MCAPI class ItemState const * getBlockState(class HashedString const &) const;
    /**
     * @hash   377038263
     * @symbol  ?getBlockStateGroup\@BlockLegacy\@\@QEAAPEAVBlockStateGroup\@\@XZ
     */
    MCAPI class BlockStateGroup * getBlockStateGroup();
    /**
     * @hash   1898781014
     * @symbol  ?getCommandNames\@BlockLegacy\@\@QEBA?AV?$vector\@UCommandName\@\@V?$allocator\@UCommandName\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<struct CommandName> getCommandNames() const;
    /**
     * @hash   676199434
     * @symbol  ?getCreativeCategory\@BlockLegacy\@\@QEBA?AW4CreativeItemCategory\@\@XZ
     */
    MCAPI enum class CreativeItemCategory getCreativeCategory() const;
    /**
     * @hash   864519298
     * @symbol  ?getDebugText\@BlockLegacy\@\@QEBAXAEAV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI void getDebugText(std::vector<std::string> &, class BlockPos const &) const;
    /**
     * @hash   2127587604
     * @symbol  ?getDefaultState\@BlockLegacy\@\@QEBAAEBVBlock\@\@XZ
     */
    MCAPI class Block const & getDefaultState() const;
    /**
     * @hash   -1835214722
     * @symbol  ?getDescriptionId\@BlockLegacy\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const & getDescriptionId() const;
    /**
     * @hash   -1902752084
     * @symbol  ?getEntity\@BlockLegacy\@\@QEBAAEBVEntityContext\@\@XZ
     */
    MCAPI class EntityContext const & getEntity() const;
    /**
     * @hash   582786932
     * @symbol  ?getEntityForModification\@BlockLegacy\@\@QEBAAEAVEntityContext\@\@XZ
     */
    MCAPI class EntityContext & getEntityForModification() const;
    /**
     * @hash   1972621428
     * @symbol  ?getEntityNoCheck\@BlockLegacy\@\@QEBAAEBVEntityContext\@\@XZ
     */
    MCAPI class EntityContext const & getEntityNoCheck() const;
    /**
     * @hash   -1007177125
     * @symbol  ?getExperienceDrop\@BlockLegacy\@\@QEBAHAEAVRandom\@\@\@Z
     */
    MCAPI int getExperienceDrop(class Random &) const;
    /**
     * @hash   2011730608
     * @symbol  ?getMaterial\@BlockLegacy\@\@QEBAAEBVMaterial\@\@XZ
     */
    MCAPI class Material const & getMaterial() const;
    /**
     * @hash   1803092102
     * @symbol  ?getNamespace\@BlockLegacy\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const & getNamespace() const;
    /**
     * @hash   458064324
     * @symbol  ?getRawNameHash\@BlockLegacy\@\@QEBAAEBVHashedString\@\@XZ
     */
    MCAPI class HashedString const & getRawNameHash() const;
    /**
     * @hash   -302817860
     * @symbol  ?getRawNameId\@BlockLegacy\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const & getRawNameId() const;
    /**
     * @hash   1260242438
     * @symbol  ?getRequiredBaseGameVersion\@BlockLegacy\@\@QEBAAEBVBaseGameVersion\@\@XZ
     */
    MCAPI class BaseGameVersion const & getRequiredBaseGameVersion() const;
    /**
     * @hash   -1356064491
     * @symbol  ?getResourceDrops\@BlockLegacy\@\@QEBA?AV?$vector\@VItemStack\@\@V?$allocator\@VItemStack\@\@\@std\@\@\@std\@\@AEBVBlock\@\@AEAVRandomize\@\@AEBUResourceDropsContext\@\@\@Z
     */
    MCAPI std::vector<class ItemStack> getResourceDrops(class Block const &, class Randomize &, struct ResourceDropsContext const &) const;
    /**
     * @hash   -1647834508
     * @symbol  ?hasBlockEntity\@BlockLegacy\@\@QEBA_NXZ
     */
    MCAPI bool hasBlockEntity() const;
    /**
     * @hash   1176597763
     * @symbol  ?hasProperty\@BlockLegacy\@\@QEBA_NW4BlockProperty\@\@\@Z
     */
    MCAPI bool hasProperty(enum class BlockProperty) const;
    /**
     * @hash   -375129513
     * @symbol  ?hasState\@BlockLegacy\@\@QEBA_NAEBVHashedString\@\@\@Z
     */
    MCAPI bool hasState(class HashedString const &) const;
    /**
     * @hash   -97506749
     * @symbol  ?hasState\@BlockLegacy\@\@QEBA_NAEBVItemState\@\@\@Z
     */
    MCAPI bool hasState(class ItemState const &) const;
    /**
     * @hash   -118207963
     * @symbol  ?hasTag\@BlockLegacy\@\@QEBA_NAEBVHashedString\@\@\@Z
     */
    MCAPI bool hasTag(class HashedString const &) const;
    /**
     * @hash   -1291224781
     * @symbol  ?hasTag\@BlockLegacy\@\@QEBA_NAEB_K\@Z
     */
    MCAPI bool hasTag(unsigned __int64 const &) const;
    /**
     * @hash   -1423377018
     * @symbol  ?initEntity\@BlockLegacy\@\@QEAAXAEAVEntityRegistry\@\@\@Z
     */
    MCAPI void initEntity(class EntityRegistry &);
    /**
     * @hash   -517372341
     * @symbol  ?initializeBlockStateGroup\@BlockLegacy\@\@QEAAXXZ
     */
    MCAPI void initializeBlockStateGroup();
    /**
     * @hash   -332446302
     * @symbol  ?isEmpty\@BlockLegacy\@\@QEBA_NXZ
     */
    MCAPI bool isEmpty() const;
    /**
     * @hash   1341150018
     * @symbol  ?isFullAndOpaque\@BlockLegacy\@\@QEBA_NXZ
     */
    MCAPI bool isFullAndOpaque() const;
    /**
     * @hash   1215259538
     * @symbol  ?isHeavy\@BlockLegacy\@\@QEBA_NXZ
     */
    MCAPI bool isHeavy() const;
    /**
     * @hash   -1977945710
     * @symbol  ?isMotionBlockingBlock\@BlockLegacy\@\@QEBA_NXZ
     */
    MCAPI bool isMotionBlockingBlock() const;
    /**
     * @hash   347739188
     * @symbol  ?isSolidBlockingBlock\@BlockLegacy\@\@QEBA_NXZ
     */
    MCAPI bool isSolidBlockingBlock() const;
    /**
     * @hash   962452498
     * @symbol  ?isVanilla\@BlockLegacy\@\@QEBA_NXZ
     */
    MCAPI bool isVanilla() const;
    /**
     * @hash   -2069450032
     * @symbol  ?matchesStates\@BlockLegacy\@\@QEBA_NAEBV1\@\@Z
     */
    MCAPI bool matchesStates(class BlockLegacy const &) const;
    /**
     * @symbol  ??9BlockLegacy\@\@QEBA_NAEBVHashedString\@\@\@Z
     */
    MCAPI bool operator!=(class HashedString const &) const;
    /**
     * @hash   495416139
     * @symbol  ??8BlockLegacy\@\@QEBA_NAEBVHashedString\@\@\@Z
     */
    MCAPI bool operator==(class HashedString const &) const;
    /**
     * @hash   -144725524
     * @symbol  ?overrideBlockProperties\@BlockLegacy\@\@QEAAAEAV1\@W4BlockProperty\@\@\@Z
     */
    MCAPI class BlockLegacy & overrideBlockProperties(enum class BlockProperty);
    /**
     * @hash   1797893696
     * @symbol  ?setAllowsRunes\@BlockLegacy\@\@QEAAAEAV1\@_N\@Z
     */
    MCAPI class BlockLegacy & setAllowsRunes(bool);
    /**
     * @hash   -2081168374
     * @symbol  ?setBlockTintType\@BlockLegacy\@\@QEAAAEAV1\@W4BlockTintType\@\@\@Z
     */
    MCAPI class BlockLegacy & setBlockTintType(enum class BlockTintType);
    /**
     * @hash   403135198
     * @symbol  ?setCanBeExtraBlock\@BlockLegacy\@\@QEAAAEAV1\@_N\@Z
     */
    MCAPI class BlockLegacy & setCanBeExtraBlock(bool);
    /**
     * @hash   548632210
     * @symbol  ?setCanBeOriginalSurface\@BlockLegacy\@\@QEAAAEAV1\@_N\@Z
     */
    MCAPI class BlockLegacy & setCanBeOriginalSurface(bool);
    /**
     * @hash   1844969762
     * @symbol  ?setCategory\@BlockLegacy\@\@QEAAAEAV1\@W4CreativeItemCategory\@\@\@Z
     */
    MCAPI class BlockLegacy & setCategory(enum class CreativeItemCategory);
    /**
     * @hash   1198715628
     * @symbol  ?setCreativeEnumState\@BlockLegacy\@\@QEAAAEAV1\@AEBVItemState\@\@\@Z
     */
    MCAPI class BlockLegacy & setCreativeEnumState(class ItemState const &);
    /**
     * @hash   -1071047868
     * @symbol  ?setCreativeGroup\@BlockLegacy\@\@QEAAAEAV1\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class BlockLegacy & setCreativeGroup(std::string const &);
    /**
     * @hash   864670466
     * @symbol  ?setDefaultState\@BlockLegacy\@\@QEAAXAEBVBlock\@\@\@Z
     */
    MCAPI void setDefaultState(class Block const &);
    /**
     * @hash   851164476
     * @symbol  ?setDestroyTime\@BlockLegacy\@\@QEAAAEAV1\@M\@Z
     */
    MCAPI class BlockLegacy & setDestroyTime(float);
    /**
     * @hash   -171237368
     * @symbol  ?setExperienceDrop\@BlockLegacy\@\@QEAAAEAV1\@UIntRange\@\@\@Z
     */
    MCAPI class BlockLegacy & setExperienceDrop(struct IntRange);
    /**
     * @hash   1636019196
     * @symbol  ?setExplodeable\@BlockLegacy\@\@QEAAAEAV1\@M\@Z
     */
    MCAPI class BlockLegacy & setExplodeable(float);
    /**
     * @hash   753820160
     * @symbol  ?setFlammable\@BlockLegacy\@\@QEAAAEAV1\@W4FlameOdds\@\@W4BurnOdds\@\@W4LavaFlammable\@\@\@Z
     */
    MCAPI class BlockLegacy & setFlammable(enum class FlameOdds, enum class BurnOdds, enum class LavaFlammable);
    /**
     * @hash   711842298
     * @symbol  ?setIgnoreBlockForInsideCubeRenderer\@BlockLegacy\@\@QEAAX_N\@Z
     */
    MCAPI void setIgnoreBlockForInsideCubeRenderer(bool);
    /**
     * @hash   151919410
     * @symbol  ?setIsHiddenInCommands\@BlockLegacy\@\@QEAAAEAV1\@_N\@Z
     */
    MCAPI class BlockLegacy & setIsHiddenInCommands(bool);
    /**
     * @hash   2102380088
     * @symbol  ?setIsInteraction\@BlockLegacy\@\@QEAAX_N\@Z
     */
    MCAPI void setIsInteraction(bool);
    /**
     * @hash   1702665898
     * @symbol  ?setIsVanillaBlock\@BlockLegacy\@\@QEAAX_N\@Z
     */
    MCAPI void setIsVanillaBlock(bool);
    /**
     * @hash   -1962428782
     * @symbol  ?setLightBlock\@BlockLegacy\@\@QEAAAEAV1\@UBrightness\@\@\@Z
     */
    MCAPI class BlockLegacy & setLightBlock(struct Brightness);
    /**
     * @hash   41182208
     * @symbol  ?setLightEmission\@BlockLegacy\@\@QEAAAEAV1\@UBrightness\@\@\@Z
     */
    MCAPI class BlockLegacy & setLightEmission(struct Brightness);
    /**
     * @hash   1166502020
     * @symbol  ?setMapColor\@BlockLegacy\@\@QEAAAEAV1\@AEBVColor\@mce\@\@\@Z
     */
    MCAPI class BlockLegacy & setMapColor(class mce::Color const &);
    /**
     * @hash   -305845184
     * @symbol  ?setMinRequiredBaseGameVersion\@BlockLegacy\@\@QEAAAEAV1\@AEBVBaseGameVersion\@\@\@Z
     */
    MCAPI class BlockLegacy & setMinRequiredBaseGameVersion(class BaseGameVersion const &);
    /**
     * @hash   422261478
     * @symbol  ?setNameId\@BlockLegacy\@\@QEAAAEAV1\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class BlockLegacy & setNameId(std::string const &);
    /**
     * @hash   -1511437336
     * @symbol  ?setOnlyPermutationandDefaultState\@BlockLegacy\@\@QEAAXV?$unique_ptr\@VBlock\@\@U?$default_delete\@VBlock\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void setOnlyPermutationandDefaultState(std::unique_ptr<class Block>);
    /**
     * @hash   -1108475350
     * @symbol  ?setPushesOutItems\@BlockLegacy\@\@QEAAX_N\@Z
     */
    MCAPI void setPushesOutItems(bool);
    /**
     * @hash   -603696394
     * @symbol  ?setRandomTicking\@BlockLegacy\@\@QEBAX_N\@Z
     */
    MCAPI void setRandomTicking(bool) const;
    /**
     * @hash   -762472586
     * @symbol  ?setRandomTickingExtraLayer\@BlockLegacy\@\@QEBAX_N\@Z
     */
    MCAPI void setRandomTickingExtraLayer(bool) const;
    /**
     * @symbol  ?setResourceDropsStrategy\@BlockLegacy\@\@QEAAXV?$unique_ptr\@VIResourceDropsStrategy\@\@U?$default_delete\@VIResourceDropsStrategy\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void setResourceDropsStrategy(std::unique_ptr<class IResourceDropsStrategy>);
    /**
     * @hash   448984203
     * @symbol  ?setReturnDefaultBlockOnUnidentifiedBlockState\@BlockLegacy\@\@QEAAAEAV1\@XZ
     */
    MCAPI class BlockLegacy & setReturnDefaultBlockOnUnidentifiedBlockState();
    /**
     * @hash   589700376
     * @symbol  ?setSolid\@BlockLegacy\@\@QEAAX_N\@Z
     */
    MCAPI void setSolid(bool);
    /**
     * @hash   -1949964316
     * @symbol  ?setVisualShape\@BlockLegacy\@\@QEAAXAEBVAABB\@\@\@Z
     */
    MCAPI void setVisualShape(class AABB const &);
    /**
     * @hash   -614835424
     * @symbol  ?setVisualShape\@BlockLegacy\@\@QEAAXAEBVVec3\@\@0\@Z
     */
    MCAPI void setVisualShape(class Vec3 const &, class Vec3 const &);
    /**
     * @hash   -995707443
     * @symbol  ?tryGetStateFromLegacyData\@BlockLegacy\@\@QEBAPEBVBlock\@\@G\@Z
     */
    MCAPI class Block const * tryGetStateFromLegacyData(unsigned short) const;
    /**
     * @hash   -129816167
     * @symbol  ?BLOCK_DESCRIPTION_PREFIX\@BlockLegacy\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const BLOCK_DESCRIPTION_PREFIX;
    /**
     * @hash   1705725011
     * @symbol  ?SIZE_OFFSET\@BlockLegacy\@\@2MB
     */
    MCAPI static float const SIZE_OFFSET;
    /**
     * @hash   1350070906
     * @symbol  ?buildDescriptionIdFromNameInfo\@BlockLegacy\@\@SA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBUNameInfo\@1\@\@Z
     */
    MCAPI static std::string buildDescriptionIdFromNameInfo(struct BlockLegacy::NameInfo const &);
    /**
     * @hash   -1292064104
     * @symbol  ?extractBlockNameInfo\@BlockLegacy\@\@SA?AUNameInfo\@1\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI static struct BlockLegacy::NameInfo extractBlockNameInfo(std::string const &);
    /**
     * @hash   -333276572
     * @symbol  ?getPlacementFacingAll\@BlockLegacy\@\@SAEAEAVActor\@\@AEBVBlockPos\@\@M\@Z
     */
    MCAPI static unsigned char getPlacementFacingAll(class Actor &, class BlockPos const &, float);
    /**
     * @hash   965587170
     * @symbol  ?getPlacementFacingAllExceptAxisY\@BlockLegacy\@\@SAEAEAVActor\@\@AEBVBlockPos\@\@M\@Z
     */
    MCAPI static unsigned char getPlacementFacingAllExceptAxisY(class Actor &, class BlockPos const &, float);
    /**
     * @hash   -1866252496
     * @symbol  ?popResource\@BlockLegacy\@\@SAPEAVItemActor\@\@AEAVBlockSource\@\@AEBVBlockPos\@\@AEBVItemInstance\@\@\@Z
     */
    MCAPI static class ItemActor * popResource(class BlockSource &, class BlockPos const &, class ItemInstance const &);
    /**
     * @hash   -64003542
     * @symbol  ?popResource\@BlockLegacy\@\@SAPEAVItemActor\@\@AEAVBlockSource\@\@AEBVBlockPos\@\@AEBVItemStack\@\@\@Z
     */
    MCAPI static class ItemActor * popResource(class BlockSource &, class BlockPos const &, class ItemStack const &);
    /**
     * @symbol  ?spawnResources\@BlockLegacy\@\@SAXAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandomize\@\@M\@Z
     */
    MCAPI static void spawnResources(class BlockSource &, class BlockPos const &, class Randomize &, float);

//protected:
    /**
     * @hash   -1435659339
     * @symbol  ?_getBlockShape\@BlockLegacy\@\@IEBA?AW4BlockShape\@\@XZ
     */
    MCAPI enum class BlockShape _getBlockShape() const;
    /**
     * @hash   -650106197
     * @symbol  ?clip\@BlockLegacy\@\@IEBA?AVHitResult\@\@AEBVBlockSource\@\@AEBVBlockPos\@\@AEBVVec3\@\@2_NAEBVAABB\@\@\@Z
     */
    MCAPI class HitResult clip(class BlockSource const &, class BlockPos const &, class Vec3 const &, class Vec3 const &, bool, class AABB const &) const;
    /**
     * @hash   1596553900
     * @symbol  ?forEachBlockPermutationMutable\@BlockLegacy\@\@IEAA_NV?$function\@$$A6A_NAEAVBlock\@\@\@Z\@std\@\@\@Z
     */
    MCAPI bool forEachBlockPermutationMutable(class std::function<bool (class Block &)>);
    /**
     * @hash   890358042
     * @symbol  ?getBurnOdds\@BlockLegacy\@\@IEBAHXZ
     */
    MCAPI int getBurnOdds() const;
    /**
     * @hash   -1304973385
     * @symbol  ?getDestroySpeed\@BlockLegacy\@\@IEBAMXZ
     */
    MCAPI float getDestroySpeed() const;
    /**
     * @hash   321037666
     * @symbol  ?getFlameOdds\@BlockLegacy\@\@IEBAHXZ
     */
    MCAPI int getFlameOdds() const;
    /**
     * @hash   -172522668
     * @symbol  ?getFriction\@BlockLegacy\@\@IEBAMXZ
     */
    MCAPI float getFriction() const;
    /**
     * @hash   1176544945
     * @symbol  ?getLight\@BlockLegacy\@\@IEBA?AUBrightness\@\@XZ
     */
    MCAPI struct Brightness getLight() const;
    /**
     * @hash   577625729
     * @symbol  ?isLavaFlammable\@BlockLegacy\@\@IEBA_NXZ
     */
    MCAPI bool isLavaFlammable() const;
    /**
     * @hash   -737622447
     * @symbol  ?createAABBWithPixelCoordinates\@BlockLegacy\@\@KA?AVAABB\@\@MMMMMM\@Z
     */
    MCAPI static class AABB createAABBWithPixelCoordinates(float, float, float, float, float, float);

//private:
    /**
     * @symbol  ?_tryLookupSplitStateCollection\@BlockLegacy\@\@AEBA?AV?$optional\@H\@std\@\@_K\@Z
     */
    MCAPI class std::optional<int> _tryLookupSplitStateCollection(unsigned __int64) const;
    /**
     * @symbol  ?_trySetStateFromSplitStateCollection\@BlockLegacy\@\@AEBAPEBVBlock\@\@_KHG\@Z
     */
    MCAPI class Block const * _trySetStateFromSplitStateCollection(unsigned __int64, int, unsigned short) const;
    /**
     * @hash   2084985744
     * @symbol  ?initParams\@BlockLegacy\@\@AEBAXAEAVRenderParams\@\@AEAVBlockSource\@\@AEBVBlockPos\@\@PEAVActor\@\@\@Z
     */
    MCAPI void initParams(class RenderParams &, class BlockSource &, class BlockPos const &, class Actor *) const;

protected:

private:

};