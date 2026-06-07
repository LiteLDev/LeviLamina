#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/deps/nbt/CompoundTag.h"
#include "mc/deps/shared_types/item/CreativeItemCategory.h"
#include "mc/platform/brstd/function_ref.h"
#include "mc/world/Direction.h"
#include "mc/world/item/FertilizerType.h"
#include "mc/world/level/ShapeType.h"
#include "mc/world/level/block/BlockClientPredictionOverrides.h"
#include "mc/world/level/block/BlockOcclusionType.h"
#include "mc/world/level/block/BlockProperty.h"
#include "mc/world/level/block/BlockRenderLayer.h"
#include "mc/world/level/block/BlockSupportType.h"
#include "mc/world/level/block/BlockType.h"
#include "mc/world/level/block/CachedComponentData.h"
#include "mc/world/level/block/TintMethod.h"
#include "mc/world/level/block/actor/BlockActorType.h"
#include "mc/world/level/block/components/BlockComponentDirectData.h"
#include "mc/world/level/block/components/BlockComponentStorage.h"
#include "mc/world/level/block/components/ConnectionID.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Actor;
class BaseGameVersion;
class BlockChangeContext;
class BlockPos;
class BlockSource;
class BlockState;
class BlockType;
class EntityContext;
class GetCollisionShapeInterface;
class HashedString;
class HitResult;
class IConstBlockSource;
class IRandom;
class ItemActor;
class ItemInstance;
class ItemStack;
class ItemStackBase;
class Material;
class MobSpawnerData;
class NeighborBlockDirections;
class Player;
class Random;
class SpawnConditions;
class Vec3;
struct ActorBlockSyncMessage;
struct BlockAnimateTickData;
struct BlockComponentDescription;
struct Brightness;
struct CopperBehavior;
struct ResourceDropsContext;
namespace BlockEvents { class BlockEventManager; }
namespace VoxelShapes { class VoxelShape; }
namespace br::spawn { struct EntityType; }
namespace mce { class Color; }
class IClientBlockData;
struct BlockGraphicsModeChangeContext;
struct ClientBlockData;
// clang-format on

class Block {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 96, ::BlockComponentStorage>              mComponents;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::BlockType*>>         mBlockType;
    ::ll::TypedStorage<4, 8, ::CachedComponentData>                 mCachedComponentData;
    ::ll::TypedStorage<8, 96, ::BlockComponentDirectData>           mDirectData;
    ::ll::TypedStorage<8, 24, ::std::vector<::HashedString>>        mTags;
    ::ll::TypedStorage<8, 24, ::CompoundTag>                        mSerializationId;
    ::ll::TypedStorage<8, 8, uint64>                                mSerializationIdHash;
    ::ll::TypedStorage<4, 4, uint>                                  mSerializationIdHashForNetwork;
    ::ll::TypedStorage<4, 4, uint>                                  mNetworkId;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::IClientBlockData>> mClientData;
    ::ll::TypedStorage<2, 2, ushort const>                          mData;
    ::ll::TypedStorage<1, 1, bool>                                  mHasRuntimeId;
    // NOLINTEND

public:
    // prevent constructor by default
    Block();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Block();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Block(ushort data, ::gsl::not_null<::BlockType*> oldBlock);

    MCAPI Block(ushort data, ::gsl::not_null<::BlockType*> oldBlock, ::CompoundTag serId, uint const& runId);

    MCAPI ::BlockOcclusionType _getBlockOcclusionType() const;

    MCAPI bool _isSolid() const;

#ifdef LL_PLAT_C
    MCAPI void _playAmbientSounds(::BlockAnimateTickData const& tickData) const;
#endif

    MCAPI void _queueForTickBasedOnComponentConfiguration(
        ::BlockSource&    region,
        ::BlockPos const& pos,
        ::Random&         random,
        bool              placingBlock
    ) const;

