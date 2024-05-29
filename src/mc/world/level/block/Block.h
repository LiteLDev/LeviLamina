#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/ShapeType.h"
#include "mc/world/level/block/BlockLegacy.h"
#include "mc/world/level/block/utils/BlockActorType.h"
#include "mc/world/level/block/utils/BlockClientPredictionOverrides.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class CompoundTag;

class Block {
public:
    using BlockStateValueType = std::variant<int, float, bool, std::string>;
    using BlockStatesType     = std::vector<std::pair<std::string, BlockStateValueType>>;

    LLNDAPI static optional_ref<Block const> tryGetFromRegistry(uint runtimeID);
    LLNDAPI static optional_ref<Block const> tryGetFromRegistry(std::string_view name);
    LLNDAPI static optional_ref<Block const> tryGetFromRegistry(std::string_view name, ushort legacyData);
    LLNDAPI static optional_ref<Block const> tryGetFromRegistry(uint legacyBlockID, ushort legacyData);
    LLNDAPI static optional_ref<Block const> tryGetFromRegistry(std::string_view name, BlockStatesType const& states);
    LLNDAPI static optional_ref<Block const> tryGetFromRegistry(CompoundTag const& nbt);

    [[nodiscard]] inline std::string const& getTypeName() const { return getName().getString(); }

    [[nodiscard]] inline short getBlockItemId() const { return getLegacyBlock().getBlockItemId(); }

    [[nodiscard]] inline short getData() const { return ll::memory::dAccess<ushort>(this, 8); }

    char filler[0xD0 - 8];

public:
    // prevent constructor by default
    Block& operator=(Block const&);
    Block(Block const&);
    Block();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1Block@@UEAA@XZ
    virtual ~Block() = default;

    // vIndex: 1, symbol: ?getRenderLayer@Block@@UEBA?AW4BlockRenderLayer@@XZ
    virtual ::BlockRenderLayer getRenderLayer() const;

    // symbol: ??0Block@@QEAA@GV?$not_null@PEAVBlockLegacy@@@gsl@@VCompoundTag@@AEBI@Z
    MCAPI Block(ushort data, gsl::not_null<class BlockLegacy*> oldBlock, class CompoundTag serId, uint const&);

    // symbol:
    // ?addAABBs@Block@@QEBAXAEBVBlockSource@@AEBVBlockPos@@PEBVAABB@@AEAV?$vector@VAABB@@V?$allocator@VAABB@@@std@@@std@@@Z
    MCAPI void addAABBs(
        class BlockSource const& region,
        class BlockPos const&    pos,
        class AABB const*        intersectTestBox,
        std::vector<class AABB>& inoutBoxes
    ) const;

    // symbol:
    // ?addCollisionShapes@Block@@QEBA_NAEBVIConstBlockSource@@AEBVBlockPos@@PEBVAABB@@AEAV?$vector@VAABB@@V?$allocator@VAABB@@@std@@@std@@V?$optional_ref@$$CBVGetCollisionShapeInterface@@@@@Z
    MCAPI bool addCollisionShapes(
        class IConstBlockSource const&                             region,
        class BlockPos const&                                      pos,
        class AABB const*                                          intersectTestBox,
        std::vector<class AABB>&                                   inoutBoxes,
        class optional_ref<class GetCollisionShapeInterface const> entity
    ) const;

    // symbol: ?addTag@Block@@QEAAAEAV1@AEBVHashedString@@@Z
    MCAPI class Block& addTag(class HashedString const& tag);

    // symbol: ?allowStateMismatchOnPlacement@Block@@QEBA_NAEBV1@@Z
    MCAPI bool allowStateMismatchOnPlacement(class Block const& other) const;

    // symbol: ?asItemInstance@Block@@QEBA?AVItemInstance@@AEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI class ItemInstance asItemInstance(class BlockSource& region, class BlockPos const& pos) const;

    // symbol: ?asItemInstance@Block@@QEBA?AVItemInstance@@AEAVBlockSource@@AEBVBlockPos@@_N@Z
    MCAPI class ItemInstance
    asItemInstance(class BlockSource& region, class BlockPos const& position, bool withData) const;

    // symbol: ?attack@Block@@QEBA_NPEAVPlayer@@AEBVBlockPos@@@Z
    MCAPI bool attack(class Player* player, class BlockPos const& pos) const;

    // symbol: ?breaksFallingBlocks@Block@@QEBA_NVBaseGameVersion@@@Z
    MCAPI bool breaksFallingBlocks(class BaseGameVersion version) const;

