#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/world/level/block/BlockLegacy.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class Block {

public:
    // prevent constructor by default
    Block& operator=(Block const&) = delete;
    Block(Block const&)            = delete;
    Block()                        = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?getRenderLayer\@Block\@\@UEBA?AW4BlockRenderLayer\@\@XZ
     */
    virtual enum class BlockRenderLayer getRenderLayer() const; // NOLINT
    /**
     * @symbol ??0Block\@\@QEAA\@GV?$not_null\@PEAVBlockLegacy\@\@\@gsl\@\@VCompoundTag\@\@AEBI\@Z
     */
    MCAPI
    Block(unsigned short, class gsl::not_null<class BlockLegacy*>, class CompoundTag, unsigned int const&); // NOLINT
    /**
     * @symbol
     * ?addAABBs\@Block\@\@QEBAXAEBVBlockSource\@\@AEBVBlockPos\@\@PEBVAABB\@\@AEAV?$vector\@VAABB\@\@V?$allocator\@VAABB\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void addAABBs(class BlockSource const&, class BlockPos const&, class AABB const*, std::vector<class AABB>&)
        const; // NOLINT
    /**
     * @symbol
     * ?addCollisionShapes\@Block\@\@QEBA_NAEBVBlockSource\@\@AEBVBlockPos\@\@PEBVAABB\@\@AEAV?$vector\@VAABB\@\@V?$allocator\@VAABB\@\@\@std\@\@\@std\@\@V?$optional_ref\@$$CBVGetCollisionShapeInterface\@\@\@\@\@Z
     */
    MCAPI bool
    addCollisionShapes(class BlockSource const&, class BlockPos const&, class AABB const*, std::vector<class AABB>&, class optional_ref<class GetCollisionShapeInterface const>)
        const; // NOLINT
    /**
     * @symbol ?addTag\@Block\@\@QEAAAEAV1\@AEBVHashedString\@\@\@Z
     */
    MCAPI class Block& addTag(class HashedString const&); // NOLINT
    /**
     * @symbol ?allowStateMismatchOnPlacement\@Block\@\@QEBA_NAEBV1\@\@Z
     */
    MCAPI bool allowStateMismatchOnPlacement(class Block const&) const; // NOLINT
    /**
     * @symbol ?animateTick\@Block\@\@QEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    MCAPI void animateTick(class BlockSource&, class BlockPos const&, class Random&) const; // NOLINT
    /**
     * @symbol ?asItemInstance\@Block\@\@QEBA?AVItemInstance\@\@AEAVBlockSource\@\@AEBVBlockPos\@\@_N\@Z
     */
    MCAPI class ItemInstance asItemInstance(class BlockSource&, class BlockPos const&, bool) const; // NOLINT
    /**
     * @symbol ?asItemInstance\@Block\@\@QEBA?AVItemInstance\@\@AEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI class ItemInstance asItemInstance(class BlockSource&, class BlockPos const&) const; // NOLINT
    /**
     * @symbol ?attack\@Block\@\@QEBA_NPEAVPlayer\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI bool attack(class Player*, class BlockPos const&) const; // NOLINT
    /**
     * @symbol ?breaksFallingBlocks\@Block\@\@QEBA_NVBaseGameVersion\@\@\@Z
     */
    MCAPI bool breaksFallingBlocks(class BaseGameVersion) const; // NOLINT
    /**
     * @symbol
     * ?buildDescriptionId\@Block\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string buildDescriptionId() const; // NOLINT
    /**
     * @symbol
     * ?buildDescriptionName\@Block\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string buildDescriptionName() const; // NOLINT
    /**
     * @symbol
     * ?buildSerializationIdString\@Block\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string buildSerializationIdString() const; // NOLINT
    /**
     * @symbol ?cacheComponentData\@Block\@\@QEAAXXZ
     */
    MCAPI void cacheComponentData(); // NOLINT
    /**
     * @symbol ?canBeBrokenFromFalling\@Block\@\@QEBA_NXZ
     */
    MCAPI bool canBeBrokenFromFalling() const; // NOLINT
    /**
     * @symbol ?canBeBuiltOver\@Block\@\@QEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@AEBVBlockItem\@\@\@Z
     */
    MCAPI bool canBeBuiltOver(class BlockSource&, class BlockPos const&, class BlockItem const&) const; // NOLINT
    /**
     * @symbol ?canBeBuiltOver\@Block\@\@QEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI bool canBeBuiltOver(class BlockSource&, class BlockPos const&) const; // NOLINT
    /**
     * @symbol ?canBeFertilized\@Block\@\@QEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@AEBV1\@\@Z
     */
    MCAPI bool canBeFertilized(class BlockSource&, class BlockPos const&, class Block const&) const; // NOLINT
    /**
     * @symbol ?canBeOriginalSurface\@Block\@\@QEBA_NXZ
     */
    MCAPI bool canBeOriginalSurface() const; // NOLINT
    /**
     * @symbol ?canConnect\@Block\@\@QEBA_NAEBV1\@E0\@Z
     */
    MCAPI bool canConnect(class Block const&, unsigned char, class Block const&) const; // NOLINT
    /**
     * @symbol ?canDamperVibrations\@Block\@\@QEBA_NXZ
     */
    MCAPI bool canDamperVibrations() const; // NOLINT
    /**
     * @symbol ?canHaveExtraData\@Block\@\@QEBA_NXZ
     */
    MCAPI bool canHaveExtraData() const; // NOLINT
    /**
     * @symbol ?canHurtAndBreakItem\@Block\@\@QEBA_NXZ
     */
    MCAPI bool canHurtAndBreakItem() const; // NOLINT
    /**
     * @symbol ?canInstatick\@Block\@\@QEBA_NXZ
     */
    MCAPI bool canInstatick() const; // NOLINT
    /**
     * @symbol ?canOccludeVibrations\@Block\@\@QEBA_NXZ
     */
    MCAPI bool canOccludeVibrations() const; // NOLINT
    /**
     * @symbol ?canProvideFullSupport\@Block\@\@QEBA_NE\@Z
     */
    MCAPI bool canProvideFullSupport(unsigned char) const; // NOLINT
    /**
     * @symbol ?canProvideMultifaceSupport\@Block\@\@QEBA_NE\@Z
     */
    MCAPI bool canProvideMultifaceSupport(unsigned char) const; // NOLINT
    /**
     * @symbol ?canProvideSupport\@Block\@\@QEBA_NEW4BlockSupportType\@\@\@Z
     */
    MCAPI bool canProvideSupport(unsigned char, enum class BlockSupportType) const; // NOLINT
    /**
     * @symbol ?canReactToNeighborsDuringInstatick\@Block\@\@QEBA_NXZ
     */
    MCAPI bool canReactToNeighborsDuringInstatick() const; // NOLINT
    /**
     * @symbol ?canSlide\@Block\@\@QEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI bool canSlide(class BlockSource&, class BlockPos const&) const; // NOLINT
    /**
     * @symbol ?canSurvive\@Block\@\@QEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI bool canSurvive(class BlockSource&, class BlockPos const&) const; // NOLINT
    /**
     * @symbol ?causesFreezeEffect\@Block\@\@QEBA_NXZ
     */
    MCAPI bool causesFreezeEffect() const; // NOLINT
    /**
     * @symbol ?checkIsPathable\@Block\@\@QEBA_NAEAVActor\@\@AEBVBlockPos\@\@1\@Z
     */
    MCAPI bool checkIsPathable(class Actor&, class BlockPos const&, class BlockPos const&) const; // NOLINT
    /**
     * @symbol ?clip\@Block\@\@QEBA?AVHitResult\@\@AEBVBlockSource\@\@AEBVBlockPos\@\@AEBVVec3\@\@2_N\@Z
     */
    MCAPI class HitResult
    clip(class BlockSource const&, class BlockPos const&, class Vec3 const&, class Vec3 const&, bool) const; // NOLINT
    /**
     * @symbol ?clip\@Block\@\@QEBA?AVHitResult\@\@AEBVBlockSource\@\@AEBVBlockPos\@\@AEBVVec3\@\@2_NAEBVAABB\@\@\@Z
     */
    MCAPI class HitResult
    clip(class BlockSource const&, class BlockPos const&, class Vec3 const&, class Vec3 const&, bool, class AABB const&)
        const; // NOLINT
    /**
     * @symbol ?computeRawSerializationIdHashForNetwork\@Block\@\@QEBAIXZ
     */
    MCAPI unsigned int computeRawSerializationIdHashForNetwork() const; // NOLINT
    /**
     * @symbol ?copyState\@Block\@\@QEBAAEBV1\@AEBV1\@AEBVBlockState\@\@\@Z
     */
    MCAPI class Block const& copyState(class Block const&, class BlockState const&) const; // NOLINT
    /**
     * @symbol ?dealsContactDamage\@Block\@\@QEBA_NAEBVActor\@\@_N\@Z
     */
    MCAPI bool dealsContactDamage(class Actor const&, bool) const; // NOLINT
    /**
     * @symbol ?destroy\@Block\@\@QEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@PEAVActor\@\@\@Z
     */
    MCAPI void destroy(class BlockSource&, class BlockPos const&, class Actor*) const; // NOLINT
    /**
     * @symbol
     * ?executeEvent\@Block\@\@QEBAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAVRenderParams\@\@\@Z
     */
    MCAPI void executeEvent(std::string const&, class RenderParams&) const; // NOLINT
    /**
     * @symbol
     * ?executeItemEvent\@Block\@\@QEBAXAEAVItemStackBase\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAVBlockSource\@\@AEBVBlockPos\@\@PEAVActor\@\@\@Z
     */
    MCAPI void
    executeItemEvent(class ItemStackBase&, std::string const&, class BlockSource&, class BlockPos const&, class Actor*)
        const; // NOLINT
    /**
     * @symbol ?executeTrigger\@Block\@\@QEBA_NAEBVDefinitionTrigger\@\@AEAVRenderParams\@\@\@Z
     */
    MCAPI bool executeTrigger(class DefinitionTrigger const&, class RenderParams&) const; // NOLINT
    /**
     * @symbol ?getAABB\@Block\@\@QEBAAEBVAABB\@\@AEBVIConstBlockSource\@\@AEBVBlockPos\@\@AEAV2\@_N\@Z
     */
    MCAPI class AABB const&
    getAABB(class IConstBlockSource const&, class BlockPos const&, class AABB&, bool) const; // NOLINT
    /**
     * @symbol ?getAllowsRunes\@Block\@\@QEBA_NXZ
     */
    MCAPI bool getAllowsRunes() const; // NOLINT
    /**
     * @symbol ?getBlockEntityType\@Block\@\@QEBA?AW4BlockActorType\@\@XZ
     */
    MCAPI enum class BlockActorType getBlockEntityType() const; // NOLINT
    /**
     * @symbol ?getBurnOdds\@Block\@\@QEBAHXZ
     */
    MCAPI int getBurnOdds() const; // NOLINT
    /**
     * @symbol
     * ?getCollisionShape\@Block\@\@QEBA_NAEAVAABB\@\@AEBVIConstBlockSource\@\@AEBVBlockPos\@\@V?$optional_ref\@$$CBVGetCollisionShapeInterface\@\@\@\@\@Z
     */
    MCAPI bool
    getCollisionShape(class AABB&, class IConstBlockSource const&, class BlockPos const&, class optional_ref<class GetCollisionShapeInterface const>)
        const; // NOLINT
    /**
     * @symbol ?getColor\@Block\@\@QEBAHXZ
     */
    MCAPI int getColor() const; // NOLINT
    /**
     * @symbol ?getColor\@Block\@\@QEBAHAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI int getColor(class BlockSource&, class BlockPos const&) const; // NOLINT
    /**
     * @symbol ?getComparatorSignal\@Block\@\@QEBAHAEAVBlockSource\@\@AEBVBlockPos\@\@E\@Z
     */
    MCAPI int getComparatorSignal(class BlockSource&, class BlockPos const&, unsigned char) const; // NOLINT
    /**
     * @symbol
     * ?getConnectedDirections\@Block\@\@QEBA?AUHorizontalDirectionBits\@BlockLegacy\@\@AEBVBlockPos\@\@AEAVBlockSource\@\@\@Z
     */
    MCAPI struct BlockLegacy::HorizontalDirectionBits
    getConnectedDirections(class BlockPos const&, class BlockSource&) const; // NOLINT
    /**
     * @symbol
     * ?getDebugText\@Block\@\@QEBAXAEAV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI void getDebugText(std::vector<std::string>&, class BlockPos const&) const; // NOLINT
    /**
     * @symbol ?getDefaultState\@Block\@\@QEBAAEBV1\@XZ
     */
    MCAPI class Block const& getDefaultState() const; // NOLINT
    /**
     * @symbol
     * ?getDescriptionId\@Block\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getDescriptionId() const; // NOLINT
    /**
     * @symbol ?getDestroySpeed\@Block\@\@QEBAMXZ
     */
    MCAPI float getDestroySpeed() const; // NOLINT
    /**
     * @symbol ?getDirectSignal\@Block\@\@QEBAHAEAVBlockSource\@\@AEBVBlockPos\@\@H\@Z
     */
    MCAPI int getDirectSignal(class BlockSource&, class BlockPos const&, int) const; // NOLINT
    /**
     * @symbol ?getEntityForModification\@Block\@\@QEBAAEAVEntityContext\@\@XZ
     */
    MCAPI class EntityContext& getEntityForModification() const; // NOLINT
    /**
     * @symbol ?getExplosionResistance\@Block\@\@QEBAMXZ
     */
    MCAPI float getExplosionResistance() const; // NOLINT
    /**
     * @symbol ?getFlameOdds\@Block\@\@QEBAHXZ
     */
    MCAPI int getFlameOdds() const; // NOLINT
    /**
     * @symbol ?getFriction\@Block\@\@QEBAMXZ
     */
    MCAPI float getFriction() const; // NOLINT
    /**
     * @symbol ?getIgnoresDestroyPermissions\@Block\@\@QEBA_NAEAVActor\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI bool getIgnoresDestroyPermissions(class Actor&, class BlockPos const&) const; // NOLINT
    /**
     * @symbol ?getLegacyBlock\@Block\@\@QEBAAEBVBlockLegacy\@\@XZ
     */
    MCAPI class BlockLegacy const& getLegacyBlock() const; // NOLINT
    /**
     * @symbol ?getLight\@Block\@\@QEBA?AUBrightness\@\@XZ
     */
    MCAPI struct Brightness getLight() const; // NOLINT
    /**
     * @symbol ?getLightEmission\@Block\@\@QEBA?AUBrightness\@\@XZ
     */
    MCAPI struct Brightness getLightEmission() const; // NOLINT
    /**
     * @symbol ?getMapColor\@Block\@\@QEBA?AVColor\@mce\@\@AEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI class mce::Color getMapColor(class BlockSource&, class BlockPos const&) const; // NOLINT
    /**
     * @symbol ?getMaterial\@Block\@\@QEBAAEBVMaterial\@\@XZ
     */
    MCAPI class Material const& getMaterial() const; // NOLINT
    /**
     * @symbol ?getMobToSpawn\@Block\@\@QEBAPEBVMobSpawnerData\@\@AEBVSpawnConditions\@\@AEAVBlockSource\@\@\@Z
     */
    MCAPI class MobSpawnerData const* getMobToSpawn(class SpawnConditions const&, class BlockSource&) const; // NOLINT
    /**
     * @symbol ?getName\@Block\@\@QEBAAEBVHashedString\@\@XZ
     */
    MCAPI class HashedString const& getName() const; // NOLINT
    /**
     * @symbol ?getPlacementBlock\@Block\@\@QEBAAEBV1\@AEBVActor\@\@AEBVBlockPos\@\@EAEBVVec3\@\@H\@Z
     */
    MCAPI class Block const&
    getPlacementBlock(class Actor const&, class BlockPos const&, unsigned char, class Vec3 const&, int) const; // NOLINT
    /**
     * @symbol ?getRuntimeId\@Block\@\@QEBAAEBIXZ
     */
    MCAPI unsigned int const& getRuntimeId() const; // NOLINT
    /**
     * @symbol ?getSecondPart\@Block\@\@QEBA_NAEBVBlockSource\@\@AEBVBlockPos\@\@AEAV3\@\@Z
     */
    MCAPI bool getSecondPart(class BlockSource const&, class BlockPos const&, class BlockPos&) const; // NOLINT
    /**
     * @symbol ?getSerializationId\@Block\@\@QEBAAEBVCompoundTag\@\@XZ
     */
    MCAPI class CompoundTag const& getSerializationId() const; // NOLINT
    /**
     * @symbol ?getThickness\@Block\@\@QEBAMXZ
     */
    MCAPI float getThickness() const; // NOLINT
    /**
     * @symbol ?getTranslucency\@Block\@\@QEBAMXZ
     */
    MCAPI float getTranslucency() const; // NOLINT
    /**
     * @symbol ?getVariant\@Block\@\@QEBAHXZ
     */
    MCAPI int getVariant() const; // NOLINT
    /**
     * @symbol ?getVisualShape\@Block\@\@QEBAAEBVAABB\@\@AEAV2\@\@Z
     */
    MCAPI class AABB const& getVisualShape(class AABB&) const; // NOLINT
    /**
     * @symbol ?getVisualShapeInWorld\@Block\@\@QEBAAEBVAABB\@\@AEAVBlockSource\@\@AEBVBlockPos\@\@AEAV2\@\@Z
     */
    MCAPI class AABB const&
    getVisualShapeInWorld(class BlockSource&, class BlockPos const&, class AABB&) const; // NOLINT
    /**
     * @symbol ?hasBlockEntity\@Block\@\@QEBA_NXZ
     */
    MCAPI bool hasBlockEntity() const; // NOLINT
    /**
     * @symbol ?hasComparatorSignal\@Block\@\@QEBA_NXZ
     */
    MCAPI bool hasComparatorSignal() const; // NOLINT
    /**
     * @symbol ?hasProperty\@Block\@\@QEBA_NW4BlockProperty\@\@\@Z
     */
    MCAPI bool hasProperty(enum class BlockProperty) const; // NOLINT
    /**
     * @symbol ?hasState\@Block\@\@QEBA_NAEBVBlockState\@\@\@Z
     */
    MCAPI bool hasState(class BlockState const&) const; // NOLINT
    /**
     * @symbol ?hasTag\@Block\@\@QEBA_NAEB_K\@Z
     */
    MCAPI bool hasTag(unsigned __int64 const&) const; // NOLINT
    /**
     * @symbol ?hasTag\@Block\@\@QEBA_NAEBVHashedString\@\@\@Z
     */
    MCAPI bool hasTag(class HashedString const&) const; // NOLINT
    /**
     * @symbol ?ignoreEntitiesOnPistonMove\@Block\@\@QEBA_NXZ
     */
    MCAPI bool ignoreEntitiesOnPistonMove() const; // NOLINT
    /**
     * @symbol ?initEntity\@Block\@\@QEAAXAEAVEntityRegistry\@\@\@Z
     */
    MCAPI void initEntity(class EntityRegistry&); // NOLINT
    /**
     * @symbol ?initParams\@Block\@\@QEBAXAEAVRenderParams\@\@AEAVBlockSource\@\@AEBVBlockPos\@\@PEAVActor\@\@\@Z
     */
    MCAPI void initParams(class RenderParams&, class BlockSource&, class BlockPos const&, class Actor*) const; // NOLINT
    /**
     * @symbol ?isAir\@Block\@\@QEBA_NXZ
     */
    MCAPI bool isAir() const; // NOLINT
    /**
     * @symbol ?isAttachedTo\@Block\@\@QEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@AEAV3\@\@Z
     */
    MCAPI bool isAttachedTo(class BlockSource&, class BlockPos const&, class BlockPos&) const; // NOLINT
    /**
     * @symbol ?isBounceBlock\@Block\@\@QEBA_NXZ
     */
    MCAPI bool isBounceBlock() const; // NOLINT
    /**
     * @symbol ?isButtonBlock\@Block\@\@QEBA_NXZ
     */
    MCAPI bool isButtonBlock() const; // NOLINT
    /**
     * @symbol ?isClimbable\@Block\@\@QEBA_NAEBUIActorMovementProxy\@\@\@Z
     */
    MCAPI bool isClimbable(struct IActorMovementProxy const&) const; // NOLINT
    /**
     * @symbol ?isContainerBlock\@Block\@\@QEBA_NXZ
     */
    MCAPI bool isContainerBlock() const; // NOLINT
    /**
     * @symbol ?isCropBlock\@Block\@\@QEBA_NXZ
     */
    MCAPI bool isCropBlock() const; // NOLINT
    /**
     * @symbol ?isDoorBlock\@Block\@\@QEBA_NXZ
     */
    MCAPI bool isDoorBlock() const; // NOLINT
    /**
     * @symbol ?isEmpty\@Block\@\@QEBA_NXZ
     */
    MCAPI bool isEmpty() const; // NOLINT
    /**
     * @symbol ?isFallingBlock\@Block\@\@QEBA_NXZ
     */
    MCAPI bool isFallingBlock() const; // NOLINT
    /**
     * @symbol ?isFenceBlock\@Block\@\@QEBA_NXZ
     */
    MCAPI bool isFenceBlock() const; // NOLINT
    /**
     * @symbol ?isFenceGateBlock\@Block\@\@QEBA_NXZ
     */
    MCAPI bool isFenceGateBlock() const; // NOLINT
    /**
     * @symbol ?isFilteredOut\@Block\@\@QEBA_NW4BlockRenderLayer\@\@\@Z
     */
    MCAPI bool isFilteredOut(enum class BlockRenderLayer) const; // NOLINT
    /**
     * @symbol ?isInteractiveBlock\@Block\@\@QEBA_NXZ
     */
    MCAPI bool isInteractiveBlock() const; // NOLINT
    /**
     * @symbol ?isLavaFlammable\@Block\@\@QEBA_NXZ
     */
    MCAPI bool isLavaFlammable() const; // NOLINT
    /**
     * @symbol ?isLeverBlock\@Block\@\@QEBA_NXZ
     */
    MCAPI bool isLeverBlock() const; // NOLINT
    /**
     * @symbol ?isMotionBlockingBlock\@Block\@\@QEBA_NXZ
     */
    MCAPI bool isMotionBlockingBlock() const; // NOLINT
    /**
     * @symbol ?isMultifaceBlock\@Block\@\@QEBA_NXZ
     */
    MCAPI bool isMultifaceBlock() const; // NOLINT
    /**
     * @symbol ?isObstructingChests\@Block\@\@QEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI bool isObstructingChests(class BlockSource&, class BlockPos const&) const; // NOLINT
    /**
     * @symbol ?isPartialBlock\@Block\@\@QEBA_NAEBVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI bool isPartialBlock(class BlockSource const&, class BlockPos const&) const; // NOLINT
    /**
     * @symbol ?isPreservingMediumWhenPlaced\@Block\@\@QEBA_NAEBV1\@\@Z
     */
    MCAPI bool isPreservingMediumWhenPlaced(class Block const&) const; // NOLINT
    /**
     * @symbol ?isRailBlock\@Block\@\@QEBA_NXZ
     */
    MCAPI bool isRailBlock() const; // NOLINT
    /**
     * @symbol ?isSignalSource\@Block\@\@QEBA_NXZ
     */
    MCAPI bool isSignalSource() const; // NOLINT
    /**
     * @symbol ?isSlabBlock\@Block\@\@QEBA_NXZ
     */
    MCAPI bool isSlabBlock() const; // NOLINT
    /**
     * @symbol ?isSolid\@Block\@\@QEBA_NXZ
     */
    MCAPI bool isSolid() const; // NOLINT
    /**
     * @symbol ?isSolidBlockingBlock\@Block\@\@QEBA_NXZ
     */
    MCAPI bool isSolidBlockingBlock() const; // NOLINT
    /**
     * @symbol ?isSolidBlockingBlockAndNotSignalSource\@Block\@\@QEBA_NXZ
     */
    MCAPI bool isSolidBlockingBlockAndNotSignalSource() const; // NOLINT
    /**
     * @symbol ?isStairBlock\@Block\@\@QEBA_NXZ
     */
    MCAPI bool isStairBlock() const; // NOLINT
    /**
     * @symbol ?isStemBlock\@Block\@\@QEBA_NXZ
     */
    MCAPI bool isStemBlock() const; // NOLINT
    /**
     * @symbol ?isThinFenceBlock\@Block\@\@QEBA_NXZ
     */
    MCAPI bool isThinFenceBlock() const; // NOLINT
    /**
     * @symbol ?isTopPartialBlock\@Block\@\@QEBA_NAEBVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI bool isTopPartialBlock(class BlockSource const&, class BlockPos const&) const; // NOLINT
    /**
     * @symbol ?isUnbreakable\@Block\@\@QEBA_NXZ
     */
    MCAPI bool isUnbreakable() const; // NOLINT
    /**
     * @symbol ?isWallBlock\@Block\@\@QEBA_NXZ
     */
    MCAPI bool isWallBlock() const; // NOLINT
    /**
     * @symbol ?isWaterBlocking\@Block\@\@QEBA_NXZ
     */
    MCAPI bool isWaterBlocking() const; // NOLINT
    /**
     * @symbol ?keepState\@Block\@\@QEBAAEBV1\@AEBVBlockState\@\@\@Z
     */
    MCAPI class Block const& keepState(class BlockState const&) const; // NOLINT
    /**
     * @symbol ?mayConsumeFertilizer\@Block\@\@QEBA_NAEAVBlockSource\@\@\@Z
     */
    MCAPI bool mayConsumeFertilizer(class BlockSource&) const; // NOLINT
    /**
     * @symbol ?mayPick\@Block\@\@QEBA_NXZ
     */
    MCAPI bool mayPick() const; // NOLINT
    /**
     * @symbol ?mayPick\@Block\@\@QEBA_NAEBVBlockSource\@\@_N\@Z
     */
    MCAPI bool mayPick(class BlockSource const&, bool) const; // NOLINT
    /**
     * @symbol ?mayPlace\@Block\@\@QEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI bool mayPlace(class BlockSource&, class BlockPos const&) const; // NOLINT
    /**
     * @symbol ?mayPlace\@Block\@\@QEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@E\@Z
     */
    MCAPI bool mayPlace(class BlockSource&, class BlockPos const&, unsigned char) const; // NOLINT
    /**
     * @symbol ?mayPlaceOn\@Block\@\@QEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI bool mayPlaceOn(class BlockSource&, class BlockPos const&) const; // NOLINT
    /**
     * @symbol ?movedByPiston\@Block\@\@QEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI void movedByPiston(class BlockSource&, class BlockPos const&) const; // NOLINT
    /**
     * @symbol ?neighborChanged\@Block\@\@QEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@1\@Z
     */
    MCAPI void neighborChanged(class BlockSource&, class BlockPos const&, class BlockPos const&) const; // NOLINT
    /**
     * @symbol ?onExploded\@Block\@\@QEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@PEAVActor\@\@\@Z
     */
    MCAPI void onExploded(class BlockSource&, class BlockPos const&, class Actor*) const; // NOLINT
    /**
     * @symbol ?onFallOn\@Block\@\@QEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVActor\@\@M\@Z
     */
    MCAPI void onFallOn(class BlockSource&, class BlockPos const&, class Actor&, float) const; // NOLINT
    /**
     * @symbol ?onFertilized\@Block\@\@QEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@PEAVActor\@\@W4FertilizerType\@\@\@Z
     */
    MCAPI bool
    onFertilized(class BlockSource&, class BlockPos const&, class Actor*, enum class FertilizerType) const; // NOLINT
    /**
     * @symbol ?onLightningHit\@Block\@\@QEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI void onLightningHit(class BlockSource&, class BlockPos const&) const; // NOLINT
    /**
     * @symbol ?onPlace\@Block\@\@QEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@AEBV1\@\@Z
     */
    MCAPI void onPlace(class BlockSource&, class BlockPos const&, class Block const&) const; // NOLINT
    /**
     * @symbol ?onPlayerPlacing\@Block\@\@QEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVActor\@\@E\@Z
     */
    MCAPI void onPlayerPlacing(class BlockSource&, class BlockPos const&, class Actor&, unsigned char) const; // NOLINT
    /**
     * @symbol ?onProjectileHit\@Block\@\@QEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@AEBVActor\@\@\@Z
     */
    MCAPI void onProjectileHit(class BlockSource&, class BlockPos const&, class Actor const&) const; // NOLINT
    /**
     * @symbol ?onRemove\@Block\@\@QEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI void onRemove(class BlockSource&, class BlockPos const&) const; // NOLINT
    /**
     * @symbol ?onStandOn\@Block\@\@QEBAXAEAVEntityContext\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI void onStandOn(class EntityContext&, class BlockPos const&) const; // NOLINT
    /**
     * @symbol ?onStepOff\@Block\@\@QEBAXAEAVActor\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI void onStepOff(class Actor&, class BlockPos const&) const; // NOLINT
    /**
     * @symbol ?onStepOn\@Block\@\@QEBAXAEAVActor\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI void onStepOn(class Actor&, class BlockPos const&) const; // NOLINT
    /**
     * @symbol ?onStructureBlockPlace\@Block\@\@QEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI void onStructureBlockPlace(class BlockSource&, class BlockPos const&) const; // NOLINT
    /**
     * @symbol ?onStructureNeighborBlockPlace\@Block\@\@QEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI void onStructureNeighborBlockPlace(class BlockSource&, class BlockPos const&) const; // NOLINT
    /**
     * @symbol ?playerDestroy\@Block\@\@QEBAXAEAVPlayer\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI void playerDestroy(class Player&, class BlockPos const&) const; // NOLINT
    /**
     * @symbol ?playerWillDestroy\@Block\@\@QEBA_NAEAVPlayer\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI bool playerWillDestroy(class Player&, class BlockPos const&) const; // NOLINT
    /**
     * @symbol ?popResource\@Block\@\@QEBAPEAVItemActor\@\@AEAVBlockSource\@\@AEBVBlockPos\@\@AEBVItemInstance\@\@\@Z
     */
    MCAPI class ItemActor*
    popResource(class BlockSource&, class BlockPos const&, class ItemInstance const&) const; // NOLINT
    /**
     * @symbol ?pushesOutItems\@Block\@\@QEBA_NXZ
     */
    MCAPI bool pushesOutItems() const; // NOLINT
    /**
     * @symbol ?pushesUpFallingBlocks\@Block\@\@QEBA_NXZ
     */
    MCAPI bool pushesUpFallingBlocks() const; // NOLINT
    /**
     * @symbol ?queuedTick\@Block\@\@QEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    MCAPI void queuedTick(class BlockSource&, class BlockPos const&, class Random&) const; // NOLINT
    /**
     * @symbol ?randomTick\@Block\@\@QEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    MCAPI void randomTick(class BlockSource&, class BlockPos const&, class Random&) const; // NOLINT
    /**
     * @symbol ?randomlyModifyPosition\@Block\@\@QEBA?AVVec3\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI class Vec3 randomlyModifyPosition(class BlockPos const&) const; // NOLINT
    /**
     * @symbol ?shouldRandomTick\@Block\@\@QEBA_NXZ
     */
    MCAPI bool shouldRandomTick() const; // NOLINT
    /**
     * @symbol ?shouldRandomTickExtraLayer\@Block\@\@QEBA_NXZ
     */
    MCAPI bool shouldRandomTickExtraLayer() const; // NOLINT
    /**
     * @symbol ?shouldStopFalling\@Block\@\@QEBA_NAEAVActor\@\@\@Z
     */
    MCAPI bool shouldStopFalling(class Actor&) const; // NOLINT
    /**
     * @symbol ?shouldTickOnSetBlock\@Block\@\@QEBA_NXZ
     */
    MCAPI bool shouldTickOnSetBlock() const; // NOLINT
    /**
     * @symbol ?spawnResources\@Block\@\@QEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandomize\@\@MAEBVItemStack\@\@\@Z
     */
    MCAPI void
    spawnResources(class BlockSource&, class BlockPos const&, class Randomize&, float, class ItemStack const&)
        const; // NOLINT
    /**
     * @symbol ?telemetryVariant\@Block\@\@QEBAHAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI int telemetryVariant(class BlockSource&, class BlockPos const&) const; // NOLINT
    /**
     * @symbol
     * ?toDebugString\@Block\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string toDebugString() const; // NOLINT
    /**
     * @symbol ?transformOnFall\@Block\@\@QEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@PEAVActor\@\@M\@Z
     */
    MCAPI void transformOnFall(class BlockSource&, class BlockPos const&, class Actor*, float) const; // NOLINT
    /**
     * @symbol ?triggerEvent\@Block\@\@QEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@HH\@Z
     */
    MCAPI void triggerEvent(class BlockSource&, class BlockPos const&, int, int) const; // NOLINT
    /**
     * @symbol ?tryGetCopperBehavior\@Block\@\@QEBAPEBVCopperBehavior\@\@XZ
     */
    MCAPI class CopperBehavior const* tryGetCopperBehavior() const; // NOLINT
    /**
     * @symbol ?tryGetInfested\@Block\@\@QEBAPEBV1\@XZ
     */
    MCAPI class Block const* tryGetInfested() const; // NOLINT
    /**
     * @symbol ?tryGetUninfested\@Block\@\@QEBAPEBV1\@XZ
     */
    MCAPI class Block const* tryGetUninfested() const; // NOLINT
    /**
     * @symbol ?trySpawnResourcesOnExplosion\@Block\@\@QEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@AEBV1\@M\@Z
     */
    MCAPI void
    trySpawnResourcesOnExplosion(class BlockSource&, class BlockPos const&, class Block const&, float) const; // NOLINT
    /**
     * @symbol ?tryToPlace\@Block\@\@QEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@PEBUActorBlockSyncMessage\@\@\@Z
     */
    MCAPI bool
    tryToPlace(class BlockSource&, class BlockPos const&, struct ActorBlockSyncMessage const*) const; // NOLINT
    /**
     * @symbol ?tryToTill\@Block\@\@QEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVActor\@\@AEAVItemStack\@\@\@Z
     */
    MCAPI bool tryToTill(class BlockSource&, class BlockPos const&, class Actor&, class ItemStack&) const; // NOLINT
    /**
     * @symbol ?updateEntityAfterFallOn\@Block\@\@QEBAXAEBVBlockPos\@\@AEAUUpdateEntityAfterFallOnInterface\@\@\@Z
     */
    MCAPI void updateEntityAfterFallOn(class BlockPos const&, struct UpdateEntityAfterFallOnInterface&) const; // NOLINT
    /**
     * @symbol
     * ?updateTallestCollisionShape\@Block\@\@QEBA_NAEBVBlockSource\@\@AEBVBlockPos\@\@AEBVAABB\@\@V?$optional_ref\@$$CBVGetCollisionShapeInterface\@\@\@\@AEAV4\@AEBVVec3\@\@AEAM\@Z
     */
    MCAPI bool
    updateTallestCollisionShape(class BlockSource const&, class BlockPos const&, class AABB const&, class optional_ref<class GetCollisionShapeInterface const>, class AABB&, class Vec3 const&, float&)
        const; // NOLINT
    /**
     * @symbol ?use\@Block\@\@QEBA_NAEAVPlayer\@\@AEBVBlockPos\@\@EV?$optional\@VVec3\@\@\@std\@\@\@Z
     */
    MCAPI bool
    use(class Player&, class BlockPos const&, unsigned char, class std::optional<class Vec3>) const; // NOLINT
    /**
     * @symbol ?waterSpreadCausesSpawn\@Block\@\@QEBA_NXZ
     */
    MCAPI bool waterSpreadCausesSpawn() const; // NOLINT
    /**
     * @symbol
     * ?BLOCK_DESCRIPTION_PREFIX\@Block\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const BLOCK_DESCRIPTION_PREFIX; // NOLINT
    /**
     * @symbol ?SIZE_OFFSET\@Block\@\@2MB
     */
    MCAPI static float const SIZE_OFFSET; // NOLINT

    // protected:
    /**
     * @symbol ?buildSerializationId\@Block\@\@IEAAXI\@Z
     */
    MCAPI void buildSerializationId(unsigned int); // NOLINT
    /**
     * @symbol ?setRuntimeId\@Block\@\@IEBAXAEBI\@Z
     */
    MCAPI void setRuntimeId(unsigned int const&) const; // NOLINT

    // private:
    /**
     * @symbol ?_getBlockOcclusionType\@Block\@\@AEBA?AW4BlockOcclusionType\@\@XZ
     */
    MCAPI enum class BlockOcclusionType _getBlockOcclusionType() const; // NOLINT
    /**
     * @symbol ?_isSolid\@Block\@\@AEBA_NXZ
     */
    MCAPI bool _isSolid() const; // NOLINT
    /**
     * @symbol ?_lockRegistryForRead\@Block\@\@AEBA?AVBlockTypeRegistryReadLock\@\@XZ
     */
    MCAPI class BlockTypeRegistryReadLock _lockRegistryForRead() const; // NOLINT
    /**
     * @symbol
     * ?_tryGetTransformThenRotationMatrix\@Block\@\@AEBA?AV?$unique_ptr\@VMatrix\@\@U?$default_delete\@VMatrix\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::unique_ptr<class Matrix> _tryGetTransformThenRotationMatrix() const; // NOLINT
    /**
     * @symbol ?_tryInitEntityIfNotInitialized\@Block\@\@AEAAXXZ
     */
    MCAPI void _tryInitEntityIfNotInitialized(); // NOLINT
    /**
     * @symbol ?entityInside\@Block\@\@AEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVActor\@\@\@Z
     */
    MCAPI void entityInside(class BlockSource&, class BlockPos const&, class Actor&) const; // NOLINT
    /**
     * @symbol ?getEntity\@Block\@\@AEBAAEBVEntityContext\@\@XZ
     */
    MCAPI class EntityContext const& getEntity() const; // NOLINT

protected:
private:
};
