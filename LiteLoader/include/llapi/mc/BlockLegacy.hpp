/**
 * @file  MC/BlockLegacy.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @symbol __unk_destructor_0
     */
    virtual ~BlockLegacy();
    /**
     * @hash   -1451094415
     * @vftbl  1
     * @symbol ?getStateFromLegacyData@BlockLegacy@@UEBAAEBVBlock@@G@Z
     */
    virtual class Block const & getStateFromLegacyData(unsigned short) const;
    /**
     * @hash   758825954
     * @vftbl  2
     * @symbol ?newBlockEntity@BlockLegacy@@UEBA?AV?$shared_ptr@VBlockActor@@@std@@AEBVBlockPos@@AEBVBlock@@@Z
     */
    virtual class std::shared_ptr<class BlockActor> newBlockEntity(class BlockPos const &, class Block const &) const;
    /**
     * @hash   1299484834
     * @vftbl  3
     * @symbol ?getNextBlockPermutation@BlockLegacy@@UEBAPEBVBlock@@AEBV2@@Z
     */
    virtual class Block const * getNextBlockPermutation(class Block const &) const;
    /**
     * @hash   -1149020328
     * @vftbl  4
     * @symbol ?hasTag@BlockLegacy@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    virtual bool hasTag(class BlockSource &, class BlockPos const &, class Block const &, std::string const &) const;
    /**
     * @hash   -1822792580
     * @vftbl  5
     * @symbol ?getCollisionShape@BlockLegacy@@UEBA_NAEAVAABB@@AEBVBlock@@AEBVIConstBlockSource@@AEBVBlockPos@@V?$optional_ref@$$CBVGetCollisionShapeInterface@@@@@Z
     */
    virtual bool getCollisionShape(class AABB &, class Block const &, class IConstBlockSource const &, class BlockPos const &, class optional_ref<class GetCollisionShapeInterface const>) const;
    /**
     * @hash   189844288
     * @vftbl  6
     * @symbol ?isObstructingChests@BlockLegacy@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
     */
    virtual bool isObstructingChests(class BlockSource &, class BlockPos const &, class Block const &) const;
    /**
     * @hash   1766737568
     * @vftbl  7
     * @symbol ?randomlyModifyPosition@BlockLegacy@@UEBA?AVVec3@@AEBVBlockPos@@AEAH@Z
     */
    virtual class Vec3 randomlyModifyPosition(class BlockPos const &, int &) const;
    /**
     * @hash   -180793541
     * @vftbl  8
     * @symbol ?randomlyModifyPosition@BlockLegacy@@UEBA?AVVec3@@AEBVBlockPos@@@Z
     */
    virtual class Vec3 randomlyModifyPosition(class BlockPos const &) const;
    /**
     * @hash   578471142
     * @vftbl  9
     * @symbol ?addAABBs@BlockLegacy@@UEBAXAEBVBlock@@AEBVBlockSource@@AEBVBlockPos@@PEBVAABB@@AEAV?$vector@VAABB@@V?$allocator@VAABB@@@std@@@std@@@Z
     */
    virtual void addAABBs(class Block const &, class BlockSource const &, class BlockPos const &, class AABB const *, std::vector<class AABB> &) const;
    /**
     * @hash   1604719318
     * @vftbl  10
     * @symbol ?getAABB@BlockLegacy@@UEBAAEBVAABB@@AEBVIConstBlockSource@@AEBVBlockPos@@AEBVBlock@@AEAV2@_N@Z
     */
    virtual class AABB const & getAABB(class IConstBlockSource const &, class BlockPos const &, class Block const &, class AABB &, bool) const;
    /**
     * @hash   -116006745
     * @vftbl  11
     * @symbol ?addCollisionShapes@BlockLegacy@@UEBA_NAEBVBlock@@AEBVBlockSource@@AEBVBlockPos@@PEBVAABB@@AEAV?$vector@VAABB@@V?$allocator@VAABB@@@std@@@std@@V?$optional_ref@$$CBVGetCollisionShapeInterface@@@@@Z
     */
    virtual bool addCollisionShapes(class Block const &, class BlockSource const &, class BlockPos const &, class AABB const *, std::vector<class AABB> &, class optional_ref<class GetCollisionShapeInterface const>) const;
    /**
     * @hash   -1491047069
     * @vftbl  12
     * @symbol ?updateTallestCollisionShape@BlockLegacy@@UEBA_NAEBVBlock@@AEBVBlockSource@@AEBVBlockPos@@AEBVAABB@@V?$optional_ref@$$CBVGetCollisionShapeInterface@@@@AEAV5@AEBVVec3@@AEAM@Z
     */
    virtual bool updateTallestCollisionShape(class Block const &, class BlockSource const &, class BlockPos const &, class AABB const &, class optional_ref<class GetCollisionShapeInterface const>, class AABB &, class Vec3 const &, float &) const;
    /**
     * @hash   -1414324183
     * @vftbl  13
     * @symbol ?getOutline@BlockLegacy@@UEBAAEBVAABB@@AEAVBlockSource@@AEBVBlockPos@@AEAV2@@Z
     */
    virtual class AABB const & getOutline(class BlockSource &, class BlockPos const &, class AABB &) const;
    /**
     * @hash   621467166
     * @vftbl  14
     * @symbol ?getLiquidClipVolume@BlockLegacy@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVAABB@@@Z
     */
    virtual bool getLiquidClipVolume(class BlockSource &, class BlockPos const &, class AABB &) const;
    /**
     * @hash   -1587666303
     * @vftbl  15
     * @symbol ?onProjectileHit@BlockLegacy@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEBVActor@@@Z
     */
    virtual void onProjectileHit(class BlockSource &, class BlockPos const &, class Actor const &) const;
    /**
     * @hash   -662868562
     * @vftbl  16
     * @symbol ?onLightningHit@BlockLegacy@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    virtual void onLightningHit(class BlockSource &, class BlockPos const &) const;
    /**
     * @hash   -122867335
     * @vftbl  17
     * @symbol ?liquidCanFlowIntoFromDirection@BlockLegacy@@UEBA_NEAEBV?$function@$$A6AAEBVBlock@@AEBVBlockPos@@@Z@std@@AEBVBlockPos@@@Z
     */
    virtual bool liquidCanFlowIntoFromDirection(unsigned char, class std::function<class Block const & (class BlockPos const &)> const &, class BlockPos const &) const;
    /**
     * @hash   1626977955
     * @vftbl  18
     * @symbol ?isSolid@BlockLegacy@@UEBA_NXZ
     */
    virtual bool isSolid() const;
    /**
     * @vftbl  19
     * @symbol __unk_vfn_19
     */
    virtual void __unk_vfn_19();
    /**
     * @hash   1323959388
     * @vftbl  20
     * @symbol ?isStrippable@BlockLegacy@@UEBA_NAEBVBlock@@@Z
     */
    virtual bool isStrippable(class Block const &) const;
    /**
     * @hash   -482216272
     * @vftbl  21
     * @symbol ?getStrippedBlock@BlockLegacy@@UEBAAEBVBlock@@AEBV2@@Z
     */
    virtual class Block const & getStrippedBlock(class Block const &) const;
    /**
     * @hash   1476404245
     * @vftbl  22
     * @symbol ?canProvideSupport@BlockLegacy@@UEBA_NAEBVBlock@@EW4BlockSupportType@@@Z
     */
    virtual bool canProvideSupport(class Block const &, unsigned char, enum BlockSupportType) const;
    /**
     * @hash   -1168955886
     * @vftbl  23
     * @symbol ?canProvideFullSupport@BlockLegacy@@UEBA_NAEBVBlock@@E@Z
     */
    virtual bool canProvideFullSupport(class Block const &, unsigned char) const;
    /**
     * @hash   -1180656835
     * @vftbl  24
     * @symbol ?canProvideMultifaceSupport@BlockLegacy@@UEBA_NAEBVBlock@@E@Z
     */
    virtual bool canProvideMultifaceSupport(class Block const &, unsigned char) const;
    /**
     * @hash   1208549389
     * @vftbl  25
     * @symbol ?canConnect@BlockLegacy@@UEBA_NAEBVBlock@@E0@Z
     */
    virtual bool canConnect(class Block const &, unsigned char, class Block const &) const;
    /**
     * @hash   -1922569900
     * @vftbl  26
     * @symbol ?getConnectedDirections@BlockLegacy@@UEBAXAEBVBlock@@AEBVBlockPos@@AEBVIConstBlockSource@@AEA_N333@Z
     */
    virtual void getConnectedDirections(class Block const &, class BlockPos const &, class IConstBlockSource const &, bool &, bool &, bool &, bool &) const;
    /**
     * @hash   358776402
     * @vftbl  27
     * @symbol ?isAir@BlockLegacy@@UEBA_NXZ
     */
    virtual bool isAir() const;
    /**
     * @hash   -2131518002
     * @vftbl  28
     * @symbol ?tryGetCopperBehavior@BlockLegacy@@UEBAPEBVCopperBehavior@@XZ
     */
    virtual class CopperBehavior const * tryGetCopperBehavior() const;
    /**
     * @vftbl  29
     * @symbol __unk_vfn_29
     */
    virtual void __unk_vfn_29();
    /**
     * @vftbl  30
     * @symbol __unk_vfn_30
     */
    virtual void __unk_vfn_30();
    /**
     * @hash   -1611122672
     * @vftbl  31
     * @symbol ?isClimbable@BlockLegacy@@UEBA_NAEBUIActorMovementProxy@@@Z
     */
    virtual bool isClimbable(struct IActorMovementProxy const &) const;
    /**
     * @vftbl  32
     * @symbol __unk_vfn_32
     */
    virtual void __unk_vfn_32();
    /**
     * @vftbl  33
     * @symbol __unk_vfn_33
     */
    virtual void __unk_vfn_33();
    /**
     * @vftbl  34
     * @symbol __unk_vfn_34
     */
    virtual void __unk_vfn_34();
    /**
     * @hash   -776433468
     * @vftbl  35
     * @symbol ?isWaterBlocking@BlockLegacy@@UEBA_NXZ
     */
    virtual bool isWaterBlocking() const;
    /**
     * @vftbl  36
     * @symbol __unk_vfn_36
     */
    virtual void __unk_vfn_36();
    /**
     * @vftbl  37
     * @symbol __unk_vfn_37
     */
    virtual void __unk_vfn_37();
    /**
     * @vftbl  38
     * @symbol __unk_vfn_38
     */
    virtual void __unk_vfn_38();
    /**
     * @vftbl  39
     * @symbol __unk_vfn_39
     */
    virtual void __unk_vfn_39();
    /**
     * @vftbl  40
     * @symbol __unk_vfn_40
     */
    virtual void __unk_vfn_40();
    /**
     * @vftbl  41
     * @symbol __unk_vfn_41
     */
    virtual void __unk_vfn_41();
    /**
     * @vftbl  42
     * @symbol __unk_vfn_42
     */
    virtual void __unk_vfn_42();
    /**
     * @hash   -1671508870
     * @vftbl  43
     * @symbol ?isDoubleSlabBlock@BlockLegacy@@UEBA_NXZ
     */
    virtual bool isDoubleSlabBlock() const;
    /**
     * @vftbl  44
     * @symbol __unk_vfn_44
     */
    virtual void __unk_vfn_44();
    /**
     * @vftbl  45
     * @symbol __unk_vfn_45
     */
    virtual void __unk_vfn_45();
    /**
     * @vftbl  46
     * @symbol __unk_vfn_46
     */
    virtual void __unk_vfn_46();
    /**
     * @vftbl  47
     * @symbol __unk_vfn_47
     */
    virtual void __unk_vfn_47();
    /**
     * @vftbl  48
     * @symbol __unk_vfn_48
     */
    virtual void __unk_vfn_48();
    /**
     * @vftbl  49
     * @symbol __unk_vfn_49
     */
    virtual void __unk_vfn_49();
    /**
     * @hash   -2098435396
     * @vftbl  50
     * @symbol ?canHurtAndBreakItem@BlockLegacy@@UEBA_NXZ
     */
    virtual bool canHurtAndBreakItem() const;
    /**
     * @hash   1798620783
     * @vftbl  51
     * @symbol ?isSignalSource@BlockLegacy@@UEBA_NXZ
     */
    virtual bool isSignalSource() const;
    /**
     * @hash   -600236293
     * @vftbl  52
     * @symbol ?canBeOriginalSurface@BlockLegacy@@UEBA_NXZ
     */
    virtual bool canBeOriginalSurface() const;
    /**
     * @hash   555173657
     * @vftbl  53
     * @symbol ?canBeAscendedByJumping@BlockLegacy@@UEBA_NAEBVActor@@AEBVBlockPos@@@Z
     */
    virtual bool canBeAscendedByJumping(class Actor const &, class BlockPos const &) const;
    /**
     * @vftbl  54
     * @symbol __unk_vfn_54
     */
    virtual void __unk_vfn_54();
    /**
     * @hash   2078637548
     * @vftbl  55
     * @symbol ?isValidAuxValue@BlockLegacy@@UEBA_NH@Z
     */
    virtual bool isValidAuxValue(int) const;
    /**
     * @hash   -1438975260
     * @vftbl  56
     * @symbol ?canFillAtPos@BlockLegacy@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
     */
    virtual bool canFillAtPos(class BlockSource &, class BlockPos const &, class Block const &) const;
    /**
     * @hash   1508053753
     * @vftbl  57
     * @symbol ?sanitizeFillBlock@BlockLegacy@@UEBAAEBVBlock@@AEAVBlockSource@@AEBVBlockPos@@AEBV2@@Z
     */
    virtual class Block const & sanitizeFillBlock(class BlockSource &, class BlockPos const &, class Block const &) const;
    /**
     * @hash   823817609
     * @vftbl  58
     * @symbol ?onFillBlock@BlockLegacy@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
     */
    virtual void onFillBlock(class BlockSource &, class BlockPos const &, class Block const &) const;
    /**
     * @hash   834743019
     * @vftbl  59
     * @symbol ?getDirectSignal@BlockLegacy@@UEBAHAEAVBlockSource@@AEBVBlockPos@@H@Z
     */
    virtual int getDirectSignal(class BlockSource &, class BlockPos const &, int) const;
    /**
     * @vftbl  60
     * @symbol __unk_vfn_60
     */
    virtual void __unk_vfn_60();
    /**
     * @vftbl  61
     * @symbol __unk_vfn_61
     */
    virtual void __unk_vfn_61();
    /**
     * @hash   228828978
     * @vftbl  62
     * @symbol ?canContainLiquid@BlockLegacy@@UEBA_NXZ
     */
    virtual bool canContainLiquid() const;
    /**
     * @hash   1587137567
     * @vftbl  63
     * @symbol ?shouldConnectToRedstone@BlockLegacy@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@H@Z
     */
    virtual bool shouldConnectToRedstone(class BlockSource &, class BlockPos const &, int) const;
    /**
     * @hash   1871644705
     * @vftbl  64
     * @symbol ?handlePrecipitation@BlockLegacy@@UEBAXAEAVBlockSource@@AEBVBlockPos@@MM@Z
     */
    virtual void handlePrecipitation(class BlockSource &, class BlockPos const &, float, float) const;
    /**
     * @hash   -1086612589
     * @vftbl  65
     * @symbol ?canBeUsedInCommands@BlockLegacy@@UEBA_NAEBVBaseGameVersion@@@Z
     */
    virtual bool canBeUsedInCommands(class BaseGameVersion const &) const;
    /**
     * @hash   -1618142650
     * @vftbl  66
     * @symbol ?getThickness@BlockLegacy@@UEBAMXZ
     */
    virtual float getThickness() const;
    /**
     * @hash   -1534695023
     * @vftbl  67
     * @symbol ?getFlexibility@BlockLegacy@@UEBAMAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    virtual float getFlexibility(class BlockSource &, class BlockPos const &) const;
    /**
     * @hash   224030474
     * @vftbl  68
     * @symbol ?checkIsPathable@BlockLegacy@@UEBA_NAEAVActor@@AEBVBlockPos@@1@Z
     */
    virtual bool checkIsPathable(class Actor &, class BlockPos const &, class BlockPos const &) const;
    /**
     * @hash   -835336135
     * @vftbl  69
     * @symbol ?shouldDispense@BlockLegacy@@UEBA_NAEAVBlockSource@@AEAVContainer@@@Z
     */
    virtual bool shouldDispense(class BlockSource &, class Container &) const;
    /**
     * @hash   11413842
     * @vftbl  70
     * @symbol ?dispense@BlockLegacy@@UEBA_NAEAVBlockSource@@AEAVContainer@@HAEBVVec3@@E@Z
     */
    virtual bool dispense(class BlockSource &, class Container &, int, class Vec3 const &, unsigned char) const;
    /**
     * @hash   -1610991909
     * @vftbl  71
     * @symbol ?transformOnFall@BlockLegacy@@UEBAXAEAVBlockSource@@AEBVBlockPos@@PEAVActor@@M@Z
     */
    virtual void transformOnFall(class BlockSource &, class BlockPos const &, class Actor *, float) const;
    /**
     * @hash   1428538687
     * @vftbl  72
     * @symbol ?onRedstoneUpdate@BlockLegacy@@UEBAXAEAVBlockSource@@AEBVBlockPos@@H_N@Z
     */
    virtual void onRedstoneUpdate(class BlockSource &, class BlockPos const &, int, bool) const;
    /**
     * @hash   -1525772518
     * @vftbl  73
     * @symbol ?onMove@BlockLegacy@@UEBAXAEAVBlockSource@@AEBVBlockPos@@1@Z
     */
    virtual void onMove(class BlockSource &, class BlockPos const &, class BlockPos const &) const;
    /**
     * @vftbl  74
     * @symbol __unk_vfn_74
     */
    virtual void __unk_vfn_74();
    /**
     * @hash   1298807209
     * @vftbl  75
     * @symbol ?movedByPiston@BlockLegacy@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    virtual void movedByPiston(class BlockSource &, class BlockPos const &) const;
    /**
     * @hash   -1389203404
     * @vftbl  76
     * @symbol ?onStructureBlockPlace@BlockLegacy@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    virtual void onStructureBlockPlace(class BlockSource &, class BlockPos const &) const;
    /**
     * @hash   -2057344634
     * @vftbl  77
     * @symbol ?onStructureNeighborBlockPlace@BlockLegacy@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    virtual void onStructureNeighborBlockPlace(class BlockSource &, class BlockPos const &) const;
    /**
     * @hash   755846962
     * @vftbl  78
     * @symbol ?setupRedstoneComponent@BlockLegacy@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    virtual void setupRedstoneComponent(class BlockSource &, class BlockPos const &) const;
    /**
     * @hash   -1281095741
     * @vftbl  79
     * @symbol ?getRedstoneProperty@BlockLegacy@@UEBA?AW4BlockProperty@@AEAVBlockSource@@AEBVBlockPos@@@Z
     */
    virtual enum BlockProperty getRedstoneProperty(class BlockSource &, class BlockPos const &) const;
    /**
     * @hash   -1233149134
     * @vftbl  80
     * @symbol ?updateEntityAfterFallOn@BlockLegacy@@UEBAXAEBVBlockPos@@AEAUUpdateEntityAfterFallOnInterface@@@Z
     */
    virtual void updateEntityAfterFallOn(class BlockPos const &, struct UpdateEntityAfterFallOnInterface &) const;
    /**
     * @vftbl  81
     * @symbol __unk_vfn_81
     */
    virtual void __unk_vfn_81();
    /**
     * @hash   -944135691
     * @vftbl  82
     * @symbol ?isFilteredOut@BlockLegacy@@UEBA_NW4BlockRenderLayer@@@Z
     */
    virtual bool isFilteredOut(enum BlockRenderLayer) const;
    /**
     * @hash   -492898732
     * @vftbl  83
     * @symbol ?isPreservingMediumWhenPlaced@BlockLegacy@@UEBA_NPEBV1@@Z
     */
    virtual bool isPreservingMediumWhenPlaced(class BlockLegacy const *) const;
    /**
     * @hash   -1287479460
     * @vftbl  84
     * @symbol ?ignoreEntitiesOnPistonMove@BlockLegacy@@UEBA_NAEBVBlock@@@Z
     */
    virtual bool ignoreEntitiesOnPistonMove(class Block const &) const;
    /**
     * @hash   1638005376
     * @vftbl  85
     * @symbol ?onFertilized@BlockLegacy@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@PEAVActor@@W4FertilizerType@@@Z
     */
    virtual bool onFertilized(class BlockSource &, class BlockPos const &, class Actor *, enum FertilizerType) const;
    /**
     * @hash   1433194055
     * @vftbl  86
     * @symbol ?mayConsumeFertilizer@BlockLegacy@@UEBA_NAEAVBlockSource@@@Z
     */
    virtual bool mayConsumeFertilizer(class BlockSource &) const;
    /**
     * @hash   474607275
     * @vftbl  87
     * @symbol ?canBeFertilized@BlockLegacy@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
     */
    virtual bool canBeFertilized(class BlockSource &, class BlockPos const &, class Block const &) const;
    /**
     * @hash   764836328
     * @vftbl  88
     * @symbol ?mayPick@BlockLegacy@@UEBA_NXZ
     */
    virtual bool mayPick() const;
    /**
     * @hash   1445567063
     * @vftbl  89
     * @symbol ?mayPick@BlockLegacy@@UEBA_NAEBVBlockSource@@AEBVBlock@@_N@Z
     */
    virtual bool mayPick(class BlockSource const &, class Block const &, bool) const;
    /**
     * @hash   1694677329
     * @vftbl  90
     * @symbol ?mayPlace@BlockLegacy@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@E@Z
     */
    virtual bool mayPlace(class BlockSource &, class BlockPos const &, unsigned char) const;
    /**
     * @hash   -1783474950
     * @vftbl  91
     * @symbol ?mayPlace@BlockLegacy@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    virtual bool mayPlace(class BlockSource &, class BlockPos const &) const;
    /**
     * @hash   1731420905
     * @vftbl  92
     * @symbol ?mayPlaceOn@BlockLegacy@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    virtual bool mayPlaceOn(class BlockSource &, class BlockPos const &) const;
    /**
     * @hash   306737121
     * @vftbl  93
     * @symbol ?tryToPlace@BlockLegacy@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@PEBUActorBlockSyncMessage@@@Z
     */
    virtual bool tryToPlace(class BlockSource &, class BlockPos const &, class Block const &, struct ActorBlockSyncMessage const *) const;
    /**
     * @hash   -2082120909
     * @vftbl  94
     * @symbol ?tryToTill@BlockLegacy@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVActor@@AEAVItemStack@@@Z
     */
    virtual bool tryToTill(class BlockSource &, class BlockPos const &, class Actor &, class ItemStack &) const;
    /**
     * @hash   2034526533
     * @vftbl  95
     * @symbol ?breaksFallingBlocks@BlockLegacy@@UEBA_NAEBVBlock@@VBaseGameVersion@@@Z
     */
    virtual bool breaksFallingBlocks(class Block const &, class BaseGameVersion) const;
    /**
     * @hash   -1502695497
     * @vftbl  96
     * @symbol ?destroy@BlockLegacy@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@PEAVActor@@@Z
     */
    virtual void destroy(class BlockSource &, class BlockPos const &, class Block const &, class Actor *) const;
    /**
     * @hash   268435450
     * @vftbl  97
     * @symbol ?playerWillDestroy@BlockLegacy@@UEBA_NAEAVPlayer@@AEBVBlockPos@@AEBVBlock@@@Z
     */
    virtual bool playerWillDestroy(class Player &, class BlockPos const &, class Block const &) const;
    /**
     * @hash   2110057322
     * @vftbl  98
     * @symbol ?getIgnoresDestroyPermissions@BlockLegacy@@UEBA_NAEAVActor@@AEBVBlockPos@@@Z
     */
    virtual bool getIgnoresDestroyPermissions(class Actor &, class BlockPos const &) const;
    /**
     * @hash   865219400
     * @vftbl  99
     * @symbol ?neighborChanged@BlockLegacy@@UEBAXAEAVBlockSource@@AEBVBlockPos@@1@Z
     */
    virtual void neighborChanged(class BlockSource &, class BlockPos const &, class BlockPos const &) const;
    /**
     * @hash   258958179
     * @vftbl  100
     * @symbol ?getSecondPart@BlockLegacy@@UEBA_NAEBVBlockSource@@AEBVBlockPos@@AEAV3@@Z
     */
    virtual bool getSecondPart(class BlockSource const &, class BlockPos const &, class BlockPos &) const;
    /**
     * @hash   -1936050100
     * @vftbl  101
     * @symbol ?getResourceCount@BlockLegacy@@UEBAHAEAVRandomize@@AEBVBlock@@H@Z
     */
    virtual int getResourceCount(class Randomize &, class Block const &, int) const;
    /**
     * @hash   1164066884
     * @vftbl  102
     * @symbol ?getResourceItem@BlockLegacy@@UEBA?AVItemInstance@@AEAVRandomize@@AEBVBlock@@H@Z
     */
    virtual class ItemInstance getResourceItem(class Randomize &, class Block const &, int) const;
    /**
     * @hash   -913596407
     * @vftbl  103
     * @symbol ?asItemInstance@BlockLegacy@@UEBA?AVItemInstance@@AEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
     */
    virtual class ItemInstance asItemInstance(class BlockSource &, class BlockPos const &, class Block const &) const;
    /**
     * @hash   -1194786118
     * @vftbl  104
     * @symbol ?spawnResources@BlockLegacy@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@AEAVRandomize@@PEAV?$vector@PEBVItem@@V?$allocator@PEBVItem@@@std@@@std@@MH@Z
     */
    virtual void spawnResources(class BlockSource &, class BlockPos const &, class Block const &, class Randomize &, std::vector<class Item const *> *, float, int) const;
    /**
     * @hash   45845811
     * @vftbl  105
     * @symbol ?trySpawnResourcesOnExplosion@BlockLegacy@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@AEAVRandomize@@PEAV?$vector@PEBVItem@@V?$allocator@PEBVItem@@@std@@@std@@MH@Z
     */
    virtual void trySpawnResourcesOnExplosion(class BlockSource &, class BlockPos const &, class Block const &, class Randomize &, std::vector<class Item const *> *, float, int) const;
    /**
     * @vftbl  106
     * @symbol __unk_vfn_106
     */
    virtual void __unk_vfn_106();
    /**
     * @hash   642783157
     * @vftbl  107
     * @symbol ?getPlacementBlock@BlockLegacy@@UEBAAEBVBlock@@AEAVActor@@AEBVBlockPos@@EAEBVVec3@@H@Z
     */
    virtual class Block const & getPlacementBlock(class Actor &, class BlockPos const &, unsigned char, class Vec3 const &, int) const;
    /**
     * @hash   1945717240
     * @vftbl  108
     * @symbol ?calcVariant@BlockLegacy@@UEBAHAEAVBlockSource@@AEBVBlockPos@@AEBVColor@mce@@@Z
     */
    virtual int calcVariant(class BlockSource &, class BlockPos const &, class mce::Color const &) const;
    /**
     * @hash   -1810014502
     * @vftbl  109
     * @symbol ?isAttachedTo@BlockLegacy@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAV3@@Z
     */
    virtual bool isAttachedTo(class BlockSource &, class BlockPos const &, class BlockPos &) const;
    /**
     * @hash   -1120712667
     * @vftbl  110
     * @symbol ?attack@BlockLegacy@@UEBA_NPEAVPlayer@@AEBVBlockPos@@@Z
     */
    virtual bool attack(class Player *, class BlockPos const &) const;
    /**
     * @hash   112036463
     * @vftbl  111
     * @symbol ?handleEntityInside@BlockLegacy@@UEBAXAEAVBlockSource@@AEBVBlockPos@@PEAVActor@@AEAVVec3@@@Z
     */
    virtual void handleEntityInside(class BlockSource &, class BlockPos const &, class Actor *, class Vec3 &) const;
    /**
     * @hash   -483908874
     * @vftbl  112
     * @symbol ?shouldTriggerOnStandOn@BlockLegacy@@UEBA_NAEAVActor@@AEBVBlockPos@@@Z
     */
    virtual bool shouldTriggerOnStandOn(class Actor &, class BlockPos const &) const;
    /**
     * @hash   -345040295
     * @vftbl  113
     * @symbol ?shouldTriggerEntityInside@BlockLegacy@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVActor@@@Z
     */
    virtual bool shouldTriggerEntityInside(class BlockSource &, class BlockPos const &, class Actor &) const;
    /**
     * @hash   -2034039792
     * @vftbl  114
     * @symbol ?entityInside@BlockLegacy@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVActor@@@Z
     */
    virtual void entityInside(class BlockSource &, class BlockPos const &, class Actor &) const;
    /**
     * @hash   -1251825408
     * @vftbl  115
     * @symbol ?canBeBuiltOver@BlockLegacy@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEBVBlockItem@@@Z
     */
    virtual bool canBeBuiltOver(class BlockSource &, class BlockPos const &, class BlockItem const &) const;
    /**
     * @hash   -748892521
     * @vftbl  116
     * @symbol ?canBeBuiltOver@BlockLegacy@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    virtual bool canBeBuiltOver(class BlockSource &, class BlockPos const &) const;
    /**
     * @hash   778185960
     * @vftbl  117
     * @symbol ?triggerEvent@BlockLegacy@@UEBAXAEAVBlockSource@@AEBVBlockPos@@HH@Z
     */
    virtual void triggerEvent(class BlockSource &, class BlockPos const &, int, int) const;
    /**
     * @hash   -941571631
     * @vftbl  118
     * @symbol ?executeEvent@BlockLegacy@@UEBAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVRenderParams@@@Z
     */
    virtual void executeEvent(std::string const &, class RenderParams &) const;
    /**
     * @hash   -623804310
     * @vftbl  119
     * @symbol ?executeEvent@BlockLegacy@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVActor@@@Z
     */
    virtual void executeEvent(class BlockSource &, class BlockPos const &, class Block const &, std::string const &, class Actor &) const;
    /**
     * @hash   1586098425
     * @vftbl  120
     * @symbol ?executeTrigger@BlockLegacy@@UEBA_NAEBVDefinitionTrigger@@AEAVRenderParams@@@Z
     */
    virtual bool executeTrigger(class DefinitionTrigger const &, class RenderParams &) const;
    /**
     * @hash   429121330
     * @vftbl  121
     * @symbol ?forceExecuteTrigger@BlockLegacy@@UEBAXAEBVDefinitionTrigger@@AEAVRenderParams@@@Z
     */
    virtual void forceExecuteTrigger(class DefinitionTrigger const &, class RenderParams &) const;
    /**
     * @hash   -1745496011
     * @vftbl  122
     * @symbol ?getMobToSpawn@BlockLegacy@@UEBAPEBVMobSpawnerData@@AEBVSpawnConditions@@AEAVBlockSource@@@Z
     */
    virtual class MobSpawnerData const * getMobToSpawn(class SpawnConditions const &, class BlockSource &) const;
    /**
     * @hash   -1804408575
     * @vftbl  123
     * @symbol ?shouldStopFalling@BlockLegacy@@UEBA_NAEAVActor@@@Z
     */
    virtual bool shouldStopFalling(class Actor &) const;
    /**
     * @vftbl  124
     * @symbol __unk_vfn_124
     */
    virtual void __unk_vfn_124();
    /**
     * @hash   -952885388
     * @vftbl  125
     * @symbol ?calcGroundFriction@BlockLegacy@@UEBAMAEBUIMobMovementProxy@@AEBVBlockPos@@@Z
     */
    virtual float calcGroundFriction(struct IMobMovementProxy const &, class BlockPos const &) const;
    /**
     * @vftbl  126
     * @symbol __unk_vfn_126
     */
    virtual void __unk_vfn_126();
    /**
     * @vftbl  127
     * @symbol __unk_vfn_127
     */
    virtual void __unk_vfn_127();
    /**
     * @hash   -1929519536
     * @vftbl  128
     * @symbol ?getComparatorSignal@BlockLegacy@@UEBAHAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@E@Z
     */
    virtual int getComparatorSignal(class BlockSource &, class BlockPos const &, class Block const &, unsigned char) const;
    /**
     * @hash   1662427673
     * @vftbl  129
     * @symbol ?canSlide@BlockLegacy@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    virtual bool canSlide(class BlockSource &, class BlockPos const &) const;
    /**
     * @hash   1427930185
     * @vftbl  130
     * @symbol ?canSpawnAt@BlockLegacy@@UEBA_NAEBVBlockSource@@AEBVBlockPos@@@Z
     */
    virtual bool canSpawnAt(class BlockSource const &, class BlockPos const &) const;
    /**
     * @hash   688670314
     * @vftbl  131
     * @symbol ?notifySpawnedAt@BlockLegacy@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    virtual void notifySpawnedAt(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  132
     * @symbol __unk_vfn_132
     */
    virtual void __unk_vfn_132();
    /**
     * @hash   -1585074590
     * @vftbl  133
     * @symbol ?getIconYOffset@BlockLegacy@@UEBAHXZ
     */
    virtual int getIconYOffset() const;
    /**
     * @hash   1355662301
     * @vftbl  134
     * @symbol ?buildDescriptionId@BlockLegacy@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVBlock@@@Z
     */
    virtual std::string buildDescriptionId(class Block const &) const;
    /**
     * @hash   2114967022
     * @vftbl  135
     * @symbol ?isAuxValueRelevantForPicking@BlockLegacy@@UEBA_NXZ
     */
    virtual bool isAuxValueRelevantForPicking() const;
    /**
     * @hash   -1063016664
     * @vftbl  136
     * @symbol ?getColor@BlockLegacy@@UEBAHAEBVBlock@@@Z
     */
    virtual int getColor(class Block const &) const;
    /**
     * @hash   -1941689614
     * @vftbl  137
     * @symbol ?getColor@BlockLegacy@@UEBAHAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
     */
    virtual int getColor(class BlockSource &, class BlockPos const &, class Block const &) const;
    /**
     * @hash   -1479476977
     * @vftbl  138
     * @symbol ?getColorAtPos@BlockLegacy@@UEBAHAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    virtual int getColorAtPos(class BlockSource &, class BlockPos const &) const;
    /**
     * @hash   916263357
     * @vftbl  139
     * @symbol ?getColorForParticle@BlockLegacy@@UEBAHAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
     */
    virtual int getColorForParticle(class BlockSource &, class BlockPos const &, class Block const &) const;
    /**
     * @hash   -1554768729
     * @vftbl  140
     * @symbol ?isSeasonTinted@BlockLegacy@@UEBA_NAEBVBlock@@AEAVBlockSource@@AEBVBlockPos@@@Z
     */
    virtual bool isSeasonTinted(class Block const &, class BlockSource &, class BlockPos const &) const;
    /**
     * @hash   24586114
     * @vftbl  141
     * @symbol ?onGraphicsModeChanged@BlockLegacy@@UEAAXAEBUBlockGraphicsModeChangeContext@@@Z
     */
    virtual void onGraphicsModeChanged(struct BlockGraphicsModeChangeContext const &);
    /**
     * @hash   -789755702
     * @vftbl  142
     * @symbol ?getShadeBrightness@BlockLegacy@@UEBAMAEBVBlock@@@Z
     */
    virtual float getShadeBrightness(class Block const &) const;
    /**
     * @hash   737671848
     * @vftbl  143
     * @symbol ?getVisualShapeInWorld@BlockLegacy@@UEBAAEBVAABB@@AEBVBlock@@AEBVIConstBlockSource@@AEBVBlockPos@@AEAV2@_N@Z
     */
    virtual class AABB const & getVisualShapeInWorld(class Block const &, class IConstBlockSource const &, class BlockPos const &, class AABB &, bool) const;
    /**
     * @hash   -1387353680
     * @vftbl  144
     * @symbol ?getVisualShape@BlockLegacy@@UEBAAEBVAABB@@AEBVBlock@@AEAV2@_N@Z
     */
    virtual class AABB const & getVisualShape(class Block const &, class AABB &, bool) const;
    /**
     * @hash   -944372890
     * @vftbl  145
     * @symbol ?getUIShape@BlockLegacy@@UEBAAEBVAABB@@AEBVBlock@@AEAV2@@Z
     */
    virtual class AABB const & getUIShape(class Block const &, class AABB &) const;
    /**
     * @hash   -1911157161
     * @vftbl  146
     * @symbol ?telemetryVariant@BlockLegacy@@UEBAHAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    virtual int telemetryVariant(class BlockSource &, class BlockPos const &) const;
    /**
     * @hash   -1080905994
     * @vftbl  147
     * @symbol ?getVariant@BlockLegacy@@UEBAHAEBVBlock@@@Z
     */
    virtual int getVariant(class Block const &) const;
    /**
     * @vftbl  148
     * @symbol __unk_vfn_148
     */
    virtual void __unk_vfn_148();
    /**
     * @hash   -1070187821
     * @vftbl  149
     * @symbol ?getRenderBlock@BlockLegacy@@UEBAAEBVBlock@@XZ
     */
    virtual class Block const & getRenderBlock() const;
    /**
     * @hash   1682317976
     * @vftbl  150
     * @symbol ?getMappedFace@BlockLegacy@@UEBAEEAEBVBlock@@@Z
     */
    virtual unsigned char getMappedFace(unsigned char, class Block const &) const;
    /**
     * @hash   1143960860
     * @vftbl  151
     * @symbol ?getFaceFlip@BlockLegacy@@UEBA?AW4Flip@@EAEBVBlock@@@Z
     */
    virtual enum Flip getFaceFlip(unsigned char, class Block const &) const;
    /**
     * @hash   2028784027
     * @vftbl  152
     * @symbol ?animateTick@BlockLegacy@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
     */
    virtual void animateTick(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @hash   -664788187
     * @vftbl  153
     * @symbol ?init@BlockLegacy@@UEAAAEAV1@XZ
     */
    virtual class BlockLegacy & init();
    /**
     * @hash   971623701
     * @vftbl  154
     * @symbol ?getLightEmission@BlockLegacy@@MEBA?AUBrightness@@AEBVBlock@@@Z
     */
    virtual struct Brightness getLightEmission(class Block const &) const;
    /**
     * @hash   1202363494
     * @vftbl  155
     * @symbol ?addState@BlockLegacy@@UEAAAEAV1@AEBVItemState@@@Z
     */
    virtual class BlockLegacy & addState(class ItemState const &);
    /**
     * @hash   -1889551138
     * @vftbl  156
     * @symbol ?addState@BlockLegacy@@UEAAAEAV1@AEBVItemState@@_K@Z
     */
    virtual class BlockLegacy & addState(class ItemState const &, unsigned __int64);
    /**
     * @vftbl  157
     * @symbol __unk_vfn_157
     */
    virtual void __unk_vfn_157();
    /**
     * @hash   259156941
     * @vftbl  158
     * @symbol ?getSilkTouchItemInstance@BlockLegacy@@UEBA?AVItemInstance@@AEBVBlock@@@Z
     */
    virtual class ItemInstance getSilkTouchItemInstance(class Block const &) const;
    /**
     * @hash   -1463711163
     * @vftbl  159
     * @symbol ?tryLegacyUpgrade@BlockLegacy@@UEBAPEBVBlock@@G@Z
     */
    virtual class Block const * tryLegacyUpgrade(unsigned short) const;
    /**
     * @hash   1830321576
     * @vftbl  160
     * @symbol ?dealsContactDamage@BlockLegacy@@UEBA_NAEBVActor@@AEBVBlock@@_N@Z
     */
    virtual bool dealsContactDamage(class Actor const &, class Block const &, bool) const;
    /**
     * @hash   -2113401979
     * @vftbl  161
     * @symbol ?tryGetInfested@BlockLegacy@@UEBAPEBVBlock@@AEBV2@@Z
     */
    virtual class Block const * tryGetInfested(class Block const &) const;
    /**
     * @hash   1181964588
     * @vftbl  162
     * @symbol ?tryGetUninfested@BlockLegacy@@UEBAPEBVBlock@@AEBV2@@Z
     */
    virtual class Block const * tryGetUninfested(class Block const &) const;
    /**
     * @hash   -126558358
     * @vftbl  163
     * @symbol ?_addHardCodedBlockComponents@BlockLegacy@@UEAAXXZ
     */
    virtual void _addHardCodedBlockComponents();
    /**
     * @hash   1045889953
     * @vftbl  164
     * @symbol ?_getHardCodedJSON@BlockLegacy@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string _getHardCodedJSON() const;
    /**
     * @hash   2019622626
     * @vftbl  165
     * @symbol ?onRemove@BlockLegacy@@MEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    virtual void onRemove(class BlockSource &, class BlockPos const &) const;
    /**
     * @hash   1961613872
     * @vftbl  166
     * @symbol ?onExploded@BlockLegacy@@MEBAXAEAVBlockSource@@AEBVBlockPos@@PEAVActor@@@Z
     */
    virtual void onExploded(class BlockSource &, class BlockPos const &, class Actor *) const;
    /**
     * @hash   -958530503
     * @vftbl  167
     * @symbol ?onStandOn@BlockLegacy@@MEBAXAEAVEntityContext@@AEBVBlockPos@@@Z
     */
    virtual void onStandOn(class EntityContext &, class BlockPos const &) const;
    /**
     * @vftbl  168
     * @symbol __unk_vfn_168
     */
    virtual void __unk_vfn_168();
    /**
     * @vftbl  169
     * @symbol __unk_vfn_169
     */
    virtual void __unk_vfn_169();
    /**
     * @vftbl  170
     * @symbol __unk_vfn_170
     */
    virtual void __unk_vfn_170();
    /**
     * @hash   -1351214809
     * @vftbl  171
     * @symbol ?onPlace@BlockLegacy@@MEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    virtual void onPlace(class BlockSource &, class BlockPos const &) const;
    /**
     * @hash   -157791869
     * @vftbl  172
     * @symbol ?onFallOn@BlockLegacy@@MEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVActor@@M@Z
     */
    virtual void onFallOn(class BlockSource &, class BlockPos const &, class Actor &, float) const;
    /**
     * @hash   594998849
     * @vftbl  173
     * @symbol ?playerDestroy@BlockLegacy@@MEBAXAEAVPlayer@@AEBVBlockPos@@AEBVBlock@@@Z
     */
    virtual void playerDestroy(class Player &, class BlockPos const &, class Block const &) const;
    /**
     * @hash   1397026355
     * @vftbl  174
     * @symbol ?tick@BlockLegacy@@MEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
     */
    virtual void tick(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @hash   1726538000
     * @vftbl  175
     * @symbol ?randomTick@BlockLegacy@@MEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
     */
    virtual void randomTick(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @hash   928296334
     * @vftbl  176
     * @symbol ?shouldRandomTick@BlockLegacy@@MEBA_NXZ
     */
    virtual bool shouldRandomTick() const;
    /**
     * @vftbl  177
     * @symbol __unk_vfn_177
     */
    virtual void __unk_vfn_177();
    /**
     * @hash   -753316225
     * @vftbl  178
     * @symbol ?clip@BlockLegacy@@MEBA?AVHitResult@@AEBVBlockSource@@AEBVBlockPos@@AEBVVec3@@2_N@Z
     */
    virtual class HitResult clip(class BlockSource const &, class BlockPos const &, class Vec3 const &, class Vec3 const &, bool) const;
    /**
     * @hash   -413687774
     * @vftbl  179
     * @symbol ?use@BlockLegacy@@MEBA_NAEAVPlayer@@AEBVBlockPos@@E@Z
     */
    virtual bool use(class Player &, class BlockPos const &, unsigned char) const;
    /**
     * @hash   -1003317581
     * @vftbl  180
     * @symbol ?canSurvive@BlockLegacy@@MEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    virtual bool canSurvive(class BlockSource &, class BlockPos const &) const;
    /**
     * @hash   2122771130
     * @vftbl  181
     * @symbol ?getRenderLayer@BlockLegacy@@MEBA?AW4BlockRenderLayer@@XZ
     */
    virtual enum BlockRenderLayer getRenderLayer() const;
    /**
     * @hash   -2020880650
     * @vftbl  182
     * @symbol ?getRenderLayer@BlockLegacy@@MEBA?AW4BlockRenderLayer@@AEBVBlock@@AEAVBlockSource@@AEBVBlockPos@@@Z
     */
    virtual enum BlockRenderLayer getRenderLayer(class Block const &, class BlockSource &, class BlockPos const &) const;
    /**
     * @hash   -556468032
     * @vftbl  183
     * @symbol ?getExtraRenderLayers@BlockLegacy@@MEBAHXZ
     */
    virtual int getExtraRenderLayers() const;
    /**
     * @hash   492987832
     * @vftbl  184
     * @symbol ?getExplosionResistance@BlockLegacy@@MEBAMPEAVActor@@@Z
     */
    virtual float getExplosionResistance(class Actor *) const;
    /**
     * @hash   1225284430
     * @vftbl  185
     * @symbol ?getEmissiveBrightness@BlockLegacy@@MEBA?AUBrightness@@AEBVBlock@@@Z
     */
    virtual struct Brightness getEmissiveBrightness(class Block const &) const;
    /**
     * @hash   920309331
     * @vftbl  186
     * @symbol ?getMapColor@BlockLegacy@@MEBA?AVColor@mce@@XZ
     */
    virtual class mce::Color getMapColor() const;
    /**
     * @hash   -170752887
     * @vftbl  187
     * @symbol ?getMapColor@BlockLegacy@@MEBA?AVColor@mce@@AEAVBlockSource@@AEBVBlockPos@@@Z
     */
    virtual class mce::Color getMapColor(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  188
     * @symbol __unk_vfn_188
     */
    virtual void __unk_vfn_188();
    /**
     * @hash   -333560710
     * @vftbl  189
     * @symbol ?_executeEvent@BlockLegacy@@EEBAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$vector@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@$$CBV12@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@$$CBV12@@std@@@2@@3@AEAVRenderParams@@@Z
     */
    virtual void _executeEvent(std::string const &, std::vector<struct std::pair<std::string const, std::string const>> &, class RenderParams &) const;
    /**
     * @hash   288337434
     * @vftbl  190
     * @symbol ?_executeTrigger@BlockLegacy@@EEBA_NAEBVDefinitionTrigger@@AEAV?$vector@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@$$CBV12@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@$$CBV12@@std@@@2@@std@@AEAVRenderParams@@@Z
     */
    virtual bool _executeTrigger(class DefinitionTrigger const &, std::vector<struct std::pair<std::string const, std::string const>> &, class RenderParams &) const;
    /**
     * @hash   2070131567
     * @vftbl  191
     * @symbol ?_forceExecuteTrigger@BlockLegacy@@EEBAXAEBVDefinitionTrigger@@AEAV?$vector@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@$$CBV12@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@$$CBV12@@std@@@2@@std@@AEAVRenderParams@@@Z
     */
    virtual void _forceExecuteTrigger(class DefinitionTrigger const &, std::vector<struct std::pair<std::string const, std::string const>> &, class RenderParams &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BLOCKLEGACY
    /**
     * @hash   -182260081
     * @symbol ?canBeDestroyedByWaterSpread@BlockLegacy@@UEBA_NXZ
     */
    MCVAPI bool canBeDestroyedByWaterSpread() const;
    /**
     * @hash   1856205400
     * @symbol ?canBeSilkTouched@BlockLegacy@@UEBA_NXZ
     */
    MCVAPI bool canBeSilkTouched() const;
    /**
     * @hash   -1423481696
     * @symbol ?canDamperVibrations@BlockLegacy@@UEBA_NXZ
     */
    MCVAPI bool canDamperVibrations() const;
    /**
     * @hash   -424613692
     * @symbol ?canHaveExtraData@BlockLegacy@@UEBA_NXZ
     */
    MCVAPI bool canHaveExtraData() const;
    /**
     * @hash   -1253411636
     * @symbol ?canOccludeVibrations@BlockLegacy@@UEBA_NXZ
     */
    MCVAPI bool canOccludeVibrations() const;
    /**
     * @hash   -818988596
     * @symbol ?canSpawnOn@BlockLegacy@@UEBA_NXZ
     */
    MCVAPI bool canSpawnOn() const;
    /**
     * @hash   -2121530700
     * @symbol ?causesFreezeEffect@BlockLegacy@@UEBA_NXZ
     */
    MCVAPI bool causesFreezeEffect() const;
    /**
     * @hash   -1420973934
     * @symbol ?detachesOnPistonMove@BlockLegacy@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    MCVAPI bool detachesOnPistonMove(class BlockSource &, class BlockPos const &) const;
    /**
     * @hash   1411824954
     * @symbol ?hasComparatorSignal@BlockLegacy@@UEBA_NXZ
     */
    MCVAPI bool hasComparatorSignal() const;
    /**
     * @hash   1368578052
     * @symbol ?hasVariableLighting@BlockLegacy@@UEBA_NXZ
     */
    MCVAPI bool hasVariableLighting() const;
    /**
     * @hash   -1588215395
     * @symbol ?isBounceBlock@BlockLegacy@@UEBA_NXZ
     */
    MCVAPI bool isBounceBlock() const;
    /**
     * @hash   -1458351373
     * @symbol ?isButtonBlock@BlockLegacy@@UEBA_NXZ
     */
    MCVAPI bool isButtonBlock() const;
    /**
     * @hash   -1474194624
     * @symbol ?isCandleCakeBlock@BlockLegacy@@UEBA_NXZ
     */
    MCVAPI bool isCandleCakeBlock() const;
    /**
     * @hash   -474038216
     * @symbol ?isContainerBlock@BlockLegacy@@UEBA_NXZ
     */
    MCVAPI bool isContainerBlock() const;
    /**
     * @hash   -694056221
     * @symbol ?isCraftingBlock@BlockLegacy@@UEBA_NXZ
     */
    MCVAPI bool isCraftingBlock() const;
    /**
     * @hash   429128206
     * @symbol ?isCropBlock@BlockLegacy@@MEBA_NXZ
     */
    MCVAPI bool isCropBlock() const;
    /**
     * @hash   2014216183
     * @symbol ?isDoorBlock@BlockLegacy@@UEBA_NXZ
     */
    MCVAPI bool isDoorBlock() const;
    /**
     * @hash   256414088
     * @symbol ?isFenceBlock@BlockLegacy@@UEBA_NXZ
     */
    MCVAPI bool isFenceBlock() const;
    /**
     * @hash   -1113412835
     * @symbol ?isFenceGateBlock@BlockLegacy@@UEBA_NXZ
     */
    MCVAPI bool isFenceGateBlock() const;
    /**
     * @hash   -1904331332
     * @symbol ?isHurtableBlock@BlockLegacy@@UEBA_NXZ
     */
    MCVAPI bool isHurtableBlock() const;
    /**
     * @hash   584982352
     * @symbol ?isInteractiveBlock@BlockLegacy@@MEBA_NXZ
     */
    MCVAPI bool isInteractiveBlock() const;
    /**
     * @hash   -1576191185
     * @symbol ?isLeverBlock@BlockLegacy@@UEBA_NXZ
     */
    MCVAPI bool isLeverBlock() const;
    /**
     * @hash   -1031616861
     * @symbol ?isMultifaceBlock@BlockLegacy@@UEBA_NXZ
     */
    MCVAPI bool isMultifaceBlock() const;
    /**
     * @hash   -1326568429
     * @symbol ?isRailBlock@BlockLegacy@@UEBA_NXZ
     */
    MCVAPI bool isRailBlock() const;
    /**
     * @symbol ?isSilentWhenJumpingOff@BlockLegacy@@UEBA_NXZ
     */
    MCVAPI bool isSilentWhenJumpingOff() const;
    /**
     * @hash   -144271509
     * @symbol ?isSlabBlock@BlockLegacy@@UEBA_NXZ
     */
    MCVAPI bool isSlabBlock() const;
    /**
     * @hash   -1138067856
     * @symbol ?isStairBlock@BlockLegacy@@UEBA_NXZ
     */
    MCVAPI bool isStairBlock() const;
    /**
     * @hash   2075552732
     * @symbol ?isStemBlock@BlockLegacy@@UEBA_NXZ
     */
    MCVAPI bool isStemBlock() const;
    /**
     * @hash   -805372255
     * @symbol ?isThinFenceBlock@BlockLegacy@@UEBA_NXZ
     */
    MCVAPI bool isThinFenceBlock() const;
    /**
     * @hash   -1482801701
     * @symbol ?isWallBlock@BlockLegacy@@UEBA_NXZ
     */
    MCVAPI bool isWallBlock() const;
    /**
     * @hash   -366026103
     * @symbol ?onPlayerPlacing@BlockLegacy@@MEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVActor@@E@Z
     */
    MCVAPI void onPlayerPlacing(class BlockSource &, class BlockPos const &, class Actor &, unsigned char) const;
    /**
     * @hash   804102128
     * @symbol ?onStepOff@BlockLegacy@@MEBAXAEAVActor@@AEBVBlockPos@@@Z
     */
    MCVAPI void onStepOff(class Actor &, class BlockPos const &) const;
    /**
     * @hash   -73599914
     * @symbol ?onStepOn@BlockLegacy@@MEBAXAEAVActor@@AEBVBlockPos@@@Z
     */
    MCVAPI void onStepOn(class Actor &, class BlockPos const &) const;
    /**
     * @hash   -1405022644
     * @symbol ?pushesUpFallingBlocks@BlockLegacy@@UEBA_NXZ
     */
    MCVAPI bool pushesUpFallingBlocks() const;
    /**
     * @hash   -510353925
     * @symbol ?spawnBurnResources@BlockLegacy@@UEBA_NAEAVBlockSource@@MMM@Z
     */
    MCVAPI bool spawnBurnResources(class BlockSource &, float, float, float) const;
    /**
     * @hash   -1481498071
     * @symbol ?waterSpreadCausesSpawn@BlockLegacy@@UEBA_NXZ
     */
    MCVAPI bool waterSpreadCausesSpawn() const;
#endif
    /**
     * @hash   -540926995
     * @symbol ??0BlockLegacy@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBVMaterial@@@Z
     */
    MCAPI BlockLegacy(std::string const &, int, class Material const &);
    /**
     * @hash   1241125042
     * @symbol ?_isDataDrivingVanillaBlocksAndItems@BlockLegacy@@QEBA_NXZ
     */
    MCAPI bool _isDataDrivingVanillaBlocksAndItems() const;
    /**
     * @hash   298877240
     * @symbol ?addAABB@BlockLegacy@@QEBA_NAEBVAABB@@PEBV2@AEAV?$vector@VAABB@@V?$allocator@VAABB@@@std@@@std@@@Z
     */
    MCAPI bool addAABB(class AABB const &, class AABB const *, std::vector<class AABB> &) const;
    /**
     * @hash   -427053878
     * @symbol ?addBlockProperties@BlockLegacy@@QEAAAEAV1@W4BlockProperty@@@Z
     */
    MCAPI class BlockLegacy & addBlockProperties(enum BlockProperty);
    /**
     * @hash   -740371832
     * @symbol ?addTag@BlockLegacy@@QEAAAEAV1@AEBVHashedString@@@Z
     */
    MCAPI class BlockLegacy & addTag(class HashedString const &);
    /**
     * @hash   195424919
     * @symbol ?buildDescriptionName@BlockLegacy@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVBlock@@@Z
     */
    MCAPI std::string buildDescriptionName(class Block const &) const;
    /**
     * @hash   1805564916
     * @symbol ?canInstatick@BlockLegacy@@QEBA_NXZ
     */
    MCAPI bool canInstatick() const;
    /**
     * @hash   -549884476
     * @symbol ?createBlockPermutations@BlockLegacy@@QEAAXI@Z
     */
    MCAPI void createBlockPermutations(unsigned int);
    /**
     * @hash   -1981552929
     * @symbol ?createWeakPtr@BlockLegacy@@QEBA?AV?$WeakPtr@VBlockLegacy@@@@XZ
     */
    MCAPI class WeakPtr<class BlockLegacy> createWeakPtr() const;
    /**
     * @hash   1074018802
     * @symbol ?forEachBlockPermutation@BlockLegacy@@QEBAXV?$function@$$A6A_NAEBVBlock@@@Z@std@@@Z
     */
    MCAPI void forEachBlockPermutation(class std::function<bool (class Block const &)>) const;
    /**
     * @hash   -1911695756
     * @symbol ?forEachItemStateInstance@BlockLegacy@@QEBAXV?$function@$$A6A_NAEBVItemStateInstance@@@Z@std@@@Z
     */
    MCAPI void forEachItemStateInstance(class std::function<bool (class ItemStateInstance const &)>) const;
    /**
     * @hash   2082658484
     * @symbol ?getAllowsRunes@BlockLegacy@@QEBA_NXZ
     */
    MCAPI bool getAllowsRunes() const;
    /**
     * @hash   2022758104
     * @symbol ?getBlockEntityType@BlockLegacy@@QEBA?AW4BlockActorType@@XZ
     */
    MCAPI enum BlockActorType getBlockEntityType() const;
    /**
     * @hash   1132978645
     * @symbol ?getBlockItemId@BlockLegacy@@QEBAFXZ
     */
    MCAPI short getBlockItemId() const;
    /**
     * @hash   1522720782
     * @symbol ?getBlockState@BlockLegacy@@QEBAPEBVItemState@@AEBVHashedString@@@Z
     */
    MCAPI class ItemState const * getBlockState(class HashedString const &) const;
    /**
     * @hash   -420745497
     * @symbol ?getBlockStateGroup@BlockLegacy@@QEAAPEAVBlockStateGroup@@XZ
     */
    MCAPI class BlockStateGroup * getBlockStateGroup();
    /**
     * @hash   1100981878
     * @symbol ?getCommandNames@BlockLegacy@@QEBA?AV?$vector@UCommandName@@V?$allocator@UCommandName@@@std@@@std@@XZ
     */
    MCAPI std::vector<struct CommandName> getCommandNames() const;
    /**
     * @hash   -1977452150
     * @symbol ?getCreativeCategory@BlockLegacy@@QEBA?AW4CreativeItemCategory@@XZ
     */
    MCAPI enum CreativeItemCategory getCreativeCategory() const;
    /**
     * @hash   66689410
     * @symbol ?getDebugText@BlockLegacy@@QEBAXAEAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@AEBVBlockPos@@@Z
     */
    MCAPI void getDebugText(std::vector<std::string> &, class BlockPos const &) const;
    /**
     * @hash   1329757716
     * @symbol ?getDefaultState@BlockLegacy@@QEBAAEBVBlock@@XZ
     */
    MCAPI class Block const & getDefaultState() const;
    /**
     * @hash   -1931837506
     * @symbol ?getDescriptionId@BlockLegacy@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI std::string const & getDescriptionId() const;
    /**
     * @hash   1594385324
     * @symbol ?getEntity@BlockLegacy@@QEBAAEBVEntityContext@@XZ
     */
    MCAPI class EntityContext const & getEntity() const;
    /**
     * @hash   -215042956
     * @symbol ?getEntityForModification@BlockLegacy@@QEBAAEAVEntityContext@@XZ
     */
    MCAPI class EntityContext & getEntityForModification() const;
    /**
     * @hash   1174791540
     * @symbol ?getEntityNoCheck@BlockLegacy@@QEBAAEBVEntityContext@@XZ
     */
    MCAPI class EntityContext const & getEntityNoCheck() const;
    /**
     * @symbol ?getExperienceDrop@BlockLegacy@@QEBAHAEAVRandom@@@Z
     */
    MCAPI int getExperienceDrop(class Random &) const;
    /**
     * @hash   1213854592
     * @symbol ?getMaterial@BlockLegacy@@QEBAAEBVMaterial@@XZ
     */
    MCAPI class Material const & getMaterial() const;
    /**
     * @hash   1699304102
     * @symbol ?getNamespace@BlockLegacy@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI std::string const & getNamespace() const;
    /**
     * @hash   204821604
     * @symbol ?getRawNameHash@BlockLegacy@@QEBAAEBVHashedString@@XZ
     */
    MCAPI class HashedString const & getRawNameHash() const;
    /**
     * @hash   -1100740004
     * @symbol ?getRawNameId@BlockLegacy@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI std::string const & getRawNameId() const;
    /**
     * @hash   -1722822970
     * @symbol ?getRequiredBaseGameVersion@BlockLegacy@@QEBAAEBVBaseGameVersion@@XZ
     */
    MCAPI class BaseGameVersion const & getRequiredBaseGameVersion() const;
    /**
     * @hash   1847965188
     * @symbol ?hasBlockEntity@BlockLegacy@@QEBA_NXZ
     */
    MCAPI bool hasBlockEntity() const;
    /**
     * @hash   377430163
     * @symbol ?hasProperty@BlockLegacy@@QEBA_NW4BlockProperty@@@Z
     */
    MCAPI bool hasProperty(enum BlockProperty) const;
    /**
     * @hash   -1174297113
     * @symbol ?hasState@BlockLegacy@@QEBA_NAEBVHashedString@@@Z
     */
    MCAPI bool hasState(class HashedString const &) const;
    /**
     * @hash   -896674349
     * @symbol ?hasState@BlockLegacy@@QEBA_NAEBVItemState@@@Z
     */
    MCAPI bool hasState(class ItemState const &) const;
    /**
     * @hash   -917375563
     * @symbol ?hasTag@BlockLegacy@@QEBA_NAEBVHashedString@@@Z
     */
    MCAPI bool hasTag(class HashedString const &) const;
    /**
     * @hash   -2090392381
     * @symbol ?hasTag@BlockLegacy@@QEBA_NAEB_K@Z
     */
    MCAPI bool hasTag(unsigned __int64 const &) const;
    /**
     * @hash   2072422678
     * @symbol ?initEntity@BlockLegacy@@QEAAXAEAVEntityRegistry@@@Z
     */
    MCAPI void initEntity(class EntityRegistry &);
    /**
     * @hash   -1316539941
     * @symbol ?initializeBlockStateGroup@BlockLegacy@@QEAAXXZ
     */
    MCAPI void initializeBlockStateGroup();
    /**
     * @hash   -1131613902
     * @symbol ?isEmpty@BlockLegacy@@QEBA_NXZ
     */
    MCAPI bool isEmpty() const;
    /**
     * @hash   416091938
     * @symbol ?isHeavy@BlockLegacy@@QEBA_NXZ
     */
    MCAPI bool isHeavy() const;
    /**
     * @hash   1517838610
     * @symbol ?isMotionBlockingBlock@BlockLegacy@@QEBA_NXZ
     */
    MCAPI bool isMotionBlockingBlock() const;
    /**
     * @hash   -451443788
     * @symbol ?isSolidBlockingBlock@BlockLegacy@@QEBA_NXZ
     */
    MCAPI bool isSolidBlockingBlock() const;
    /**
     * @hash   -1649037516
     * @symbol ?isStandingSign@BlockLegacy@@QEBA_NXZ
     */
    MCAPI bool isStandingSign() const;
    /**
     * @hash   163361778
     * @symbol ?isVanilla@BlockLegacy@@QEBA_NXZ
     */
    MCAPI bool isVanilla() const;
    /**
     * @hash   1426411168
     * @symbol ?matchesStates@BlockLegacy@@QEBA_NAEBV1@@Z
     */
    MCAPI bool matchesStates(class BlockLegacy const &) const;
    /**
     * @hash   1194070827
     * @symbol ??8BlockLegacy@@QEBA_NAEBVHashedString@@@Z
     */
    MCAPI bool operator==(class HashedString const &) const;
    /**
     * @hash   -943893124
     * @symbol ?overrideBlockProperties@BlockLegacy@@QEAAAEAV1@W4BlockProperty@@@Z
     */
    MCAPI class BlockLegacy & overrideBlockProperties(enum BlockProperty);
    /**
     * @hash   998495456
     * @symbol ?setAllowsRunes@BlockLegacy@@QEAAAEAV1@_N@Z
     */
    MCAPI class BlockLegacy & setAllowsRunes(bool);
    /**
     * @hash   1414400682
     * @symbol ?setBlockTintType@BlockLegacy@@QEAAAEAV1@W4BlockTintType@@@Z
     */
    MCAPI class BlockLegacy & setBlockTintType(enum BlockTintType);
    /**
     * @hash   -396263042
     * @symbol ?setCanBeExtraBlock@BlockLegacy@@QEAAAEAV1@_N@Z
     */
    MCAPI class BlockLegacy & setCanBeExtraBlock(bool);
    /**
     * @hash   -250766030
     * @symbol ?setCanBeOriginalSurface@BlockLegacy@@QEAAAEAV1@_N@Z
     */
    MCAPI class BlockLegacy & setCanBeOriginalSurface(bool);
    /**
     * @hash   1045571522
     * @symbol ?setCategory@BlockLegacy@@QEAAAEAV1@W4CreativeItemCategory@@@Z
     */
    MCAPI class BlockLegacy & setCategory(enum CreativeItemCategory);
    /**
     * @hash   399317388
     * @symbol ?setCreativeEnumState@BlockLegacy@@QEAAAEAV1@AEBVItemState@@@Z
     */
    MCAPI class BlockLegacy & setCreativeEnumState(class ItemState const &);
    /**
     * @hash   -1951785148
     * @symbol ?setCreativeGroup@BlockLegacy@@QEAAAEAV1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI class BlockLegacy & setCreativeGroup(std::string const &);
    /**
     * @hash   65272226
     * @symbol ?setDefaultState@BlockLegacy@@QEAAXAEBVBlock@@@Z
     */
    MCAPI void setDefaultState(class Block const &);
    /**
     * @hash   51766236
     * @symbol ?setDestroyTime@BlockLegacy@@QEAAAEAV1@M@Z
     */
    MCAPI class BlockLegacy & setDestroyTime(float);
    /**
     * @symbol ?setExperienceDrop@BlockLegacy@@QEAAAEAV1@UIntRange@@@Z
     */
    MCAPI class BlockLegacy & setExperienceDrop(struct IntRange);
    /**
     * @hash   836605580
     * @symbol ?setExplodeable@BlockLegacy@@QEAAAEAV1@M@Z
     */
    MCAPI class BlockLegacy & setExplodeable(float);
    /**
     * @symbol ?setFlammable@BlockLegacy@@QEAAAEAV1@W4FlameOdds@@W4BurnOdds@@W4LavaFlammable@@@Z
     */
    MCAPI class BlockLegacy & setFlammable(enum FlameOdds, enum BurnOdds, enum LavaFlammable);
    /**
     * @hash   -87571318
     * @symbol ?setIgnoreBlockForInsideCubeRenderer@BlockLegacy@@QEAAX_N@Z
     */
    MCAPI void setIgnoreBlockForInsideCubeRenderer(bool);
    /**
     * @hash   1302951096
     * @symbol ?setIsInteraction@BlockLegacy@@QEAAX_N@Z
     */
    MCAPI void setIsInteraction(bool);
    /**
     * @hash   903236906
     * @symbol ?setIsVanillaBlock@BlockLegacy@@QEAAX_N@Z
     */
    MCAPI void setIsVanillaBlock(bool);
    /**
     * @hash   1533109522
     * @symbol ?setLightBlock@BlockLegacy@@QEAAAEAV1@UBrightness@@@Z
     */
    MCAPI class BlockLegacy & setLightBlock(struct Brightness);
    /**
     * @hash   -758246784
     * @symbol ?setLightEmission@BlockLegacy@@QEAAAEAV1@UBrightness@@@Z
     */
    MCAPI class BlockLegacy & setLightEmission(struct Brightness);
    /**
     * @hash   367073028
     * @symbol ?setMapColor@BlockLegacy@@QEAAAEAV1@AEBVColor@mce@@@Z
     */
    MCAPI class BlockLegacy & setMapColor(class mce::Color const &);
    /**
     * @hash   -1105274176
     * @symbol ?setMinRequiredBaseGameVersion@BlockLegacy@@QEAAAEAV1@AEBVBaseGameVersion@@@Z
     */
    MCAPI class BlockLegacy & setMinRequiredBaseGameVersion(class BaseGameVersion const &);
    /**
     * @hash   -377167514
     * @symbol ?setNameId@BlockLegacy@@QEAAAEAV1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI class BlockLegacy & setNameId(std::string const &);
    /**
     * @hash   1984100968
     * @symbol ?setOnlyPermutationandDefaultState@BlockLegacy@@QEAAXV?$unique_ptr@VBlock@@U?$default_delete@VBlock@@@std@@@std@@@Z
     */
    MCAPI void setOnlyPermutationandDefaultState(std::unique_ptr<class Block>);
    /**
     * @hash   -1907919718
     * @symbol ?setPushesOutItems@BlockLegacy@@QEAAX_N@Z
     */
    MCAPI void setPushesOutItems(bool);
    /**
     * @hash   -1534173434
     * @symbol ?setRandomTicking@BlockLegacy@@QEBAX_N@Z
     */
    MCAPI void setRandomTicking(bool) const;
    /**
     * @hash   -1561901578
     * @symbol ?setRandomTickingExtraLayer@BlockLegacy@@QEBAX_N@Z
     */
    MCAPI void setRandomTickingExtraLayer(bool) const;
    /**
     * @hash   -209743992
     * @symbol ?setSolid@BlockLegacy@@QEAAX_N@Z
     */
    MCAPI void setSolid(bool);
    /**
     * @hash   -1414295168
     * @symbol ?setVisualShape@BlockLegacy@@QEAAXAEBVVec3@@0@Z
     */
    MCAPI void setVisualShape(class Vec3 const &, class Vec3 const &);
    /**
     * @hash   -1795090307
     * @symbol ?tryGetStateFromLegacyData@BlockLegacy@@QEBAPEBVBlock@@G@Z
     */
    MCAPI class Block const * tryGetStateFromLegacyData(unsigned short) const;
    /**
     * @hash   -1927270567
     * @symbol ?BLOCK_DESCRIPTION_PREFIX@BlockLegacy@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const BLOCK_DESCRIPTION_PREFIX;
    /**
     * @hash   664708307
     * @symbol ?SIZE_OFFSET@BlockLegacy@@2MB
     */
    MCAPI static float const SIZE_OFFSET;
    /**
     * @hash   -2089571096
     * @symbol ?extractBlockNameInfo@BlockLegacy@@SA?AUNameInfo@1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI static struct BlockLegacy::NameInfo extractBlockNameInfo(std::string const &);
    /**
     * @hash   -1131198716
     * @symbol ?getPlacementFacingAll@BlockLegacy@@SAEAEAVActor@@AEBVBlockPos@@M@Z
     */
    MCAPI static unsigned char getPlacementFacingAll(class Actor &, class BlockPos const &, float);
    /**
     * @hash   167649650
     * @symbol ?getPlacementFacingAllExceptAxisY@BlockLegacy@@SAEAEAVActor@@AEBVBlockPos@@M@Z
     */
    MCAPI static unsigned char getPlacementFacingAllExceptAxisY(class Actor &, class BlockPos const &, float);
    /**
     * @symbol ?popResource@BlockLegacy@@SAPEAVItemActor@@AEAVBlockSource@@AEBVBlockPos@@AEBVItemInstance@@@Z
     */
    MCAPI static class ItemActor * popResource(class BlockSource &, class BlockPos const &, class ItemInstance const &);
    /**
     * @hash   1206035750
     * @symbol ?spawnResources@BlockLegacy@@SAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandomize@@PEAV?$vector@PEBVItem@@V?$allocator@PEBVItem@@@std@@@std@@MH@Z
     */
    MCAPI static void spawnResources(class BlockSource &, class BlockPos const &, class Randomize &, std::vector<class Item const *> *, float, int);

//protected:
    /**
     * @hash   -1447474805
     * @symbol ?clip@BlockLegacy@@IEBA?AVHitResult@@AEBVBlockSource@@AEBVBlockPos@@AEBVVec3@@2_NAEBVAABB@@@Z
     */
    MCAPI class HitResult clip(class BlockSource const &, class BlockPos const &, class Vec3 const &, class Vec3 const &, bool, class AABB const &) const;
    /**
     * @hash   798816268
     * @symbol ?forEachBlockPermutationMutable@BlockLegacy@@IEAA_NV?$function@$$A6A_NAEAVBlock@@@Z@std@@@Z
     */
    MCAPI bool forEachBlockPermutationMutable(class std::function<bool (class Block &)>);
    /**
     * @hash   92574282
     * @symbol ?getBurnOdds@BlockLegacy@@IEBAHXZ
     */
    MCAPI int getBurnOdds() const;
    /**
     * @hash   -2102803273
     * @symbol ?getDestroySpeed@BlockLegacy@@IEBAMXZ
     */
    MCAPI float getDestroySpeed() const;
    /**
     * @hash   -476822974
     * @symbol ?getFlameOdds@BlockLegacy@@IEBAHXZ
     */
    MCAPI int getFlameOdds() const;
    /**
     * @hash   -969814396
     * @symbol ?getFriction@BlockLegacy@@IEBAMXZ
     */
    MCAPI float getFriction() const;
    /**
     * @hash   378684305
     * @symbol ?getLight@BlockLegacy@@IEBA?AUBrightness@@XZ
     */
    MCAPI struct Brightness getLight() const;
    /**
     * @symbol ?isLavaFlammable@BlockLegacy@@IEBA_NXZ
     */
    MCAPI bool isLavaFlammable() const;
    /**
     * @hash   -1535021807
     * @symbol ?createAABBWithPixelCoordinates@BlockLegacy@@KA?AVAABB@@MMMMMM@Z
     */
    MCAPI static class AABB createAABBWithPixelCoordinates(float, float, float, float, float, float);

//private:
    /**
     * @hash   1285818144
     * @symbol ?initParams@BlockLegacy@@AEBAXAEAVRenderParams@@AEAVBlockSource@@AEBVBlockPos@@PEAVActor@@@Z
     */
    MCAPI void initParams(class RenderParams &, class BlockSource &, class BlockPos const &, class Actor *) const;

protected:

private:

};