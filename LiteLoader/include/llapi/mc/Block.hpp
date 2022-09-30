/**
 * @file  Block.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Add include headers & pre-declares
#include "CompoundTag.hpp"

#undef BEFORE_EXTRA

/**
 * @brief MC class Block.
 *
 */
class Block {

#define AFTER_EXTRA
    // Add new members to class
public:
    LIAPI static Block* create(const string& str, unsigned short tileData);
    LIAPI static Block* create(CompoundTag* nbt);

    LIAPI string getTypeName() const;
    LIAPI int getId() const;
    inline unsigned short getTileData(){
        return static_cast<unsigned short>(getVariant());
    }
    LIAPI std::unique_ptr<CompoundTag> getNbt();
    LIAPI bool setNbt(CompoundTag* nbt);

    inline unsigned short getData() const {
        return dAccess<unsigned short, 8>(this);
    }

    inline class BlockLegacy const* getLegacyBlockPtr() const {
        return &dAccess<BlockLegacy, 16>(this);
    }

    inline bool operator==(class Block const& block) const {
        class BlockLegacy const* p1 = getLegacyBlockPtr();
        class BlockLegacy const* p2 = block.getLegacyBlockPtr();
        if (!p1 || !p2)
            return false;
        return p1 == p2 && getData() == block.getData();
    }