    // symbol: ?buildDescriptionId@Block@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string buildDescriptionId() const;

    // symbol: ?buildDescriptionName@Block@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string buildDescriptionName() const;

    // symbol: ?buildSerializationIdString@Block@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string buildSerializationIdString() const;

    // symbol: ?cacheComponentData@Block@@QEAAXXZ
    MCAPI void cacheComponentData();

    // symbol: ?canBeBrokenFromFalling@Block@@QEBA_NXZ
    MCAPI bool canBeBrokenFromFalling() const;

    // symbol: ?canBeBuiltOver@Block@@QEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI bool canBeBuiltOver(class BlockSource& region, class BlockPos const& pos) const;

    // symbol: ?canBeBuiltOver@Block@@QEBA_NAEAVBlockSource@@AEBVBlockPos@@AEBVBlockItem@@@Z
    MCAPI bool
    canBeBuiltOver(class BlockSource& region, class BlockPos const& pos, class BlockItem const& newItem) const;

    // symbol: ?canBeFertilized@Block@@QEBA_NAEAVBlockSource@@AEBVBlockPos@@AEBV1@@Z
    MCAPI bool
    canBeFertilized(class BlockSource& region, class BlockPos const& pos, class Block const& aboveBlock) const;

    // symbol: ?canBeOriginalSurface@Block@@QEBA_NXZ
    MCAPI bool canBeOriginalSurface() const;

    // symbol: ?canConnect@Block@@QEBA_NAEBV1@E0@Z
    MCAPI bool canConnect(class Block const& otherBlock, uchar toOther, class Block const& thisBlock) const;

    // symbol: ?canDamperVibrations@Block@@QEBA_NXZ
    MCAPI bool canDamperVibrations() const;

    // symbol: ?canDropWithAnyTool@Block@@QEBA_NXZ
    MCAPI bool canDropWithAnyTool() const;

    // symbol: ?canHaveExtraData@Block@@QEBA_NXZ
    MCAPI bool canHaveExtraData() const;

    // symbol: ?canHurtAndBreakItem@Block@@QEBA_NXZ
    MCAPI bool canHurtAndBreakItem() const;

    // symbol: ?canInstatick@Block@@QEBA_NXZ
    MCAPI bool canInstatick() const;

    // symbol: ?canOccludeVibrations@Block@@QEBA_NXZ
    MCAPI bool canOccludeVibrations() const;

    // symbol: ?canProvideFullSupport@Block@@QEBA_NE@Z
    MCAPI bool canProvideFullSupport(uchar face) const;

    // symbol: ?canProvideMultifaceSupport@Block@@QEBA_NE@Z
    MCAPI bool canProvideMultifaceSupport(uchar face) const;

    // symbol: ?canProvideSupport@Block@@QEBA_NEW4BlockSupportType@@@Z
    MCAPI bool canProvideSupport(uchar face, ::BlockSupportType type) const;

    // symbol: ?canReactToNeighborsDuringInstatick@Block@@QEBA_NXZ
    MCAPI bool canReactToNeighborsDuringInstatick() const;

    // symbol: ?canSlide@Block@@QEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI bool canSlide(class BlockSource& region, class BlockPos const& pos) const;

    // symbol: ?canSurvive@Block@@QEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI bool canSurvive(class BlockSource& region, class BlockPos const& pos) const;

    // symbol: ?causesFreezeEffect@Block@@QEBA_NXZ
    MCAPI bool causesFreezeEffect() const;

    // symbol: ?checkIsPathable@Block@@QEBA_NAEAVActor@@AEBVBlockPos@@1@Z
    MCAPI bool
    checkIsPathable(class Actor& entity, class BlockPos const& lastPathPos, class BlockPos const& pathPos) const;

    // symbol: ?clip@Block@@QEBA?AVHitResult@@AEBVBlockPos@@AEBVVec3@@1AEBVAABB@@@Z
    MCAPI class HitResult clip(class BlockPos const&, class Vec3 const&, class Vec3 const&, class AABB const&) const;