    MCAPI void _removeFromTickingQueues(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI bool accumulatesSnow(bool fromFallingSnow) const;

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

#ifdef LL_PLAT_C
    MCAPI void animateTick(::BlockAnimateTickData const& tickData) const;

    MCAPI void animateTickBedrockLegacy(::BlockAnimateTickData const& tickData) const;
#endif

    MCAPI ::ItemInstance asItemInstance(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI ::ItemInstance asItemInstance(::BlockSource& region, ::BlockPos const& position, bool withData) const;

    MCAPI bool attack(::Player* player, ::BlockPos const& pos) const;

    MCAPI bool breaksFallingBlocks(::BaseGameVersion version) const;

    MCAPI ::std::string buildDescriptionId() const;

    MCAPI ::std::string buildDescriptionName() const;

    MCAPI void buildSerializationId(uint latestUpdaterVersion);

    MCAPI void cacheComponentData();

#ifdef LL_PLAT_C
    MCAPI int calcVariant(::BlockSource& region, ::BlockPos const& pos, ::mce::Color const& baseColor) const;
#endif

    MCAPI bool canBeBrokenFromFalling() const;

    MCAPI bool canBeBuiltOver(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI bool canBeBuiltOver(::BlockSource& region, ::BlockPos const& pos, ::BlockType const& newBlock) const;

    MCAPI bool canBeFertilized(::BlockSource& region, ::BlockPos const& pos, ::Block const& aboveBlock) const;

    MCAPI bool canBeOriginalSurface(bool aboveSeaLevel) const;

    MCAPI bool canConnect(::Block const& connectionBlock, uchar toOther) const;

    MCAPI bool canFillAtPos(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI bool canHaveExtraData() const;

    MCAPI bool canHurtAndBreakItem() const;

    MCAPI bool canInstatick() const;

    MCAPI bool canProvideFullSupport(uchar face) const;

    MCAPI bool canProvideMultifaceSupport(uchar face) const;

    MCAPI bool canProvideSupport(uchar face, ::BlockSupportType type) const;

    MCAPI bool canReactToNeighborsDuringInstatick() const;

#ifdef LL_PLAT_C
    MCAPI bool canRedstoneWirePassThrough() const;

    MCAPI bool canRenderSelectionOverlay(::BlockRenderLayer heldItemRenderLayer) const;
#endif

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

    MCAPI ::Block const& connectionUpdate(
        ::BlockSource&            region,
        ::BlockPos const&         pos,
        ::NeighborBlockDirections neighborBlockDirections
    ) const;

    MCAPI ::Block const& copyState(::Block const& fromBlock, ::BlockState const& state) const;

    MCAPI ::Block const& copyStates(::Block const& fromBlock) const;

    MCAPI bool dealsContactDamage(::Actor const& actor, bool isPathFinding) const;

    MCAPI void destroy(::BlockSource& region, ::BlockPos const& pos, ::Actor* entitySource) const;

    MCAPI void entityInside(::BlockSource& region, ::BlockPos const& pos, ::Actor& entity) const;

    MCAPI void executeItemEvent(
        ::ItemStackBase&     item,
        ::std::string const& eventName,
        ::BlockSource&       region,
        ::BlockPos const&    pos,
        ::Actor*             actor
    ) const;

    MCAPI void finalizeBlockComponentStorage();

    MCAPI void forEachState(::brstd::function_ref<bool(::BlockState const&, int)> callback) const;

    MCAPI bool getAllowsRunes() const;

    MCAPI ::BlockActorType getBlockEntityType() const;

    MCAPI float getBounciness(::IConstBlockSource const& region, ::BlockPos const& pos) const;

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

    MCAPI ::BlockType::HorizontalDirectionBits
    getConnectedDirections(::BlockPos const& pos, ::BlockSource& region) const;

    MCAPI ::std::optional<::ConnectionID> getConnectionID() const;

#ifdef LL_PLAT_C
    MCAPI ::std::string getCraftingLabelText() const;

    MCAPI ::SharedTypes::CreativeItemCategory getCreativeCategory() const;

    MCAPI ::HashedString const& getCullingLayer() const;
#endif

    MCAPI void getDebugText(::std::vector<::std::string>& outputInfo, ::BlockPos const& debugPos) const;

    MCAPI ::std::string getDescriptionId() const;

    MCAPI float getDestroySpeed() const;

    MCAPI float getDestroySpeed(::ItemStackBase const& item) const;

    MCAPI int getDirectSignal(::BlockSource& region, ::BlockPos const& pos, int dir) const;

    MCAPI ::std::string getDisplayName() const;

#ifdef LL_PLAT_C
    MCAPI ::Brightness getEmissiveBrightness() const;
#endif

    MCAPI ::BlockEvents::BlockEventManager const& getEventManager() const;

    MCAPI int getExperienceDrop(::Random& random) const;

    MCAPI float getExplosionResistance() const;

#ifdef LL_PLAT_C
    MCAPI int getExtraRenderLayers() const;
#endif

    MCAPI int getFlameOdds() const;

    MCAPI float getFriction() const;

    MCAPI bool getIgnoresDestroyPermissions(::Actor& entity, ::BlockPos const& pos) const;

    MCAPI ::Brightness getLight() const;

    MCAPI ::Brightness getLightEmission() const;

#ifdef LL_PLAT_C
    MCAPI bool getLiquidClipVolume(::BlockSource& region, ::BlockPos const& pos, ::AABB& includeBox) const;
#endif

    MCAPI ::mce::Color getMapColor(::BlockSource& region, ::BlockPos const& pos) const;

#ifdef LL_PLAT_C
    MCAPI uchar getMappedFace(uchar face) const;
#endif

    MCAPI ::Material const& getMaterial() const;

    MCAPI ::MobSpawnerData const* getMobToSpawn(::SpawnConditions const& conditions, ::BlockSource& region) const;

#ifdef LL_PLAT_C
    MCAPI ::VoxelShapes::VoxelShape const* getOcclusionFaceShape(uchar face) const;

    MCAPI ::VoxelShapes::VoxelShape const* getOcclusionShape() const;

    MCFOLD ::BlockOcclusionType getOcclusionType() const;
#endif

    MCAPI ::AABB const& getOutline(::IConstBlockSource const& region, ::BlockPos const& pos, ::AABB& bufferValue) const;

    MCAPI ::Block const& getPlacementBlock(
        ::Actor const&    by,
        ::BlockPos const& pos,
        uchar             face,
        ::Vec3 const&     clickPos,
        int               itemValue
    ) const;

    MCAPI ::Vec3 getRandomOffset(::BlockPos const& pos) const;

    MCFOLD uint const& getRuntimeId() const;

    MCAPI bool getSecondPart(::BlockSource const& region, ::BlockPos const& pos, ::BlockPos& out) const;

    MCFOLD ::CompoundTag const& getSerializationId() const;

#ifdef LL_PLAT_C
    MCAPI float getShadeBrightness() const;
#endif

    MCAPI float getThickness() const;

#ifdef LL_PLAT_C
    MCAPI ::TintMethod getTintMethod() const;
#endif

    MCAPI float getTranslucency() const;

#ifdef LL_PLAT_C
    MCAPI ::AABB const& getUIShape(::AABB& bufferAABB) const;
#endif

    MCAPI int getVariant() const;

    MCAPI ::AABB const& getVisualShape(::AABB& bufferAABB) const;

    MCAPI ::AABB const&
    getVisualShapeInWorld(::IConstBlockSource const& region, ::BlockPos const& pos, ::AABB& bufferAABB) const;

    MCAPI bool hasBlockEntity() const;

    MCAPI bool hasComparatorSignal() const;

    MCAPI bool hasProperty(::BlockProperty type) const;

#ifdef LL_PLAT_C
    MCAPI bool const hasRuntimeId() const;
#endif

    MCAPI bool hasTag(uint64 const& hash) const;

    MCAPI bool hasTag(::HashedString const& tagName) const;

#ifdef LL_PLAT_C
    MCAPI bool ignoreBlockForInsideCubeRenderer() const;
#endif

    MCAPI bool ignoreEntitiesOnPistonMove() const;

    MCAPI bool isAir() const;

    MCAPI bool isAttachedTo(::BlockSource& region, ::BlockPos const& pos, ::BlockPos& outAttachedTo) const;

    MCAPI bool isButtonBlock() const;

    MCAPI bool isContainerBlock() const;

#ifdef LL_PLAT_C
    MCAPI bool isCraftingBlock() const;
#endif

    MCAPI bool isCropBlock() const;

    MCAPI bool isDoorBlock() const;

    MCAPI bool isEmpty() const;

    MCAPI bool isFallingBlock() const;

    MCAPI bool isFenceBlock() const;

    MCAPI bool isFenceGateBlock() const;

    MCAPI bool isFilteredOut(::BlockRenderLayer heldItemRenderLayer) const;

    MCAPI bool isFullBlockGeometry() const;

    MCAPI bool isInteractiveBlock() const;

    MCAPI bool isLavaBlocking() const;

    MCAPI bool isLavaFlammable() const;

    MCAPI bool isLeverBlock() const;

    MCAPI bool isMotionBlockingBlock() const;

    MCAPI bool isMultifaceBlock() const;

    MCAPI bool isOpaqueFullBlock() const;

    MCAPI bool isPartialBlock(::BlockSource const& region, ::BlockPos const& pos) const;

    MCAPI bool isPreservingMediumWhenPlaced(::Block const& medium) const;

    MCAPI bool isRailBlock() const;

#ifdef LL_PLAT_C
    MCAPI bool isSeasonTinted(::BlockSource& region, ::BlockPos const& pos) const;
#endif

    MCAPI bool isSignalSource() const;

    MCAPI bool isSlabBlock() const;

    MCFOLD bool isSolid() const;

    MCAPI bool isSolidBlockingBlock() const;

    MCAPI bool isSolidBlockingBlockAndNotSignalSource() const;

    MCAPI bool isStairBlock() const;

    MCAPI bool isStemBlock() const;

#ifdef LL_PLAT_C
    MCAPI bool isThinFenceBlock() const;
#endif

    MCAPI bool isTopPartialBlock(::BlockSource const& region, ::BlockPos const& pos) const;

    MCAPI bool isUnbreakable() const;

    MCAPI bool isValidSpawn(::BlockSource& region, ::BlockPos pos, ::br::spawn::EntityType const& entityType) const;

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

    MCAPI void onActorEvent(::BlockPos const& pos, ::std::string const& eventName, ::Actor& sourceEntity) const;

    MCAPI void onActorInternalEvent(::BlockPos const& pos, ::std::string const& eventName, ::Actor& sourceEntity) const;

    MCAPI void onExploded(::BlockSource& region, ::BlockPos const& pos, ::Actor* entitySource) const;

    MCAPI void onFallOn(::BlockSource& region, ::BlockPos const& pos, ::Actor& entity, float fallDistance) const;

    MCAPI bool
    onFertilized(::BlockSource& region, ::BlockPos const& pos, ::Actor* entity, ::FertilizerType fType) const;

    MCAPI void onHitByActivatingAttack(::BlockSource& region, ::BlockPos const& pos, ::Actor* sourceActor) const;

    MCAPI void onLightningHit(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI void onPlace(
        ::BlockSource&              region,
        ::BlockPos const&           pos,
        ::Block const&              previousBlock,
        ::BlockChangeContext const& changeSourceContext
    ) const;

    MCAPI void onProjectileHit(::BlockSource& region, ::BlockPos const& pos, ::Actor const& projectile) const;

    MCAPI void onRedstoneUpdate(
        ::BlockSource&    region,
        ::BlockPos const& pos,
        short             strength,
        short             oldStrength,
        bool              isFirstTime
    ) const;

    MCAPI void onRemove(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI void onStandOn(::EntityContext& entity, ::BlockPos const& pos) const;

    MCAPI void onStateChange(
        ::BlockSource&              region,
        ::BlockPos const&           pos,
        ::Block const&              previousBlock,
        ::BlockChangeContext const& changeSourceContext
    ) const;

    MCAPI void onStepOff(::Actor& entity, ::BlockPos const& pos) const;

    MCAPI void onStepOn(::Actor& entity, ::BlockPos const& pos) const;

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

    MCAPI void setupRedstoneComponent(::BlockSource& region, ::BlockPos const& pos) const;

#ifdef LL_PLAT_C
    MCAPI bool shouldConnectToRedstone(::BlockSource& region, ::BlockPos const& pos, ::Direction::Type direction) const;
#endif

    MCAPI bool shouldRandomTick() const;

    MCAPI bool shouldRandomTickExtraLayer() const;

    MCAPI bool shouldStopFalling(::Actor& entity) const;

    MCAPI bool shouldTickOnSetBlock() const;

    MCAPI void spawnResources(
        ::BlockSource&                region,
        ::BlockPos const&             pos,
        ::IRandom&                    random,
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

#ifdef LL_PLAT_C
    MCAPI void visitClientData(::brstd::function_ref<void(::ClientBlockData const&)> visitor) const;
#endif
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI static void DEPRECATEDcallOnGraphicsModeChanged(::BlockGraphicsModeChangeContext const& context);
#endif
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string const& BLOCK_DESCRIPTION_PREFIX();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(ushort data, ::gsl::not_null<::BlockType*> oldBlock);

    MCAPI void* $ctor(ushort data, ::gsl::not_null<::BlockType*> oldBlock, ::CompoundTag serId, uint const& runId);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
