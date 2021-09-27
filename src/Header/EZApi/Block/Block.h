#pragma once

#include "../Core/NBT.h"
#include "../Core/WeakPtr.h"
#include "../dll.h"
#include "BlockLegacy.h"

#include "../Core/HashedString.h"

class Block {

public:
    unsigned short aux;
    BlockLegacy*   legacy;
    CompoundTag    definition;
    int            runtime_id;
    bool           has_runtime_id;
    
    MCAPI virtual ~Block();
    MCAPI virtual enum BlockRenderLayer getRenderLayer() const;

    MCAPI HashedString const& getName(void) const;
    template <typename T>
    MCAPI class Block const* setState(class ItemState const&, T) const;
    template <typename T>
    MCAPI T                         getState(class ItemState const&) const;
    MCAPI bool                      isSlabBlock(void) const;
    MCAPI bool                      isSolidBlockingBlock(void) const;
    MCAPI bool                      hasState(class ItemState const&) const;
    MCAPI class Block const&        keepState(class ItemState const&) const;
    inline class BlockLegacy const& getLegacyBlock(void) const {
        return *legacy;
    }
    MCAPI class Block const& copyState(class Block const&, class ItemState const&) const;
    MCAPI bool               isSolidBlockingBlockAndNotSignalSource(void) const;
    MCAPI void               spawnResources(class BlockSource&, class BlockPos const&, float, int) const;
    MCAPI std::string  toDebugString(void) const;
    MCAPI unsigned int getStateMask(class ItemState const&) const;

