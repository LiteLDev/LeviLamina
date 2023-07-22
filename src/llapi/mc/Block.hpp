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
    LLAPI static Block* create(const string& str, unsigned short tileData);
    LLAPI static Block* create(CompoundTag* nbt);

    LLAPI string getTypeName() const;
    LLAPI int getId() const;
    inline unsigned short getTileData(){
        return static_cast<unsigned short>(getVariant());
    }
    LLAPI std::unique_ptr<CompoundTag> getNbt();
    LLAPI bool setNbt(CompoundTag* nbt);

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
     * @vftbl  1
     * @symbol  ?getRenderLayer\@Block\@\@UEBA?AW4BlockRenderLayer\@\@XZ
     */
    virtual enum class BlockRenderLayer getRenderLayer() const;
    /**
     * @symbol  ??0Block\@\@QEAA\@GV?$not_null\@PEAVBlockLegacy\@\@\@gsl\@\@\@Z
     */
    MCAPI Block(unsigned short, class gsl::not_null<class BlockLegacy *>);
    /**
     * @symbol  ??0Block\@\@QEAA\@GV?$not_null\@PEAVBlockLegacy\@\@\@gsl\@\@VCompoundTag\@\@AEBI\@Z
     */
    MCAPI Block(unsigned short, class gsl::not_null<class BlockLegacy *>, class CompoundTag, unsigned int const &);
    /**
     * @symbol  ?addAABBs\@Block\@\@QEBAXAEBVBlockSource\@\@AEBVBlockPos\@\@PEBVAABB\@\@AEAV?$vector\@VAABB\@\@V?$allocator\@VAABB\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void addAABBs(class BlockSource const &, class BlockPos const &, class AABB const *, std::vector<class AABB> &) const;
    /**
     * @symbol  ?addCollisionShapes\@Block\@\@QEBA_NAEBVBlockSource\@\@AEBVBlockPos\@\@PEBVAABB\@\@AEAV?$vector\@VAABB\@\@V?$allocator\@VAABB\@\@\@std\@\@\@std\@\@V?$optional_ref\@$$CBVGetCollisionShapeInterface\@\@\@\@\@Z
     */
    MCAPI bool addCollisionShapes(class BlockSource const &, class BlockPos const &, class AABB const *, std::vector<class AABB> &, class optional_ref<class GetCollisionShapeInterface const>) const;
    /**
     * @symbol  ?addTag\@Block\@\@QEAAAEAV1\@AEBVHashedString\@\@\@Z
     */
    MCAPI class Block & addTag(class HashedString const &);
    /**
     * @symbol  ?animateTick\@Block\@\@QEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    MCAPI void animateTick(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @symbol  ?asItemInstance\@Block\@\@QEBA?AVItemInstance\@\@AEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI class ItemInstance asItemInstance(class BlockSource &, class BlockPos const &) const;
    /**
     * @symbol  ?attack\@Block\@\@QEBA_NPEAVPlayer\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI bool attack(class Player *, class BlockPos const &) const;
    /**
     * @symbol  ?breaksFallingBlocks\@Block\@\@QEBA_NVBaseGameVersion\@\@\@Z
     */
    MCAPI bool breaksFallingBlocks(class BaseGameVersion) const;
    /**
     * @symbol  ?buildDescriptionId\@Block\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string buildDescriptionId() const;
    /**
     * @symbol  ?buildDescriptionName\@Block\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string buildDescriptionName() const;
    /**
     * @symbol  ?cacheComponentData\@Block\@\@QEAAXXZ
     */
    MCAPI void cacheComponentData();
    /**
     * @symbol  ?calcGroundFriction\@Block\@\@QEBAMAEBUIMobMovementProxy\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI float calcGroundFriction(struct IMobMovementProxy const &, class BlockPos const &) const;
    /**
     * @symbol  ?canBeBrokenFromFalling\@Block\@\@QEBA_NXZ
     */
    MCAPI bool canBeBrokenFromFalling() const;
    /**
     * @symbol  ?canBeBuiltOver\@Block\@\@QEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI bool canBeBuiltOver(class BlockSource &, class BlockPos const &) const;
    /**
     * @symbol  ?canBeBuiltOver\@Block\@\@QEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@AEBVBlockItem\@\@\@Z
     */
    MCAPI bool canBeBuiltOver(class BlockSource &, class BlockPos const &, class BlockItem const &) const;
    /**
     * @symbol  ?canBeFertilized\@Block\@\@QEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@AEBV1\@\@Z
     */
    MCAPI bool canBeFertilized(class BlockSource &, class BlockPos const &, class Block const &) const;
    /**
     * @symbol  ?canBeOriginalSurface\@Block\@\@QEBA_NXZ
     */
    MCAPI bool canBeOriginalSurface() const;
    /**
     * @symbol  ?canConnect\@Block\@\@QEBA_NAEBV1\@E0\@Z
     */
    MCAPI bool canConnect(class Block const &, unsigned char, class Block const &) const;
    /**
     * @symbol  ?canDamperVibrations\@Block\@\@QEBA_NXZ
     */
    MCAPI bool canDamperVibrations() const;
    /**
     * @symbol  ?canHaveExtraData\@Block\@\@QEBA_NXZ
     */
    MCAPI bool canHaveExtraData() const;
    /**
     * @symbol  ?canHurtAndBreakItem\@Block\@\@QEBA_NXZ
     */
    MCAPI bool canHurtAndBreakItem() const;
    /**
     * @symbol  ?canInstatick\@Block\@\@QEBA_NXZ
     */
    MCAPI bool canInstatick() const;
    /**
     * @symbol  ?canOccludeVibrations\@Block\@\@QEBA_NXZ
     */
    MCAPI bool canOccludeVibrations() const;
    /**
     * @symbol  ?canProvideFullSupport\@Block\@\@QEBA_NE\@Z
     */
    MCAPI bool canProvideFullSupport(unsigned char) const;
    /**
     * @symbol  ?canProvideMultifaceSupport\@Block\@\@QEBA_NE\@Z
     */
    MCAPI bool canProvideMultifaceSupport(unsigned char) const;
    /**
     * @symbol  ?canProvideSupport\@Block\@\@QEBA_NEW4BlockSupportType\@\@\@Z
     */
    MCAPI bool canProvideSupport(unsigned char, enum class BlockSupportType) const;
    /**
     * @symbol  ?canSlide\@Block\@\@QEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI bool canSlide(class BlockSource &, class BlockPos const &) const;
    /**
     * @symbol  ?canSurvive\@Block\@\@QEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI bool canSurvive(class BlockSource &, class BlockPos const &) const;
    /**
     * @symbol  ?causesFreezeEffect\@Block\@\@QEBA_NXZ
     */
    MCAPI bool causesFreezeEffect() const;
    /**
     * @symbol  ?checkIsPathable\@Block\@\@QEBA_NAEAVActor\@\@AEBVBlockPos\@\@1\@Z
     */
    MCAPI bool checkIsPathable(class Actor &, class BlockPos const &, class BlockPos const &) const;
    /**
     * @symbol  ?clip\@Block\@\@QEBA?AVHitResult\@\@AEBVBlockSource\@\@AEBVBlockPos\@\@AEBVVec3\@\@2_N\@Z
     */
    MCAPI class HitResult clip(class BlockSource const &, class BlockPos const &, class Vec3 const &, class Vec3 const &, bool) const;
    /**
     * @symbol  ?clip\@Block\@\@QEBA?AVHitResult\@\@AEBVBlockSource\@\@AEBVBlockPos\@\@AEBVVec3\@\@2_NAEBVAABB\@\@\@Z
     */
    MCAPI class HitResult clip(class BlockSource const &, class BlockPos const &, class Vec3 const &, class Vec3 const &, bool, class AABB const &) const;
    /**
     * @symbol  ?copyState\@Block\@\@QEBAAEBV1\@AEBV1\@AEBVItemState\@\@\@Z
     */
    MCAPI class Block const & copyState(class Block const &, class ItemState const &) const;
    /**
     * @symbol  ?dealsContactDamage\@Block\@\@QEBA_NAEBVActor\@\@_N\@Z
     */
    MCAPI bool dealsContactDamage(class Actor const &, bool) const;
    /**
     * @symbol  ?destroy\@Block\@\@QEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@PEAVActor\@\@\@Z
     */
    MCAPI void destroy(class BlockSource &, class BlockPos const &, class Actor *) const;
    /**
     * @symbol  ?entityInside\@Block\@\@QEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVActor\@\@\@Z
     */
    MCAPI void entityInside(class BlockSource &, class BlockPos const &, class Actor &) const;
    /**
     * @symbol  ?executeEvent\@Block\@\@QEBAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAVRenderParams\@\@\@Z
     */
    MCAPI void executeEvent(std::string const &, class RenderParams &) const;
    /**
     * @symbol  ?executeItemEvent\@Block\@\@QEBAXAEAVItemStackBase\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAVBlockSource\@\@AEBVBlockPos\@\@PEAVActor\@\@\@Z
     */
    MCAPI void executeItemEvent(class ItemStackBase &, std::string const &, class BlockSource &, class BlockPos const &, class Actor *) const;
    /**
     * @symbol  ?executeTrigger\@Block\@\@QEBA_NAEBVDefinitionTrigger\@\@AEAVRenderParams\@\@\@Z
     */
    MCAPI bool executeTrigger(class DefinitionTrigger const &, class RenderParams &) const;
    /**
     * @symbol  ?getAABB\@Block\@\@QEBAAEBVAABB\@\@AEBVIConstBlockSource\@\@AEBVBlockPos\@\@AEAV2\@_N\@Z
     */
    MCAPI class AABB const & getAABB(class IConstBlockSource const &, class BlockPos const &, class AABB &, bool) const;
    /**
     * @symbol  ?getAllowsRunes\@Block\@\@QEBA_NXZ
     */
    MCAPI bool getAllowsRunes() const;
    /**
     * @symbol  ?getBlockEntityType\@Block\@\@QEBA?AW4BlockActorType\@\@XZ
     */
    MCAPI enum class BlockActorType getBlockEntityType() const;
    /**
     * @symbol  ?getBurnOdds\@Block\@\@QEBAHXZ
     */
    MCAPI int getBurnOdds() const;
    /**
     * @symbol  ?getCollisionShape\@Block\@\@QEBA_NAEAVAABB\@\@AEBVIConstBlockSource\@\@AEBVBlockPos\@\@V?$optional_ref\@$$CBVGetCollisionShapeInterface\@\@\@\@\@Z
     */
    MCAPI bool getCollisionShape(class AABB &, class IConstBlockSource const &, class BlockPos const &, class optional_ref<class GetCollisionShapeInterface const>) const;
    /**
     * @symbol  ?getColor\@Block\@\@QEBAHAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI int getColor(class BlockSource &, class BlockPos const &) const;
    /**
     * @symbol  ?getColor\@Block\@\@QEBAHXZ
     */
    MCAPI int getColor() const;
    /**
     * @symbol  ?getComparatorSignal\@Block\@\@QEBAHAEAVBlockSource\@\@AEBVBlockPos\@\@E\@Z
     */
    MCAPI int getComparatorSignal(class BlockSource &, class BlockPos const &, unsigned char) const;
    /**
     * @symbol  ?getConnectedDirections\@Block\@\@QEBAXAEBVBlockPos\@\@AEAVBlockSource\@\@AEA_N222\@Z
     */
    MCAPI void getConnectedDirections(class BlockPos const &, class BlockSource &, bool &, bool &, bool &, bool &) const;
    /**
     * @symbol  ?getCreativeCategory\@Block\@\@QEBA?AW4CreativeItemCategory\@\@XZ
     */
    MCAPI enum class CreativeItemCategory getCreativeCategory() const;
    /**
     * @symbol  ?getDebugText\@Block\@\@QEBAXAEAV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI void getDebugText(std::vector<std::string> &, class BlockPos const &) const;
    /**
     * @symbol  ?getDefaultState\@Block\@\@QEBAAEBV1\@XZ
     */
    MCAPI class Block const & getDefaultState() const;
    /**
     * @symbol  ?getDescriptionId\@Block\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getDescriptionId() const;
    /**
     * @symbol  ?getDestroySpeed\@Block\@\@QEBAMXZ
     */
    MCAPI float getDestroySpeed() const;
    /**
     * @symbol  ?getDirectSignal\@Block\@\@QEBAHAEAVBlockSource\@\@AEBVBlockPos\@\@H\@Z
     */
    MCAPI int getDirectSignal(class BlockSource &, class BlockPos const &, int) const;
    /**
     * @symbol  ?getEntityForModification\@Block\@\@QEBAAEAVEntityContext\@\@XZ
     */
    MCAPI class EntityContext & getEntityForModification() const;
    /**
     * @symbol  ?getExplosionResistance\@Block\@\@QEBAMXZ
     */
    MCAPI float getExplosionResistance() const;
    /**
     * @symbol  ?getFlameOdds\@Block\@\@QEBAHXZ
     */
    MCAPI int getFlameOdds() const;
    /**
     * @symbol  ?getFriction\@Block\@\@QEBAMXZ
     */
    MCAPI float getFriction() const;
    /**
     * @symbol  ?getIgnoresDestroyPermissions\@Block\@\@QEBA_NAEAVActor\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI bool getIgnoresDestroyPermissions(class Actor &, class BlockPos const &) const;
    /**
     * @symbol  ?getLegacyBlock\@Block\@\@QEBAAEBVBlockLegacy\@\@XZ
     */
    MCAPI class BlockLegacy const & getLegacyBlock() const;
    /**
     * @symbol  ?getLight\@Block\@\@QEBA?AUBrightness\@\@XZ
     */
    MCAPI struct Brightness getLight() const;
    /**
     * @symbol  ?getLightEmission\@Block\@\@QEBA?AUBrightness\@\@XZ
     */
    MCAPI struct Brightness getLightEmission() const;
    /**
     * @symbol  ?getMapColor\@Block\@\@QEBA?AVColor\@mce\@\@AEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI class mce::Color getMapColor(class BlockSource &, class BlockPos const &) const;
    /**
     * @symbol  ?getMaterial\@Block\@\@QEBAAEBVMaterial\@\@XZ
     */
    MCAPI class Material const & getMaterial() const;
    /**
     * @symbol  ?getMobToSpawn\@Block\@\@QEBAPEBVMobSpawnerData\@\@AEBVSpawnConditions\@\@AEAVBlockSource\@\@\@Z
     */
    MCAPI class MobSpawnerData const * getMobToSpawn(class SpawnConditions const &, class BlockSource &) const;
    /**
     * @symbol  ?getName\@Block\@\@QEBAAEBVHashedString\@\@XZ
     */
    MCAPI class HashedString const & getName() const;
    /**
     * @symbol  ?getPlacementBlock\@Block\@\@QEBAAEBV1\@AEAVActor\@\@AEBVBlockPos\@\@EAEBVVec3\@\@H\@Z
     */
    MCAPI class Block const & getPlacementBlock(class Actor &, class BlockPos const &, unsigned char, class Vec3 const &, int) const;
    /**
     * @symbol  ?getRuntimeId\@Block\@\@QEBAAEBIXZ
     */
    MCAPI unsigned int const & getRuntimeId() const;
    /**
     * @symbol  ?getSecondPart\@Block\@\@QEBA_NAEBVBlockSource\@\@AEBVBlockPos\@\@AEAV3\@\@Z
     */
    MCAPI bool getSecondPart(class BlockSource const &, class BlockPos const &, class BlockPos &) const;
    /**
     * @symbol  ?getSerializationId\@Block\@\@QEBAAEBVCompoundTag\@\@XZ
     */
    MCAPI class CompoundTag const & getSerializationId() const;
    /**
     * @symbol  ?getThickness\@Block\@\@QEBAMXZ
     */
    MCAPI float getThickness() const;
    /**
     * @symbol  ?getTranslucency\@Block\@\@QEBAMXZ
     */
    MCAPI float getTranslucency() const;
    /**
     * @symbol  ?getVariant\@Block\@\@QEBAHXZ
     */
    MCAPI int getVariant() const;
    /**
     * @symbol  ?getVisualShape\@Block\@\@QEBAAEBVAABB\@\@AEAV2\@_N\@Z
     */
    MCAPI class AABB const & getVisualShape(class AABB &, bool) const;
    /**
     * @symbol  ?getVisualShapeInWorld\@Block\@\@QEBAAEBVAABB\@\@AEAVBlockSource\@\@AEBVBlockPos\@\@AEAV2\@_N\@Z
     */
    MCAPI class AABB const & getVisualShapeInWorld(class BlockSource &, class BlockPos const &, class AABB &, bool) const;
    /**
     * @symbol  ?hasBlockEntity\@Block\@\@QEBA_NXZ
     */
    MCAPI bool hasBlockEntity() const;
    /**
     * @symbol  ?hasComparatorSignal\@Block\@\@QEBA_NXZ
     */
    MCAPI bool hasComparatorSignal() const;
    /**
     * @symbol  ?hasProperty\@Block\@\@QEBA_NW4BlockProperty\@\@\@Z
     */
    MCAPI bool hasProperty(enum class BlockProperty) const;
    /**
     * @symbol  ?hasState\@Block\@\@QEBA_NAEBVItemState\@\@\@Z
     */
    MCAPI bool hasState(class ItemState const &) const;
    /**
     * @symbol  ?hasTag\@Block\@\@QEBA_NAEBVHashedString\@\@\@Z
     */
    MCAPI bool hasTag(class HashedString const &) const;
    /**
     * @symbol  ?hasTag\@Block\@\@QEBA_NAEB_K\@Z
     */
    MCAPI bool hasTag(unsigned __int64 const &) const;
    /**
     * @symbol  ?ignoreEntitiesOnPistonMove\@Block\@\@QEBA_NXZ
     */
    MCAPI bool ignoreEntitiesOnPistonMove() const;
    /**
     * @symbol  ?initEntity\@Block\@\@QEAAXAEAVEntityRegistry\@\@\@Z
     */
    MCAPI void initEntity(class EntityRegistry &);
    /**
     * @symbol  ?initParams\@Block\@\@QEBAXAEAVRenderParams\@\@AEAVBlockSource\@\@AEBVBlockPos\@\@PEAVActor\@\@\@Z
     */
    MCAPI void initParams(class RenderParams &, class BlockSource &, class BlockPos const &, class Actor *) const;
    /**
     * @symbol  ?isAir\@Block\@\@QEBA_NXZ
     */
    MCAPI bool isAir() const;
    /**
     * @symbol  ?isAttachedTo\@Block\@\@QEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@AEAV3\@\@Z
     */
    MCAPI bool isAttachedTo(class BlockSource &, class BlockPos const &, class BlockPos &) const;
    /**
     * @symbol  ?isAuxValueRelevantForPicking\@Block\@\@QEBA_NXZ
     */
    MCAPI bool isAuxValueRelevantForPicking() const;
    /**
     * @symbol  ?isBounceBlock\@Block\@\@QEBA_NXZ
     */
    MCAPI bool isBounceBlock() const;
    /**
     * @symbol  ?isButtonBlock\@Block\@\@QEBA_NXZ
     */
    MCAPI bool isButtonBlock() const;
    /**
     * @symbol  ?isClimbable\@Block\@\@QEBA_NAEBUIActorMovementProxy\@\@\@Z
     */
    MCAPI bool isClimbable(struct IActorMovementProxy const &) const;
    /**
     * @symbol  ?isContainerBlock\@Block\@\@QEBA_NXZ
     */
    MCAPI bool isContainerBlock() const;
    /**
     * @symbol  ?isCropBlock\@Block\@\@QEBA_NXZ
     */
    MCAPI bool isCropBlock() const;
    /**
     * @symbol  ?isDoorBlock\@Block\@\@QEBA_NXZ
     */
    MCAPI bool isDoorBlock() const;
    /**
     * @symbol  ?isEmpty\@Block\@\@QEBA_NXZ
     */
    MCAPI bool isEmpty() const;
    /**
     * @symbol  ?isFenceBlock\@Block\@\@QEBA_NXZ
     */
    MCAPI bool isFenceBlock() const;
    /**
     * @symbol  ?isFenceGateBlock\@Block\@\@QEBA_NXZ
     */
    MCAPI bool isFenceGateBlock() const;
    /**
     * @symbol  ?isFilteredOut\@Block\@\@QEBA_NW4BlockRenderLayer\@\@\@Z
     */
    MCAPI bool isFilteredOut(enum class BlockRenderLayer) const;
    /**
     * @symbol  ?isHeavy\@Block\@\@QEBA_NXZ
     */
    MCAPI bool isHeavy() const;
    /**
     * @symbol  ?isInteractiveBlock\@Block\@\@QEBA_NXZ
     */
    MCAPI bool isInteractiveBlock() const;
    /**
     * @symbol  ?isLavaFlammable\@Block\@\@QEBA_NXZ
     */
    MCAPI bool isLavaFlammable() const;
    /**
     * @symbol  ?isLeverBlock\@Block\@\@QEBA_NXZ
     */
    MCAPI bool isLeverBlock() const;
    /**
     * @symbol  ?isMotionBlockingBlock\@Block\@\@QEBA_NXZ
     */
    MCAPI bool isMotionBlockingBlock() const;
    /**
     * @symbol  ?isMultifaceBlock\@Block\@\@QEBA_NXZ
     */
    MCAPI bool isMultifaceBlock() const;
    /**
     * @symbol  ?isObstructingChests\@Block\@\@QEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI bool isObstructingChests(class BlockSource &, class BlockPos const &) const;
    /**
     * @symbol  ?isPartialBlock\@Block\@\@QEBA_NAEBVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI bool isPartialBlock(class BlockSource const &, class BlockPos const &) const;
    /**
     * @symbol  ?isPreservingMediumWhenPlaced\@Block\@\@QEBA_NAEBV1\@\@Z
     */
    MCAPI bool isPreservingMediumWhenPlaced(class Block const &) const;
    /**
     * @symbol  ?isRailBlock\@Block\@\@QEBA_NXZ
     */
    MCAPI bool isRailBlock() const;
    /**
     * @symbol  ?isSignalSource\@Block\@\@QEBA_NXZ
     */
    MCAPI bool isSignalSource() const;
    /**
     * @symbol  ?isSlabBlock\@Block\@\@QEBA_NXZ
     */
    MCAPI bool isSlabBlock() const;
    /**
     * @symbol  ?isSolid\@Block\@\@QEBA_NXZ
     */
    MCAPI bool isSolid() const;
    /**
     * @symbol  ?isSolidBlockingBlock\@Block\@\@QEBA_NXZ
     */
    MCAPI bool isSolidBlockingBlock() const;
    /**
     * @symbol  ?isSolidBlockingBlockAndNotSignalSource\@Block\@\@QEBA_NXZ
     */
    MCAPI bool isSolidBlockingBlockAndNotSignalSource() const;
    /**
     * @symbol  ?isStairBlock\@Block\@\@QEBA_NXZ
     */
    MCAPI bool isStairBlock() const;
    /**
     * @symbol  ?isStemBlock\@Block\@\@QEBA_NXZ
     */
    MCAPI bool isStemBlock() const;
    /**
     * @symbol  ?isThinFenceBlock\@Block\@\@QEBA_NXZ
     */
    MCAPI bool isThinFenceBlock() const;
    /**
     * @symbol  ?isTopPartialBlock\@Block\@\@QEBA_NAEBVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI bool isTopPartialBlock(class BlockSource const &, class BlockPos const &) const;
    /**
     * @symbol  ?isUnbreakable\@Block\@\@QEBA_NXZ
     */
    MCAPI bool isUnbreakable() const;
    /**
     * @symbol  ?isWallBlock\@Block\@\@QEBA_NXZ
     */
    MCAPI bool isWallBlock() const;
    /**
     * @symbol  ?isWaterBlocking\@Block\@\@QEBA_NXZ
     */
    MCAPI bool isWaterBlocking() const;
    /**
     * @symbol  ?keepState\@Block\@\@QEBAAEBV1\@AEBVItemState\@\@\@Z
     */
    MCAPI class Block const & keepState(class ItemState const &) const;
    /**
     * @symbol  ?mayConsumeFertilizer\@Block\@\@QEBA_NAEAVBlockSource\@\@\@Z
     */
    MCAPI bool mayConsumeFertilizer(class BlockSource &) const;
    /**
     * @symbol  ?mayPick\@Block\@\@QEBA_NAEBVBlockSource\@\@_N\@Z
     */
    MCAPI bool mayPick(class BlockSource const &, bool) const;
    /**
     * @symbol  ?mayPick\@Block\@\@QEBA_NXZ
     */
    MCAPI bool mayPick() const;
    /**
     * @symbol  ?mayPlace\@Block\@\@QEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI bool mayPlace(class BlockSource &, class BlockPos const &) const;
    /**
     * @symbol  ?mayPlace\@Block\@\@QEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@E\@Z
     */
    MCAPI bool mayPlace(class BlockSource &, class BlockPos const &, unsigned char) const;
    /**
     * @symbol  ?mayPlaceOn\@Block\@\@QEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI bool mayPlaceOn(class BlockSource &, class BlockPos const &) const;
    /**
     * @symbol  ?movedByPiston\@Block\@\@QEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI void movedByPiston(class BlockSource &, class BlockPos const &) const;
    /**
     * @symbol  ?neighborChanged\@Block\@\@QEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@1\@Z
     */
    MCAPI void neighborChanged(class BlockSource &, class BlockPos const &, class BlockPos const &) const;
    /**
     * @symbol  ?onExploded\@Block\@\@QEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@PEAVActor\@\@\@Z
     */
    MCAPI void onExploded(class BlockSource &, class BlockPos const &, class Actor *) const;
    /**
     * @symbol  ?onFallOn\@Block\@\@QEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVActor\@\@M\@Z
     */
    MCAPI void onFallOn(class BlockSource &, class BlockPos const &, class Actor &, float) const;
    /**
     * @symbol  ?onFertilized\@Block\@\@QEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@PEAVActor\@\@W4FertilizerType\@\@\@Z
     */
    MCAPI bool onFertilized(class BlockSource &, class BlockPos const &, class Actor *, enum class FertilizerType) const;
    /**
     * @symbol  ?onLightningHit\@Block\@\@QEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI void onLightningHit(class BlockSource &, class BlockPos const &) const;
    /**
     * @symbol  ?onPlace\@Block\@\@QEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@AEBV1\@\@Z
     */
    MCAPI void onPlace(class BlockSource &, class BlockPos const &, class Block const &) const;
    /**
     * @symbol  ?onPlayerPlacing\@Block\@\@QEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVActor\@\@E\@Z
     */
    MCAPI void onPlayerPlacing(class BlockSource &, class BlockPos const &, class Actor &, unsigned char) const;
    /**
     * @symbol  ?onProjectileHit\@Block\@\@QEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@AEBVActor\@\@\@Z
     */
    MCAPI void onProjectileHit(class BlockSource &, class BlockPos const &, class Actor const &) const;
    /**
     * @symbol  ?onRemove\@Block\@\@QEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI void onRemove(class BlockSource &, class BlockPos const &) const;
    /**
     * @symbol  ?onStandOn\@Block\@\@QEBAXAEAVEntityContext\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI void onStandOn(class EntityContext &, class BlockPos const &) const;
    /**
     * @symbol  ?onStepOff\@Block\@\@QEBAXAEAVActor\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI void onStepOff(class Actor &, class BlockPos const &) const;
    /**
     * @symbol  ?onStepOn\@Block\@\@QEBAXAEAVActor\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI void onStepOn(class Actor &, class BlockPos const &) const;
    /**
     * @symbol  ?onStructureBlockPlace\@Block\@\@QEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI void onStructureBlockPlace(class BlockSource &, class BlockPos const &) const;
    /**
     * @symbol  ?onStructureNeighborBlockPlace\@Block\@\@QEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI void onStructureNeighborBlockPlace(class BlockSource &, class BlockPos const &) const;
    /**
     * @symbol  ?playerDestroy\@Block\@\@QEBAXAEAVPlayer\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI void playerDestroy(class Player &, class BlockPos const &) const;
    /**
     * @symbol  ?playerWillDestroy\@Block\@\@QEBA_NAEAVPlayer\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI bool playerWillDestroy(class Player &, class BlockPos const &) const;
    /**
     * @symbol  ?popResource\@Block\@\@QEBAPEAVItemActor\@\@AEAVBlockSource\@\@AEBVBlockPos\@\@AEBVItemInstance\@\@\@Z
     */
    MCAPI class ItemActor * popResource(class BlockSource &, class BlockPos const &, class ItemInstance const &) const;
    /**
     * @symbol  ?pushesOutItems\@Block\@\@QEBA_NXZ
     */
    MCAPI bool pushesOutItems() const;
    /**
     * @symbol  ?pushesUpFallingBlocks\@Block\@\@QEBA_NXZ
     */
    MCAPI bool pushesUpFallingBlocks() const;
    /**
     * @symbol  ?queuedTick\@Block\@\@QEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    MCAPI void queuedTick(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @symbol  ?randomTick\@Block\@\@QEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    MCAPI void randomTick(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @symbol  ?randomlyModifyPosition\@Block\@\@QEBA?AVVec3\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI class Vec3 randomlyModifyPosition(class BlockPos const &) const;
    /**
     * @symbol  ?shouldRandomTick\@Block\@\@QEBA_NXZ
     */
    MCAPI bool shouldRandomTick() const;
    /**
     * @symbol  ?shouldRandomTickExtraLayer\@Block\@\@QEBA_NXZ
     */
    MCAPI bool shouldRandomTickExtraLayer() const;
    /**
     * @symbol  ?shouldStopFalling\@Block\@\@QEBA_NAEAVActor\@\@\@Z
     */
    MCAPI bool shouldStopFalling(class Actor &) const;
    /**
     * @symbol  ?shouldTickOnSetBlock\@Block\@\@QEBA_NXZ
     */
    MCAPI bool shouldTickOnSetBlock() const;
    /**
     * @symbol  ?spawnResources\@Block\@\@QEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandomize\@\@MAEBVItemStack\@\@\@Z
     */
    MCAPI void spawnResources(class BlockSource &, class BlockPos const &, class Randomize &, float, class ItemStack const &) const;
    /**
     * @symbol  ?telemetryVariant\@Block\@\@QEBAHAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI int telemetryVariant(class BlockSource &, class BlockPos const &) const;
    /**
     * @symbol  ?toDebugString\@Block\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string toDebugString() const;
    /**
     * @symbol  ?transformOnFall\@Block\@\@QEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@PEAVActor\@\@M\@Z
     */
    MCAPI void transformOnFall(class BlockSource &, class BlockPos const &, class Actor *, float) const;
    /**
     * @symbol  ?triggerEvent\@Block\@\@QEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@HH\@Z
     */
    MCAPI void triggerEvent(class BlockSource &, class BlockPos const &, int, int) const;
    /**
     * @symbol  ?tryGetCopperBehavior\@Block\@\@QEBAPEBVCopperBehavior\@\@XZ
     */
    MCAPI class CopperBehavior const * tryGetCopperBehavior() const;
    /**
     * @symbol  ?tryGetInfested\@Block\@\@QEBAPEBV1\@XZ
     */
    MCAPI class Block const * tryGetInfested() const;
    /**
     * @symbol  ?tryGetUninfested\@Block\@\@QEBAPEBV1\@XZ
     */
    MCAPI class Block const * tryGetUninfested() const;
    /**
     * @symbol  ?trySpawnResourcesOnExplosion\@Block\@\@QEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@AEBV1\@M\@Z
     */
    MCAPI void trySpawnResourcesOnExplosion(class BlockSource &, class BlockPos const &, class Block const &, float) const;
    /**
     * @symbol  ?tryToPlace\@Block\@\@QEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@PEBUActorBlockSyncMessage\@\@\@Z
     */
    MCAPI bool tryToPlace(class BlockSource &, class BlockPos const &, struct ActorBlockSyncMessage const *) const;
    /**
     * @symbol  ?tryToTill\@Block\@\@QEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVActor\@\@AEAVItemStack\@\@\@Z
     */
    MCAPI bool tryToTill(class BlockSource &, class BlockPos const &, class Actor &, class ItemStack &) const;
    /**
     * @symbol  ?updateEntityAfterFallOn\@Block\@\@QEBAXAEBVBlockPos\@\@AEAUUpdateEntityAfterFallOnInterface\@\@\@Z
     */
    MCAPI void updateEntityAfterFallOn(class BlockPos const &, struct UpdateEntityAfterFallOnInterface &) const;
    /**
     * @symbol  ?updateTallestCollisionShape\@Block\@\@QEBA_NAEBVBlockSource\@\@AEBVBlockPos\@\@AEBVAABB\@\@V?$optional_ref\@$$CBVGetCollisionShapeInterface\@\@\@\@AEAV4\@AEBVVec3\@\@AEAM\@Z
     */
    MCAPI bool updateTallestCollisionShape(class BlockSource const &, class BlockPos const &, class AABB const &, class optional_ref<class GetCollisionShapeInterface const>, class AABB &, class Vec3 const &, float &) const;
    /**
     * @symbol  ?use\@Block\@\@QEBA_NAEAVPlayer\@\@AEBVBlockPos\@\@EV?$optional\@VVec3\@\@\@std\@\@\@Z
     */
    MCAPI bool use(class Player &, class BlockPos const &, unsigned char, class std::optional<class Vec3>) const;
    /**
     * @symbol  ?waterSpreadCausesSpawn\@Block\@\@QEBA_NXZ
     */
    MCAPI bool waterSpreadCausesSpawn() const;
    /**
     * @symbol  ?BLOCK_DESCRIPTION_PREFIX\@Block\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const BLOCK_DESCRIPTION_PREFIX;
    /**
     * @symbol  ?SIZE_OFFSET\@Block\@\@2MB
     */
    MCAPI static float const SIZE_OFFSET;

//protected:
    /**
     * @symbol  ?buildSerializationId\@Block\@\@IEAAXI\@Z
     */
    MCAPI void buildSerializationId(unsigned int);
    /**
     * @symbol  ?setRuntimeId\@Block\@\@IEBAXAEBI\@Z
     */
    MCAPI void setRuntimeId(unsigned int const &) const;

//private:
    /**
     * @symbol  ?_getBlockOcclusionType\@Block\@\@AEBA?AW4BlockOcclusionType\@\@XZ
     */
    MCAPI enum class BlockOcclusionType _getBlockOcclusionType() const;
    /**
     * @symbol  ?_lockRegistryForRead\@Block\@\@AEBA?AVBlockTypeRegistryReadLock\@\@XZ
     */
    MCAPI class BlockTypeRegistryReadLock _lockRegistryForRead() const;
    /**
     * @symbol  ?_tryInitEntityIfNotInitialized\@Block\@\@AEAAXXZ
     */
    MCAPI void _tryInitEntityIfNotInitialized();
    /**
     * @symbol  ?getEntity\@Block\@\@AEBAAEBVEntityContext\@\@XZ
     */
    MCAPI class EntityContext const & getEntity() const;

protected:

private:

};