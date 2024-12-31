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
#include "mc/world/level/block/BlockTintType.h"
#include "mc/world/level/block/actor/BlockActorType.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Actor;
class BaseGameVersion;
class BlockComponentStorage;
class BlockItem;
class BlockLegacy;
class BlockPos;
class BlockSource;
class BlockState;
class CompoundTag;
class CopperBehavior;
class DefinitionTrigger;
class EntityContext;
class GetCollisionShapeInterface;
class HashedString;
class HitResult;
class IConstBlockSource;
class ItemActor;
class ItemInstance;
class ItemStack;
class ItemStackBase;
class Material;
class MobSpawnerData;
class Player;
class Random;
class Randomize;
class RenderParams;
class SpawnConditions;
class Vec3;
struct ActorBlockSyncMessage;
struct BlockComponentDescription;
struct BlockComponentDirectData;
struct Brightness;
struct CachedComponentData;
struct ResourceDropsContext;
struct UpdateEntityAfterFallOnInterface;
namespace BlockEvents { class BlockEventManager; }
namespace mce { class Color; }
// clang-format on

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

    [[nodiscard]] inline std::string const& getTypeName() const { return getLegacyBlock().getTypeName(); }

    [[nodiscard]] inline short getBlockItemId() const { return getLegacyBlock().getBlockItemId(); }

    [[nodiscard]] inline ushort getData() const { return mData; }

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 104, ::BlockComponentStorage>       mComponents;
    ::ll::TypedStorage<2, 2, ushort const>                    mData;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::BlockLegacy*>> mLegacyBlock;
    ::ll::TypedStorage<4, 8, ::CachedComponentData>           mCachedComponentData;
    ::ll::TypedStorage<8, 104, ::BlockComponentDirectData>    mDirectData;
    ::ll::TypedStorage<8, 24, ::std::vector<::HashedString>>  mTags;
    ::ll::TypedStorage<8, 24, ::CompoundTag>                  mSerializationId;
    ::ll::TypedStorage<8, 8, uint64>                          mSerializationIdHash;
    ::ll::TypedStorage<4, 4, uint>                            mSerializationIdHashForNetwork;
    ::ll::TypedStorage<4, 4, uint>                            mNetworkId;
    ::ll::TypedStorage<1, 1, bool>                            mHasRuntimeId;
    // NOLINTEND

