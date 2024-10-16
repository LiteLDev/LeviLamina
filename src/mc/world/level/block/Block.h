#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/world/item/FertilizerType.h"
#include "mc/world/level/ShapeType.h"
#include "mc/world/level/block/BlockClientPredictionOverrides.h"
#include "mc/world/level/block/BlockLegacy.h"
#include "mc/world/level/block/BlockProperty.h"
#include "mc/world/level/block/BlockRenderLayer.h"
#include "mc/world/level/block/BlockSupportType.h"
#include "mc/world/level/block/actor/BlockActorType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class Block {
public:
    // prevent constructor by default
    Block& operator=(Block const&);
    Block(Block const&);
    Block();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~Block() = default;

    // vIndex: 1
    virtual ::BlockRenderLayer getRenderLayer() const;

    MCAPI Block(ushort data, gsl::not_null<class BlockLegacy*> oldBlock);

    MCAPI Block(ushort data, gsl::not_null<class BlockLegacy*> oldBlock, class CompoundTag serId, uint const& runId);

    MCAPI void addAABBs(
        class BlockSource const& region,
        class BlockPos const&    pos,
        class AABB const*        intersectTestBox,
        std::vector<class AABB>& inoutBoxes
    ) const;

    MCAPI bool addCollisionShapes(
        class IConstBlockSource const&                             region,
        class BlockPos const&                                      pos,
        class AABB const*                                          intersectTestBox,
        std::vector<class AABB>&                                   inoutBoxes,
        class optional_ref<class GetCollisionShapeInterface const> entity
    ) const;

    MCAPI class Block& addTag(class HashedString const& tag);

    MCAPI bool allowStateMismatchOnPlacement(class Block const& other) const;

    MCAPI class ItemInstance asItemInstance(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI class ItemInstance
    asItemInstance(class BlockSource& region, class BlockPos const& position, bool withData) const;

    MCAPI bool attack(class Player* player, class BlockPos const& pos) const;

    MCAPI bool breaksFallingBlocks(class BaseGameVersion version) const;

    MCAPI std::string buildDescriptionId() const;

    MCAPI std::string buildDescriptionName() const;

    MCAPI std::string buildSerializationIdString() const;

    MCAPI void cacheComponentData();

    MCAPI bool canBeBrokenFromFalling() const;

    MCAPI bool canBeBuiltOver(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI bool
    canBeBuiltOver(class BlockSource& region, class BlockPos const& pos, class BlockItem const& newItem) const;

    MCAPI bool
    canBeFertilized(class BlockSource& region, class BlockPos const& pos, class Block const& aboveBlock) const;

    MCAPI bool canBeOriginalSurface() const;

    MCAPI bool canConnect(class Block const& otherBlock, uchar toOther, class Block const& thisBlock) const;

    MCAPI bool canDamperVibrations() const;

    MCAPI bool canDropWithAnyTool() const;

    MCAPI bool canHaveExtraData() const;

    MCAPI bool canHurtAndBreakItem() const;

    MCAPI bool canInstatick() const;

    MCAPI bool canOccludeVibrations() const;

    MCAPI bool canProvideFullSupport(uchar face) const;

    MCAPI bool canProvideMultifaceSupport(uchar face) const;

    MCAPI bool canProvideSupport(uchar face, ::BlockSupportType type) const;

    MCAPI bool canReactToNeighborsDuringInstatick() const;

    MCAPI bool canSlide(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI bool canSurvive(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI bool causesFreezeEffect() const;

    MCAPI bool
    checkIsPathable(class Actor& entity, class BlockPos const& lastPathPos, class BlockPos const& pathPos) const;

    MCAPI class HitResult
    clip(class BlockPos const& pos, class Vec3 const& A, class Vec3 const& B, class AABB const& aabb) const;

    MCAPI class HitResult clip(
        class BlockSource const&                                   region,
        class BlockPos const&                                      pos,
        class Vec3 const&                                          A,
        class Vec3 const&                                          B,
        ::ShapeType                                                shapeType,
        class optional_ref<class GetCollisionShapeInterface const> entity
    ) const;

    MCAPI uint computeRawSerializationIdHashForNetwork() const;

    MCAPI class Block const& copyState(class Block const& fromBlock, class BlockState const& state) const;

    MCAPI bool dealsContactDamage(class Actor const& actor, bool isPathFinding) const;

    MCAPI void destroy(class BlockSource& region, class BlockPos const& pos, class Actor* entitySource) const;

    MCAPI void executeEvent(std::string const& name, class RenderParams& params) const;

    MCAPI void executeItemEvent(
        class ItemStackBase&  item,
        std::string const&    eventName,
        class BlockSource&    region,
        class BlockPos const& pos,
        class Actor*          actor
    ) const;

    MCAPI bool executeTrigger(class DefinitionTrigger const& trigger, class RenderParams& params) const;

    MCAPI void finalizeBlockComponentStorage();

    MCAPI void finalizeBlockCustomComponentEvents(class ScriptBlockCustomComponentsFinalizer& finalizer);

    MCAPI void forEachState(std::function<bool(class BlockState const&, int)> callback) const;

    MCAPI bool getAllowsRunes() const;

    MCAPI ::BlockActorType getBlockEntityType() const;

    MCAPI int getBurnOdds() const;

    MCAPI bool getClientPredictionOverride(::BlockClientPredictionOverrides type) const;

    MCAPI bool getCollisionShape(
        class AABB&                                                outAABB,
        class IConstBlockSource const&                             region,
        class BlockPos const&                                      pos,
        class optional_ref<class GetCollisionShapeInterface const> entity
    ) const;

    MCAPI bool
    getCollisionShapeForCamera(class AABB& outAABB, class IConstBlockSource const& region, class BlockPos const& pos)
        const;

    MCAPI int getColor() const;

    MCAPI int getColor(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI int getComparatorSignal(class BlockSource& region, class BlockPos const& pos, uchar dir) const;

    MCAPI struct BlockLegacy::HorizontalDirectionBits
    getConnectedDirections(class BlockPos const& pos, class BlockSource& region) const;

    MCAPI void getDebugText(std::vector<std::string>& outputInfo, class BlockPos const& debugPos) const;

    MCAPI class Block const& getDefaultState() const;

    MCAPI std::string getDescriptionId() const;

    MCAPI float getDestroySpeed() const;

    MCAPI int getDirectSignal(class BlockSource& region, class BlockPos const& pos, int dir) const;

    MCAPI int getExperienceDrop(class Random& random) const;

    MCAPI float getExplosionResistance() const;

    MCAPI int getFlameOdds() const;

    MCAPI float getFriction() const;

    MCAPI bool getIgnoresDestroyPermissions(class Actor& entity, class BlockPos const& pos) const;

    MCAPI class BlockLegacy const& getLegacyBlock() const;

    MCAPI struct Brightness getLight() const;

    MCAPI struct Brightness getLightEmission() const;

    MCAPI class mce::Color getMapColor(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI class Material const& getMaterial() const;

    MCAPI class MobSpawnerData const*
    getMobToSpawn(class SpawnConditions const& conditions, class BlockSource& region) const;

    MCAPI class HashedString const& getName() const;

    MCAPI class AABB const&
    getOutline(class IConstBlockSource const& region, class BlockPos const& pos, class AABB& bufferValue) const;

    MCAPI class Block const& getPlacementBlock(
        class Actor const&    by,
        class BlockPos const& pos,
        uchar                 face,
        class Vec3 const&     clickPos,
        int                   itemValue
    ) const;

    MCAPI uint const& getRuntimeId() const;

    MCAPI bool getSecondPart(class BlockSource const& region, class BlockPos const& pos, class BlockPos& out) const;

    MCAPI class CompoundTag const& getSerializationId() const;

    MCAPI float getThickness() const;

    MCAPI float getTranslucency() const;

    MCAPI int getVariant() const;

    MCAPI class AABB const& getVisualShape(class AABB& bufferAABB) const;

    MCAPI class AABB const&
    getVisualShapeInWorld(class IConstBlockSource const& region, class BlockPos const& pos, class AABB& bufferAABB)
        const;

    MCAPI bool hasBlockEntity() const;

    MCAPI bool hasComparatorSignal() const;

    MCAPI bool hasProperty(::BlockProperty type) const;

    MCAPI bool hasState(class BlockState const& stateType) const;

    MCAPI bool hasTag(class HashedString const& tagName) const;

    MCAPI bool hasTag(uint64 const& hash) const;

    MCAPI bool ignoreEntitiesOnPistonMove() const;

    MCAPI bool isAir() const;

    MCAPI bool isAttachedTo(class BlockSource& region, class BlockPos const& pos, class BlockPos& outAttachedTo) const;

    MCAPI bool isBounceBlock() const;

    MCAPI bool isButtonBlock() const;

    MCAPI bool isContainerBlock() const;

    MCAPI bool isCropBlock() const;

    MCAPI bool isDoorBlock() const;

    MCAPI bool isEmpty() const;

    MCAPI bool isFallingBlock() const;

    MCAPI bool isFenceBlock() const;

    MCAPI bool isFenceGateBlock() const;

    MCAPI bool isFilteredOut(::BlockRenderLayer heldItemRenderLayer) const;

    MCAPI bool isInteractiveBlock() const;

    MCAPI bool isLavaFlammable() const;

    MCAPI bool isLeverBlock() const;

    MCAPI bool isMotionBlockingBlock() const;

    MCAPI bool isMultifaceBlock() const;

    MCAPI bool isObstructingChests(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI bool isPartialBlock(class BlockSource const& region, class BlockPos const& pos) const;

    MCAPI bool isPreservingMediumWhenPlaced(class Block const& medium) const;

    MCAPI bool isRailBlock() const;

    MCAPI bool isSignalSource() const;

    MCAPI bool isSlabBlock() const;

    MCAPI bool isSolid() const;

    MCAPI bool isSolidBlockingBlock() const;

    MCAPI bool isSolidBlockingBlockAndNotSignalSource() const;

    MCAPI bool isStairBlock() const;

    MCAPI bool isStemBlock() const;

    MCAPI bool isThinFenceBlock() const;

    MCAPI bool isTopPartialBlock(class BlockSource const& region, class BlockPos const& pos) const;

    MCAPI bool isUnbreakable() const;

    MCAPI bool isWallBlock() const;

    MCAPI bool isWaterBlocking() const;

    MCAPI class Block const& keepState(class BlockState const& state) const;

    MCAPI class Block const& keepStates(std::vector<class BlockState const*> const& statesToKeep) const;

    MCAPI bool mayConsumeFertilizer(class BlockSource& region) const;

    MCAPI bool mayPick() const;

    MCAPI bool mayPick(class BlockSource const& region, bool liquid) const;

    MCAPI bool mayPlace(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI bool mayPlace(class BlockSource& region, class BlockPos const& pos, uchar face) const;

    MCAPI bool mayPlaceOn(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI void movedByPiston(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI void
    neighborChanged(class BlockSource& region, class BlockPos const& pos, class BlockPos const& neighborPos) const;

    MCAPI void onExploded(class BlockSource& region, class BlockPos const& pos, class Actor* entitySource) const;

    MCAPI void
    onFallOn(class BlockSource& region, class BlockPos const& pos, class Actor& entity, float fallDistance) const;

    MCAPI bool
    onFertilized(class BlockSource& region, class BlockPos const& pos, class Actor* entity, ::FertilizerType fType)
        const;

    MCAPI void
    onHitByActivatingAttack(class BlockSource& region, class BlockPos const& pos, class Actor* sourceActor) const;

    MCAPI void onLightningHit(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI void onPlace(class BlockSource& region, class BlockPos const& pos, class Block const& previousBlock) const;

    MCAPI class Block const*
    onPlayerPlacing(class BlockSource& region, class BlockPos const& pos, class Actor& actor, uchar face) const;

    MCAPI void
    onProjectileHit(class BlockSource& region, class BlockPos const& pos, class Actor const& projectile) const;

    MCAPI void onRemove(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI void onStandOn(class EntityContext& entity, class BlockPos const& pos) const;

    MCAPI void onStepOff(class Actor& entity, class BlockPos const& pos) const;

    MCAPI void onStepOn(class Actor& entity, class BlockPos const& pos) const;

    MCAPI void onStructureBlockPlace(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI void onStructureNeighborBlockPlace(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI void playerDestroy(class Player& player, class BlockPos const& pos) const;

    MCAPI class Block const* playerWillDestroy(class Player& player, class BlockPos const& pos) const;

    MCAPI class ItemActor*
    popResource(class BlockSource& region, class BlockPos const& pos, class ItemInstance const& itemInstance) const;

    MCAPI bool pushesOutItems() const;

    MCAPI bool pushesUpFallingBlocks() const;

    MCAPI void queuedTick(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    MCAPI void randomTick(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    MCAPI class Vec3 randomlyModifyPosition(class BlockPos const& pos) const;

    MCAPI bool shouldRandomTick() const;

    MCAPI bool shouldRandomTickExtraLayer() const;

    MCAPI bool shouldStopFalling(class Actor& entity) const;

    MCAPI bool shouldTickOnSetBlock() const;

    MCAPI void spawnResources(
        class BlockSource&                 region,
        class BlockPos const&              pos,
        class Randomize&                   randomize,
        struct ResourceDropsContext const& resourceDropsContext
    ) const;

    MCAPI int telemetryVariant(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI std::string toDebugString() const;

    MCAPI void
    transformOnFall(class BlockSource& region, class BlockPos const& pos, class Actor* entity, float fallDistance)
        const;

    MCAPI void triggerEvent(class BlockSource& region, class BlockPos const& pos, int b0, int b1) const;

    MCAPI class CopperBehavior const* tryGetCopperBehavior() const;

    MCAPI class Block const* tryGetInfested() const;

    MCAPI class Block const* tryGetUninfested() const;

    MCAPI bool
    tryToPlace(class BlockSource& region, class BlockPos const& pos, struct ActorBlockSyncMessage const* syncMsg) const;

    MCAPI bool
    tryToTill(class BlockSource& region, class BlockPos const& pos, class Actor& entity, class ItemStack& item) const;

    MCAPI void
    updateEntityAfterFallOn(class BlockPos const& pos, struct UpdateEntityAfterFallOnInterface& entity) const;

    MCAPI bool updateTallestCollisionShape(
        class BlockSource const&                                   region,
        class BlockPos const&                                      pos,
        class AABB const&                                          intersectTestBox,
        class optional_ref<class GetCollisionShapeInterface const> entity,
        class AABB&                                                result,
        class Vec3 const&                                          posToMinimizeDistanceToIfMatchingHeight,
        float&                                                     currentDistanceSqr
    ) const;

    MCAPI bool use(class Player& player, class BlockPos const& pos, uchar face, std::optional<class Vec3> hit) const;

    MCAPI bool waterSpreadCausesSpawn() const;

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI void buildSerializationId(uint latestUpdaterVersion);

    MCAPI void setRuntimeId(uint const& runtimeId) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _queueForTickBasedOnComponentConfiguration(
        class BlockSource&    region,
        class BlockPos const& pos,
        class Random&         random,
        bool                  placingBlock
    ) const;

    MCAPI void _removeFromTickingQueues(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI void entityInside(class BlockSource& region, class BlockPos const& pos, class Actor& entity) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(ushort data, gsl::not_null<class BlockLegacy*> oldBlock);

    MCAPI void*
    ctor$(ushort data, gsl::not_null<class BlockLegacy*> oldBlock, class CompoundTag serId, uint const& runId);

    MCAPI ::BlockRenderLayer getRenderLayer$() const;

    MCAPI static std::string const& BLOCK_DESCRIPTION_PREFIX();

    MCAPI static float const& SIZE_OFFSET();

    // NOLINTEND
};
