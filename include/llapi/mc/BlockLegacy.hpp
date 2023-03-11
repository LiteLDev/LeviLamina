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

    LLAPI Block* toBlock(unsigned short tileData);
    LLAPI string getTypeName();
    LLAPI bool applyBoneMeal(class BlockSource* a1, class BlockPos const& a2);
    LLAPI ItemStack* getBlockDrops();
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
     * @vftbl  1
     * @symbol  ?getStateFromLegacyData\@BlockLegacy\@\@UEBAAEBVBlock\@\@G\@Z
     */
    virtual class Block const & getStateFromLegacyData(unsigned short) const;
    /**
     * @vftbl  2
     * @symbol  ?newBlockEntity\@BlockLegacy\@\@UEBA?AV?$shared_ptr\@VBlockActor\@\@\@std\@\@AEBVBlockPos\@\@AEBVBlock\@\@\@Z
     */
    virtual class std::shared_ptr<class BlockActor> newBlockEntity(class BlockPos const &, class Block const &) const;
    /**
     * @vftbl  3
     * @symbol  ?getNextBlockPermutation\@BlockLegacy\@\@UEBAPEBVBlock\@\@AEBV2\@\@Z
     */
    virtual class Block const * getNextBlockPermutation(class Block const &) const;
    /**
     * @vftbl  4
     * @symbol  ?hasTag\@BlockLegacy\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@AEBVBlock\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual bool hasTag(class BlockSource &, class BlockPos const &, class Block const &, std::string const &) const;
    /**
     * @vftbl  5
     * @symbol  ?getCollisionShape\@BlockLegacy\@\@UEBA_NAEAVAABB\@\@AEBVBlock\@\@AEBVIConstBlockSource\@\@AEBVBlockPos\@\@V?$optional_ref\@$$CBVGetCollisionShapeInterface\@\@\@\@\@Z
     */
    virtual bool getCollisionShape(class AABB &, class Block const &, class IConstBlockSource const &, class BlockPos const &, class optional_ref<class GetCollisionShapeInterface const>) const;
    /**
     * @vftbl  6
     * @symbol  ?isObstructingChests\@BlockLegacy\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@AEBVBlock\@\@\@Z
     */
    virtual bool isObstructingChests(class BlockSource &, class BlockPos const &, class Block const &) const;
    /**
     * @vftbl  7
     * @symbol  ?randomlyModifyPosition\@BlockLegacy\@\@UEBA?AVVec3\@\@AEBVBlockPos\@\@AEAH\@Z
     */
    virtual class Vec3 randomlyModifyPosition(class BlockPos const &, int &) const;
    /**
     * @vftbl  8
     * @symbol  ?randomlyModifyPosition\@BlockLegacy\@\@UEBA?AVVec3\@\@AEBVBlockPos\@\@\@Z
     */
    virtual class Vec3 randomlyModifyPosition(class BlockPos const &) const;
    /**
     * @vftbl  9
     * @symbol  ?addAABBs\@BlockLegacy\@\@UEBAXAEBVBlock\@\@AEBVBlockSource\@\@AEBVBlockPos\@\@PEBVAABB\@\@AEAV?$vector\@VAABB\@\@V?$allocator\@VAABB\@\@\@std\@\@\@std\@\@\@Z
     */
    virtual void addAABBs(class Block const &, class BlockSource const &, class BlockPos const &, class AABB const *, std::vector<class AABB> &) const;
    /**
     * @vftbl  10
     * @symbol  ?getAABB\@BlockLegacy\@\@UEBAAEBVAABB\@\@AEBVIConstBlockSource\@\@AEBVBlockPos\@\@AEBVBlock\@\@AEAV2\@_N\@Z
     */
    virtual class AABB const & getAABB(class IConstBlockSource const &, class BlockPos const &, class Block const &, class AABB &, bool) const;
    /**
     * @vftbl  11
     * @symbol  ?addCollisionShapes\@BlockLegacy\@\@UEBA_NAEBVBlock\@\@AEBVBlockSource\@\@AEBVBlockPos\@\@PEBVAABB\@\@AEAV?$vector\@VAABB\@\@V?$allocator\@VAABB\@\@\@std\@\@\@std\@\@V?$optional_ref\@$$CBVGetCollisionShapeInterface\@\@\@\@\@Z
     */
    virtual bool addCollisionShapes(class Block const &, class BlockSource const &, class BlockPos const &, class AABB const *, std::vector<class AABB> &, class optional_ref<class GetCollisionShapeInterface const>) const;
    /**
     * @vftbl  12
     * @symbol  ?updateTallestCollisionShape\@BlockLegacy\@\@UEBA_NAEBVBlock\@\@AEBVBlockSource\@\@AEBVBlockPos\@\@AEBVAABB\@\@V?$optional_ref\@$$CBVGetCollisionShapeInterface\@\@\@\@AEAV5\@AEBVVec3\@\@AEAM\@Z
     */
    virtual bool updateTallestCollisionShape(class Block const &, class BlockSource const &, class BlockPos const &, class AABB const &, class optional_ref<class GetCollisionShapeInterface const>, class AABB &, class Vec3 const &, float &) const;
    /**
     * @vftbl  13
     * @symbol  ?getOutline\@BlockLegacy\@\@UEBAAEBVAABB\@\@AEAVBlockSource\@\@AEBVBlockPos\@\@AEAV2\@\@Z
     */
    virtual class AABB const & getOutline(class BlockSource &, class BlockPos const &, class AABB &) const;
    /**
     * @vftbl  14
     * @symbol  ?getLiquidClipVolume\@BlockLegacy\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVAABB\@\@\@Z
     */
    virtual bool getLiquidClipVolume(class BlockSource &, class BlockPos const &, class AABB &) const;
    /**
     * @vftbl  15
     * @symbol  ?onProjectileHit\@BlockLegacy\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@AEBVActor\@\@\@Z
     */
    virtual void onProjectileHit(class BlockSource &, class BlockPos const &, class Actor const &) const;
    /**
     * @vftbl  16
     * @symbol  ?onLightningHit\@BlockLegacy\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual void onLightningHit(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  17
     * @symbol  ?liquidCanFlowIntoFromDirection\@BlockLegacy\@\@UEBA_NEAEBV?$function\@$$A6AAEBVBlock\@\@AEBVBlockPos\@\@\@Z\@std\@\@AEBVBlockPos\@\@\@Z
     */
    virtual bool liquidCanFlowIntoFromDirection(unsigned char, class std::function<class Block const & (class BlockPos const &)> const &, class BlockPos const &) const;
    /**
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
     * @vftbl  20
     * @symbol  ?isStrippable\@BlockLegacy\@\@UEBA_NAEBVBlock\@\@\@Z
     */
    virtual bool isStrippable(class Block const &) const;
    /**
     * @vftbl  21
     * @symbol  ?getStrippedBlock\@BlockLegacy\@\@UEBAAEBVBlock\@\@AEBV2\@\@Z
     */
    virtual class Block const & getStrippedBlock(class Block const &) const;
    /**
     * @vftbl  22
     * @symbol  ?canProvideSupport\@BlockLegacy\@\@UEBA_NAEBVBlock\@\@EW4BlockSupportType\@\@\@Z
     */
    virtual bool canProvideSupport(class Block const &, unsigned char, enum class BlockSupportType) const;
    /**
     * @vftbl  23
     * @symbol  ?canProvideFullSupport\@BlockLegacy\@\@UEBA_NAEBVBlock\@\@E\@Z
     */
    virtual bool canProvideFullSupport(class Block const &, unsigned char) const;
    /**
     * @vftbl  24
     * @symbol  ?canProvideMultifaceSupport\@BlockLegacy\@\@UEBA_NAEBVBlock\@\@E\@Z
     */
    virtual bool canProvideMultifaceSupport(class Block const &, unsigned char) const;
    /**
     * @vftbl  25
     * @symbol  ?canConnect\@BlockLegacy\@\@UEBA_NAEBVBlock\@\@E0\@Z
     */
    virtual bool canConnect(class Block const &, unsigned char, class Block const &) const;
    /**
     * @vftbl  26
     * @symbol  ?getConnectedDirections\@BlockLegacy\@\@UEBAXAEBVBlock\@\@AEBVBlockPos\@\@AEBVIConstBlockSource\@\@AEA_N333\@Z
     */
    virtual void getConnectedDirections(class Block const &, class BlockPos const &, class IConstBlockSource const &, bool &, bool &, bool &, bool &) const;
    /**
     * @vftbl  27
     * @symbol  ?isAir\@BlockLegacy\@\@UEBA_NXZ
     */
    virtual bool isAir() const;
    /**
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
     * @vftbl  50
     * @symbol  ?canHurtAndBreakItem\@BlockLegacy\@\@UEBA_NXZ
     */
    virtual bool canHurtAndBreakItem() const;
    /**
     * @vftbl  51
     * @symbol  ?isSignalSource\@BlockLegacy\@\@UEBA_NXZ
     */
    virtual bool isSignalSource() const;
    /**
     * @vftbl  52
     * @symbol  ?canBeOriginalSurface\@BlockLegacy\@\@UEBA_NXZ
     */
    virtual bool canBeOriginalSurface() const;
    /**
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
     * @vftbl  55
     * @symbol  ?isValidAuxValue\@BlockLegacy\@\@UEBA_NH\@Z
     */
    virtual bool isValidAuxValue(int) const;
    /**
     * @vftbl  56
     * @symbol  ?canFillAtPos\@BlockLegacy\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@AEBVBlock\@\@\@Z
     */
    virtual bool canFillAtPos(class BlockSource &, class BlockPos const &, class Block const &) const;
    /**
     * @vftbl  57
     * @symbol  ?sanitizeFillBlock\@BlockLegacy\@\@UEBAAEBVBlock\@\@AEAVBlockSource\@\@AEBVBlockPos\@\@AEBV2\@\@Z
     */
    virtual class Block const & sanitizeFillBlock(class BlockSource &, class BlockPos const &, class Block const &) const;
    /**
     * @vftbl  58
     * @symbol  ?onFillBlock\@BlockLegacy\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@AEBVBlock\@\@\@Z
     */
    virtual void onFillBlock(class BlockSource &, class BlockPos const &, class Block const &) const;
    /**
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
     * @vftbl  62
     * @symbol  ?canContainLiquid\@BlockLegacy\@\@UEBA_NXZ
     */
    virtual bool canContainLiquid() const;
    /**
     * @vftbl  63
     * @symbol  ?getRequiredMedium\@BlockLegacy\@\@UEBA?AV?$optional\@VHashedString\@\@\@std\@\@XZ
     */
    virtual class std::optional<class HashedString> getRequiredMedium() const;
    /**
     * @vftbl  64
     * @symbol  ?shouldConnectToRedstone\@BlockLegacy\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@H\@Z
     */
    virtual bool shouldConnectToRedstone(class BlockSource &, class BlockPos const &, int) const;
    /**
     * @vftbl  65
     * @symbol  ?handlePrecipitation\@BlockLegacy\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@MM\@Z
     */
    virtual void handlePrecipitation(class BlockSource &, class BlockPos const &, float, float) const;
    /**
     * @vftbl  66
     * @symbol  ?canBeUsedInCommands\@BlockLegacy\@\@UEBA_NAEBVBaseGameVersion\@\@\@Z
     */
    virtual bool canBeUsedInCommands(class BaseGameVersion const &) const;
    /**
     * @vftbl  67
     * @symbol  ?getThickness\@BlockLegacy\@\@UEBAMXZ
     */
    virtual float getThickness() const;
    /**
     * @vftbl  68
     * @symbol  ?getFlexibility\@BlockLegacy\@\@UEBAMAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual float getFlexibility(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  69
     * @symbol  ?checkIsPathable\@BlockLegacy\@\@UEBA_NAEAVActor\@\@AEBVBlockPos\@\@1\@Z
     */
    virtual bool checkIsPathable(class Actor &, class BlockPos const &, class BlockPos const &) const;
    /**
     * @vftbl  70
     * @symbol  ?shouldDispense\@BlockLegacy\@\@UEBA_NAEAVBlockSource\@\@AEAVContainer\@\@\@Z
     */
    virtual bool shouldDispense(class BlockSource &, class Container &) const;
    /**
     * @vftbl  71
     * @symbol  ?dispense\@BlockLegacy\@\@UEBA_NAEAVBlockSource\@\@AEAVContainer\@\@HAEBVVec3\@\@E\@Z
     */
    virtual bool dispense(class BlockSource &, class Container &, int, class Vec3 const &, unsigned char) const;
    /**
     * @vftbl  72
     * @symbol  ?transformOnFall\@BlockLegacy\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@PEAVActor\@\@M\@Z
     */
    virtual void transformOnFall(class BlockSource &, class BlockPos const &, class Actor *, float) const;
    /**
     * @vftbl  73
     * @symbol  ?onRedstoneUpdate\@BlockLegacy\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@H_N\@Z
     */
    virtual void onRedstoneUpdate(class BlockSource &, class BlockPos const &, int, bool) const;
    /**
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
     * @vftbl  76
     * @symbol  ?movedByPiston\@BlockLegacy\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual void movedByPiston(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  77
     * @symbol  ?onStructureBlockPlace\@BlockLegacy\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual void onStructureBlockPlace(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  78
     * @symbol  ?onStructureNeighborBlockPlace\@BlockLegacy\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual void onStructureNeighborBlockPlace(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  79
     * @symbol  ?setupRedstoneComponent\@BlockLegacy\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual void setupRedstoneComponent(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  80
     * @symbol  ?getRedstoneProperty\@BlockLegacy\@\@UEBA?AW4BlockProperty\@\@AEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual enum class BlockProperty getRedstoneProperty(class BlockSource &, class BlockPos const &) const;
    /**
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
     * @vftbl  83
     * @symbol  ?isFilteredOut\@BlockLegacy\@\@UEBA_NW4BlockRenderLayer\@\@\@Z
     */
    virtual bool isFilteredOut(enum class BlockRenderLayer) const;
    /**
     * @vftbl  84
     * @symbol  ?isPreservingMediumWhenPlaced\@BlockLegacy\@\@UEBA_NPEBV1\@\@Z
     */
    virtual bool isPreservingMediumWhenPlaced(class BlockLegacy const *) const;
    /**
     * @vftbl  85
     * @symbol  ?ignoreEntitiesOnPistonMove\@BlockLegacy\@\@UEBA_NAEBVBlock\@\@\@Z
     */
    virtual bool ignoreEntitiesOnPistonMove(class Block const &) const;
    /**
     * @vftbl  86
     * @symbol  ?onFertilized\@BlockLegacy\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@PEAVActor\@\@W4FertilizerType\@\@\@Z
     */
    virtual bool onFertilized(class BlockSource &, class BlockPos const &, class Actor *, enum class FertilizerType) const;
    /**
     * @vftbl  87
     * @symbol  ?mayConsumeFertilizer\@BlockLegacy\@\@UEBA_NAEAVBlockSource\@\@\@Z
     */
    virtual bool mayConsumeFertilizer(class BlockSource &) const;
    /**
     * @vftbl  88
     * @symbol  ?canBeFertilized\@BlockLegacy\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@AEBVBlock\@\@\@Z
     */
    virtual bool canBeFertilized(class BlockSource &, class BlockPos const &, class Block const &) const;
    /**
     * @vftbl  89
     * @symbol  ?mayPick\@BlockLegacy\@\@UEBA_NXZ
     */
    virtual bool mayPick() const;
    /**
     * @vftbl  90
     * @symbol  ?mayPick\@BlockLegacy\@\@UEBA_NAEBVBlockSource\@\@AEBVBlock\@\@_N\@Z
     */
    virtual bool mayPick(class BlockSource const &, class Block const &, bool) const;
    /**
     * @vftbl  91
     * @symbol  ?mayPlace\@BlockLegacy\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@E\@Z
     */
    virtual bool mayPlace(class BlockSource &, class BlockPos const &, unsigned char) const;
    /**
     * @vftbl  92
     * @symbol  ?mayPlace\@BlockLegacy\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual bool mayPlace(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  93
     * @symbol  ?mayPlaceOn\@BlockLegacy\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual bool mayPlaceOn(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  94
     * @symbol  ?tryToPlace\@BlockLegacy\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@AEBVBlock\@\@PEBUActorBlockSyncMessage\@\@\@Z
     */
    virtual bool tryToPlace(class BlockSource &, class BlockPos const &, class Block const &, struct ActorBlockSyncMessage const *) const;
    /**
     * @vftbl  95
     * @symbol  ?tryToTill\@BlockLegacy\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVActor\@\@AEAVItemStack\@\@\@Z
     */
    virtual bool tryToTill(class BlockSource &, class BlockPos const &, class Actor &, class ItemStack &) const;
    /**
     * @vftbl  96
     * @symbol  ?breaksFallingBlocks\@BlockLegacy\@\@UEBA_NAEBVBlock\@\@VBaseGameVersion\@\@\@Z
     */
    virtual bool breaksFallingBlocks(class Block const &, class BaseGameVersion) const;
    /**
     * @vftbl  97
     * @symbol  ?destroy\@BlockLegacy\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@AEBVBlock\@\@PEAVActor\@\@\@Z
     */
    virtual void destroy(class BlockSource &, class BlockPos const &, class Block const &, class Actor *) const;
    /**
     * @vftbl  98
     * @symbol  ?getIgnoresDestroyPermissions\@BlockLegacy\@\@UEBA_NAEAVActor\@\@AEBVBlockPos\@\@\@Z
     */
    virtual bool getIgnoresDestroyPermissions(class Actor &, class BlockPos const &) const;
    /**
     * @vftbl  99
     * @symbol  ?neighborChanged\@BlockLegacy\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@1\@Z
     */
    virtual void neighborChanged(class BlockSource &, class BlockPos const &, class BlockPos const &) const;
    /**
     * @vftbl  100
     * @symbol  ?getSecondPart\@BlockLegacy\@\@UEBA_NAEBVBlockSource\@\@AEBVBlockPos\@\@AEAV3\@\@Z
     */
    virtual bool getSecondPart(class BlockSource const &, class BlockPos const &, class BlockPos &) const;
    /**
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
     * @vftbl  106
     * @symbol  ?getPlacementBlock\@BlockLegacy\@\@UEBAAEBVBlock\@\@AEAVActor\@\@AEBVBlockPos\@\@EAEBVVec3\@\@H\@Z
     */
    virtual class Block const & getPlacementBlock(class Actor &, class BlockPos const &, unsigned char, class Vec3 const &, int) const;
    /**
     * @vftbl  107
     * @symbol  ?calcVariant\@BlockLegacy\@\@UEBAHAEAVBlockSource\@\@AEBVBlockPos\@\@AEBVColor\@mce\@\@\@Z
     */
    virtual int calcVariant(class BlockSource &, class BlockPos const &, class mce::Color const &) const;
    /**
     * @vftbl  108
     * @symbol  ?isAttachedTo\@BlockLegacy\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@AEAV3\@\@Z
     */
    virtual bool isAttachedTo(class BlockSource &, class BlockPos const &, class BlockPos &) const;
    /**
     * @vftbl  109
     * @symbol  ?attack\@BlockLegacy\@\@UEBA_NPEAVPlayer\@\@AEBVBlockPos\@\@\@Z
     */
    virtual bool attack(class Player *, class BlockPos const &) const;
    /**
     * @vftbl  110
     * @symbol  ?handleEntityInside\@BlockLegacy\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@PEAVActor\@\@AEAVVec3\@\@\@Z
     */
    virtual void handleEntityInside(class BlockSource &, class BlockPos const &, class Actor *, class Vec3 &) const;
    /**
     * @vftbl  111
     * @symbol  ?shouldTriggerOnStandOn\@BlockLegacy\@\@UEBA_NAEAVActor\@\@AEBVBlockPos\@\@\@Z
     */
    virtual bool shouldTriggerOnStandOn(class Actor &, class BlockPos const &) const;
    /**
     * @vftbl  112
     * @symbol  ?shouldTriggerEntityInside\@BlockLegacy\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVActor\@\@\@Z
     */
    virtual bool shouldTriggerEntityInside(class BlockSource &, class BlockPos const &, class Actor &) const;
    /**
     * @vftbl  113
     * @symbol  ?entityInside\@BlockLegacy\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVActor\@\@\@Z
     */
    virtual void entityInside(class BlockSource &, class BlockPos const &, class Actor &) const;
    /**
     * @vftbl  114
     * @symbol  ?canBeBuiltOver\@BlockLegacy\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@AEBVBlockItem\@\@\@Z
     */
    virtual bool canBeBuiltOver(class BlockSource &, class BlockPos const &, class BlockItem const &) const;
    /**
     * @vftbl  115
     * @symbol  ?canBeBuiltOver\@BlockLegacy\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual bool canBeBuiltOver(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  116
     * @symbol  ?triggerEvent\@BlockLegacy\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@HH\@Z
     */
    virtual void triggerEvent(class BlockSource &, class BlockPos const &, int, int) const;
    /**
     * @vftbl  117
     * @symbol  ?executeEvent\@BlockLegacy\@\@UEBAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAVRenderParams\@\@\@Z
     */
    virtual void executeEvent(std::string const &, class RenderParams &) const;
    /**
     * @vftbl  118
     * @symbol  ?executeEvent\@BlockLegacy\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@AEBVBlock\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAVActor\@\@\@Z
     */
    virtual void executeEvent(class BlockSource &, class BlockPos const &, class Block const &, std::string const &, class Actor &) const;
    /**
     * @vftbl  119
     * @symbol  ?executeTrigger\@BlockLegacy\@\@UEBA_NAEBVDefinitionTrigger\@\@AEAVRenderParams\@\@\@Z
     */
    virtual bool executeTrigger(class DefinitionTrigger const &, class RenderParams &) const;
    /**
     * @vftbl  120
     * @symbol  ?forceExecuteTrigger\@BlockLegacy\@\@UEBAXAEBVDefinitionTrigger\@\@AEAVRenderParams\@\@\@Z
     */
    virtual void forceExecuteTrigger(class DefinitionTrigger const &, class RenderParams &) const;
    /**
     * @vftbl  121
     * @symbol  ?getMobToSpawn\@BlockLegacy\@\@UEBAPEBVMobSpawnerData\@\@AEBVSpawnConditions\@\@AEAVBlockSource\@\@\@Z
     */
    virtual class MobSpawnerData const * getMobToSpawn(class SpawnConditions const &, class BlockSource &) const;
    /**
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
     * @vftbl  127
     * @symbol  ?getComparatorSignal\@BlockLegacy\@\@UEBAHAEAVBlockSource\@\@AEBVBlockPos\@\@AEBVBlock\@\@E\@Z
     */
    virtual int getComparatorSignal(class BlockSource &, class BlockPos const &, class Block const &, unsigned char) const;
    /**
     * @vftbl  128
     * @symbol  ?canSlide\@BlockLegacy\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual bool canSlide(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  129
     * @symbol  ?canSpawnAt\@BlockLegacy\@\@UEBA_NAEBVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual bool canSpawnAt(class BlockSource const &, class BlockPos const &) const;
    /**
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
     * @vftbl  132
     * @symbol  ?getIconYOffset\@BlockLegacy\@\@UEBAHXZ
     */
    virtual int getIconYOffset() const;
    /**
     * @vftbl  133
     * @symbol  ?buildDescriptionId\@BlockLegacy\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVBlock\@\@\@Z
     */
    virtual std::string buildDescriptionId(class Block const &) const;
    /**
     * @vftbl  134
     * @symbol  ?isAuxValueRelevantForPicking\@BlockLegacy\@\@UEBA_NXZ
     */
    virtual bool isAuxValueRelevantForPicking() const;
    /**
     * @vftbl  135
     * @symbol  ?getColor\@BlockLegacy\@\@UEBAHAEBVBlock\@\@\@Z
     */
    virtual int getColor(class Block const &) const;
    /**
     * @vftbl  136
     * @symbol  ?getColor\@BlockLegacy\@\@UEBAHAEAVBlockSource\@\@AEBVBlockPos\@\@AEBVBlock\@\@\@Z
     */
    virtual int getColor(class BlockSource &, class BlockPos const &, class Block const &) const;
    /**
     * @vftbl  137
     * @symbol  ?getColorAtPos\@BlockLegacy\@\@UEBAHAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual int getColorAtPos(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  138
     * @symbol  ?getColorForParticle\@BlockLegacy\@\@UEBAHAEAVBlockSource\@\@AEBVBlockPos\@\@AEBVBlock\@\@\@Z
     */
    virtual int getColorForParticle(class BlockSource &, class BlockPos const &, class Block const &) const;
    /**
     * @vftbl  139
     * @symbol  ?isSeasonTinted\@BlockLegacy\@\@UEBA_NAEBVBlock\@\@AEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual bool isSeasonTinted(class Block const &, class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  140
     * @symbol  ?onGraphicsModeChanged\@BlockLegacy\@\@UEAAXAEBUBlockGraphicsModeChangeContext\@\@\@Z
     */
    virtual void onGraphicsModeChanged(struct BlockGraphicsModeChangeContext const &);
    /**
     * @vftbl  141
     * @symbol  ?getShadeBrightness\@BlockLegacy\@\@UEBAMAEBVBlock\@\@\@Z
     */
    virtual float getShadeBrightness(class Block const &) const;
    /**
     * @vftbl  142
     * @symbol  ?getVisualShapeInWorld\@BlockLegacy\@\@UEBAAEBVAABB\@\@AEBVBlock\@\@AEBVIConstBlockSource\@\@AEBVBlockPos\@\@AEAV2\@_N\@Z
     */
    virtual class AABB const & getVisualShapeInWorld(class Block const &, class IConstBlockSource const &, class BlockPos const &, class AABB &, bool) const;
    /**
     * @vftbl  143
     * @symbol  ?getVisualShape\@BlockLegacy\@\@UEBAAEBVAABB\@\@AEBVBlock\@\@AEAV2\@_N\@Z
     */
    virtual class AABB const & getVisualShape(class Block const &, class AABB &, bool) const;
    /**
     * @vftbl  144
     * @symbol  ?getUIShape\@BlockLegacy\@\@UEBAAEBVAABB\@\@AEBVBlock\@\@AEAV2\@\@Z
     */
    virtual class AABB const & getUIShape(class Block const &, class AABB &) const;
    /**
     * @vftbl  145
     * @symbol  ?telemetryVariant\@BlockLegacy\@\@UEBAHAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual int telemetryVariant(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  146
     * @symbol  ?getVariant\@BlockLegacy\@\@UEBAHAEBVBlock\@\@\@Z
     */
    virtual int getVariant(class Block const &) const;
    /**
     * @vftbl  147
     * @symbol  ?canSpawnOn\@BlockLegacy\@\@UEBA_NPEAVActor\@\@\@Z
     */
    virtual bool canSpawnOn(class Actor *) const;
    /**
     * @vftbl  148
     * @symbol  ?getRenderBlock\@BlockLegacy\@\@UEBAAEBVBlock\@\@XZ
     */
    virtual class Block const & getRenderBlock() const;
    /**
     * @vftbl  149
     * @symbol  ?getMappedFace\@BlockLegacy\@\@UEBAEEAEBVBlock\@\@\@Z
     */
    virtual unsigned char getMappedFace(unsigned char, class Block const &) const;
    /**
     * @vftbl  150
     * @symbol  ?getFaceFlip\@BlockLegacy\@\@UEBA?AW4Flip\@\@EAEBVBlock\@\@\@Z
     */
    virtual enum class Flip getFaceFlip(unsigned char, class Block const &) const;
    /**
     * @vftbl  151
     * @symbol  ?animateTick\@BlockLegacy\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    virtual void animateTick(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @vftbl  152
     * @symbol  ?init\@BlockLegacy\@\@UEAAAEAV1\@XZ
     */
    virtual class BlockLegacy & init();
    /**
     * @vftbl  153
     * @symbol  ?getLightEmission\@BlockLegacy\@\@MEBA?AUBrightness\@\@AEBVBlock\@\@\@Z
     */
    virtual struct Brightness getLightEmission(class Block const &) const;
    /**
     * @vftbl  154
     * @symbol  ?addState\@BlockLegacy\@\@UEAAAEAV1\@AEBVItemState\@\@\@Z
     */
    virtual class BlockLegacy & addState(class ItemState const &);
    /**
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
     * @vftbl  157
     * @symbol  ?tryLegacyUpgrade\@BlockLegacy\@\@UEBAPEBVBlock\@\@G\@Z
     */
    virtual class Block const * tryLegacyUpgrade(unsigned short) const;
    /**
     * @vftbl  158
     * @symbol  ?dealsContactDamage\@BlockLegacy\@\@UEBA_NAEBVActor\@\@AEBVBlock\@\@_N\@Z
     */
    virtual bool dealsContactDamage(class Actor const &, class Block const &, bool) const;
    /**
     * @vftbl  159
     * @symbol  ?tryGetInfested\@BlockLegacy\@\@UEBAPEBVBlock\@\@AEBV2\@\@Z
     */
    virtual class Block const * tryGetInfested(class Block const &) const;
    /**
     * @vftbl  160
     * @symbol  ?tryGetUninfested\@BlockLegacy\@\@UEBAPEBVBlock\@\@AEBV2\@\@Z
     */
    virtual class Block const * tryGetUninfested(class Block const &) const;
    /**
     * @vftbl  161
     * @symbol  ?_addHardCodedBlockComponents\@BlockLegacy\@\@UEAAXXZ
     */
    virtual void _addHardCodedBlockComponents();
    /**
     * @vftbl  162
     * @symbol  ?onRemove\@BlockLegacy\@\@MEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual void onRemove(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  163
     * @symbol  ?onExploded\@BlockLegacy\@\@MEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@PEAVActor\@\@\@Z
     */
    virtual void onExploded(class BlockSource &, class BlockPos const &, class Actor *) const;
    /**
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
     * @vftbl  168
     * @symbol  ?onPlace\@BlockLegacy\@\@MEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual void onPlace(class BlockSource &, class BlockPos const &) const;
    /**
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
     * @vftbl  171
     * @symbol  ?tick\@BlockLegacy\@\@MEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    virtual void tick(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @vftbl  172
     * @symbol  ?randomTick\@BlockLegacy\@\@MEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    virtual void randomTick(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
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
     * @vftbl  177
     * @symbol  ?use\@BlockLegacy\@\@MEBA_NAEAVPlayer\@\@AEBVBlockPos\@\@E\@Z
     */
    virtual bool use(class Player &, class BlockPos const &, unsigned char) const;
    /**
     * @vftbl  178
     * @symbol  ?canSurvive\@BlockLegacy\@\@MEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual bool canSurvive(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  179
     * @symbol  ?getRenderLayer\@BlockLegacy\@\@MEBA?AW4BlockRenderLayer\@\@XZ
     */
    virtual enum class BlockRenderLayer getRenderLayer() const;
    /**
     * @vftbl  180
     * @symbol  ?getRenderLayer\@BlockLegacy\@\@MEBA?AW4BlockRenderLayer\@\@AEBVBlock\@\@AEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual enum class BlockRenderLayer getRenderLayer(class Block const &, class BlockSource &, class BlockPos const &) const;
    /**
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
     * @vftbl  183
     * @symbol  ?getEmissiveBrightness\@BlockLegacy\@\@MEBA?AUBrightness\@\@AEBVBlock\@\@\@Z
     */
    virtual struct Brightness getEmissiveBrightness(class Block const &) const;
    /**
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
     * @vftbl  186
     * @symbol  ?playerDestroy\@BlockLegacy\@\@MEBAXAEAVPlayer\@\@AEBVBlockPos\@\@AEBVBlock\@\@\@Z
     */
    virtual void playerDestroy(class Player &, class BlockPos const &, class Block const &) const;
    /**
     * @vftbl  187
     * @symbol  ?getResourceItem\@BlockLegacy\@\@MEBA?AVItemInstance\@\@AEAVRandomize\@\@AEBVBlock\@\@H\@Z
     */
    virtual class ItemInstance getResourceItem(class Randomize &, class Block const &, int) const;
    /**
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
     * @vftbl  190
     * @symbol  ?_executeEvent\@BlockLegacy\@\@EEBAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV?$vector\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@$$CBV12\@\@std\@\@V?$allocator\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@$$CBV12\@\@std\@\@\@2\@\@3\@AEAVRenderParams\@\@\@Z
     */
    virtual void _executeEvent(std::string const &, std::vector<struct std::pair<std::string const, std::string const>> &, class RenderParams &) const;
    /**
     * @vftbl  191
     * @symbol  ?_executeTrigger\@BlockLegacy\@\@EEBA_NAEBVDefinitionTrigger\@\@AEAV?$vector\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@$$CBV12\@\@std\@\@V?$allocator\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@$$CBV12\@\@std\@\@\@2\@\@std\@\@AEAVRenderParams\@\@\@Z
     */
    virtual bool _executeTrigger(class DefinitionTrigger const &, std::vector<struct std::pair<std::string const, std::string const>> &, class RenderParams &) const;
    /**
     * @vftbl  192
     * @symbol  ?_forceExecuteTrigger\@BlockLegacy\@\@EEBAXAEBVDefinitionTrigger\@\@AEAV?$vector\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@$$CBV12\@\@std\@\@V?$allocator\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@$$CBV12\@\@std\@\@\@2\@\@std\@\@AEAVRenderParams\@\@\@Z
     */
    virtual void _forceExecuteTrigger(class DefinitionTrigger const &, std::vector<struct std::pair<std::string const, std::string const>> &, class RenderParams &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BLOCKLEGACY
    /**
     * @symbol  ?canBeDestroyedByWaterSpread\@BlockLegacy\@\@UEBA_NXZ
     */
    MCVAPI bool canBeDestroyedByWaterSpread() const;
    /**
     * @symbol  ?canBeSilkTouched\@BlockLegacy\@\@UEBA_NXZ
     */
    MCVAPI bool canBeSilkTouched() const;
    /**
     * @symbol  ?canDamperVibrations\@BlockLegacy\@\@UEBA_NXZ
     */
    MCVAPI bool canDamperVibrations() const;
    /**
     * @symbol  ?canHaveExtraData\@BlockLegacy\@\@UEBA_NXZ
     */
    MCVAPI bool canHaveExtraData() const;
    /**
     * @symbol  ?canOccludeVibrations\@BlockLegacy\@\@UEBA_NXZ
     */
    MCVAPI bool canOccludeVibrations() const;
    /**
     * @symbol  ?causesFreezeEffect\@BlockLegacy\@\@UEBA_NXZ
     */
    MCVAPI bool causesFreezeEffect() const;
    /**
     * @symbol  ?detachesOnPistonMove\@BlockLegacy\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCVAPI bool detachesOnPistonMove(class BlockSource &, class BlockPos const &) const;
    /**
     * @symbol  ?hasComparatorSignal\@BlockLegacy\@\@UEBA_NXZ
     */
    MCVAPI bool hasComparatorSignal() const;
    /**
     * @symbol  ?hasVariableLighting\@BlockLegacy\@\@UEBA_NXZ
     */
    MCVAPI bool hasVariableLighting() const;
    /**
     * @symbol  ?isBounceBlock\@BlockLegacy\@\@UEBA_NXZ
     */
    MCVAPI bool isBounceBlock() const;
    /**
     * @symbol  ?isButtonBlock\@BlockLegacy\@\@UEBA_NXZ
     */
    MCVAPI bool isButtonBlock() const;
    /**
     * @symbol  ?isCandleCakeBlock\@BlockLegacy\@\@UEBA_NXZ
     */
    MCVAPI bool isCandleCakeBlock() const;
    /**
     * @symbol  ?isContainerBlock\@BlockLegacy\@\@UEBA_NXZ
     */
    MCVAPI bool isContainerBlock() const;
    /**
     * @symbol  ?isCraftingBlock\@BlockLegacy\@\@UEBA_NXZ
     */
    MCVAPI bool isCraftingBlock() const;
    /**
     * @symbol  ?isCropBlock\@BlockLegacy\@\@MEBA_NXZ
     */
    MCVAPI bool isCropBlock() const;
    /**
     * @symbol  ?isDoorBlock\@BlockLegacy\@\@UEBA_NXZ
     */
    MCVAPI bool isDoorBlock() const;
    /**
     * @symbol  ?isFenceBlock\@BlockLegacy\@\@UEBA_NXZ
     */
    MCVAPI bool isFenceBlock() const;
    /**
     * @symbol  ?isFenceGateBlock\@BlockLegacy\@\@UEBA_NXZ
     */
    MCVAPI bool isFenceGateBlock() const;
    /**
     * @symbol  ?isHurtableBlock\@BlockLegacy\@\@UEBA_NXZ
     */
    MCVAPI bool isHurtableBlock() const;
    /**
     * @symbol  ?isInteractiveBlock\@BlockLegacy\@\@MEBA_NXZ
     */
    MCVAPI bool isInteractiveBlock() const;
    /**
     * @symbol  ?isLeverBlock\@BlockLegacy\@\@UEBA_NXZ
     */
    MCVAPI bool isLeverBlock() const;
    /**
     * @symbol  ?isMultifaceBlock\@BlockLegacy\@\@UEBA_NXZ
     */
    MCVAPI bool isMultifaceBlock() const;
    /**
     * @symbol  ?isRailBlock\@BlockLegacy\@\@UEBA_NXZ
     */
    MCVAPI bool isRailBlock() const;
    /**
     * @symbol  ?isSilentWhenJumpingOff\@BlockLegacy\@\@UEBA_NXZ
     */
    MCVAPI bool isSilentWhenJumpingOff() const;
    /**
     * @symbol  ?isSlabBlock\@BlockLegacy\@\@UEBA_NXZ
     */
    MCVAPI bool isSlabBlock() const;
    /**
     * @symbol  ?isStairBlock\@BlockLegacy\@\@UEBA_NXZ
     */
    MCVAPI bool isStairBlock() const;
    /**
     * @symbol  ?isStemBlock\@BlockLegacy\@\@UEBA_NXZ
     */
    MCVAPI bool isStemBlock() const;
    /**
     * @symbol  ?isThinFenceBlock\@BlockLegacy\@\@UEBA_NXZ
     */
    MCVAPI bool isThinFenceBlock() const;
    /**
     * @symbol  ?isWallBlock\@BlockLegacy\@\@UEBA_NXZ
     */
    MCVAPI bool isWallBlock() const;
    /**
     * @symbol  ?onPlayerPlacing\@BlockLegacy\@\@MEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVActor\@\@E\@Z
     */
    MCVAPI void onPlayerPlacing(class BlockSource &, class BlockPos const &, class Actor &, unsigned char) const;
    /**
     * @symbol  ?onStepOff\@BlockLegacy\@\@MEBAXAEAVActor\@\@AEBVBlockPos\@\@\@Z
     */
    MCVAPI void onStepOff(class Actor &, class BlockPos const &) const;
    /**
     * @symbol  ?onStepOn\@BlockLegacy\@\@MEBAXAEAVActor\@\@AEBVBlockPos\@\@\@Z
     */
    MCVAPI void onStepOn(class Actor &, class BlockPos const &) const;
    /**
     * @symbol  ?pushesUpFallingBlocks\@BlockLegacy\@\@UEBA_NXZ
     */
    MCVAPI bool pushesUpFallingBlocks() const;
    /**
     * @symbol  ?shouldTickOnSetBlock\@BlockLegacy\@\@MEBA_NXZ
     */
    MCVAPI bool shouldTickOnSetBlock() const;
    /**
     * @symbol  ?spawnBurnResources\@BlockLegacy\@\@UEBA_NAEAVBlockSource\@\@MMM\@Z
     */
    MCVAPI bool spawnBurnResources(class BlockSource &, float, float, float) const;
    /**
     * @symbol  ?waterSpreadCausesSpawn\@BlockLegacy\@\@UEBA_NXZ
     */
    MCVAPI bool waterSpreadCausesSpawn() const;
#endif
    /**
     * @symbol  ??0BlockLegacy\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@HAEBVMaterial\@\@\@Z
     */
    MCAPI BlockLegacy(std::string const &, int, class Material const &);
    /**
     * @symbol  ?_isDataDrivingVanillaBlocksAndItems\@BlockLegacy\@\@QEBA_NXZ
     */
    MCAPI bool _isDataDrivingVanillaBlocksAndItems() const;
    /**
     * @symbol  ?addAABB\@BlockLegacy\@\@QEBA_NAEBVAABB\@\@PEBV2\@AEAV?$vector\@VAABB\@\@V?$allocator\@VAABB\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI bool addAABB(class AABB const &, class AABB const *, std::vector<class AABB> &) const;
    /**
     * @symbol  ?addBlockProperties\@BlockLegacy\@\@QEAAAEAV1\@W4BlockProperty\@\@\@Z
     */
    MCAPI class BlockLegacy & addBlockProperties(enum class BlockProperty);
    /**
     * @symbol  ?addTag\@BlockLegacy\@\@QEAAAEAV1\@AEBVHashedString\@\@\@Z
     */
    MCAPI class BlockLegacy & addTag(class HashedString const &);
    /**
     * @symbol  ?anyOf\@BlockLegacy\@\@QEBA_NV?$initializer_list\@$$CBVHashedString\@\@\@std\@\@\@Z
     */
    MCAPI bool anyOf(class std::initializer_list<class HashedString const>) const;
    /**
     * @symbol  ?buildDescriptionName\@BlockLegacy\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVBlock\@\@\@Z
     */
    MCAPI std::string buildDescriptionName(class Block const &) const;
    /**
     * @symbol  ?canInstatick\@BlockLegacy\@\@QEBA_NXZ
     */
    MCAPI bool canInstatick() const;
    /**
     * @symbol  ?createBlockPermutations\@BlockLegacy\@\@QEAAXI\@Z
     */
    MCAPI void createBlockPermutations(unsigned int);
    /**
     * @symbol  ?createWeakPtr\@BlockLegacy\@\@QEBA?AV?$WeakPtr\@VBlockLegacy\@\@\@\@XZ
     */
    MCAPI class WeakPtr<class BlockLegacy> createWeakPtr() const;
    /**
     * @symbol  ?forEachBlockPermutation\@BlockLegacy\@\@QEBAXV?$function\@$$A6A_NAEBVBlock\@\@\@Z\@std\@\@\@Z
     */
    MCAPI void forEachBlockPermutation(class std::function<bool (class Block const &)>) const;
    /**
     * @symbol  ?forEachItemStateInstance\@BlockLegacy\@\@QEBAXV?$function\@$$A6A_NAEBVItemStateInstance\@\@\@Z\@std\@\@\@Z
     */
    MCAPI void forEachItemStateInstance(class std::function<bool (class ItemStateInstance const &)>) const;
    /**
     * @symbol  ?getAllowsRunes\@BlockLegacy\@\@QEBA_NXZ
     */
    MCAPI bool getAllowsRunes() const;
    /**
     * @symbol  ?getBlockEntityType\@BlockLegacy\@\@QEBA?AW4BlockActorType\@\@XZ
     */
    MCAPI enum class BlockActorType getBlockEntityType() const;
    /**
     * @symbol  ?getBlockItemId\@BlockLegacy\@\@QEBAFXZ
     */
    MCAPI short getBlockItemId() const;
    /**
     * @symbol  ?getBlockState\@BlockLegacy\@\@QEBAPEBVItemState\@\@AEBVHashedString\@\@\@Z
     */
    MCAPI class ItemState const * getBlockState(class HashedString const &) const;
    /**
     * @symbol  ?getBlockStateGroup\@BlockLegacy\@\@QEAAPEAVBlockStateGroup\@\@XZ
     */
    MCAPI class BlockStateGroup * getBlockStateGroup();
    /**
     * @symbol  ?getCommandNames\@BlockLegacy\@\@QEBA?AV?$vector\@UCommandName\@\@V?$allocator\@UCommandName\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<struct CommandName> getCommandNames() const;
    /**
     * @symbol  ?getCreativeCategory\@BlockLegacy\@\@QEBA?AW4CreativeItemCategory\@\@XZ
     */
    MCAPI enum class CreativeItemCategory getCreativeCategory() const;
    /**
     * @symbol  ?getDebugText\@BlockLegacy\@\@QEBAXAEAV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI void getDebugText(std::vector<std::string> &, class BlockPos const &) const;
    /**
     * @symbol  ?getDefaultState\@BlockLegacy\@\@QEBAAEBVBlock\@\@XZ
     */
    MCAPI class Block const & getDefaultState() const;
    /**
     * @symbol  ?getDescriptionId\@BlockLegacy\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const & getDescriptionId() const;
    /**
     * @symbol  ?getEntity\@BlockLegacy\@\@QEBAAEBVEntityContext\@\@XZ
     */
    MCAPI class EntityContext const & getEntity() const;
    /**
     * @symbol  ?getEntityForModification\@BlockLegacy\@\@QEBAAEAVEntityContext\@\@XZ
     */
    MCAPI class EntityContext & getEntityForModification() const;
    /**
     * @symbol  ?getEntityNoCheck\@BlockLegacy\@\@QEBAAEBVEntityContext\@\@XZ
     */
    MCAPI class EntityContext const & getEntityNoCheck() const;
    /**
     * @symbol  ?getExperienceDrop\@BlockLegacy\@\@QEBAHAEAVRandom\@\@\@Z
     */
    MCAPI int getExperienceDrop(class Random &) const;
    /**
     * @symbol  ?getMaterial\@BlockLegacy\@\@QEBAAEBVMaterial\@\@XZ
     */
    MCAPI class Material const & getMaterial() const;
    /**
     * @symbol  ?getNamespace\@BlockLegacy\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const & getNamespace() const;
    /**
     * @symbol  ?getRawNameHash\@BlockLegacy\@\@QEBAAEBVHashedString\@\@XZ
     */
    MCAPI class HashedString const & getRawNameHash() const;
    /**
     * @symbol  ?getRawNameId\@BlockLegacy\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const & getRawNameId() const;
    /**
     * @symbol  ?getRequiredBaseGameVersion\@BlockLegacy\@\@QEBAAEBVBaseGameVersion\@\@XZ
     */
    MCAPI class BaseGameVersion const & getRequiredBaseGameVersion() const;
    /**
     * @symbol  ?getResourceDrops\@BlockLegacy\@\@QEBA?AV?$vector\@VItemStack\@\@V?$allocator\@VItemStack\@\@\@std\@\@\@std\@\@AEBVBlock\@\@AEAVRandomize\@\@AEBUResourceDropsContext\@\@\@Z
     */
    MCAPI std::vector<class ItemStack> getResourceDrops(class Block const &, class Randomize &, struct ResourceDropsContext const &) const;
    /**
     * @symbol  ?hasBlockEntity\@BlockLegacy\@\@QEBA_NXZ
     */
    MCAPI bool hasBlockEntity() const;
    /**
     * @symbol  ?hasProperty\@BlockLegacy\@\@QEBA_NW4BlockProperty\@\@\@Z
     */
    MCAPI bool hasProperty(enum class BlockProperty) const;
    /**
     * @symbol  ?hasState\@BlockLegacy\@\@QEBA_NAEBVHashedString\@\@\@Z
     */
    MCAPI bool hasState(class HashedString const &) const;
    /**
     * @symbol  ?hasState\@BlockLegacy\@\@QEBA_NAEBVItemState\@\@\@Z
     */
    MCAPI bool hasState(class ItemState const &) const;
    /**
     * @symbol  ?hasTag\@BlockLegacy\@\@QEBA_NAEBVHashedString\@\@\@Z
     */
    MCAPI bool hasTag(class HashedString const &) const;
    /**
     * @symbol  ?hasTag\@BlockLegacy\@\@QEBA_NAEB_K\@Z
     */
    MCAPI bool hasTag(unsigned __int64 const &) const;
    /**
     * @symbol  ?initEntity\@BlockLegacy\@\@QEAAXAEAVEntityRegistry\@\@\@Z
     */
    MCAPI void initEntity(class EntityRegistry &);
    /**
     * @symbol  ?initializeBlockStateGroup\@BlockLegacy\@\@QEAAXXZ
     */
    MCAPI void initializeBlockStateGroup();
    /**
     * @symbol  ?isEmpty\@BlockLegacy\@\@QEBA_NXZ
     */
    MCAPI bool isEmpty() const;
    /**
     * @symbol  ?isFullAndOpaque\@BlockLegacy\@\@QEBA_NXZ
     */
    MCAPI bool isFullAndOpaque() const;
    /**
     * @symbol  ?isHeavy\@BlockLegacy\@\@QEBA_NXZ
     */
    MCAPI bool isHeavy() const;
    /**
     * @symbol  ?isMotionBlockingBlock\@BlockLegacy\@\@QEBA_NXZ
     */
    MCAPI bool isMotionBlockingBlock() const;
    /**
     * @symbol  ?isSolidBlockingBlock\@BlockLegacy\@\@QEBA_NXZ
     */
    MCAPI bool isSolidBlockingBlock() const;
    /**
     * @symbol  ?isVanilla\@BlockLegacy\@\@QEBA_NXZ
     */
    MCAPI bool isVanilla() const;
    /**
     * @symbol  ?matchesStates\@BlockLegacy\@\@QEBA_NAEBV1\@\@Z
     */
    MCAPI bool matchesStates(class BlockLegacy const &) const;
    /**
     * @symbol  ??9BlockLegacy\@\@QEBA_NAEBVHashedString\@\@\@Z
     */
    MCAPI bool operator!=(class HashedString const &) const;
    /**
     * @symbol  ??8BlockLegacy\@\@QEBA_NAEBVHashedString\@\@\@Z
     */
    MCAPI bool operator==(class HashedString const &) const;
    /**
     * @symbol  ?overrideBlockProperties\@BlockLegacy\@\@QEAAAEAV1\@W4BlockProperty\@\@\@Z
     */
    MCAPI class BlockLegacy & overrideBlockProperties(enum class BlockProperty);
    /**
     * @symbol  ?setAllowsRunes\@BlockLegacy\@\@QEAAAEAV1\@_N\@Z
     */
    MCAPI class BlockLegacy & setAllowsRunes(bool);
    /**
     * @symbol  ?setBlockTintType\@BlockLegacy\@\@QEAAAEAV1\@W4BlockTintType\@\@\@Z
     */
    MCAPI class BlockLegacy & setBlockTintType(enum class BlockTintType);
    /**
     * @symbol  ?setCanBeExtraBlock\@BlockLegacy\@\@QEAAAEAV1\@_N\@Z
     */
    MCAPI class BlockLegacy & setCanBeExtraBlock(bool);
    /**
     * @symbol  ?setCanBeOriginalSurface\@BlockLegacy\@\@QEAAAEAV1\@_N\@Z
     */
    MCAPI class BlockLegacy & setCanBeOriginalSurface(bool);
    /**
     * @symbol  ?setCategory\@BlockLegacy\@\@QEAAAEAV1\@W4CreativeItemCategory\@\@\@Z
     */
    MCAPI class BlockLegacy & setCategory(enum class CreativeItemCategory);
    /**
     * @symbol  ?setCreativeEnumState\@BlockLegacy\@\@QEAAAEAV1\@AEBVItemState\@\@\@Z
     */
    MCAPI class BlockLegacy & setCreativeEnumState(class ItemState const &);
    /**
     * @symbol  ?setCreativeGroup\@BlockLegacy\@\@QEAAAEAV1\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class BlockLegacy & setCreativeGroup(std::string const &);
    /**
     * @symbol  ?setDefaultState\@BlockLegacy\@\@QEAAXAEBVBlock\@\@\@Z
     */
    MCAPI void setDefaultState(class Block const &);
    /**
     * @symbol  ?setDestroyTime\@BlockLegacy\@\@QEAAAEAV1\@M\@Z
     */
    MCAPI class BlockLegacy & setDestroyTime(float);
    /**
     * @symbol  ?setExperienceDrop\@BlockLegacy\@\@QEAAAEAV1\@UIntRange\@\@\@Z
     */
    MCAPI class BlockLegacy & setExperienceDrop(struct IntRange);
    /**
     * @symbol  ?setExplodeable\@BlockLegacy\@\@QEAAAEAV1\@M\@Z
     */
    MCAPI class BlockLegacy & setExplodeable(float);
    /**
     * @symbol  ?setFlammable\@BlockLegacy\@\@QEAAAEAV1\@W4FlameOdds\@\@W4BurnOdds\@\@W4LavaFlammable\@\@\@Z
     */
    MCAPI class BlockLegacy & setFlammable(enum class FlameOdds, enum class BurnOdds, enum class LavaFlammable);
    /**
     * @symbol  ?setIgnoreBlockForInsideCubeRenderer\@BlockLegacy\@\@QEAAX_N\@Z
     */
    MCAPI void setIgnoreBlockForInsideCubeRenderer(bool);
    /**
     * @symbol  ?setIsHiddenInCommands\@BlockLegacy\@\@QEAAAEAV1\@_N\@Z
     */
    MCAPI class BlockLegacy & setIsHiddenInCommands(bool);
    /**
     * @symbol  ?setIsInteraction\@BlockLegacy\@\@QEAAX_N\@Z
     */
    MCAPI void setIsInteraction(bool);
    /**
     * @symbol  ?setIsVanillaBlock\@BlockLegacy\@\@QEAAX_N\@Z
     */
    MCAPI void setIsVanillaBlock(bool);
    /**
     * @symbol  ?setLightBlock\@BlockLegacy\@\@QEAAAEAV1\@UBrightness\@\@\@Z
     */
    MCAPI class BlockLegacy & setLightBlock(struct Brightness);
    /**
     * @symbol  ?setLightEmission\@BlockLegacy\@\@QEAAAEAV1\@UBrightness\@\@\@Z
     */
    MCAPI class BlockLegacy & setLightEmission(struct Brightness);
    /**
     * @symbol  ?setMapColor\@BlockLegacy\@\@QEAAAEAV1\@AEBVColor\@mce\@\@\@Z
     */
    MCAPI class BlockLegacy & setMapColor(class mce::Color const &);
    /**
     * @symbol  ?setMinRequiredBaseGameVersion\@BlockLegacy\@\@QEAAAEAV1\@AEBVBaseGameVersion\@\@\@Z
     */
    MCAPI class BlockLegacy & setMinRequiredBaseGameVersion(class BaseGameVersion const &);
    /**
     * @symbol  ?setNameId\@BlockLegacy\@\@QEAAAEAV1\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class BlockLegacy & setNameId(std::string const &);
    /**
     * @symbol  ?setOnlyPermutationandDefaultState\@BlockLegacy\@\@QEAAXV?$unique_ptr\@VBlock\@\@U?$default_delete\@VBlock\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void setOnlyPermutationandDefaultState(std::unique_ptr<class Block>);
    /**
     * @symbol  ?setPushesOutItems\@BlockLegacy\@\@QEAAX_N\@Z
     */
    MCAPI void setPushesOutItems(bool);
    /**
     * @symbol  ?setRandomTicking\@BlockLegacy\@\@QEBAX_N\@Z
     */
    MCAPI void setRandomTicking(bool) const;
    /**
     * @symbol  ?setRandomTickingExtraLayer\@BlockLegacy\@\@QEBAX_N\@Z
     */
    MCAPI void setRandomTickingExtraLayer(bool) const;
    /**
     * @symbol  ?setResourceDropsStrategy\@BlockLegacy\@\@QEAAXV?$unique_ptr\@VIResourceDropsStrategy\@\@U?$default_delete\@VIResourceDropsStrategy\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void setResourceDropsStrategy(std::unique_ptr<class IResourceDropsStrategy>);
    /**
     * @symbol  ?setReturnDefaultBlockOnUnidentifiedBlockState\@BlockLegacy\@\@QEAAAEAV1\@XZ
     */
    MCAPI class BlockLegacy & setReturnDefaultBlockOnUnidentifiedBlockState();
    /**
     * @symbol  ?setSolid\@BlockLegacy\@\@QEAAX_N\@Z
     */
    MCAPI void setSolid(bool);
    /**
     * @symbol  ?setVisualShape\@BlockLegacy\@\@QEAAXAEBVAABB\@\@\@Z
     */
    MCAPI void setVisualShape(class AABB const &);
    /**
     * @symbol  ?setVisualShape\@BlockLegacy\@\@QEAAXAEBVVec3\@\@0\@Z
     */
    MCAPI void setVisualShape(class Vec3 const &, class Vec3 const &);
    /**
     * @symbol  ?tryGetStateFromLegacyData\@BlockLegacy\@\@QEBAPEBVBlock\@\@G\@Z
     */
    MCAPI class Block const * tryGetStateFromLegacyData(unsigned short) const;
    /**
     * @symbol  ?BLOCK_DESCRIPTION_PREFIX\@BlockLegacy\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const BLOCK_DESCRIPTION_PREFIX;
    /**
     * @symbol  ?SIZE_OFFSET\@BlockLegacy\@\@2MB
     */
    MCAPI static float const SIZE_OFFSET;
    /**
     * @symbol  ?buildDescriptionIdFromNameInfo\@BlockLegacy\@\@SA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBUNameInfo\@1\@\@Z
     */
    MCAPI static std::string buildDescriptionIdFromNameInfo(struct BlockLegacy::NameInfo const &);
    /**
     * @symbol  ?extractBlockNameInfo\@BlockLegacy\@\@SA?AUNameInfo\@1\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI static struct BlockLegacy::NameInfo extractBlockNameInfo(std::string const &);
    /**
     * @symbol  ?getPlacementFacingAll\@BlockLegacy\@\@SAEAEAVActor\@\@AEBVBlockPos\@\@M\@Z
     */
    MCAPI static unsigned char getPlacementFacingAll(class Actor &, class BlockPos const &, float);
    /**
     * @symbol  ?getPlacementFacingAllExceptAxisY\@BlockLegacy\@\@SAEAEAVActor\@\@AEBVBlockPos\@\@M\@Z
     */
    MCAPI static unsigned char getPlacementFacingAllExceptAxisY(class Actor &, class BlockPos const &, float);
    /**
     * @symbol  ?popResource\@BlockLegacy\@\@SAPEAVItemActor\@\@AEAVBlockSource\@\@AEBVBlockPos\@\@AEBVItemInstance\@\@\@Z
     */
    MCAPI static class ItemActor * popResource(class BlockSource &, class BlockPos const &, class ItemInstance const &);
    /**
     * @symbol  ?popResource\@BlockLegacy\@\@SAPEAVItemActor\@\@AEAVBlockSource\@\@AEBVBlockPos\@\@AEBVItemStack\@\@\@Z
     */
    MCAPI static class ItemActor * popResource(class BlockSource &, class BlockPos const &, class ItemStack const &);
    /**
     * @symbol  ?spawnResources\@BlockLegacy\@\@SAXAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandomize\@\@M\@Z
     */
    MCAPI static void spawnResources(class BlockSource &, class BlockPos const &, class Randomize &, float);

//protected:
    /**
     * @symbol  ?_getBlockShape\@BlockLegacy\@\@IEBA?AW4BlockShape\@\@XZ
     */
    MCAPI enum class BlockShape _getBlockShape() const;
    /**
     * @symbol  ?clip\@BlockLegacy\@\@IEBA?AVHitResult\@\@AEBVBlockSource\@\@AEBVBlockPos\@\@AEBVVec3\@\@2_NAEBVAABB\@\@\@Z
     */
    MCAPI class HitResult clip(class BlockSource const &, class BlockPos const &, class Vec3 const &, class Vec3 const &, bool, class AABB const &) const;
    /**
     * @symbol  ?forEachBlockPermutationMutable\@BlockLegacy\@\@IEAA_NV?$function\@$$A6A_NAEAVBlock\@\@\@Z\@std\@\@\@Z
     */
    MCAPI bool forEachBlockPermutationMutable(class std::function<bool (class Block &)>);
    /**
     * @symbol  ?getBurnOdds\@BlockLegacy\@\@IEBAHXZ
     */
    MCAPI int getBurnOdds() const;
    /**
     * @symbol  ?getDestroySpeed\@BlockLegacy\@\@IEBAMXZ
     */
    MCAPI float getDestroySpeed() const;
    /**
     * @symbol  ?getFlameOdds\@BlockLegacy\@\@IEBAHXZ
     */
    MCAPI int getFlameOdds() const;
    /**
     * @symbol  ?getFriction\@BlockLegacy\@\@IEBAMXZ
     */
    MCAPI float getFriction() const;
    /**
     * @symbol  ?getLight\@BlockLegacy\@\@IEBA?AUBrightness\@\@XZ
     */
    MCAPI struct Brightness getLight() const;
    /**
     * @symbol  ?isLavaFlammable\@BlockLegacy\@\@IEBA_NXZ
     */
    MCAPI bool isLavaFlammable() const;
    /**
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
     * @symbol  ?initParams\@BlockLegacy\@\@AEBAXAEAVRenderParams\@\@AEAVBlockSource\@\@AEBVBlockPos\@\@PEAVActor\@\@\@Z
     */
    MCAPI void initParams(class RenderParams &, class BlockSource &, class BlockPos const &, class Actor *) const;

protected:

private:

};