    // symbol:
    // ?clip@Block@@QEBA?AVHitResult@@AEBVBlockSource@@AEBVBlockPos@@AEBVVec3@@2W4ShapeType@@V?$optional_ref@$$CBVGetCollisionShapeInterface@@@@@Z
    MCAPI class HitResult
    clip(class BlockSource const&, class BlockPos const&, class Vec3 const&, class Vec3 const&, ::ShapeType, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    // symbol: ?computeRawSerializationIdHashForNetwork@Block@@QEBAIXZ
    MCAPI uint computeRawSerializationIdHashForNetwork() const;

    // symbol: ?copyState@Block@@QEBAAEBV1@AEBV1@AEBVBlockState@@@Z
    MCAPI class Block const& copyState(class Block const& fromBlock, class BlockState const& state) const;

    // symbol: ?dealsContactDamage@Block@@QEBA_NAEBVActor@@_N@Z
    MCAPI bool dealsContactDamage(class Actor const& actor, bool isPathFinding) const;

    // symbol: ?destroy@Block@@QEBAXAEAVBlockSource@@AEBVBlockPos@@PEAVActor@@@Z
    MCAPI void destroy(class BlockSource& region, class BlockPos const& pos, class Actor* entitySource) const;

    // symbol:
    // ?executeEvent@Block@@QEBAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVRenderParams@@@Z
    MCAPI void executeEvent(std::string const& name, class RenderParams& params) const;

    // symbol:
    // ?executeItemEvent@Block@@QEBAXAEAVItemStackBase@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVBlockSource@@AEBVBlockPos@@PEAVActor@@@Z
    MCAPI void executeItemEvent(
        class ItemStackBase&  item,
        std::string const&    eventName,
        class BlockSource&    region,
        class BlockPos const& pos,
        class Actor*          actor
    ) const;

    // symbol: ?executeTrigger@Block@@QEBA_NAEBVDefinitionTrigger@@AEAVRenderParams@@@Z
    MCAPI bool executeTrigger(class DefinitionTrigger const& trigger, class RenderParams& params) const;

    // symbol: ?forEachState@Block@@QEBAXV?$function@$$A6A_NAEBVBlockState@@H@Z@std@@@Z
    MCAPI void forEachState(std::function<bool(class BlockState const&, int)> callback) const;

    // symbol: ?getAllowsRunes@Block@@QEBA_NXZ
    MCAPI bool getAllowsRunes() const;

    // symbol: ?getBlockEntityType@Block@@QEBA?AW4BlockActorType@@XZ
    MCAPI ::BlockActorType getBlockEntityType() const;

    // symbol: ?getBlockState@Block@@QEBAPEBVBlockState@@AEBVHashedString@@@Z
    MCAPI class BlockState const* getBlockState(class HashedString const&) const;

    // symbol: ?getBurnOdds@Block@@QEBAHXZ
    MCAPI int getBurnOdds() const;

    // symbol: ?getClientPredictionOverride@Block@@QEBA_NW4BlockClientPredictionOverrides@@@Z
    MCAPI bool getClientPredictionOverride(::BlockClientPredictionOverrides) const;

    // symbol:
    // ?getCollisionShape@Block@@QEBA_NAEAVAABB@@AEBVIConstBlockSource@@AEBVBlockPos@@V?$optional_ref@$$CBVGetCollisionShapeInterface@@@@@Z
    MCAPI bool getCollisionShape(
        class AABB&                                                outAABB,
        class IConstBlockSource const&                             region,
        class BlockPos const&                                      pos,
        class optional_ref<class GetCollisionShapeInterface const> entity
    ) const;

    // symbol: ?getCollisionShapeForCamera@Block@@QEBA_NAEAVAABB@@AEBVIConstBlockSource@@AEBVBlockPos@@@Z
    MCAPI bool getCollisionShapeForCamera(class AABB&, class IConstBlockSource const&, class BlockPos const&) const;

    // symbol: ?getColor@Block@@QEBAHXZ
    MCAPI int getColor() const;

    // symbol: ?getColor@Block@@QEBAHAEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI int getColor(class BlockSource& region, class BlockPos const& pos) const;

    // symbol: ?getComparatorSignal@Block@@QEBAHAEAVBlockSource@@AEBVBlockPos@@E@Z
    MCAPI int getComparatorSignal(class BlockSource& region, class BlockPos const& pos, uchar dir) const;

    // symbol:
    // ?getConnectedDirections@Block@@QEBA?AUHorizontalDirectionBits@BlockLegacy@@AEBVBlockPos@@AEAVBlockSource@@@Z
    MCAPI struct BlockLegacy::HorizontalDirectionBits
    getConnectedDirections(class BlockPos const& pos, class BlockSource& region) const;

    // symbol:
    // ?getDebugText@Block@@QEBAXAEAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@AEBVBlockPos@@@Z
    MCAPI void getDebugText(std::vector<std::string>& outputInfo, class BlockPos const& debugPos) const;

    // symbol: ?getDefaultState@Block@@QEBAAEBV1@XZ
    MCAPI class Block const& getDefaultState() const;

    // symbol: ?getDescriptionId@Block@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string getDescriptionId() const;

    // symbol: ?getDestroySpeed@Block@@QEBAMXZ
    MCAPI float getDestroySpeed() const;

    // symbol: ?getDirectSignal@Block@@QEBAHAEAVBlockSource@@AEBVBlockPos@@H@Z
    MCAPI int getDirectSignal(class BlockSource& region, class BlockPos const& pos, int dir) const;

    // symbol: ?getExperienceDrop@Block@@QEBAHAEAVRandom@@@Z
    MCAPI int getExperienceDrop(class Random& random) const;

    // symbol: ?getExplosionResistance@Block@@QEBAMXZ
    MCAPI float getExplosionResistance() const;

    // symbol: ?getFlameOdds@Block@@QEBAHXZ
    MCAPI int getFlameOdds() const;

    // symbol: ?getFriction@Block@@QEBAMXZ
    MCAPI float getFriction() const;

    // symbol: ?getIgnoresDestroyPermissions@Block@@QEBA_NAEAVActor@@AEBVBlockPos@@@Z
    MCAPI bool getIgnoresDestroyPermissions(class Actor& entity, class BlockPos const& pos) const;

    // symbol: ?getLegacyBlock@Block@@QEBAAEBVBlockLegacy@@XZ
    MCAPI class BlockLegacy const& getLegacyBlock() const;

    // symbol: ?getLight@Block@@QEBA?AUBrightness@@XZ
    MCAPI struct Brightness getLight() const;

    // symbol: ?getLightEmission@Block@@QEBA?AUBrightness@@XZ
    MCAPI struct Brightness getLightEmission() const;

    // symbol: ?getMapColor@Block@@QEBA?AVColor@mce@@AEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI class mce::Color getMapColor(class BlockSource& region, class BlockPos const& pos) const;

    // symbol: ?getMaterial@Block@@QEBAAEBVMaterial@@XZ
    MCAPI class Material const& getMaterial() const;

    // symbol: ?getMobToSpawn@Block@@QEBAPEBVMobSpawnerData@@AEBVSpawnConditions@@AEAVBlockSource@@@Z
    MCAPI class MobSpawnerData const*
    getMobToSpawn(class SpawnConditions const& conditions, class BlockSource& region) const;

    // symbol: ?getName@Block@@QEBAAEBVHashedString@@XZ
    MCAPI class HashedString const& getName() const;

    // symbol: ?getOutline@Block@@QEBAAEBVAABB@@AEBVIConstBlockSource@@AEBVBlockPos@@AEAV2@@Z
    MCAPI class AABB const&
    getOutline(class IConstBlockSource const& region, class BlockPos const& pos, class AABB& bufferValue) const;

    // symbol: ?getPlacementBlock@Block@@QEBAAEBV1@AEBVActor@@AEBVBlockPos@@EAEBVVec3@@H@Z
    MCAPI class Block const& getPlacementBlock(
        class Actor const&    by,
        class BlockPos const& pos,
        uchar                 face,
        class Vec3 const&     clickPos,
        int                   itemValue
    ) const;

    // symbol: ?getRuntimeId@Block@@QEBAAEBIXZ
    MCAPI uint const& getRuntimeId() const;

    // symbol: ?getSecondPart@Block@@QEBA_NAEBVBlockSource@@AEBVBlockPos@@AEAV3@@Z
    MCAPI bool getSecondPart(class BlockSource const& region, class BlockPos const& pos, class BlockPos& out) const;

    // symbol: ?getSerializationId@Block@@QEBAAEBVCompoundTag@@XZ
    MCAPI class CompoundTag const& getSerializationId() const;

    // symbol: ?getThickness@Block@@QEBAMXZ
    MCAPI float getThickness() const;

    // symbol: ?getTranslucency@Block@@QEBAMXZ
    MCAPI float getTranslucency() const;

    // symbol: ?getVariant@Block@@QEBAHXZ
    MCAPI int getVariant() const;

    // symbol: ?getVisualShape@Block@@QEBAAEBVAABB@@AEAV2@@Z
    MCAPI class AABB const& getVisualShape(class AABB&) const;

    // symbol: ?getVisualShapeInWorld@Block@@QEBAAEBVAABB@@AEBVIConstBlockSource@@AEBVBlockPos@@AEAV2@@Z
    MCAPI class AABB const&
    getVisualShapeInWorld(class IConstBlockSource const&, class BlockPos const&, class AABB&) const;

    // symbol: ?hasBlockEntity@Block@@QEBA_NXZ
    MCAPI bool hasBlockEntity() const;

    // symbol: ?hasComparatorSignal@Block@@QEBA_NXZ
    MCAPI bool hasComparatorSignal() const;

    // symbol: ?hasProperty@Block@@QEBA_NW4BlockProperty@@@Z
    MCAPI bool hasProperty(::BlockProperty type) const;

    // symbol: ?hasState@Block@@QEBA_NAEBVBlockState@@@Z
    MCAPI bool hasState(class BlockState const& stateType) const;

    // symbol: ?hasTag@Block@@QEBA_NAEBVHashedString@@@Z
    MCAPI bool hasTag(class HashedString const& tagName) const;

    // symbol: ?hasTag@Block@@QEBA_NAEB_K@Z
    MCAPI bool hasTag(uint64 const& hash) const;

    // symbol: ?ignoreEntitiesOnPistonMove@Block@@QEBA_NXZ
    MCAPI bool ignoreEntitiesOnPistonMove() const;

    // symbol: ?initParams@Block@@QEBAXAEAVRenderParams@@AEAVBlockSource@@AEBVBlockPos@@PEAVActor@@@Z
    MCAPI void
    initParams(class RenderParams& params, class BlockSource& region, class BlockPos const& pos, class Actor* actor)
        const;

    // symbol: ?isAir@Block@@QEBA_NXZ
    MCAPI bool isAir() const;

    // symbol: ?isAttachedTo@Block@@QEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAV3@@Z
    MCAPI bool isAttachedTo(class BlockSource& region, class BlockPos const& pos, class BlockPos& outAttachedTo) const;

    // symbol: ?isBounceBlock@Block@@QEBA_NXZ
    MCAPI bool isBounceBlock() const;

    // symbol: ?isButtonBlock@Block@@QEBA_NXZ
    MCAPI bool isButtonBlock() const;

    // symbol: ?isContainerBlock@Block@@QEBA_NXZ
    MCAPI bool isContainerBlock() const;

    // symbol: ?isCropBlock@Block@@QEBA_NXZ
    MCAPI bool isCropBlock() const;

    // symbol: ?isDoorBlock@Block@@QEBA_NXZ
    MCAPI bool isDoorBlock() const;

    // symbol: ?isEmpty@Block@@QEBA_NXZ
    MCAPI bool isEmpty() const;

    // symbol: ?isFallingBlock@Block@@QEBA_NXZ
    MCAPI bool isFallingBlock() const;

    // symbol: ?isFenceBlock@Block@@QEBA_NXZ
    MCAPI bool isFenceBlock() const;

    // symbol: ?isFenceGateBlock@Block@@QEBA_NXZ
    MCAPI bool isFenceGateBlock() const;

    // symbol: ?isFilteredOut@Block@@QEBA_NW4BlockRenderLayer@@@Z
    MCAPI bool isFilteredOut(::BlockRenderLayer) const;

    // symbol: ?isInteractiveBlock@Block@@QEBA_NXZ
    MCAPI bool isInteractiveBlock() const;

    // symbol: ?isLavaFlammable@Block@@QEBA_NXZ
    MCAPI bool isLavaFlammable() const;

    // symbol: ?isLeverBlock@Block@@QEBA_NXZ
    MCAPI bool isLeverBlock() const;

    // symbol: ?isMotionBlockingBlock@Block@@QEBA_NXZ
    MCAPI bool isMotionBlockingBlock() const;

    // symbol: ?isMultifaceBlock@Block@@QEBA_NXZ
    MCAPI bool isMultifaceBlock() const;

    // symbol: ?isObstructingChests@Block@@QEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI bool isObstructingChests(class BlockSource& region, class BlockPos const& pos) const;

    // symbol: ?isPartialBlock@Block@@QEBA_NAEBVBlockSource@@AEBVBlockPos@@@Z
    MCAPI bool isPartialBlock(class BlockSource const& region, class BlockPos const& pos) const;

    // symbol: ?isPreservingMediumWhenPlaced@Block@@QEBA_NAEBV1@@Z
    MCAPI bool isPreservingMediumWhenPlaced(class Block const&) const;

    // symbol: ?isRailBlock@Block@@QEBA_NXZ
    MCAPI bool isRailBlock() const;

    // symbol: ?isSignalSource@Block@@QEBA_NXZ
    MCAPI bool isSignalSource() const;

    // symbol: ?isSlabBlock@Block@@QEBA_NXZ
    MCAPI bool isSlabBlock() const;

    // symbol: ?isSolid@Block@@QEBA_NXZ
    MCAPI bool isSolid() const;

    // symbol: ?isSolidBlockingBlock@Block@@QEBA_NXZ
    MCAPI bool isSolidBlockingBlock() const;

    // symbol: ?isSolidBlockingBlockAndNotSignalSource@Block@@QEBA_NXZ
    MCAPI bool isSolidBlockingBlockAndNotSignalSource() const;

    // symbol: ?isStairBlock@Block@@QEBA_NXZ
    MCAPI bool isStairBlock() const;

    // symbol: ?isStemBlock@Block@@QEBA_NXZ
    MCAPI bool isStemBlock() const;

    // symbol: ?isThinFenceBlock@Block@@QEBA_NXZ
    MCAPI bool isThinFenceBlock() const;

    // symbol: ?isTopPartialBlock@Block@@QEBA_NAEBVBlockSource@@AEBVBlockPos@@@Z
    MCAPI bool isTopPartialBlock(class BlockSource const& region, class BlockPos const& pos) const;

    // symbol: ?isUnbreakable@Block@@QEBA_NXZ
    MCAPI bool isUnbreakable() const;

    // symbol: ?isWallBlock@Block@@QEBA_NXZ
    MCAPI bool isWallBlock() const;

    // symbol: ?isWaterBlocking@Block@@QEBA_NXZ
    MCAPI bool isWaterBlocking() const;

    // symbol: ?keepState@Block@@QEBAAEBV1@AEBVBlockState@@@Z
    MCAPI class Block const& keepState(class BlockState const& state) const;

    // symbol: ?keepStates@Block@@QEBAAEBV1@AEBV?$vector@PEBVBlockState@@V?$allocator@PEBVBlockState@@@std@@@std@@@Z
    MCAPI class Block const& keepStates(std::vector<class BlockState const*> const&) const;

    // symbol: ?mayConsumeFertilizer@Block@@QEBA_NAEAVBlockSource@@@Z
    MCAPI bool mayConsumeFertilizer(class BlockSource& region) const;

    // symbol: ?mayPick@Block@@QEBA_NXZ
    MCAPI bool mayPick() const;

    // symbol: ?mayPick@Block@@QEBA_NAEBVBlockSource@@_N@Z
    MCAPI bool mayPick(class BlockSource const& region, bool liquid) const;

    // symbol: ?mayPlace@Block@@QEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI bool mayPlace(class BlockSource& region, class BlockPos const& pos) const;

    // symbol: ?mayPlace@Block@@QEBA_NAEAVBlockSource@@AEBVBlockPos@@E@Z
    MCAPI bool mayPlace(class BlockSource& region, class BlockPos const& pos, uchar face) const;

    // symbol: ?mayPlaceOn@Block@@QEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI bool mayPlaceOn(class BlockSource& region, class BlockPos const& pos) const;

    // symbol: ?movedByPiston@Block@@QEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI void movedByPiston(class BlockSource& region, class BlockPos const& pos) const;

    // symbol: ?neighborChanged@Block@@QEBAXAEAVBlockSource@@AEBVBlockPos@@1@Z
    MCAPI void
    neighborChanged(class BlockSource& region, class BlockPos const& pos, class BlockPos const& neighborPos) const;

    // symbol: ?onExploded@Block@@QEBAXAEAVBlockSource@@AEBVBlockPos@@PEAVActor@@@Z
    MCAPI void onExploded(class BlockSource& region, class BlockPos const& pos, class Actor* entitySource) const;

    // symbol: ?onFallOn@Block@@QEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVActor@@M@Z
    MCAPI void
    onFallOn(class BlockSource& region, class BlockPos const& pos, class Actor& entity, float fallDistance) const;

    // symbol: ?onFertilized@Block@@QEBA_NAEAVBlockSource@@AEBVBlockPos@@PEAVActor@@W4FertilizerType@@@Z
    MCAPI bool
    onFertilized(class BlockSource& region, class BlockPos const& pos, class Actor* entity, ::FertilizerType fType)
        const;

    // symbol: ?onHitByActivatingAttack@Block@@QEBAXAEAVBlockSource@@AEBVBlockPos@@PEAVActor@@@Z
    MCAPI void onHitByActivatingAttack(class BlockSource&, class BlockPos const&, class Actor*) const;

    // symbol: ?onLightningHit@Block@@QEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI void onLightningHit(class BlockSource& region, class BlockPos const& pos) const;

    // symbol: ?onPlace@Block@@QEBAXAEAVBlockSource@@AEBVBlockPos@@AEBV1@@Z
    MCAPI void onPlace(class BlockSource& region, class BlockPos const& pos, class Block const& previousBlock) const;

    // symbol: ?onPlayerPlacing@Block@@QEBAPEBV1@AEAVBlockSource@@AEBVBlockPos@@AEAVActor@@E@Z
    MCAPI class Block const*
    onPlayerPlacing(class BlockSource& region, class BlockPos const& pos, class Actor& actor, uchar face) const;

    // symbol: ?onProjectileHit@Block@@QEBAXAEAVBlockSource@@AEBVBlockPos@@AEBVActor@@@Z
    MCAPI void
    onProjectileHit(class BlockSource& region, class BlockPos const& pos, class Actor const& projectile) const;

    // symbol: ?onRemove@Block@@QEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI void onRemove(class BlockSource& region, class BlockPos const& pos) const;

    // symbol: ?onStandOn@Block@@QEBAXAEAVEntityContext@@AEBVBlockPos@@@Z
    MCAPI void onStandOn(class EntityContext& entity, class BlockPos const& pos) const;

    // symbol: ?onStepOff@Block@@QEBAXAEAVActor@@AEBVBlockPos@@@Z
    MCAPI void onStepOff(class Actor& entity, class BlockPos const& pos) const;

    // symbol: ?onStepOn@Block@@QEBAXAEAVActor@@AEBVBlockPos@@@Z
    MCAPI void onStepOn(class Actor& entity, class BlockPos const& pos) const;

    // symbol: ?onStructureBlockPlace@Block@@QEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI void onStructureBlockPlace(class BlockSource& region, class BlockPos const& pos) const;

    // symbol: ?onStructureNeighborBlockPlace@Block@@QEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI void onStructureNeighborBlockPlace(class BlockSource& region, class BlockPos const& pos) const;

    // symbol: ?playerDestroy@Block@@QEBAXAEAVPlayer@@AEBVBlockPos@@@Z
    MCAPI void playerDestroy(class Player& player, class BlockPos const& pos) const;

    // symbol: ?playerWillDestroy@Block@@QEBAPEBV1@AEAVPlayer@@AEBVBlockPos@@@Z
    MCAPI class Block const* playerWillDestroy(class Player& player, class BlockPos const& pos) const;

    // symbol: ?popResource@Block@@QEBAPEAVItemActor@@AEAVBlockSource@@AEBVBlockPos@@AEBVItemInstance@@@Z
    MCAPI class ItemActor*
    popResource(class BlockSource& region, class BlockPos const& pos, class ItemInstance const& itemInstance) const;

    // symbol: ?pushesOutItems@Block@@QEBA_NXZ
    MCAPI bool pushesOutItems() const;

    // symbol: ?pushesUpFallingBlocks@Block@@QEBA_NXZ
    MCAPI bool pushesUpFallingBlocks() const;

    // symbol: ?queuedTick@Block@@QEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    MCAPI void queuedTick(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // symbol: ?randomTick@Block@@QEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    MCAPI void randomTick(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // symbol: ?randomlyModifyPosition@Block@@QEBA?AVVec3@@AEBVBlockPos@@@Z
    MCAPI class Vec3 randomlyModifyPosition(class BlockPos const& pos) const;

    // symbol: ?shouldRandomTick@Block@@QEBA_NXZ
    MCAPI bool shouldRandomTick() const;

    // symbol: ?shouldRandomTickExtraLayer@Block@@QEBA_NXZ
    MCAPI bool shouldRandomTickExtraLayer() const;

    // symbol: ?shouldStopFalling@Block@@QEBA_NAEAVActor@@@Z
    MCAPI bool shouldStopFalling(class Actor& entity) const;

    // symbol: ?shouldTickOnSetBlock@Block@@QEBA_NXZ
    MCAPI bool shouldTickOnSetBlock() const;

    // symbol: ?spawnResources@Block@@QEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandomize@@AEBUResourceDropsContext@@@Z
    MCAPI void
    spawnResources(class BlockSource&, class BlockPos const&, class Randomize&, struct ResourceDropsContext const&)
        const;

    // symbol: ?telemetryVariant@Block@@QEBAHAEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI int telemetryVariant(class BlockSource& region, class BlockPos const& pos) const;

    // symbol: ?toDebugString@Block@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string toDebugString() const;

    // symbol: ?transformOnFall@Block@@QEBAXAEAVBlockSource@@AEBVBlockPos@@PEAVActor@@M@Z
    MCAPI void
    transformOnFall(class BlockSource& region, class BlockPos const& pos, class Actor* entity, float fallDistance)
        const;

    // symbol: ?triggerEvent@Block@@QEBAXAEAVBlockSource@@AEBVBlockPos@@HH@Z
    MCAPI void triggerEvent(class BlockSource& region, class BlockPos const& pos, int b0, int b1) const;

    // symbol: ?tryGetCopperBehavior@Block@@QEBAPEBVCopperBehavior@@XZ
    MCAPI class CopperBehavior const* tryGetCopperBehavior() const;

    // symbol: ?tryGetInfested@Block@@QEBAPEBV1@XZ
    MCAPI class Block const* tryGetInfested() const;

    // symbol: ?tryGetUninfested@Block@@QEBAPEBV1@XZ
    MCAPI class Block const* tryGetUninfested() const;

    // symbol: ?trySpawnResourcesOnExplosion@Block@@QEBAXAEAVBlockSource@@AEBVBlockPos@@AEBV1@M@Z
    MCAPI void trySpawnResourcesOnExplosion(
        class BlockSource&    region,
        class BlockPos const& pos,
        class Block const&    block,
        float                 explosionRadius
    ) const;

    // symbol: ?tryToPlace@Block@@QEBA_NAEAVBlockSource@@AEBVBlockPos@@PEBUActorBlockSyncMessage@@@Z
    MCAPI bool
    tryToPlace(class BlockSource& region, class BlockPos const& pos, struct ActorBlockSyncMessage const* syncMsg) const;

    // symbol: ?tryToTill@Block@@QEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVActor@@AEAVItemStack@@@Z
    MCAPI bool
    tryToTill(class BlockSource& region, class BlockPos const& pos, class Actor& entity, class ItemStack& item) const;

    // symbol: ?updateEntityAfterFallOn@Block@@QEBAXAEBVBlockPos@@AEAUUpdateEntityAfterFallOnInterface@@@Z
    MCAPI void
    updateEntityAfterFallOn(class BlockPos const& pos, struct UpdateEntityAfterFallOnInterface& entity) const;

    // symbol:
    // ?updateTallestCollisionShape@Block@@QEBA_NAEBVBlockSource@@AEBVBlockPos@@AEBVAABB@@V?$optional_ref@$$CBVGetCollisionShapeInterface@@@@AEAV4@AEBVVec3@@AEAM@Z
    MCAPI bool
    updateTallestCollisionShape(class BlockSource const& region, class BlockPos const& pos, class AABB const& intersectTestBox, class optional_ref<class GetCollisionShapeInterface const> entity, class AABB& result, class Vec3 const&, float&)
        const;

    // symbol: ?use@Block@@QEBA_NAEAVPlayer@@AEBVBlockPos@@EV?$optional@VVec3@@@std@@@Z
    MCAPI bool use(class Player& player, class BlockPos const& pos, uchar face, std::optional<class Vec3> hit) const;

    // symbol: ?waterSpreadCausesSpawn@Block@@QEBA_NXZ
    MCAPI bool waterSpreadCausesSpawn() const;

    // symbol: ?BLOCK_DESCRIPTION_PREFIX@Block@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const BLOCK_DESCRIPTION_PREFIX;

    // symbol: ?SIZE_OFFSET@Block@@2MB
    MCAPI static float const SIZE_OFFSET;

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?buildSerializationId@Block@@IEAAXI@Z
    MCAPI void buildSerializationId(uint latestUpdaterVersion);

    // symbol: ?setRuntimeId@Block@@IEBAXAEBI@Z
    MCAPI void setRuntimeId(uint const& runtimeId) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_queueForTickBasedOnComponentConfiguration@Block@@AEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@_N@Z
    MCAPI void
    _queueForTickBasedOnComponentConfiguration(class BlockSource&, class BlockPos const&, class Random&, bool) const;

    // symbol: ?_removeFromTickingQueues@Block@@AEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI void _removeFromTickingQueues(class BlockSource&, class BlockPos const&) const;

    // symbol: ?entityInside@Block@@AEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVActor@@@Z
    MCAPI void entityInside(class BlockSource& region, class BlockPos const& pos, class Actor& entity) const;

    // NOLINTEND
};
