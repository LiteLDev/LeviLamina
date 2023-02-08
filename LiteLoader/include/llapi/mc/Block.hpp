/**
 * @file  Block.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @symbol  __unk_destructor_0
     */
    virtual ~Block();
    /**
     * @hash   -238396870
     * @vftbl  1
     * @symbol  ?getRenderLayer\@Block\@\@UEBA?AW4BlockRenderLayer\@\@XZ
     */
    virtual enum class BlockRenderLayer getRenderLayer() const;
    /**
     * @hash   1619833381
     * @symbol  ??0Block\@\@QEAA\@GV?$not_null\@PEAVBlockLegacy\@\@\@gsl\@\@\@Z
     */
    MCAPI Block(unsigned short, class gsl::not_null<class BlockLegacy *>);
    /**
     * @hash   -1822420614
     * @symbol  ??0Block\@\@QEAA\@GV?$not_null\@PEAVBlockLegacy\@\@\@gsl\@\@VCompoundTag\@\@AEBI\@Z
     */
    MCAPI Block(unsigned short, class gsl::not_null<class BlockLegacy *>, class CompoundTag, unsigned int const &);
    /**
     * @hash   1664958678
     * @symbol  ?addAABBs\@Block\@\@QEBAXAEBVBlockSource\@\@AEBVBlockPos\@\@PEBVAABB\@\@AEAV?$vector\@VAABB\@\@V?$allocator\@VAABB\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void addAABBs(class BlockSource const &, class BlockPos const &, class AABB const *, std::vector<class AABB> &) const;
    /**
     * @hash   -18773503
     * @symbol  ?addCollisionShapes\@Block\@\@QEBA_NAEBVBlockSource\@\@AEBVBlockPos\@\@PEBVAABB\@\@AEAV?$vector\@VAABB\@\@V?$allocator\@VAABB\@\@\@std\@\@\@std\@\@V?$optional_ref\@$$CBVGetCollisionShapeInterface\@\@\@\@\@Z
     */
    MCAPI bool addCollisionShapes(class BlockSource const &, class BlockPos const &, class AABB const *, std::vector<class AABB> &, class optional_ref<class GetCollisionShapeInterface const>) const;
    /**
     * @hash   1355882719
     * @symbol  ?addTag\@Block\@\@QEAAAEAV1\@AEBVHashedString\@\@\@Z
     */
    MCAPI class Block & addTag(class HashedString const &);
    /**
     * @hash   -913628396
     * @symbol  ?animateTick\@Block\@\@QEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    MCAPI void animateTick(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @hash   589004112
     * @symbol  ?asItemInstance\@Block\@\@QEBA?AVItemInstance\@\@AEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI class ItemInstance asItemInstance(class BlockSource &, class BlockPos const &) const;
    /**
     * @hash   -26474881
     * @symbol  ?attack\@Block\@\@QEBA_NPEAVPlayer\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI bool attack(class Player *, class BlockPos const &) const;
    /**
     * @hash   2042815995
     * @symbol  ?breaksFallingBlocks\@Block\@\@QEBA_NVBaseGameVersion\@\@\@Z
     */
    MCAPI bool breaksFallingBlocks(class BaseGameVersion) const;
    /**
     * @hash   -635459676
     * @symbol  ?buildDescriptionId\@Block\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string buildDescriptionId() const;
    /**
     * @hash   1754386900
     * @symbol  ?buildDescriptionName\@Block\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string buildDescriptionName() const;
    /**
     * @hash   -1392932643
     * @symbol  ?cacheComponentData\@Block\@\@QEAAXXZ
     */
    MCAPI void cacheComponentData();
    /**
     * @hash   1472264566
     * @symbol  ?calcGroundFriction\@Block\@\@QEBAMAEBUIMobMovementProxy\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI float calcGroundFriction(struct IMobMovementProxy const &, class BlockPos const &) const;
    /**
     * @hash   1609840118
     * @symbol  ?canBeBrokenFromFalling\@Block\@\@QEBA_NXZ
     */
    MCAPI bool canBeBrokenFromFalling() const;
    /**
     * @hash   727904216
     * @symbol  ?canBeBuiltOver\@Block\@\@QEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI bool canBeBuiltOver(class BlockSource &, class BlockPos const &) const;
    /**
     * @hash   336183683
     * @symbol  ?canBeBuiltOver\@Block\@\@QEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@AEBVBlockItem\@\@\@Z
     */
    MCAPI bool canBeBuiltOver(class BlockSource &, class BlockPos const &, class BlockItem const &) const;
    /**
     * @hash   -920386393
     * @symbol  ?canBeFertilized\@Block\@\@QEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@AEBV1\@\@Z
     */
    MCAPI bool canBeFertilized(class BlockSource &, class BlockPos const &, class Block const &) const;
    /**
     * @hash   589540198
     * @symbol  ?canBeOriginalSurface\@Block\@\@QEBA_NXZ
     */
    MCAPI bool canBeOriginalSurface() const;
    /**
     * @hash   1608336997
     * @symbol  ?canConnect\@Block\@\@QEBA_NAEBV1\@E0\@Z
     */
    MCAPI bool canConnect(class Block const &, unsigned char, class Block const &) const;
    /**
     * @hash   -2119884924
     * @symbol  ?canDamperVibrations\@Block\@\@QEBA_NXZ
     */
    MCAPI bool canDamperVibrations() const;
    /**
     * @hash   -1640137450
     * @symbol  ?canHaveExtraData\@Block\@\@QEBA_NXZ
     */
    MCAPI bool canHaveExtraData() const;
    /**
     * @hash   134977892
     * @symbol  ?canHurtAndBreakItem\@Block\@\@QEBA_NXZ
     */
    MCAPI bool canHurtAndBreakItem() const;
    /**
     * @hash   1779080118
     * @symbol  ?canInstatick\@Block\@\@QEBA_NXZ
     */
    MCAPI bool canInstatick() const;
    /**
     * @hash   767349270
     * @symbol  ?canOccludeVibrations\@Block\@\@QEBA_NXZ
     */
    MCAPI bool canOccludeVibrations() const;
    /**
     * @hash   89816438
     * @symbol  ?canProvideFullSupport\@Block\@\@QEBA_NE\@Z
     */
    MCAPI bool canProvideFullSupport(unsigned char) const;
    /**
     * @hash   883562660
     * @symbol  ?canProvideMultifaceSupport\@Block\@\@QEBA_NE\@Z
     */
    MCAPI bool canProvideMultifaceSupport(unsigned char) const;
    /**
     * @hash   -622012323
     * @symbol  ?canProvideSupport\@Block\@\@QEBA_NEW4BlockSupportType\@\@\@Z
     */
    MCAPI bool canProvideSupport(unsigned char, enum class BlockSupportType) const;
    /**
     * @hash   1902239884
     * @symbol  ?canSlide\@Block\@\@QEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI bool canSlide(class BlockSource &, class BlockPos const &) const;
    /**
     * @hash   1989920958
     * @symbol  ?canSurvive\@Block\@\@QEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI bool canSurvive(class BlockSource &, class BlockPos const &) const;
    /**
     * @hash   -1237911306
     * @symbol  ?causesFreezeEffect\@Block\@\@QEBA_NXZ
     */
    MCAPI bool causesFreezeEffect() const;
    /**
     * @hash   -1357667075
     * @symbol  ?checkIsPathable\@Block\@\@QEBA_NAEAVActor\@\@AEBVBlockPos\@\@1\@Z
     */
    MCAPI bool checkIsPathable(class Actor &, class BlockPos const &, class BlockPos const &) const;
    /**
     * @hash   -400195796
     * @symbol  ?clip\@Block\@\@QEBA?AVHitResult\@\@AEBVBlockSource\@\@AEBVBlockPos\@\@AEBVVec3\@\@2_N\@Z
     */
    MCAPI class HitResult clip(class BlockSource const &, class BlockPos const &, class Vec3 const &, class Vec3 const &, bool) const;
    /**
     * @hash   487848147
     * @symbol  ?clip\@Block\@\@QEBA?AVHitResult\@\@AEBVBlockSource\@\@AEBVBlockPos\@\@AEBVVec3\@\@2_NAEBVAABB\@\@\@Z
     */
    MCAPI class HitResult clip(class BlockSource const &, class BlockPos const &, class Vec3 const &, class Vec3 const &, bool, class AABB const &) const;
    /**
     * @hash   -1666138412
     * @symbol  ?copyState\@Block\@\@QEBAAEBV1\@AEBV1\@AEBVItemState\@\@\@Z
     */
    MCAPI class Block const & copyState(class Block const &, class ItemState const &) const;
    /**
     * @hash   -871492354
     * @symbol  ?dealsContactDamage\@Block\@\@QEBA_NAEBVActor\@\@_N\@Z
     */
    MCAPI bool dealsContactDamage(class Actor const &, bool) const;
    /**
     * @hash   275320585
     * @symbol  ?destroy\@Block\@\@QEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@PEAVActor\@\@\@Z
     */
    MCAPI void destroy(class BlockSource &, class BlockPos const &, class Actor *) const;
    /**
     * @hash   -150789638
     * @symbol  ?entityInside\@Block\@\@QEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVActor\@\@\@Z
     */
    MCAPI void entityInside(class BlockSource &, class BlockPos const &, class Actor &) const;
    /**
     * @hash   -2070454373
     * @symbol  ?executeEvent\@Block\@\@QEBAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAVRenderParams\@\@\@Z
     */
    MCAPI void executeEvent(std::string const &, class RenderParams &) const;
    /**
     * @hash   -729648753
     * @symbol  ?executeItemEvent\@Block\@\@QEBAXAEAVItemStackBase\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAVBlockSource\@\@AEBVBlockPos\@\@PEAVActor\@\@\@Z
     */
    MCAPI void executeItemEvent(class ItemStackBase &, std::string const &, class BlockSource &, class BlockPos const &, class Actor *) const;
    /**
     * @hash   -87765878
     * @symbol  ?executeTrigger\@Block\@\@QEBA_NAEBVDefinitionTrigger\@\@AEAVRenderParams\@\@\@Z
     */
    MCAPI bool executeTrigger(class DefinitionTrigger const &, class RenderParams &) const;
    /**
     * @hash   -1150485910
     * @symbol  ?getAABB\@Block\@\@QEBAAEBVAABB\@\@AEBVIConstBlockSource\@\@AEBVBlockPos\@\@AEAV2\@_N\@Z
     */
    MCAPI class AABB const & getAABB(class IConstBlockSource const &, class BlockPos const &, class AABB &, bool) const;
    /**
     * @hash   718528374
     * @symbol  ?getAllowsRunes\@Block\@\@QEBA_NXZ
     */
    MCAPI bool getAllowsRunes() const;
    /**
     * @hash   -779293894
     * @symbol  ?getBlockEntityType\@Block\@\@QEBA?AW4BlockActorType\@\@XZ
     */
    MCAPI enum class BlockActorType getBlockEntityType() const;
    /**
     * @hash   608464330
     * @symbol  ?getBurnOdds\@Block\@\@QEBAHXZ
     */
    MCAPI int getBurnOdds() const;
    /**
     * @hash   490094807
     * @symbol  ?getCollisionShape\@Block\@\@QEBA_NAEAVAABB\@\@AEBVIConstBlockSource\@\@AEBVBlockPos\@\@V?$optional_ref\@$$CBVGetCollisionShapeInterface\@\@\@\@\@Z
     */
    MCAPI bool getCollisionShape(class AABB &, class IConstBlockSource const &, class BlockPos const &, class optional_ref<class GetCollisionShapeInterface const>) const;
    /**
     * @hash   -1423456432
     * @symbol  ?getColor\@Block\@\@QEBAHAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI int getColor(class BlockSource &, class BlockPos const &) const;
    /**
     * @hash   2079838592
     * @symbol  ?getColor\@Block\@\@QEBAHXZ
     */
    MCAPI int getColor() const;
    /**
     * @hash   187781268
     * @symbol  ?getComparatorSignal\@Block\@\@QEBAHAEAVBlockSource\@\@AEBVBlockPos\@\@E\@Z
     */
    MCAPI int getComparatorSignal(class BlockSource &, class BlockPos const &, unsigned char) const;
    /**
     * @hash   2101060023
     * @symbol  ?getConnectedDirections\@Block\@\@QEBAXAEBVBlockPos\@\@AEAVBlockSource\@\@AEA_N222\@Z
     */
    MCAPI void getConnectedDirections(class BlockPos const &, class BlockSource &, bool &, bool &, bool &, bool &) const;
    /**
     * @hash   1721151420
     * @symbol  ?getCreativeCategory\@Block\@\@QEBA?AW4CreativeItemCategory\@\@XZ
     */
    MCAPI enum class CreativeItemCategory getCreativeCategory() const;
    /**
     * @hash   2024166116
     * @symbol  ?getDebugText\@Block\@\@QEBAXAEAV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI void getDebugText(std::vector<std::string> &, class BlockPos const &) const;
    /**
     * @symbol  ?getDefaultState\@Block\@\@QEBAAEBV1\@XZ
     */
    MCAPI class Block const & getDefaultState() const;
    /**
     * @hash   727568260
     * @symbol  ?getDescriptionId\@Block\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getDescriptionId() const;
    /**
     * @hash   319471580
     * @symbol  ?getDestroySpeed\@Block\@\@QEBAMXZ
     */
    MCAPI float getDestroySpeed() const;
    /**
     * @hash   -664775533
     * @symbol  ?getDirectSignal\@Block\@\@QEBAHAEAVBlockSource\@\@AEBVBlockPos\@\@H\@Z
     */
    MCAPI int getDirectSignal(class BlockSource &, class BlockPos const &, int) const;
    /**
     * @hash   -2055531212
     * @symbol  ?getEntityForModification\@Block\@\@QEBAAEAVEntityContext\@\@XZ
     */
    MCAPI class EntityContext & getEntityForModification() const;
    /**
     * @symbol  ?getExplosionResistance\@Block\@\@QEBAMXZ
     */
    MCAPI float getExplosionResistance() const;
    /**
     * @hash   1715843080
     * @symbol  ?getFlameOdds\@Block\@\@QEBAHXZ
     */
    MCAPI int getFlameOdds() const;
    /**
     * @hash   -356756986
     * @symbol  ?getFriction\@Block\@\@QEBAMXZ
     */
    MCAPI float getFriction() const;
    /**
     * @hash   -1742184220
     * @symbol  ?getIgnoresDestroyPermissions\@Block\@\@QEBA_NAEAVActor\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI bool getIgnoresDestroyPermissions(class Actor &, class BlockPos const &) const;
    /**
     * @hash   -1544991808
     * @symbol  ?getLegacyBlock\@Block\@\@QEBAAEBVBlockLegacy\@\@XZ
     */
    MCAPI class BlockLegacy const & getLegacyBlock() const;
    /**
     * @hash   1375072426
     * @symbol  ?getLight\@Block\@\@QEBA?AUBrightness\@\@XZ
     */
    MCAPI struct Brightness getLight() const;
    /**
     * @hash   -314382520
     * @symbol  ?getLightEmission\@Block\@\@QEBA?AUBrightness\@\@XZ
     */
    MCAPI struct Brightness getLightEmission() const;
    /**
     * @hash   280756752
     * @symbol  ?getMapColor\@Block\@\@QEBA?AVColor\@mce\@\@AEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI class mce::Color getMapColor(class BlockSource &, class BlockPos const &) const;
    /**
     * @hash   130971778
     * @symbol  ?getMaterial\@Block\@\@QEBAAEBVMaterial\@\@XZ
     */
    MCAPI class Material const & getMaterial() const;
    /**
     * @hash   -362370343
     * @symbol  ?getMobToSpawn\@Block\@\@QEBAPEBVMobSpawnerData\@\@AEBVSpawnConditions\@\@AEAVBlockSource\@\@\@Z
     */
    MCAPI class MobSpawnerData const * getMobToSpawn(class SpawnConditions const &, class BlockSource &) const;
    /**
     * @hash   -707242604
     * @symbol  ?getName\@Block\@\@QEBAAEBVHashedString\@\@XZ
     */
    MCAPI class HashedString const & getName() const;
    /**
     * @hash   347329502
     * @symbol  ?getPlacementBlock\@Block\@\@QEBAAEBV1\@AEAVActor\@\@AEBVBlockPos\@\@EAEBVVec3\@\@H\@Z
     */
    MCAPI class Block const & getPlacementBlock(class Actor &, class BlockPos const &, unsigned char, class Vec3 const &, int) const;
    /**
     * @hash   -1968522845
     * @symbol  ?getRuntimeId\@Block\@\@QEBAAEBIXZ
     */
    MCAPI unsigned int const & getRuntimeId() const;
    /**
     * @hash   -613931779
     * @symbol  ?getSecondPart\@Block\@\@QEBA_NAEBVBlockSource\@\@AEBVBlockPos\@\@AEAV3\@\@Z
     */
    MCAPI bool getSecondPart(class BlockSource const &, class BlockPos const &, class BlockPos &) const;
    /**
     * @hash   1505148396
     * @symbol  ?getSerializationId\@Block\@\@QEBAAEBVCompoundTag\@\@XZ
     */
    MCAPI class CompoundTag const & getSerializationId() const;
    /**
     * @hash   1035811376
     * @symbol  ?getThickness\@Block\@\@QEBAMXZ
     */
    MCAPI float getThickness() const;
    /**
     * @hash   -1618377772
     * @symbol  ?getTranslucency\@Block\@\@QEBAMXZ
     */
    MCAPI float getTranslucency() const;
    /**
     * @hash   1501300756
     * @symbol  ?getVariant\@Block\@\@QEBAHXZ
     */
    MCAPI int getVariant() const;
    /**
     * @hash   724963212
     * @symbol  ?getVisualShape\@Block\@\@QEBAAEBVAABB\@\@AEAV2\@_N\@Z
     */
    MCAPI class AABB const & getVisualShape(class AABB &, bool) const;
    /**
     * @hash   1728969344
     * @symbol  ?getVisualShapeInWorld\@Block\@\@QEBAAEBVAABB\@\@AEAVBlockSource\@\@AEBVBlockPos\@\@AEAV2\@_N\@Z
     */
    MCAPI class AABB const & getVisualShapeInWorld(class BlockSource &, class BlockPos const &, class AABB &, bool) const;
    /**
     * @hash   -373149034
     * @symbol  ?hasBlockEntity\@Block\@\@QEBA_NXZ
     */
    MCAPI bool hasBlockEntity() const;
    /**
     * @hash   -435146028
     * @symbol  ?hasComparatorSignal\@Block\@\@QEBA_NXZ
     */
    MCAPI bool hasComparatorSignal() const;
    /**
     * @hash   1632521409
     * @symbol  ?hasProperty\@Block\@\@QEBA_NW4BlockProperty\@\@\@Z
     */
    MCAPI bool hasProperty(enum class BlockProperty) const;
    /**
     * @hash   -614578607
     * @symbol  ?hasState\@Block\@\@QEBA_NAEBVItemState\@\@\@Z
     */
    MCAPI bool hasState(class ItemState const &) const;
    /**
     * @hash   2095186517
     * @symbol  ?hasTag\@Block\@\@QEBA_NAEBVHashedString\@\@\@Z
     */
    MCAPI bool hasTag(class HashedString const &) const;
    /**
     * @hash   -1238645183
     * @symbol  ?hasTag\@Block\@\@QEBA_NAEB_K\@Z
     */
    MCAPI bool hasTag(unsigned __int64 const &) const;
    /**
     * @hash   -600786794
     * @symbol  ?ignoreEntitiesOnPistonMove\@Block\@\@QEBA_NXZ
     */
    MCAPI bool ignoreEntitiesOnPistonMove() const;
    /**
     * @hash   946336932
     * @symbol  ?initEntity\@Block\@\@QEAAXAEAVEntityRegistry\@\@\@Z
     */
    MCAPI void initEntity(class EntityRegistry &);
    /**
     * @hash   1890836904
     * @symbol  ?initParams\@Block\@\@QEBAXAEAVRenderParams\@\@AEAVBlockSource\@\@AEBVBlockPos\@\@PEAVActor\@\@\@Z
     */
    MCAPI void initParams(class RenderParams &, class BlockSource &, class BlockPos const &, class Actor *) const;
    /**
     * @hash   1877096468
     * @symbol  ?isAir\@Block\@\@QEBA_NXZ
     */
    MCAPI bool isAir() const;
    /**
     * @hash   -863794449
     * @symbol  ?isAttachedTo\@Block\@\@QEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@AEAV3\@\@Z
     */
    MCAPI bool isAttachedTo(class BlockSource &, class BlockPos const &, class BlockPos &) const;
    /**
     * @hash   80348950
     * @symbol  ?isAuxValueRelevantForPicking\@Block\@\@QEBA_NXZ
     */
    MCAPI bool isAuxValueRelevantForPicking() const;
    /**
     * @hash   -516036220
     * @symbol  ?isBounceBlock\@Block\@\@QEBA_NXZ
     */
    MCAPI bool isBounceBlock() const;
    /**
     * @hash   -664436364
     * @symbol  ?isButtonBlock\@Block\@\@QEBA_NXZ
     */
    MCAPI bool isButtonBlock() const;
    /**
     * @hash   -1898412709
     * @symbol  ?isClimbable\@Block\@\@QEBA_NAEBUIActorMovementProxy\@\@\@Z
     */
    MCAPI bool isClimbable(struct IActorMovementProxy const &) const;
    /**
     * @hash   -1234517610
     * @symbol  ?isContainerBlock\@Block\@\@QEBA_NXZ
     */
    MCAPI bool isContainerBlock() const;
    /**
     * @hash   726364420
     * @symbol  ?isCropBlock\@Block\@\@QEBA_NXZ
     */
    MCAPI bool isCropBlock() const;
    /**
     * @hash   -184810156
     * @symbol  ?isDoorBlock\@Block\@\@QEBA_NXZ
     */
    MCAPI bool isDoorBlock() const;
    /**
     * @hash   1014534084
     * @symbol  ?isEmpty\@Block\@\@QEBA_NXZ
     */
    MCAPI bool isEmpty() const;
    /**
     * @hash   132512166
     * @symbol  ?isFenceBlock\@Block\@\@QEBA_NXZ
     */
    MCAPI bool isFenceBlock() const;
    /**
     * @hash   -683086986
     * @symbol  ?isFenceGateBlock\@Block\@\@QEBA_NXZ
     */
    MCAPI bool isFenceGateBlock() const;
    /**
     * @hash   -2081958217
     * @symbol  ?isFilteredOut\@Block\@\@QEBA_NW4BlockRenderLayer\@\@\@Z
     */
    MCAPI bool isFilteredOut(enum class BlockRenderLayer) const;
    /**
     * @hash   -607257932
     * @symbol  ?isHeavy\@Block\@\@QEBA_NXZ
     */
    MCAPI bool isHeavy() const;
    /**
     * @hash   -1170248202
     * @symbol  ?isInteractiveBlock\@Block\@\@QEBA_NXZ
     */
    MCAPI bool isInteractiveBlock() const;
    /**
     * @hash   -1537060076
     * @symbol  ?isLavaFlammable\@Block\@\@QEBA_NXZ
     */
    MCAPI bool isLavaFlammable() const;
    /**
     * @hash   1478468182
     * @symbol  ?isLeverBlock\@Block\@\@QEBA_NXZ
     */
    MCAPI bool isLeverBlock() const;
    /**
     * @hash   127452484
     * @symbol  ?isMotionBlockingBlock\@Block\@\@QEBA_NXZ
     */
    MCAPI bool isMotionBlockingBlock() const;
    /**
     * @hash   -1486781786
     * @symbol  ?isMultifaceBlock\@Block\@\@QEBA_NXZ
     */
    MCAPI bool isMultifaceBlock() const;
    /**
     * @hash   -2079579200
     * @symbol  ?isObstructingChests\@Block\@\@QEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI bool isObstructingChests(class BlockSource &, class BlockPos const &) const;
    /**
     * @hash   967528984
     * @symbol  ?isPartialBlock\@Block\@\@QEBA_NAEBVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI bool isPartialBlock(class BlockSource const &, class BlockPos const &) const;
    /**
     * @hash   1869428919
     * @symbol  ?isPreservingMediumWhenPlaced\@Block\@\@QEBA_NAEBV1\@\@Z
     */
    MCAPI bool isPreservingMediumWhenPlaced(class Block const &) const;
    /**
     * @hash   -1753977164
     * @symbol  ?isRailBlock\@Block\@\@QEBA_NXZ
     */
    MCAPI bool isRailBlock() const;
    /**
     * @hash   1498451078
     * @symbol  ?isSignalSource\@Block\@\@QEBA_NXZ
     */
    MCAPI bool isSignalSource() const;
    /**
     * @hash   -1836636652
     * @symbol  ?isSlabBlock\@Block\@\@QEBA_NXZ
     */
    MCAPI bool isSlabBlock() const;
    /**
     * @hash   540265668
     * @symbol  ?isSolid\@Block\@\@QEBA_NXZ
     */
    MCAPI bool isSolid() const;
    /**
     * @hash   1354450038
     * @symbol  ?isSolidBlockingBlock\@Block\@\@QEBA_NXZ
     */
    MCAPI bool isSolidBlockingBlock() const;
    /**
     * @hash   1357252790
     * @symbol  ?isSolidBlockingBlockAndNotSignalSource\@Block\@\@QEBA_NXZ
     */
    MCAPI bool isSolidBlockingBlockAndNotSignalSource() const;
    /**
     * @hash   -168988858
     * @symbol  ?isStairBlock\@Block\@\@QEBA_NXZ
     */
    MCAPI bool isStairBlock() const;
    /**
     * @hash   -461604204
     * @symbol  ?isStemBlock\@Block\@\@QEBA_NXZ
     */
    MCAPI bool isStemBlock() const;
    /**
     * @hash   174654150
     * @symbol  ?isThinFenceBlock\@Block\@\@QEBA_NXZ
     */
    MCAPI bool isThinFenceBlock() const;
    /**
     * @hash   1288270956
     * @symbol  ?isTopPartialBlock\@Block\@\@QEBA_NAEBVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI bool isTopPartialBlock(class BlockSource const &, class BlockPos const &) const;
    /**
     * @hash   1448671620
     * @symbol  ?isUnbreakable\@Block\@\@QEBA_NXZ
     */
    MCAPI bool isUnbreakable() const;
    /**
     * @hash   -67217868
     * @symbol  ?isWallBlock\@Block\@\@QEBA_NXZ
     */
    MCAPI bool isWallBlock() const;
    /**
     * @hash   2127489412
     * @symbol  ?isWaterBlocking\@Block\@\@QEBA_NXZ
     */
    MCAPI bool isWaterBlocking() const;
    /**
     * @hash   -976914109
     * @symbol  ?keepState\@Block\@\@QEBAAEBV1\@AEBVItemState\@\@\@Z
     */
    MCAPI class Block const & keepState(class ItemState const &) const;
    /**
     * @hash   1201093009
     * @symbol  ?mayConsumeFertilizer\@Block\@\@QEBA_NAEAVBlockSource\@\@\@Z
     */
    MCAPI bool mayConsumeFertilizer(class BlockSource &) const;
    /**
     * @hash   -1687104900
     * @symbol  ?mayPick\@Block\@\@QEBA_NAEBVBlockSource\@\@_N\@Z
     */
    MCAPI bool mayPick(class BlockSource const &, bool) const;
    /**
     * @hash   217485348
     * @symbol  ?mayPick\@Block\@\@QEBA_NXZ
     */
    MCAPI bool mayPick() const;
    /**
     * @hash   1175293790
     * @symbol  ?mayPlace\@Block\@\@QEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI bool mayPlace(class BlockSource &, class BlockPos const &) const;
    /**
     * @hash   -1421788780
     * @symbol  ?mayPlace\@Block\@\@QEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@E\@Z
     */
    MCAPI bool mayPlace(class BlockSource &, class BlockPos const &, unsigned char) const;
    /**
     * @hash   437903932
     * @symbol  ?mayPlaceOn\@Block\@\@QEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI bool mayPlaceOn(class BlockSource &, class BlockPos const &) const;
    /**
     * @hash   501224745
     * @symbol  ?movedByPiston\@Block\@\@QEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI void movedByPiston(class BlockSource &, class BlockPos const &) const;
    /**
     * @hash   405299058
     * @symbol  ?neighborChanged\@Block\@\@QEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@1\@Z
     */
    MCAPI void neighborChanged(class BlockSource &, class BlockPos const &, class BlockPos const &) const;
    /**
     * @hash   -1873467945
     * @symbol  ?onExploded\@Block\@\@QEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@PEAVActor\@\@\@Z
     */
    MCAPI void onExploded(class BlockSource &, class BlockPos const &, class Actor *) const;
    /**
     * @hash   865327077
     * @symbol  ?onFallOn\@Block\@\@QEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVActor\@\@M\@Z
     */
    MCAPI void onFallOn(class BlockSource &, class BlockPos const &, class Actor &, float) const;
    /**
     * @hash   -413872029
     * @symbol  ?onFertilized\@Block\@\@QEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@PEAVActor\@\@W4FertilizerType\@\@\@Z
     */
    MCAPI bool onFertilized(class BlockSource &, class BlockPos const &, class Actor *, enum class FertilizerType) const;
    /**
     * @hash   -1781381429
     * @symbol  ?onLightningHit\@Block\@\@QEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI void onLightningHit(class BlockSource &, class BlockPos const &) const;
    /**
     * @hash   1116025800
     * @symbol  ?onPlace\@Block\@\@QEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@AEBV1\@\@Z
     */
    MCAPI void onPlace(class BlockSource &, class BlockPos const &, class Block const &) const;
    /**
     * @hash   -395518426
     * @symbol  ?onPlayerPlacing\@Block\@\@QEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVActor\@\@E\@Z
     */
    MCAPI void onPlayerPlacing(class BlockSource &, class BlockPos const &, class Actor &, unsigned char) const;
    /**
     * @hash   -441118472
     * @symbol  ?onProjectileHit\@Block\@\@QEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@AEBVActor\@\@\@Z
     */
    MCAPI void onProjectileHit(class BlockSource &, class BlockPos const &, class Actor const &) const;
    /**
     * @hash   515463771
     * @symbol  ?onRemove\@Block\@\@QEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI void onRemove(class BlockSource &, class BlockPos const &) const;
    /**
     * @hash   975861737
     * @symbol  ?onStandOn\@Block\@\@QEBAXAEAVEntityContext\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI void onStandOn(class EntityContext &, class BlockPos const &) const;
    /**
     * @hash   150875065
     * @symbol  ?onStepOff\@Block\@\@QEBAXAEAVActor\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI void onStepOff(class Actor &, class BlockPos const &) const;
    /**
     * @hash   -944947413
     * @symbol  ?onStepOn\@Block\@\@QEBAXAEAVActor\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI void onStepOn(class Actor &, class BlockPos const &) const;
    /**
     * @hash   -157255751
     * @symbol  ?onStructureBlockPlace\@Block\@\@QEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI void onStructureBlockPlace(class BlockSource &, class BlockPos const &) const;
    /**
     * @hash   43358505
     * @symbol  ?onStructureNeighborBlockPlace\@Block\@\@QEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI void onStructureNeighborBlockPlace(class BlockSource &, class BlockPos const &) const;
    /**
     * @hash   -2044387365
     * @symbol  ?playerDestroy\@Block\@\@QEBAXAEAVPlayer\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI void playerDestroy(class Player &, class BlockPos const &) const;
    /**
     * @hash   2058102618
     * @symbol  ?playerWillDestroy\@Block\@\@QEBA_NAEAVPlayer\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI bool playerWillDestroy(class Player &, class BlockPos const &) const;
    /**
     * @hash   1624797738
     * @symbol  ?popResource\@Block\@\@QEBAPEAVItemActor\@\@AEAVBlockSource\@\@AEBVBlockPos\@\@AEBVItemInstance\@\@\@Z
     */
    MCAPI class ItemActor * popResource(class BlockSource &, class BlockPos const &, class ItemInstance const &) const;
    /**
     * @hash   -989094698
     * @symbol  ?pushesOutItems\@Block\@\@QEBA_NXZ
     */
    MCAPI bool pushesOutItems() const;
    /**
     * @hash   -1609997292
     * @symbol  ?pushesUpFallingBlocks\@Block\@\@QEBA_NXZ
     */
    MCAPI bool pushesUpFallingBlocks() const;
    /**
     * @hash   -1105797870
     * @symbol  ?queuedTick\@Block\@\@QEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    MCAPI void queuedTick(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @hash   251643026
     * @symbol  ?randomTick\@Block\@\@QEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    MCAPI void randomTick(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @hash   1046573325
     * @symbol  ?randomlyModifyPosition\@Block\@\@QEBA?AVVec3\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI class Vec3 randomlyModifyPosition(class BlockPos const &) const;
    /**
     * @hash   141293270
     * @symbol  ?shouldRandomTick\@Block\@\@QEBA_NXZ
     */
    MCAPI bool shouldRandomTick() const;
    /**
     * @hash   -518035514
     * @symbol  ?shouldRandomTickExtraLayer\@Block\@\@QEBA_NXZ
     */
    MCAPI bool shouldRandomTickExtraLayer() const;
    /**
     * @hash   -392936551
     * @symbol  ?shouldStopFalling\@Block\@\@QEBA_NAEAVActor\@\@\@Z
     */
    MCAPI bool shouldStopFalling(class Actor &) const;
    /**
     * @hash   -1030088010
     * @symbol  ?shouldTickOnSetBlock\@Block\@\@QEBA_NXZ
     */
    MCAPI bool shouldTickOnSetBlock() const;
    /**
     * @symbol  ?spawnResources\@Block\@\@QEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandomize\@\@MAEBVItemStack\@\@\@Z
     */
    MCAPI void spawnResources(class BlockSource &, class BlockPos const &, class Randomize &, float, class ItemStack const &) const;
    /**
     * @hash   -1902626416
     * @symbol  ?telemetryVariant\@Block\@\@QEBAHAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI int telemetryVariant(class BlockSource &, class BlockPos const &) const;
    /**
     * @hash   -1151896174
     * @symbol  ?toDebugString\@Block\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string toDebugString() const;
    /**
     * @hash   1462197078
     * @symbol  ?transformOnFall\@Block\@\@QEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@PEAVActor\@\@M\@Z
     */
    MCAPI void transformOnFall(class BlockSource &, class BlockPos const &, class Actor *, float) const;
    /**
     * @hash   -1271277301
     * @symbol  ?triggerEvent\@Block\@\@QEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@HH\@Z
     */
    MCAPI void triggerEvent(class BlockSource &, class BlockPos const &, int, int) const;
    /**
     * @hash   135618839
     * @symbol  ?tryGetCopperBehavior\@Block\@\@QEBAPEBVCopperBehavior\@\@XZ
     */
    MCAPI class CopperBehavior const * tryGetCopperBehavior() const;
    /**
     * @hash   -993501647
     * @symbol  ?tryGetInfested\@Block\@\@QEBAPEBV1\@XZ
     */
    MCAPI class Block const * tryGetInfested() const;
    /**
     * @hash   -1130095807
     * @symbol  ?tryGetUninfested\@Block\@\@QEBAPEBV1\@XZ
     */
    MCAPI class Block const * tryGetUninfested() const;
    /**
     * @symbol  ?trySpawnResourcesOnExplosion\@Block\@\@QEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@AEBV1\@M\@Z
     */
    MCAPI void trySpawnResourcesOnExplosion(class BlockSource &, class BlockPos const &, class Block const &, float) const;
    /**
     * @hash   -377799514
     * @symbol  ?tryToPlace\@Block\@\@QEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@PEBUActorBlockSyncMessage\@\@\@Z
     */
    MCAPI bool tryToPlace(class BlockSource &, class BlockPos const &, struct ActorBlockSyncMessage const *) const;
    /**
     * @hash   -1639415806
     * @symbol  ?tryToTill\@Block\@\@QEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVActor\@\@AEAVItemStack\@\@\@Z
     */
    MCAPI bool tryToTill(class BlockSource &, class BlockPos const &, class Actor &, class ItemStack &) const;
    /**
     * @hash   618724497
     * @symbol  ?updateEntityAfterFallOn\@Block\@\@QEBAXAEBVBlockPos\@\@AEAUUpdateEntityAfterFallOnInterface\@\@\@Z
     */
    MCAPI void updateEntityAfterFallOn(class BlockPos const &, struct UpdateEntityAfterFallOnInterface &) const;
    /**
     * @hash   -2044027897
     * @symbol  ?updateTallestCollisionShape\@Block\@\@QEBA_NAEBVBlockSource\@\@AEBVBlockPos\@\@AEBVAABB\@\@V?$optional_ref\@$$CBVGetCollisionShapeInterface\@\@\@\@AEAV4\@AEBVVec3\@\@AEAM\@Z
     */
    MCAPI bool updateTallestCollisionShape(class BlockSource const &, class BlockPos const &, class AABB const &, class optional_ref<class GetCollisionShapeInterface const>, class AABB &, class Vec3 const &, float &) const;
    /**
     * @symbol  ?use\@Block\@\@QEBA_NAEAVPlayer\@\@AEBVBlockPos\@\@EV?$optional\@VVec3\@\@\@std\@\@\@Z
     */
    MCAPI bool use(class Player &, class BlockPos const &, unsigned char, class std::optional<class Vec3>) const;
    /**
     * @hash   1786911526
     * @symbol  ?waterSpreadCausesSpawn\@Block\@\@QEBA_NXZ
     */
    MCAPI bool waterSpreadCausesSpawn() const;
    /**
     * @hash   1553597075
     * @symbol  ?BLOCK_DESCRIPTION_PREFIX\@Block\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const BLOCK_DESCRIPTION_PREFIX;
    /**
     * @hash   -2026013261
     * @symbol  ?SIZE_OFFSET\@Block\@\@2MB
     */
    MCAPI static float const SIZE_OFFSET;