    inline bool operator!=(class Block const& block) const {
        class BlockLegacy const* p1 = getLegacyBlockPtr();
        class BlockLegacy const* p2 = block.getLegacyBlockPtr();
        if (!p1 || !p2)
            return false;
        return p1 != p2 || getData() != block.getData();
    }
#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCK
public:
    class Block& operator=(class Block const &) = delete;
    Block(class Block const &) = delete;
    Block() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~Block();
    /**
     * @hash   -1172442742
     * @vftbl  1
     * @symbol ?getRenderLayer@Block@@UEBA?AW4BlockRenderLayer@@XZ
     */
    virtual enum class BlockRenderLayer getRenderLayer() const;
    /**
     * @hash   686264165
     * @symbol ??0Block@@QEAA@GV?$not_null@PEAVBlockLegacy@@@gsl@@@Z
     */
    MCAPI Block(unsigned short, class gsl::not_null<class BlockLegacy *>);
    /**
     * @hash   1538962090
     * @symbol ??0Block@@QEAA@GV?$not_null@PEAVBlockLegacy@@@gsl@@VCompoundTag@@AEBI@Z
     */
    MCAPI Block(unsigned short, class gsl::not_null<class BlockLegacy *>, class CompoundTag, unsigned int const &);
    /**
     * @hash   731281830
     * @symbol ?addAABBs@Block@@QEBAXAEBVBlockSource@@AEBVBlockPos@@PEBVAABB@@AEAV?$vector@VAABB@@V?$allocator@VAABB@@@std@@@std@@@Z
     */
    MCAPI void addAABBs(class BlockSource const &, class BlockPos const &, class AABB const *, std::vector<class AABB> &) const;
    /**
     * @hash   -952465727
     * @symbol ?addCollisionShapes@Block@@QEBA_NAEBVBlockSource@@AEBVBlockPos@@PEBVAABB@@AEAV?$vector@VAABB@@V?$allocator@VAABB@@@std@@@std@@V?$optional_ref@$$CBVGetCollisionShapeInterface@@@@@Z
     */
    MCAPI bool addCollisionShapes(class BlockSource const &, class BlockPos const &, class AABB const *, std::vector<class AABB> &, class optional_ref<class GetCollisionShapeInterface const>) const;
    /**
     * @hash   422190495
     * @symbol ?addTag@Block@@QEAAAEAV1@AEBVHashedString@@@Z
     */
    MCAPI class Block & addTag(class HashedString const &);
    /**
     * @hash   -1847335996
     * @symbol ?animateTick@Block@@QEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
     */
    MCAPI void animateTick(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @hash   -344703488
     * @symbol ?asItemInstance@Block@@QEBA?AVItemInstance@@AEAVBlockSource@@AEBVBlockPos@@@Z
     */
    MCAPI class ItemInstance asItemInstance(class BlockSource &, class BlockPos const &) const;
    /**
     * @hash   -960228609
     * @symbol ?attack@Block@@QEBA_NPEAVPlayer@@AEBVBlockPos@@@Z
     */
    MCAPI bool attack(class Player *, class BlockPos const &) const;
    /**
     * @hash   1109062267
     * @symbol ?breaksFallingBlocks@Block@@QEBA_NVBaseGameVersion@@@Z
     */
    MCAPI bool breaksFallingBlocks(class BaseGameVersion) const;
    /**
     * @hash   -1569228780
     * @symbol ?buildDescriptionId@Block@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI std::string buildDescriptionId() const;
    /**
     * @hash   820556292
     * @symbol ?buildDescriptionName@Block@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI std::string buildDescriptionName() const;
    /**
     * @hash   1968157917
     * @symbol ?cacheComponentData@Block@@QEAAXXZ
     */
    MCAPI void cacheComponentData();
    /**
     * @hash   538018806
     * @symbol ?calcGroundFriction@Block@@QEBAMAEBUIMobMovementProxy@@AEBVBlockPos@@@Z
     */
    MCAPI float calcGroundFriction(struct IMobMovementProxy const &, class BlockPos const &) const;
    /**
     * @hash   675594358
     * @symbol ?canBeBrokenFromFalling@Block@@QEBA_NXZ
     */
    MCAPI bool canBeBrokenFromFalling() const;
    /**
     * @hash   -206341544
     * @symbol ?canBeBuiltOver@Block@@QEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    MCAPI bool canBeBuiltOver(class BlockSource &, class BlockPos const &) const;
    /**
     * @hash   -598062077
     * @symbol ?canBeBuiltOver@Block@@QEBA_NAEAVBlockSource@@AEBVBlockPos@@AEBVBlockItem@@@Z
     */
    MCAPI bool canBeBuiltOver(class BlockSource &, class BlockPos const &, class BlockItem const &) const;
    /**
     * @hash   -1854632153
     * @symbol ?canBeFertilized@Block@@QEBA_NAEAVBlockSource@@AEBVBlockPos@@AEBV1@@Z
     */
    MCAPI bool canBeFertilized(class BlockSource &, class BlockPos const &, class Block const &) const;
    /**
     * @hash   -344705562
     * @symbol ?canBeOriginalSurface@Block@@QEBA_NXZ
     */
    MCAPI bool canBeOriginalSurface() const;
    /**
     * @hash   674091237
     * @symbol ?canConnect@Block@@QEBA_NAEBV1@E0@Z
     */
    MCAPI bool canConnect(class Block const &, unsigned char, class Block const &) const;
    /**
     * @hash   1240836612
     * @symbol ?canDamperVibrations@Block@@QEBA_NXZ
     */
    MCAPI bool canDamperVibrations() const;
    /**
     * @hash   1720584086
     * @symbol ?canHaveExtraData@Block@@QEBA_NXZ
     */
    MCAPI bool canHaveExtraData() const;
    /**
     * @hash   -799267868
     * @symbol ?canHurtAndBreakItem@Block@@QEBA_NXZ
     */
    MCAPI bool canHurtAndBreakItem() const;
    /**
     * @hash   844834358
     * @symbol ?canInstatick@Block@@QEBA_NXZ
     */
    MCAPI bool canInstatick() const;
    /**
     * @hash   -166896490
     * @symbol ?canOccludeVibrations@Block@@QEBA_NXZ
     */
    MCAPI bool canOccludeVibrations() const;
    /**
     * @hash   -844429322
     * @symbol ?canProvideFullSupport@Block@@QEBA_NE@Z
     */
    MCAPI bool canProvideFullSupport(unsigned char) const;
    /**
     * @hash   -50683100
     * @symbol ?canProvideMultifaceSupport@Block@@QEBA_NE@Z
     */
    MCAPI bool canProvideMultifaceSupport(unsigned char) const;
    /**
     * @hash   -1556258083
     * @symbol ?canProvideSupport@Block@@QEBA_NEW4BlockSupportType@@@Z
     */
    MCAPI bool canProvideSupport(unsigned char, enum class BlockSupportType) const;
    /**
     * @hash   967978748
     * @symbol ?canSlide@Block@@QEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    MCAPI bool canSlide(class BlockSource &, class BlockPos const &) const;
    /**
     * @hash   1055659822
     * @symbol ?canSurvive@Block@@QEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    MCAPI bool canSurvive(class BlockSource &, class BlockPos const &) const;
    /**
     * @hash   2122794854
     * @symbol ?causesFreezeEffect@Block@@QEBA_NXZ
     */
    MCAPI bool causesFreezeEffect() const;
    /**
     * @hash   2003039085
     * @symbol ?checkIsPathable@Block@@QEBA_NAEAVActor@@AEBVBlockPos@@1@Z
     */
    MCAPI bool checkIsPathable(class Actor &, class BlockPos const &, class BlockPos const &) const;
    /**
     * @hash   -1334456932
     * @symbol ?clip@Block@@QEBA?AVHitResult@@AEBVBlockSource@@AEBVBlockPos@@AEBVVec3@@2_N@Z
     */
    MCAPI class HitResult clip(class BlockSource const &, class BlockPos const &, class Vec3 const &, class Vec3 const &, bool) const;
    /**
     * @hash   -446412989
     * @symbol ?clip@Block@@QEBA?AVHitResult@@AEBVBlockSource@@AEBVBlockPos@@AEBVVec3@@2_NAEBVAABB@@@Z
     */
    MCAPI class HitResult clip(class BlockSource const &, class BlockPos const &, class Vec3 const &, class Vec3 const &, bool, class AABB const &) const;
    /**
     * @hash   1694567748
     * @symbol ?copyState@Block@@QEBAAEBV1@AEBV1@AEBVItemState@@@Z
     */
    MCAPI class Block const & copyState(class Block const &, class ItemState const &) const;
    /**
     * @hash   -1805753490
     * @symbol ?dealsContactDamage@Block@@QEBA_NAEBVActor@@_N@Z
     */
    MCAPI bool dealsContactDamage(class Actor const &, bool) const;
    /**
     * @hash   -658940551
     * @symbol ?destroy@Block@@QEBAXAEAVBlockSource@@AEBVBlockPos@@PEAVActor@@@Z
     */
    MCAPI void destroy(class BlockSource &, class BlockPos const &, class Actor *) const;
    /**
     * @hash   -1085066150
     * @symbol ?entityInside@Block@@QEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVActor@@@Z
     */
    MCAPI void entityInside(class BlockSource &, class BlockPos const &, class Actor &) const;
    /**
     * @hash   1290221035
     * @symbol ?executeEvent@Block@@QEBAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVRenderParams@@@Z
     */
    MCAPI void executeEvent(std::string const &, class RenderParams &) const;
    /**
     * @hash   -1663940641
     * @symbol ?executeItemEvent@Block@@QEBAXAEAVItemStackBase@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVBlockSource@@AEBVBlockPos@@PEAVActor@@@Z
     */
    MCAPI void executeItemEvent(class ItemStackBase &, std::string const &, class BlockSource &, class BlockPos const &, class Actor *) const;
    /**
     * @hash   -1022073142
     * @symbol ?executeTrigger@Block@@QEBA_NAEBVDefinitionTrigger@@AEAVRenderParams@@@Z
     */
    MCAPI bool executeTrigger(class DefinitionTrigger const &, class RenderParams &) const;
    /**
     * @hash   -2084808550
     * @symbol ?getAABB@Block@@QEBAAEBVAABB@@AEBVIConstBlockSource@@AEBVBlockPos@@AEAV2@_N@Z
     */
    MCAPI class AABB const & getAABB(class IConstBlockSource const &, class BlockPos const &, class AABB &, bool) const;
    /**
     * @hash   -215809642
     * @symbol ?getAllowsRunes@Block@@QEBA_NXZ
     */
    MCAPI bool getAllowsRunes() const;
    /**
     * @hash   -1713631910
     * @symbol ?getBlockEntityType@Block@@QEBA?AW4BlockActorType@@XZ
     */
    MCAPI enum class BlockActorType getBlockEntityType() const;
    /**
     * @hash   1460586874
     * @symbol ?getBurnOdds@Block@@QEBAHXZ
     */
    MCAPI int getBurnOdds() const;
    /**
     * @hash   -444243209
     * @symbol ?getCollisionShape@Block@@QEBA_NAEAVAABB@@AEBVIConstBlockSource@@AEBVBlockPos@@V?$optional_ref@$$CBVGetCollisionShapeInterface@@@@@Z
     */
    MCAPI bool getCollisionShape(class AABB &, class IConstBlockSource const &, class BlockPos const &, class optional_ref<class GetCollisionShapeInterface const>) const;
    /**
     * @hash   1937172848
     * @symbol ?getColor@Block@@QEBAHAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    MCAPI int getColor(class BlockSource &, class BlockPos const &) const;
    /**
     * @hash   1145500576
     * @symbol ?getColor@Block@@QEBAHXZ
     */
    MCAPI int getColor() const;
    /**
     * @hash   -746556748
     * @symbol ?getComparatorSignal@Block@@QEBAHAEAVBlockSource@@AEBVBlockPos@@E@Z
     */
    MCAPI int getComparatorSignal(class BlockSource &, class BlockPos const &, unsigned char) const;
    /**
     * @hash   1166706631
     * @symbol ?getConnectedDirections@Block@@QEBAXAEBVBlockPos@@AEAVBlockSource@@AEA_N222@Z
     */
    MCAPI void getConnectedDirections(class BlockPos const &, class BlockSource &, bool &, bool &, bool &, bool &) const;
    /**
     * @hash   786767276
     * @symbol ?getCreativeCategory@Block@@QEBA?AW4CreativeItemCategory@@XZ
     */
    MCAPI enum class CreativeItemCategory getCreativeCategory() const;
    /**
     * @hash   1089981860
     * @symbol ?getDebugText@Block@@QEBAXAEAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@AEBVBlockPos@@@Z
     */
    MCAPI void getDebugText(std::vector<std::string> &, class BlockPos const &) const;
    /**
     * @hash   -206615996
     * @symbol ?getDescriptionId@Block@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI std::string getDescriptionId() const;
    /**
     * @hash   1170041148
     * @symbol ?getDestroySpeed@Block@@QEBAMXZ
     */
    MCAPI float getDestroySpeed() const;
    /**
     * @hash   -1598636893
     * @symbol ?getDirectSignal@Block@@QEBAHAEAVBlockSource@@AEBVBlockPos@@H@Z
     */
    MCAPI int getDirectSignal(class BlockSource &, class BlockPos const &, int) const;
    /**
     * @hash   1305574724
     * @symbol ?getEntityForModification@Block@@QEBAAEAVEntityContext@@XZ
     */
    MCAPI class EntityContext & getEntityForModification() const;
    /**
     * @hash   2131332086
     * @symbol ?getExplosionResistance@Block@@QEBAMPEAVActor@@@Z
     */
    MCAPI float getExplosionResistance(class Actor *) const;
    /**
     * @hash   -1727001672
     * @symbol ?getFlameOdds@Block@@QEBAHXZ
     */
    MCAPI int getFlameOdds() const;
    /**
     * @hash   495365558
     * @symbol ?getFriction@Block@@QEBAMXZ
     */
    MCAPI float getFriction() const;
    /**
     * @hash   1618921716
     * @symbol ?getIgnoresDestroyPermissions@Block@@QEBA_NAEAVActor@@AEBVBlockPos@@@Z
     */
    MCAPI bool getIgnoresDestroyPermissions(class Actor &, class BlockPos const &) const;
    /**
     * @hash   -1653008208
     * @symbol ?getLegacyBlock@Block@@QEBAAEBVBlockLegacy@@XZ
     */
    MCAPI class BlockLegacy const & getLegacyBlock() const;
    /**
     * @hash   441211066
     * @symbol ?getLight@Block@@QEBA?AUBrightness@@XZ
     */
    MCAPI struct Brightness getLight() const;
    /**
     * @hash   -1248243880
     * @symbol ?getLightEmission@Block@@QEBA?AUBrightness@@XZ
     */
    MCAPI struct Brightness getLightEmission() const;
    /**
     * @hash   -653104608
     * @symbol ?getMapColor@Block@@QEBA?AVColor@mce@@AEAVBlockSource@@AEBVBlockPos@@@Z
     */
    MCAPI class mce::Color getMapColor(class BlockSource &, class BlockPos const &) const;
    /**
     * @hash   -803043342
     * @symbol ?getMaterial@Block@@QEBAAEBVMaterial@@XZ
     */
    MCAPI class Material const & getMaterial() const;
    /**
     * @hash   -1296385463
     * @symbol ?getMobToSpawn@Block@@QEBAPEBVMobSpawnerData@@AEBVSpawnConditions@@AEAVBlockSource@@@Z
     */
    MCAPI class MobSpawnerData const * getMobToSpawn(class SpawnConditions const &, class BlockSource &) const;
    /**
     * @hash   -815259004
     * @symbol ?getName@Block@@QEBAAEBVHashedString@@XZ
     */
    MCAPI class HashedString const & getName() const;
    /**
     * @hash   -586685618
     * @symbol ?getPlacementBlock@Block@@QEBAAEBV1@AEAVActor@@AEBVBlockPos@@EAEBVVec3@@H@Z
     */
    MCAPI class Block const & getPlacementBlock(class Actor &, class BlockPos const &, unsigned char, class Vec3 const &, int) const;
    /**
     * @hash   -909789592
     * @symbol ?getResourceCount@Block@@QEBAHAEAVRandomize@@H@Z
     */
    MCAPI int getResourceCount(class Randomize &, int) const;
    /**
     * @hash   1825848019
     * @symbol ?getRuntimeId@Block@@QEBAAEBIXZ
     */
    MCAPI unsigned int const & getRuntimeId() const;
    /**
     * @hash   -1547993027
     * @symbol ?getSecondPart@Block@@QEBA_NAEBVBlockSource@@AEBVBlockPos@@AEAV3@@Z
     */
    MCAPI bool getSecondPart(class BlockSource const &, class BlockPos const &, class BlockPos &) const;
    /**
     * @hash   -70428724
     * @symbol ?getSerializationId@Block@@QEBAAEBVCompoundTag@@XZ
     */
    MCAPI class CompoundTag const & getSerializationId() const;
    /**
     * @hash   1044723110
     * @symbol ?getSilkTouchItemInstance@Block@@QEBA?AVItemInstance@@XZ
     */
    MCAPI class ItemInstance getSilkTouchItemInstance() const;
    /**
     * @hash   101811632
     * @symbol ?getThickness@Block@@QEBAMXZ
     */
    MCAPI float getThickness() const;
    /**
     * @hash   1742589780
     * @symbol ?getTranslucency@Block@@QEBAMXZ
     */
    MCAPI float getTranslucency() const;
    /**
     * @hash   567301012
     * @symbol ?getVariant@Block@@QEBAHXZ
     */
    MCAPI int getVariant() const;
    /**
     * @hash   -209036532
     * @symbol ?getVisualShape@Block@@QEBAAEBVAABB@@AEAV2@_N@Z
     */
    MCAPI class AABB const & getVisualShape(class AABB &, bool) const;
    /**
     * @hash   794954224
     * @symbol ?getVisualShapeInWorld@Block@@QEBAAEBVAABB@@AEAVBlockSource@@AEBVBlockPos@@AEAV2@_N@Z
     */
    MCAPI class AABB const & getVisualShapeInWorld(class BlockSource &, class BlockPos const &, class AABB &, bool) const;
    /**
     * @hash   -1307179530
     * @symbol ?hasBlockEntity@Block@@QEBA_NXZ
     */
    MCAPI bool hasBlockEntity() const;
    /**
     * @hash   -1369176524
     * @symbol ?hasComparatorSignal@Block@@QEBA_NXZ
     */
    MCAPI bool hasComparatorSignal() const;
    /**
     * @hash   698490913
     * @symbol ?hasProperty@Block@@QEBA_NW4BlockProperty@@@Z
     */
    MCAPI bool hasProperty(enum class BlockProperty) const;
    /**
     * @hash   1271815457
     * @symbol ?hasPropertyNoLock@Block@@QEBA_NW4BlockProperty@@@Z
     */
    MCAPI bool hasPropertyNoLock(enum class BlockProperty) const;
    /**
     * @hash   -1978901376
     * @symbol ?hasRuntimeId@Block@@QEBA?B_NXZ
     */
    MCAPI bool const hasRuntimeId() const;
    /**
     * @hash   -822692767
     * @symbol ?hasState@Block@@QEBA_NAEBVItemState@@@Z
     */
    MCAPI bool hasState(class ItemState const &) const;
    /**
     * @hash   1161617301
     * @symbol ?hasTag@Block@@QEBA_NAEBVHashedString@@@Z
     */
    MCAPI bool hasTag(class HashedString const &) const;
    /**
     * @hash   2122752897
     * @symbol ?hasTag@Block@@QEBA_NAEB_K@Z
     */
    MCAPI bool hasTag(unsigned __int64 const &) const;
    /**
     * @hash   -1534371386
     * @symbol ?ignoreEntitiesOnPistonMove@Block@@QEBA_NXZ
     */
    MCAPI bool ignoreEntitiesOnPistonMove() const;
    /**
     * @hash   15366260
     * @symbol ?initEntity@Block@@QEAAXAEAVEntityRegistry@@@Z
     */
    MCAPI void initEntity(class EntityRegistry &);
    /**
     * @hash   959866232
     * @symbol ?initParams@Block@@QEBAXAEAVRenderParams@@AEAVBlockSource@@AEBVBlockPos@@PEAVActor@@@Z
     */
    MCAPI void initParams(class RenderParams &, class BlockSource &, class BlockPos const &, class Actor *) const;
    /**
     * @hash   946125796
     * @symbol ?isAir@Block@@QEBA_NXZ
     */
    MCAPI bool isAir() const;
    /**
     * @hash   -1794765121
     * @symbol ?isAttachedTo@Block@@QEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAV3@@Z
     */
    MCAPI bool isAttachedTo(class BlockSource &, class BlockPos const &, class BlockPos &) const;
    /**
     * @hash   -850621722
     * @symbol ?isAuxValueRelevantForPicking@Block@@QEBA_NXZ
     */
    MCAPI bool isAuxValueRelevantForPicking() const;
    /**
     * @hash   -1447006892
     * @symbol ?isBounceBlock@Block@@QEBA_NXZ
     */
    MCAPI bool isBounceBlock() const;
    /**
     * @hash   -1595407036
     * @symbol ?isButtonBlock@Block@@QEBA_NXZ
     */
    MCAPI bool isButtonBlock() const;
    /**
     * @hash   1465583915
     * @symbol ?isClimbable@Block@@QEBA_NAEBUIActorMovementProxy@@@Z
     */
    MCAPI bool isClimbable(struct IActorMovementProxy const &) const;
    /**
     * @hash   2129479014
     * @symbol ?isContainerBlock@Block@@QEBA_NXZ
     */
    MCAPI bool isContainerBlock() const;
    /**
     * @hash   -204606252
     * @symbol ?isCropBlock@Block@@QEBA_NXZ
     */
    MCAPI bool isCropBlock() const;
    /**
     * @hash   -1115811580
     * @symbol ?isDoorBlock@Block@@QEBA_NXZ
     */
    MCAPI bool isDoorBlock() const;
    /**
     * @hash   83532660
     * @symbol ?isEmpty@Block@@QEBA_NXZ
     */
    MCAPI bool isEmpty() const;
    /**
     * @hash   -798489258
     * @symbol ?isFenceBlock@Block@@QEBA_NXZ
     */
    MCAPI bool isFenceBlock() const;
    /**
     * @hash   -1614088410
     * @symbol ?isFenceGateBlock@Block@@QEBA_NXZ
     */
    MCAPI bool isFenceGateBlock() const;
    /**
     * @hash   1282007655
     * @symbol ?isFilteredOut@Block@@QEBA_NW4BlockRenderLayer@@@Z
     */
    MCAPI bool isFilteredOut(enum class BlockRenderLayer) const;
    /**
     * @hash   -1538259356
     * @symbol ?isHeavy@Block@@QEBA_NXZ
     */
    MCAPI bool isHeavy() const;
    /**
     * @hash   -2101249626
     * @symbol ?isInteractiveBlock@Block@@QEBA_NXZ
     */
    MCAPI bool isInteractiveBlock() const;
    /**
     * @symbol ?isLavaFlammable@Block@@QEBA_NXZ
     */
    MCAPI bool isLavaFlammable() const;
    /**
     * @hash   547436006
     * @symbol ?isLeverBlock@Block@@QEBA_NXZ
     */
    MCAPI bool isLeverBlock() const;
    /**
     * @hash   -803579692
     * @symbol ?isMotionBlockingBlock@Block@@QEBA_NXZ
     */
    MCAPI bool isMotionBlockingBlock() const;
    /**
     * @hash   1877153334
     * @symbol ?isMultifaceBlock@Block@@QEBA_NXZ
     */
    MCAPI bool isMultifaceBlock() const;
    /**
     * @hash   1284355920
     * @symbol ?isObstructingChests@Block@@QEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    MCAPI bool isObstructingChests(class BlockSource &, class BlockPos const &) const;
    /**
     * @hash   36496808
     * @symbol ?isPartialBlock@Block@@QEBA_NAEBVBlockSource@@AEBVBlockPos@@@Z
     */
    MCAPI bool isPartialBlock(class BlockSource const &, class BlockPos const &) const;
    /**
     * @hash   938396743
     * @symbol ?isPreservingMediumWhenPlaced@Block@@QEBA_NAEBV1@@Z
     */
    MCAPI bool isPreservingMediumWhenPlaced(class Block const &) const;
    /**
     * @hash   1609942580
     * @symbol ?isRailBlock@Block@@QEBA_NXZ
     */
    MCAPI bool isRailBlock() const;
    /**
     * @hash   567403526
     * @symbol ?isSignalSource@Block@@QEBA_NXZ
     */
    MCAPI bool isSignalSource() const;
    /**
     * @hash   1527283092
     * @symbol ?isSlabBlock@Block@@QEBA_NXZ
     */
    MCAPI bool isSlabBlock() const;
    /**
     * @hash   -390781884
     * @symbol ?isSolid@Block@@QEBA_NXZ
     */
    MCAPI bool isSolid() const;
    /**
     * @hash   423402486
     * @symbol ?isSolidBlockingBlock@Block@@QEBA_NXZ
     */
    MCAPI bool isSolidBlockingBlock() const;
    /**
     * @hash   426205238
     * @symbol ?isSolidBlockingBlockAndNotSignalSource@Block@@QEBA_NXZ
     */
    MCAPI bool isSolidBlockingBlockAndNotSignalSource() const;
    /**
     * @hash   -1100036410
     * @symbol ?isStairBlock@Block@@QEBA_NXZ
     */
    MCAPI bool isStairBlock() const;
    /**
     * @hash   333251286
     * @symbol ?isStandingSign@Block@@QEBA_NXZ
     */
    MCAPI bool isStandingSign() const;
    /**
     * @hash   -1392621004
     * @symbol ?isStemBlock@Block@@QEBA_NXZ
     */
    MCAPI bool isStemBlock() const;
    /**
     * @hash   -756362650
     * @symbol ?isThinFenceBlock@Block@@QEBA_NXZ
     */
    MCAPI bool isThinFenceBlock() const;
    /**
     * @hash   357254156
     * @symbol ?isTopPartialBlock@Block@@QEBA_NAEBVBlockSource@@AEBVBlockPos@@@Z
     */
    MCAPI bool isTopPartialBlock(class BlockSource const &, class BlockPos const &) const;
    /**
     * @hash   517654820
     * @symbol ?isUnbreakable@Block@@QEBA_NXZ
     */
    MCAPI bool isUnbreakable() const;
    /**
     * @hash   -998234668
     * @symbol ?isWallBlock@Block@@QEBA_NXZ
     */
    MCAPI bool isWallBlock() const;
    /**
     * @hash   1196472612
     * @symbol ?isWaterBlocking@Block@@QEBA_NXZ
     */
    MCAPI bool isWaterBlocking() const;
    /**
     * @hash   -1907930909
     * @symbol ?keepState@Block@@QEBAAEBV1@AEBVItemState@@@Z
     */
    MCAPI class Block const & keepState(class ItemState const &) const;
    /**
     * @hash   270076209
     * @symbol ?mayConsumeFertilizer@Block@@QEBA_NAEAVBlockSource@@@Z
     */
    MCAPI bool mayConsumeFertilizer(class BlockSource &) const;
    /**
     * @hash   1676845596
     * @symbol ?mayPick@Block@@QEBA_NAEBVBlockSource@@_N@Z
     */
    MCAPI bool mayPick(class BlockSource const &, bool) const;
    /**
     * @hash   -713531452
     * @symbol ?mayPick@Block@@QEBA_NXZ
     */
    MCAPI bool mayPick() const;
    /**
     * @hash   244276990
     * @symbol ?mayPlace@Block@@QEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    MCAPI bool mayPlace(class BlockSource &, class BlockPos const &) const;
    /**
     * @hash   1942161716
     * @symbol ?mayPlace@Block@@QEBA_NAEAVBlockSource@@AEBVBlockPos@@E@Z
     */
    MCAPI bool mayPlace(class BlockSource &, class BlockPos const &, unsigned char) const;
    /**
     * @hash   -493112868
     * @symbol ?mayPlaceOn@Block@@QEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    MCAPI bool mayPlaceOn(class BlockSource &, class BlockPos const &) const;
    /**
     * @hash   -429622919
     * @symbol ?movedByPiston@Block@@QEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    MCAPI void movedByPiston(class BlockSource &, class BlockPos const &) const;
    /**
     * @hash   -525548606
     * @symbol ?neighborChanged@Block@@QEBAXAEAVBlockSource@@AEBVBlockPos@@1@Z
     */
    MCAPI void neighborChanged(class BlockSource &, class BlockPos const &, class BlockPos const &) const;
    /**
     * @hash   1490651687
     * @symbol ?onExploded@Block@@QEBAXAEAVBlockSource@@AEBVBlockPos@@PEAVActor@@@Z
     */
    MCAPI void onExploded(class BlockSource &, class BlockPos const &, class Actor *) const;
    /**
     * @hash   -65520587
     * @symbol ?onFallOn@Block@@QEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVActor@@M@Z
     */
    MCAPI void onFallOn(class BlockSource &, class BlockPos const &, class Actor &, float) const;
    /**
     * @hash   -1344750445
     * @symbol ?onFertilized@Block@@QEBA_NAEAVBlockSource@@AEBVBlockPos@@PEAVActor@@W4FertilizerType@@@Z
     */
    MCAPI bool onFertilized(class BlockSource &, class BlockPos const &, class Actor *, enum class FertilizerType) const;
    /**
     * @hash   1582692075
     * @symbol ?onLightningHit@Block@@QEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    MCAPI void onLightningHit(class BlockSource &, class BlockPos const &) const;
    /**
     * @hash   185132008
     * @symbol ?onPlace@Block@@QEBAXAEAVBlockSource@@AEBVBlockPos@@AEBV1@@Z
     */
    MCAPI void onPlace(class BlockSource &, class BlockPos const &, class Block const &) const;
    /**
     * @hash   -1326319962
     * @symbol ?onPlayerPlacing@Block@@QEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVActor@@E@Z
     */
    MCAPI void onPlayerPlacing(class BlockSource &, class BlockPos const &, class Actor &, unsigned char) const;
    /**
     * @hash   -1371981512
     * @symbol ?onProjectileHit@Block@@QEBAXAEAVBlockSource@@AEBVBlockPos@@AEBVActor@@@Z
     */
    MCAPI void onProjectileHit(class BlockSource &, class BlockPos const &, class Actor const &) const;
    /**
     * @hash   -415414645
     * @symbol ?onRemove@Block@@QEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    MCAPI void onRemove(class BlockSource &, class BlockPos const &) const;
    /**
     * @hash   44967945
     * @symbol ?onStandOn@Block@@QEBAXAEAVEntityContext@@AEBVBlockPos@@@Z
     */
    MCAPI void onStandOn(class EntityContext &, class BlockPos const &) const;
    /**
     * @hash   -780018727
     * @symbol ?onStepOff@Block@@QEBAXAEAVActor@@AEBVBlockPos@@@Z
     */
    MCAPI void onStepOff(class Actor &, class BlockPos const &) const;
    /**
     * @hash   -1875856581
     * @symbol ?onStepOn@Block@@QEBAXAEAVActor@@AEBVBlockPos@@@Z
     */
    MCAPI void onStepOn(class Actor &, class BlockPos const &) const;
    /**
     * @hash   -1088180295
     * @symbol ?onStructureBlockPlace@Block@@QEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    MCAPI void onStructureBlockPlace(class BlockSource &, class BlockPos const &) const;
    /**
     * @hash   -887566039
     * @symbol ?onStructureNeighborBlockPlace@Block@@QEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    MCAPI void onStructureNeighborBlockPlace(class BlockSource &, class BlockPos const &) const;
    /**
     * @hash   1319655387
     * @symbol ?playerDestroy@Block@@QEBAXAEAVPlayer@@AEBVBlockPos@@@Z
     */
    MCAPI void playerDestroy(class Player &, class BlockPos const &) const;
    /**
     * @hash   1127147322
     * @symbol ?playerWillDestroy@Block@@QEBA_NAEAVPlayer@@AEBVBlockPos@@@Z
     */
    MCAPI bool playerWillDestroy(class Player &, class BlockPos const &) const;
    /**
     * @hash   691628298
     * @symbol ?popResource@Block@@QEBAPEAVItemActor@@AEAVBlockSource@@AEBVBlockPos@@AEBVItemInstance@@@Z
     */
    MCAPI class ItemActor * popResource(class BlockSource &, class BlockPos const &, class ItemInstance const &) const;
    /**
     * @hash   -1922279514
     * @symbol ?pushesOutItems@Block@@QEBA_NXZ
     */
    MCAPI bool pushesOutItems() const;
    /**
     * @hash   1751785188
     * @symbol ?pushesUpFallingBlocks@Block@@QEBA_NXZ
     */
    MCAPI bool pushesUpFallingBlocks() const;
    /**
     * @hash   -2038982686
     * @symbol ?queuedTick@Block@@QEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
     */
    MCAPI void queuedTick(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @hash   -681434158
     * @symbol ?randomTick@Block@@QEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
     */
    MCAPI void randomTick(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @hash   113772909
     * @symbol ?randomlyModifyPosition@Block@@QEBA?AVVec3@@AEBVBlockPos@@@Z
     */
    MCAPI class Vec3 randomlyModifyPosition(class BlockPos const &) const;
    /**
     * @hash   -791507146
     * @symbol ?shouldRandomTick@Block@@QEBA_NXZ
     */
    MCAPI bool shouldRandomTick() const;
    /**
     * @hash   -1450851306
     * @symbol ?shouldRandomTickExtraLayer@Block@@QEBA_NXZ
     */
    MCAPI bool shouldRandomTickExtraLayer() const;
    /**
     * @hash   -1325752343
     * @symbol ?shouldStopFalling@Block@@QEBA_NAEAVActor@@@Z
     */
    MCAPI bool shouldStopFalling(class Actor &) const;
    /**
     * @hash   927890886
     * @symbol ?spawnResources@Block@@QEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandomize@@PEAV?$vector@PEBVItem@@V?$allocator@PEBVItem@@@std@@@std@@MH@Z
     */
    MCAPI void spawnResources(class BlockSource &, class BlockPos const &, class Randomize &, std::vector<class Item const *> *, float, int) const;
    /**
     * @hash   -469497198
     * @symbol ?spawnResources@Block@@QEBAXAEAVBlockSource@@AEBVBlockPos@@AEBV1@AEAVRandomize@@PEAV?$vector@PEBVItem@@V?$allocator@PEBVItem@@@std@@@std@@MHAEBVItemStack@@@Z
     */
    MCAPI void spawnResources(class BlockSource &, class BlockPos const &, class Block const &, class Randomize &, std::vector<class Item const *> *, float, int, class ItemStack const &) const;
    /**
     * @hash   1467520608
     * @symbol ?telemetryVariant@Block@@QEBAHAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    MCAPI int telemetryVariant(class BlockSource &, class BlockPos const &) const;
    /**
     * @hash   -2076716446
     * @symbol ?toDebugString@Block@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI std::string toDebugString() const;
    /**
     * @hash   537361430
     * @symbol ?transformOnFall@Block@@QEBAXAEAVBlockSource@@AEBVBlockPos@@PEAVActor@@M@Z
     */
    MCAPI void transformOnFall(class BlockSource &, class BlockPos const &, class Actor *, float) const;
    /**
     * @hash   2098838971
     * @symbol ?triggerEvent@Block@@QEBAXAEAVBlockSource@@AEBVBlockPos@@HH@Z
     */
    MCAPI void triggerEvent(class BlockSource &, class BlockPos const &, int, int) const;
    /**
     * @hash   -789247561
     * @symbol ?tryGetCopperBehavior@Block@@QEBAPEBVCopperBehavior@@XZ
     */
    MCAPI class CopperBehavior const * tryGetCopperBehavior() const;
    /**
     * @hash   -1918368047
     * @symbol ?tryGetInfested@Block@@QEBAPEBV1@XZ
     */
    MCAPI class Block const * tryGetInfested() const;
    /**
     * @hash   -2054962207
     * @symbol ?tryGetUninfested@Block@@QEBAPEBV1@XZ
     */
    MCAPI class Block const * tryGetUninfested() const;
    /**
     * @hash   -905807160
     * @symbol ?trySpawnResourcesOnExplosion@Block@@QEBAXAEAVBlockSource@@AEBVBlockPos@@AEBV1@PEAV?$vector@PEBVItem@@V?$allocator@PEBVItem@@@std@@@std@@MH@Z
     */
    MCAPI void trySpawnResourcesOnExplosion(class BlockSource &, class BlockPos const &, class Block const &, std::vector<class Item const *> *, float, int) const;
    /**
     * @hash   -1302681290
     * @symbol ?tryToPlace@Block@@QEBA_NAEAVBlockSource@@AEBVBlockPos@@PEBUActorBlockSyncMessage@@@Z
     */
    MCAPI bool tryToPlace(class BlockSource &, class BlockPos const &, struct ActorBlockSyncMessage const *) const;
    /**
     * @hash   1730654338
     * @symbol ?tryToTill@Block@@QEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVActor@@AEAVItemStack@@@Z
     */
    MCAPI bool tryToTill(class BlockSource &, class BlockPos const &, class Actor &, class ItemStack &) const;
    /**
     * @hash   -306034271
     * @symbol ?updateEntityAfterFallOn@Block@@QEBAXAEBVBlockPos@@AEAUUpdateEntityAfterFallOnInterface@@@Z
     */
    MCAPI void updateEntityAfterFallOn(class BlockPos const &, struct UpdateEntityAfterFallOnInterface &) const;
    /**
     * @hash   1326180631
     * @symbol ?updateTallestCollisionShape@Block@@QEBA_NAEBVBlockSource@@AEBVBlockPos@@AEBVAABB@@V?$optional_ref@$$CBVGetCollisionShapeInterface@@@@AEAV4@AEBVVec3@@AEAM@Z
     */
    MCAPI bool updateTallestCollisionShape(class BlockSource const &, class BlockPos const &, class AABB const &, class optional_ref<class GetCollisionShapeInterface const>, class AABB &, class Vec3 const &, float &) const;
    /**
     * @hash   -26228424
     * @symbol ?use@Block@@QEBA_NAEAVPlayer@@AEBVBlockPos@@E@Z
     */
    MCAPI bool use(class Player &, class BlockPos const &, unsigned char) const;
    /**
     * @hash   -337843125
     * @symbol ?BLOCK_DESCRIPTION_PREFIX@Block@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const BLOCK_DESCRIPTION_PREFIX;
    /**
     * @hash   1225792379
     * @symbol ?SIZE_OFFSET@Block@@2MB
     */
    MCAPI static float const SIZE_OFFSET;

//protected:
    /**
     * @hash   1516425511
     * @symbol ?buildSerializationId@Block@@IEAAXI@Z
     */
    MCAPI void buildSerializationId(unsigned int);
    /**
     * @hash   -504884603
     * @symbol ?setRuntimeId@Block@@IEBAXAEBI@Z
     */
    MCAPI void setRuntimeId(unsigned int const &) const;

//private:
    /**
     * @hash   638548906
     * @symbol ?_isSolid@Block@@AEBA_NXZ
     */
    MCAPI bool _isSolid() const;
    /**
     * @hash   -346960278
     * @symbol ?_lockRegistryForRead@Block@@AEBA?AVBlockTypeRegistryReadLock@@XZ
     */
    MCAPI class BlockTypeRegistryReadLock _lockRegistryForRead() const;
    /**
     * @hash   -112929124
     * @symbol ?_tryInitEntityIfNotInitialized@Block@@AEAAXXZ
     */
    MCAPI void _tryInitEntityIfNotInitialized();
    /**
     * @hash   238694026
     * @symbol ?getEntity@Block@@AEBAAEBVEntityContext@@XZ
     */
    MCAPI class EntityContext const & getEntity() const;

protected:

private:

};