	//MCAPI Block(unsigned short, class gsl::not_null<class BlockLegacy* >, class CompoundTag, unsigned int const&);
	MCAPI static std::string const BLOCK_DESCRIPTION_PREFIX;
	MCAPI static float const SIZE_OFFSET;
	MCAPI void addAABBs(class BlockSource&, class BlockPos const&, class AABB const*, class std::vector<class AABB, class std::allocator<class AABB> >&)const;
	MCAPI bool addCollisionShapes(class BlockSource&, class BlockPos const&, class AABB const*, class std::vector<class AABB, class std::allocator<class AABB> >&, class Actor*)const;
	MCAPI class Block& addTag(class HashedString const&);
	MCAPI void animateTick(class BlockSource&, class BlockPos const&, class Random&)const;
	MCAPI class ItemInstance asItemInstance(class BlockSource&, class BlockPos const&)const;
	MCAPI bool attack(class Player*, class BlockPos const&)const;
	MCAPI bool breaksFallingBlocks(void)const;
	MCAPI std::string buildDescriptionId(void)const;
	MCAPI std::string buildDescriptionName(void)const;
	MCAPI void cacheComponentData(void);
	MCAPI float calcGroundFriction(class Mob&, class BlockPos const&)const;
	MCAPI bool canBeBrokenFromFalling(void)const;
	MCAPI bool canBeBuiltOver(class BlockSource&, class BlockPos const&)const;
	MCAPI bool canBeFertilized(class BlockSource&, class BlockPos const&, class Block const&)const;
	MCAPI bool canBeOriginalSurface(void)const;
	MCAPI bool canConnect(class Block const&, unsigned char, class Block const&)const;
	MCAPI bool canHurtAndBreakItem(void)const;
	MCAPI bool canInstatick(void)const;
	MCAPI bool canProvideSupport(unsigned char, enum BlockSupportType)const;
	MCAPI bool canSlide(class BlockSource&, class BlockPos const&)const;
	MCAPI bool canSurvive(class BlockSource&, class BlockPos const&)const;
	MCAPI bool causesFreezeEffect(void)const;
	MCAPI bool checkIsPathable(class Actor&, class BlockPos const&, class BlockPos const&)const;
	MCAPI class HitResult clip(class BlockSource&, class BlockPos const&, class Vec3 const&, class Vec3 const&, bool, class AABB const&)const;
	MCAPI class HitResult clip(class BlockSource&, class BlockPos const&, class Vec3 const&, class Vec3 const&, bool)const;
	MCAPI bool dealsContactDamage(class Actor const&, bool)const;
	MCAPI void destroy(class BlockSource&, class BlockPos const&, class Actor*)const;
	MCAPI void entityInside(class BlockSource&, class BlockPos const&, class Actor&)const;
	MCAPI void executeEvent(std::string const&, class RenderParams&)const;
	MCAPI void executeItemEvent(class ItemStackBase&, std::string const&, class BlockSource&, class BlockPos const&, class Actor*)const;
	MCAPI bool executeTrigger(class DefinitionTrigger const&, class RenderParams&)const;
	MCAPI class AABB const& getAABB(class BlockSource&, class BlockPos const&, class AABB&, bool)const;
	MCAPI bool getAllowsRunes(void)const;
	MCAPI enum BlockActorType getBlockEntityType(void)const;
	MCAPI int getBurnOdds(void)const;
	MCAPI bool getCollisionShape(class AABB&, class BlockSource&, class BlockPos const&, class Actor*)const;
	MCAPI int getColor(class BlockSource&, class BlockPos const&)const;
	MCAPI int getColor(void)const;
	MCAPI int getComparatorSignal(class BlockSource&, class BlockPos const&, unsigned char)const;
	MCAPI enum CreativeItemCategory getCreativeCategory(void)const;
	MCAPI void getDebugText(class std::vector<std::string, class std::allocator<std::string > >&, class BlockPos const&)const;
	MCAPI class Block const& getDefaultState(void)const;
	MCAPI std::string getDescriptionId(void)const;
	MCAPI float getDestroySpeed(void)const;
	MCAPI int getDirectSignal(class BlockSource&, class BlockPos const&, int)const;
	MCAPI float getExplosionResistance(class Actor*)const;
	MCAPI int getFlameOdds(void)const;
	MCAPI float getFriction(void)const;
	MCAPI bool getIgnoresDestroyPermissions(class Actor&, class BlockPos const&)const;
	MCAPI struct Brightness getLight(void)const;
	MCAPI struct Brightness getLightEmission(void)const;
	//MCAPI class mce::Color getMapColor(class BlockSource&, class BlockPos const&)const;
	MCAPI class Material const& getMaterial(void)const;
	MCAPI class MobSpawnerData const* getMobToSpawn(class SpawnConditions const&, class BlockSource&)const;
	MCAPI class Block const& getPlacementBlock(class Actor&, class BlockPos const&, unsigned char, class Vec3 const&, int)const;
	MCAPI unsigned int const& getRuntimeId(void)const;
	MCAPI bool getSecondPart(class BlockSource&, class BlockPos const&, class BlockPos&)const;
	MCAPI class CompoundTag const& getSerializationId(void)const;
	MCAPI class ItemInstance getSilkTouchItemInstance(void)const;
	/*
	template <>
	MCAPI bool getState<bool>(class ItemState const&)const;
	template <>
	MCAPI enum AnvilDamage getState<enum AnvilDamage>(class ItemState const&)const;
	template <>
	MCAPI enum AttachmentType getState<enum AttachmentType>(class ItemState const&)const;
	template <>
	MCAPI enum BigDripleafTilt getState<enum BigDripleafTilt>(class ItemState const&)const;
	template <>
	MCAPI enum BlockColor getState<enum BlockColor>(class ItemState const&)const;
	template <>
	MCAPI enum CandleCount getState<enum CandleCount>(class ItemState const&)const;
	template <>
	MCAPI enum CauldronLiquidType getState<enum CauldronLiquidType>(class ItemState const&)const;
	template <>
	MCAPI enum ChemistryTableType getState<enum ChemistryTableType>(class ItemState const&)const;
	template <>
	MCAPI enum ChiselType getState<enum ChiselType>(class ItemState const&)const;
	template <>
	MCAPI enum CoralColor getState<enum CoralColor>(class ItemState const&)const;
	template <>
	MCAPI enum Direction::Type getState<enum Direction::Type>(class ItemState const&)const;
	template <>
	MCAPI enum DirtType getState<enum DirtType>(class ItemState const&)const;
	template <>
	MCAPI enum DoublePlantType getState<enum DoublePlantType>(class ItemState const&)const;
	template <>
	MCAPI enum DripstoneThickness getState<enum DripstoneThickness>(class ItemState const&)const;
	template <>
	MCAPI enum Facing::Rotation getState<enum Facing::Rotation>(class ItemState const&)const;
	template <>
	MCAPI enum LeverDirection getState<enum LeverDirection>(class ItemState const&)const;
	template <>
	MCAPI enum MonsterEggStoneType getState<enum MonsterEggStoneType>(class ItemState const&)const;
	template <>
	MCAPI enum NewLeafType getState<enum NewLeafType>(class ItemState const&)const;
	template <>
	MCAPI enum NewLogType getState<enum NewLogType>(class ItemState const&)const;
	template <>
	MCAPI enum OldLeafType getState<enum OldLeafType>(class ItemState const&)const;
	template <>
	MCAPI enum OldLogType getState<enum OldLogType>(class ItemState const&)const;
	template <>
	MCAPI enum PillarAxis getState<enum PillarAxis>(class ItemState const&)const;
	template <>
	MCAPI enum PortalAxis getState<enum PortalAxis>(class ItemState const&)const;
	template <>
	MCAPI enum PrismarineBlockType getState<enum PrismarineBlockType>(class ItemState const&)const;
	template <>
	MCAPI enum SandType getState<enum SandType>(class ItemState const&)const;
	template <>
	MCAPI enum SaplingType getState<enum SaplingType>(class ItemState const&)const;
	template <>
	MCAPI enum SeaGrassType getState<enum SeaGrassType>(class ItemState const&)const;
	template <>
	MCAPI enum SpongeType getState<enum SpongeType>(class ItemState const&)const;
	template <>
	MCAPI enum StoneBrickType getState<enum StoneBrickType>(class ItemState const&)const;
	template <>
	MCAPI enum StoneSlabType2 getState<enum StoneSlabType2>(class ItemState const&)const;
	template <>
	MCAPI enum StoneSlabType3 getState<enum StoneSlabType3>(class ItemState const&)const;
	template <>
	MCAPI enum StoneSlabType4 getState<enum StoneSlabType4>(class ItemState const&)const;
	template <>
	MCAPI enum StoneSlabType getState<enum StoneSlabType>(class ItemState const&)const;
	template <>
	MCAPI enum StoneType getState<enum StoneType>(class ItemState const&)const;
	template <>
	MCAPI enum SweetBerryBushBerryStage Block::getState<enum SweetBerryBushBlock::BerryStage>(class ItemState const&)const;
	template <>
	MCAPI enum TallGrassType getState<enum TallGrassType>(class ItemState const&)const;
	template <>
	MCAPI enum TorchFacing getState<enum TorchFacing>(class ItemState const&)const;
	template <>
	MCAPI enum WallBlockType getState<enum WallBlockType>(class ItemState const&)const;
	template <>
	MCAPI enum WoodType getState<enum WoodType>(class ItemState const&)const;
	template <>
	MCAPI int getState<int>(class ItemState const&)const;
	template <>
	MCAPI unsigned char getState<unsigned char>(class ItemState const&)const;
	template <>
	MCAPI unsigned short getState<unsigned short>(class ItemState const&)const;
	template <>
	MCAPI enum WallConnectionType getStateOrDefault<enum WallConnectionType>(class ItemState const&, enum WallConnectionType const&)const;
	*/
	MCAPI float getThickness(void)const;
	MCAPI float getTranslucency(void)const;
	MCAPI int getVariant(void)const;
	MCAPI class AABB const& getVisualShape(class AABB&, bool)const;
	MCAPI class AABB const& getVisualShapeInWorld(class BlockSource&, class BlockPos const&, class AABB&, bool)const;
	MCAPI void handleEntityInside(class BlockSource&, class BlockPos const&, class Actor*, class Vec3&)const;
	MCAPI bool hasBlockEntity(void)const;
	MCAPI bool hasComparatorSignal(void)const;
	MCAPI bool hasProperty(enum BlockProperty)const;
	MCAPI bool const hasRuntimeId(void)const;
	MCAPI bool hasTag(unsigned __int64 const&)const;
	MCAPI bool hasTag(class HashedString const&)const;
	MCAPI bool ignoreEntitiesOnPistonMove(void)const;
	MCAPI void initEntity(class EntityRegistryOwned&);
	MCAPI void initParams(class RenderParams&, class BlockSource&, class BlockPos const&, class Actor*)const;
	MCAPI bool isAttachedTo(class BlockSource&, class BlockPos const&, class BlockPos&)const;
	MCAPI bool isAuxValueRelevantForPicking(void)const;
	MCAPI bool isBounceBlock(void)const;
	MCAPI bool isButtonBlock(void)const;
	MCAPI bool isClimbable(class Actor const&)const;
	MCAPI bool isContainerBlock(void)const;
	MCAPI bool isCropBlock(void)const;
	MCAPI bool isDoorBlock(void)const;
	MCAPI bool isFenceBlock(void)const;
	MCAPI bool isFenceGateBlock(void)const;
	MCAPI bool isHeavy(void)const;
	MCAPI bool isInteractiveBlock(void)const;
	MCAPI bool isLeverBlock(void)const;
	MCAPI bool isMotionBlockingBlock(void)const;
	MCAPI bool isObstructingChests(class BlockSource&, class BlockPos const&)const;
	MCAPI bool isRailBlock(void)const;
	MCAPI bool isSignalSource(void)const;
	MCAPI bool isSolid(void)const;
	MCAPI bool isStairBlock(void)const;
	MCAPI bool isStandingSign(void)const;
	MCAPI bool isStemBlock(void)const;
	MCAPI bool isThinFenceBlock(void)const;
	MCAPI bool isWallBlock(void)const;
	MCAPI bool isWaterBlocking(void)const;
	MCAPI bool mayConsumeFertilizer(class BlockSource&)const;
	MCAPI bool mayPick(class BlockSource&, bool)const;
	MCAPI bool mayPick(void)const;
	MCAPI bool mayPlace(class BlockSource&, class BlockPos const&, unsigned char)const;
	MCAPI bool mayPlace(class BlockSource&, class BlockPos const&)const;
	MCAPI bool mayPlaceOn(class BlockSource&, class BlockPos const&)const;
	MCAPI void movedByPiston(class BlockSource&, class BlockPos const&)const;
	MCAPI void neighborChanged(class BlockSource&, class BlockPos const&, class BlockPos const&)const;
	MCAPI void onExploded(class BlockSource&, class BlockPos const&, class Actor*)const;
	MCAPI void onFallOn(class BlockSource&, class BlockPos const&, class Actor&, float)const;
	MCAPI bool onFertilized(class BlockSource&, class BlockPos const&, class Actor*, enum FertilizerType)const;
	MCAPI void onLightningHit(class BlockSource&, class BlockPos const&)const;
	MCAPI void onPlace(class BlockSource&, class BlockPos const&, class Block const&)const;
	MCAPI void onPlayerPlacing(class BlockSource&, class BlockPos const&, class Actor&, unsigned char)const;
	MCAPI void onProjectileHit(class BlockSource&, class BlockPos const&, class Actor const&)const;
	MCAPI void onRemove(class BlockSource&, class BlockPos const&)const;
	MCAPI void onStandOn(class Actor&, class BlockPos const&)const;
	MCAPI void onStepOff(class Actor&, class BlockPos const&)const;
	MCAPI void onStepOn(class Actor&, class BlockPos const&)const;
	MCAPI void onStructureBlockPlace(class BlockSource&, class BlockPos const&)const;
	MCAPI void onStructureNeighborBlockPlace(class BlockSource&, class BlockPos const&)const;
	MCAPI bool operator!=(class Block const&)const;
	MCAPI bool operator==(class Block const&)const;
	MCAPI void playerDestroy(class Player&, class BlockPos const&)const;
	MCAPI bool playerWillDestroy(class Player&, class BlockPos const&)const;
	MCAPI class ItemActor* popResource(class BlockSource&, class BlockPos const&, class ItemInstance const&)const;
	MCAPI bool pushesOutItems(void)const;
	MCAPI bool pushesUpFallingBlocks(void)const;
	MCAPI void queuedTick(class BlockSource&, class BlockPos const&, class Random&)const;
	MCAPI void randomTick(class BlockSource&, class BlockPos const&, class Random&)const;
	MCAPI class Vec3 randomlyModifyPosition(class BlockPos const&)const;
	MCAPI bool shouldRandomTick(void)const;
	MCAPI bool shouldRandomTickExtraLayer(void)const;
	MCAPI bool shouldStopFalling(class Actor&)const;
	MCAPI void spawnResources(class BlockSource&, class BlockPos const&, class Randomize&, class std::vector<class Item const*, class std::allocator<class Item const* > >*, float, int)const;
	MCAPI void spawnResources(class BlockSource&, class BlockPos const&, class Block const&, class Randomize&, class std::vector<class Item const*, class std::allocator<class Item const* > >*, float, int, class ItemStack const&)const;
	MCAPI int telemetryVariant(class BlockSource&, class BlockPos const&)const;
	MCAPI void transformOnFall(class BlockSource&, class BlockPos const&, class Actor*, float)const;
	MCAPI void triggerEvent(class BlockSource&, class BlockPos const&, int, int)const;
	/*
	template <>
	MCAPI struct BlockCollisionComponent const* tryGetComponent<struct BlockCollisionComponent>(void)const;
	template <>
	MCAPI struct BlockFlammableComponent const* tryGetComponent<struct BlockFlammableComponent>(void)const;
	template <>
	MCAPI struct BlockMapColorComponent const* tryGetComponent<struct BlockMapColorComponent>(void)const;
	template <>
	MCAPI struct BlockMaterialInstancesComponent const* tryGetComponent<struct BlockMaterialInstancesComponent>(void)const;
	template <>
	MCAPI struct BlockPlacementFilterComponent const* tryGetComponent<struct BlockPlacementFilterComponent>(void)const;
	template <>
	MCAPI struct BlockQueuedTickingComponent const* tryGetComponent<struct BlockQueuedTickingComponent>(void)const;
	template <>
	MCAPI struct BlockRandomTickingComponent const* tryGetComponent<struct BlockRandomTickingComponent>(void)const;
	template <>
	MCAPI struct BlockRaycastComponent const* tryGetComponent<struct BlockRaycastComponent>(void)const;
	template <>
	MCAPI struct CraftingTableComponent const* tryGetComponent<struct CraftingTableComponent>(void)const;
	template <>
	MCAPI struct OnInteractTrigger const* tryGetComponent<struct OnInteractTrigger>(void)const;
	*/
	MCAPI class CopperBehavior const* tryGetCopperBehavior(void)const;
	MCAPI class Block const* tryGetInfested(void)const;
	MCAPI class Block const* tryGetUninfested(void)const;
	MCAPI void trySpawnResourcesOnExplosion(class BlockSource&, class BlockPos const&, class Block const&, class std::vector<class Item const*, class std::allocator<class Item const* > >*, float, int)const;
	MCAPI bool tryToPlace(class BlockSource&, class BlockPos const&, struct ActorBlockSyncMessage const*)const;
	MCAPI bool tryToTill(class BlockSource&, class BlockPos const&, class Actor&, class ItemStack&)const;
	MCAPI void updateEntityAfterFallOn(class BlockPos const&, struct IActorMovementProxy&)const;
	MCAPI bool use(class Player&, class BlockPos const&, unsigned char)const;

    //AS_FIELD(class BlockLegacy const&, LegacyBlock, getLegacyBlock);
    //BUILD_ACCESS(unsigned short, DataID, 8);
};
//static_assert(offsetof(Block, legacy) == 16);