//protected:
    /**
     * @hash   -1844665049
     * @symbol  ?buildSerializationId\@Block\@\@IEAAXI\@Z
     */
    MCAPI void buildSerializationId(unsigned int);
    /**
     * @hash   427915813
     * @symbol  ?setRuntimeId\@Block\@\@IEBAXAEBI\@Z
     */
    MCAPI void setRuntimeId(unsigned int const &) const;

//private:
    /**
     * @hash   1010486039
     * @symbol  ?_getBlockOcclusionType\@Block\@\@AEBA?AW4BlockOcclusionType\@\@XZ
     */
    MCAPI enum class BlockOcclusionType _getBlockOcclusionType() const;
    /**
     * @hash   586701194
     * @symbol  ?_lockRegistryForRead\@Block\@\@AEBA?AVBlockTypeRegistryReadLock\@\@XZ
     */
    MCAPI class BlockTypeRegistryReadLock _lockRegistryForRead() const;
    /**
     * @hash   820732348
     * @symbol  ?_tryInitEntityIfNotInitialized\@Block\@\@AEAAXXZ
     */
    MCAPI void _tryInitEntityIfNotInitialized();
    /**
     * @hash   1172555386
     * @symbol  ?getEntity\@Block\@\@AEBAAEBVEntityContext\@\@XZ
     */
    MCAPI class EntityContext const & getEntity() const;

protected:

private:

};