public:
    // prevent constructor by default
    Block& operator=(Block const&);
    Block(Block const&);
    Block();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~Block() = default;

    // vIndex: 1
    virtual ::BlockRenderLayer getRenderLayer() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Block(ushort data, ::gsl::not_null<::BlockLegacy*> oldBlock, ::CompoundTag serId, uint const& runId);

    MCAPI void _queueForTickBasedOnComponentConfiguration(
        ::BlockSource&    region,
        ::BlockPos const& pos,
        ::Random&         random,
        bool              placingBlock
    ) const;

    MCAPI void _removeFromTickingQueues(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI void addAABBs(
        ::BlockSource const&   region,
        ::BlockPos const&      pos,
        ::AABB const*          intersectTestBox,
        ::std::vector<::AABB>& inoutBoxes
    ) const;

    MCAPI bool addCollisionShapes(
        ::IConstBlockSource const&                         region,
        ::BlockPos const&                                  pos,
        ::AABB const*                                      intersectTestBox,
        ::std::vector<::AABB>&                             inoutBoxes,
        ::optional_ref<::GetCollisionShapeInterface const> entity
    ) const;

    MCAPI ::Block& addComponent(::BlockComponentDescription const& blockComponentDescription);

    MCAPI ::Block& addTag(::HashedString const& tag);

    MCAPI bool allowStateMismatchOnPlacement(::Block const& other) const;

    MCAPI ::ItemInstance asItemInstance(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI ::ItemInstance asItemInstance(::BlockSource& region, ::BlockPos const& position, bool withData) const;

    MCAPI bool attack(::Player* player, ::BlockPos const& pos) const;

    MCAPI bool breaksFallingBlocks(::BaseGameVersion version) const;

    MCAPI ::std::string buildDescriptionId() const;

    MCAPI ::std::string buildDescriptionName() const;

    MCAPI void buildSerializationId(uint latestUpdaterVersion);

    MCAPI ::std::string buildSerializationIdString() const;

    MCAPI void cacheComponentData();

    MCAPI bool canBeBrokenFromFalling() const;

    MCAPI bool canBeBuiltOver(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI bool canBeBuiltOver(::BlockSource& region, ::BlockPos const& pos, ::BlockItem const& newItem) const;

    MCAPI bool canBeFertilized(::BlockSource& region, ::BlockPos const& pos, ::Block const& aboveBlock) const;

    MCAPI bool canBeOriginalSurface() const;

    MCAPI bool canConnect(::Block const& otherBlock, uchar toOther, ::Block const& thisBlock) const;

    MCAPI bool canHaveExtraData() const;

    MCAPI bool canHurtAndBreakItem() const;

    MCAPI bool canInstatick() const;

    MCAPI bool canProvideFullSupport(uchar face) const;

    MCAPI bool canProvideMultifaceSupport(uchar face) const;

    MCAPI bool canProvideSupport(uchar face, ::BlockSupportType type) const;

    MCAPI bool canReactToNeighborsDuringInstatick() const;

    MCAPI bool canSlide(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI bool canSurvive(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI bool causesFreezeEffect() const;

    MCAPI bool checkIsPathable(::Actor& entity, ::BlockPos const& lastPathPos, ::BlockPos const& pathPos) const;

    MCAPI ::HitResult clip(::BlockPos const& pos, ::Vec3 const& A, ::Vec3 const& B, ::AABB const& aabb) const;

    MCAPI ::HitResult clip(
        ::BlockSource const&                               region,
        ::BlockPos const&                                  pos,
        ::Vec3 const&                                      A,
        ::Vec3 const&                                      B,
        ::ShapeType                                        shapeType,
        ::optional_ref<::GetCollisionShapeInterface const> entity
    ) const;

    MCAPI uint computeRawSerializationIdHashForNetwork() const;

    MCAPI ::Block const& copyState(::Block const& fromBlock, ::BlockState const& state) const;

    MCAPI bool dealsContactDamage(::Actor const& actor, bool isPathFinding) const;

    MCAPI void destroy(::BlockSource& region, ::BlockPos const& pos, ::Actor* entitySource) const;

    MCAPI void entityInside(::BlockSource& region, ::BlockPos const& pos, ::Actor& entity) const;

    MCAPI void executeEvent(::std::string const& name, ::RenderParams& params) const;

    MCAPI void executeEvent(
        ::BlockSource&       region,
        ::BlockPos const&    pos,
        ::Block const&       block,
        ::std::string const& eventName,
        ::Actor&             sourceEntity
    ) const;

    MCAPI void executeItemEvent(
        ::ItemStackBase&     item,
        ::std::string const& eventName,
        ::BlockSource&       region,
        ::BlockPos const&    pos,
        ::Actor*             actor
    ) const;

    MCAPI bool executeTrigger(::DefinitionTrigger const& trigger, ::RenderParams& params) const;

    MCAPI void forEachState(::std::function<bool(::BlockState const&, int)> callback) const;

    MCAPI bool getAllowsRunes() const;

    MCAPI ::BlockActorType getBlockEntityType() const;

    MCAPI ::BlockState const* getBlockState(::HashedString const& name) const;

    MCAPI ::BlockTintType getBlockTintType() const;

    MCAPI int getBurnOdds() const;

    MCAPI bool getClientPredictionOverride(::BlockClientPredictionOverrides type) const;

    MCAPI bool getCollisionShape(
        ::AABB&                                            outAABB,
        ::IConstBlockSource const&                         region,
        ::BlockPos const&                                  pos,
        ::optional_ref<::GetCollisionShapeInterface const> entity
    ) const;

    MCAPI bool
    getCollisionShapeForCamera(::AABB& outAABB, ::IConstBlockSource const& region, ::BlockPos const& pos) const;

    MCAPI int getComparatorSignal(::BlockSource& region, ::BlockPos const& pos, uchar dir) const;

    MCAPI ::BlockLegacy::HorizontalDirectionBits
    getConnectedDirections(::BlockPos const& pos, ::BlockSource& region) const;

    MCAPI void getDebugText(::std::vector<::std::string>& outputInfo, ::BlockPos const& debugPos) const;

    MCAPI ::std::string getDescriptionId() const;

    MCAPI float getDestroySpeed() const;

    MCAPI float getDestroySpeed(::ItemStackBase const& item) const;

    MCAPI int getDirectSignal(::BlockSource& region, ::BlockPos const& pos, int dir) const;

    MCAPI ::BlockEvents::BlockEventManager const& getEventManager() const;

    MCAPI ::BlockEvents::BlockEventManager& getEventManager();

    MCAPI int getExperienceDrop(::Random& random) const;

    MCAPI float getExplosionResistance() const;

    MCAPI int getFlameOdds() const;

    MCAPI float getFriction() const;

    MCAPI bool getIgnoresDestroyPermissions(::Actor& entity, ::BlockPos const& pos) const;

    MCAPI ::BlockLegacy const& getLegacyBlock() const;

    MCAPI ::Brightness getLight() const;

    MCAPI ::Brightness getLightEmission() const;

    MCAPI ::mce::Color getMapColor(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI ::Material const& getMaterial() const;

    MCAPI ::MobSpawnerData const* getMobToSpawn(::SpawnConditions const& conditions, ::BlockSource& region) const;

    MCAPI ::AABB const& getOutline(::IConstBlockSource const& region, ::BlockPos const& pos, ::AABB& bufferValue) const;

    MCAPI ::Block const&
    getPlacementBlock(::Actor const& by, ::BlockPos const& pos, uchar face, ::Vec3 const& clickPos, int itemValue)
        const;

    MCAPI uint const& getRuntimeId() const;

    MCAPI bool getSecondPart(::BlockSource const& region, ::BlockPos const& pos, ::BlockPos& out) const;

    MCAPI ::CompoundTag const& getSerializationId() const;

    MCAPI float getThickness() const;

    MCAPI float getTranslucency() const;

    MCAPI int getVariant() const;

    MCAPI ::AABB const& getVisualShape(::AABB& bufferAABB) const;

    MCAPI ::AABB const&
    getVisualShapeInWorld(::IConstBlockSource const& region, ::BlockPos const& pos, ::AABB& bufferAABB) const;

    MCAPI bool hasBlockEntity() const;

    MCAPI bool hasComparatorSignal() const;

    MCAPI bool hasProperty(::BlockProperty type) const;

    MCAPI bool hasState(::BlockState const& stateType) const;

    MCAPI bool hasTag(uint64 const& hash) const;

    MCAPI bool hasTag(::HashedString const& tagName) const;

    MCAPI bool ignoreEntitiesOnPistonMove() const;

    MCAPI bool isAir() const;

    MCAPI bool isAttachedTo(::BlockSource& region, ::BlockPos const& pos, ::BlockPos& outAttachedTo) const;

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

    MCAPI bool isLavaBlocking() const;

    MCAPI bool isLavaFlammable() const;

    MCAPI bool isLeverBlock() const;

    MCAPI bool isMotionBlockingBlock() const;

    MCAPI bool isMultifaceBlock() const;

    MCAPI bool isObstructingChests(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI bool isPartialBlock(::BlockSource const& region, ::BlockPos const& pos) const;

    MCAPI bool isPreservingMediumWhenPlaced(::Block const& medium) const;

    MCAPI bool isRailBlock() const;

    MCAPI bool isSignalSource() const;

    MCAPI bool isSlabBlock() const;

    MCAPI bool isSolid() const;

    MCAPI bool isSolidBlockingBlock() const;

    MCAPI bool isSolidBlockingBlockAndNotSignalSource() const;

    MCAPI bool isStairBlock() const;

    MCAPI bool isStemBlock() const;

    MCAPI bool isThinFenceBlock() const;

    MCAPI bool isTopPartialBlock(::BlockSource const& region, ::BlockPos const& pos) const;

    MCAPI bool isUnbreakable() const;

    MCAPI bool isValidAuxValue(int value) const;

    MCAPI bool isWallBlock() const;

    MCAPI ::Block const& keepStates(::std::vector<::BlockState const*> const& statesToKeep) const;

    MCAPI bool mayConsumeFertilizer(::BlockSource& region) const;

    MCAPI bool mayPick() const;

    MCAPI bool mayPick(::BlockSource const& region, bool liquid) const;

    MCAPI bool mayPlace(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI bool mayPlace(::BlockSource& region, ::BlockPos const& pos, uchar face) const;

    MCAPI bool mayPlaceOn(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI void movedByPiston(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI void neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const;

    MCAPI void onExploded(::BlockSource& region, ::BlockPos const& pos, ::Actor* entitySource) const;

    MCAPI void onFallOn(::BlockSource& region, ::BlockPos const& pos, ::Actor& entity, float fallDistance) const;

    MCAPI bool
    onFertilized(::BlockSource& region, ::BlockPos const& pos, ::Actor* entity, ::FertilizerType fType) const;

    MCAPI void onHitByActivatingAttack(::BlockSource& region, ::BlockPos const& pos, ::Actor* sourceActor) const;

    MCAPI void onLightningHit(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI void onPlace(::BlockSource& region, ::BlockPos const& pos, ::Block const& previousBlock) const;

    MCAPI void onProjectileHit(::BlockSource& region, ::BlockPos const& pos, ::Actor const& projectile) const;

    MCAPI void onRemove(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI void onStandOn(::EntityContext& entity, ::BlockPos const& pos) const;

    MCAPI void onStepOff(::Actor& entity, ::BlockPos const& pos) const;

    MCAPI void onStepOn(::Actor& entity, ::BlockPos const& pos) const;

    MCAPI void onStructureBlockPlace(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI void onStructureNeighborBlockPlace(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI void playerDestroy(::Player& player, ::BlockPos const& pos) const;

    MCAPI ::Block const* playerWillDestroy(::Player& player, ::BlockPos const& pos) const;

    MCAPI ::ItemActor*
    popResource(::BlockSource& region, ::BlockPos const& pos, ::ItemInstance const& itemInstance) const;

    MCAPI bool pushesOutItems() const;

    MCAPI bool pushesUpFallingBlocks() const;

    MCAPI void queuedTick(::BlockSource& region, ::BlockPos const& pos, ::Random& random) const;

    MCAPI void randomTick(::BlockSource& region, ::BlockPos const& pos, ::Random& random) const;

    MCAPI ::Vec3 randomlyModifyPosition(::BlockPos const& pos) const;

    MCAPI bool requiresCorrectToolForDrops() const;

    MCAPI void setRuntimeId(uint const& runtimeId) const;

    MCAPI bool shouldRandomTick() const;

    MCAPI bool shouldRandomTickExtraLayer() const;

    MCAPI bool shouldStopFalling(::Actor& entity) const;

    MCAPI bool shouldTickOnSetBlock() const;

    MCAPI void spawnResources(
        ::BlockSource&                region,
        ::BlockPos const&             pos,
        ::Randomize&                  randomize,
        ::ResourceDropsContext const& resourceDropsContext
    ) const;

    MCAPI int telemetryVariant(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI ::std::string toDebugString() const;

    MCAPI void transformOnFall(::BlockSource& region, ::BlockPos const& pos, ::Actor* entity, float fallDistance) const;

    MCAPI void triggerEvent(::BlockSource& region, ::BlockPos const& pos, int b0, int b1) const;

    MCAPI ::CopperBehavior const* tryGetCopperBehavior() const;

    MCAPI ::Block const* tryGetInfested() const;

    MCAPI ::Block const* tryGetUninfested() const;

    MCAPI bool tryToPlace(::BlockSource& region, ::BlockPos const& pos, ::ActorBlockSyncMessage const* syncMsg) const;

    MCAPI bool tryToTill(::BlockSource& region, ::BlockPos const& pos, ::Actor& entity, ::ItemStack& item) const;

    MCAPI void updateEntityAfterFallOn(::BlockPos const& pos, ::UpdateEntityAfterFallOnInterface& entity) const;

    MCAPI bool updateTallestCollisionShape(
        ::BlockSource const&                               region,
        ::BlockPos const&                                  pos,
        ::AABB const&                                      intersectTestBox,
        ::optional_ref<::GetCollisionShapeInterface const> entity,
        ::AABB&                                            result,
        ::Vec3 const&                                      posToMinimizeDistanceToIfMatchingHeight,
        float&                                             currentDistanceSqr
    ) const;

    MCAPI bool use(::Player& player, ::BlockPos const& pos, uchar face, ::std::optional<::Vec3> hit) const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string const& BLOCK_DESCRIPTION_PREFIX();

    MCAPI static float const& SIZE_OFFSET();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(ushort data, ::gsl::not_null<::BlockLegacy*> oldBlock, ::CompoundTag serId, uint const& runId);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::BlockRenderLayer $getRenderLayer() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
