#pragma once

#include <cstdint>
#include <functional>
#include <vector>

#include "../dll.h"

class BlockLegacy {
public:
    virtual ~BlockLegacy();
    virtual void                                    tick(class BlockSource&, class BlockPos const&, class Random&) const;
    virtual class Block const&                      getStateFromLegacyData(unsigned short) const;
    virtual class std::shared_ptr<class BlockActor> newBlockEntity(class BlockPos const&, class Block const&) const;
    virtual class Block const*                      getNextBlockPermutation(class Block const&) const;
    virtual bool                                    getCollisionShape(
                                           class AABB&, class Block const&, class BlockSource&, class BlockPos const&, class Actor*) const;
    virtual bool       isObstructingChests(class BlockSource&, class BlockPos const&) const;
    virtual class Vec3 randomlyModifyPosition(class BlockPos const&, int&) const;
    virtual class Vec3 randomlyModifyPosition(class BlockPos const&) const;
    virtual void       addAABBs(
              class Block const&, class BlockSource&, class BlockPos const&, class AABB const*,
              std::vector<class AABB>&) const;
    virtual class AABB const&
                 getAABB(class BlockSource&, class BlockPos const&, class Block const&, class AABB&, bool) const;
    virtual bool addCollisionShapes(
        class Block const&, class BlockSource&, class BlockPos const&, class AABB const*, std::vector<class AABB>&,
        class Actor*) const;
    virtual class AABB const& getOutline(class BlockSource&, class BlockPos const&, class AABB&) const;
    virtual bool              getLiquidClipVolume(class BlockSource&, class BlockPos const&, class AABB&) const;
    virtual void              onProjectileHit(class BlockSource&, class BlockPos const&, class Actor const&) const;
    virtual bool              liquidCanFlowIntoFromDirection(
                     unsigned char, std::function<class Block const&(class BlockPos const&)> const&, class BlockPos const&) const;
    virtual struct Brightness  getLightEmission(class Block const&) const;
    virtual bool               shouldRandomTick() const;
    virtual bool               hasVariableLighting() const;
    virtual bool               isStrippable(class Block const&) const;
    virtual class Block const& getStrippedBlock(class Block const&) const;
    virtual bool               canProvideSupport(class Block const&, unsigned char, enum BlockSupportType) const;
    virtual bool               canConnect(class Block const&, unsigned char, class Block const&) const;
    virtual void               getConnectedDirections(
                      class Block const&, class BlockPos const&, class BlockSource&, bool&, bool&, bool&, bool&) const;
    virtual bool               isCropBlock() const;
    virtual bool               isStemBlock() const;
    virtual bool               isContainerBlock() const;
    virtual bool               isCraftingBlock() const;
    virtual bool               isInteractiveBlock() const;
    virtual bool               isWaterBlocking() const;
    virtual bool               isHurtableBlock() const;
    virtual bool               isFenceBlock() const;
    virtual bool               isFenceGateBlock() const;
    virtual bool               isThinFenceBlock() const;
    virtual bool               isWallBlock() const;
    virtual bool               isStairBlock() const;
    virtual bool               isSlabBlock() const;
    virtual bool               isDoubleSlabBlock() const;
    virtual bool               isDoorBlock() const;
    virtual bool               isRailBlock() const;
    virtual bool               isButtonBlock() const;
    virtual bool               canHurtAndBreakItem() const;
    virtual bool               isSignalSource() const;
    virtual bool               canBeOriginalSurface() const;
    virtual bool               isValidAuxValue() const;
    virtual bool               canFillAtPos(class BlockSource&, class BlockPos const&, class Block const&) const;
    virtual class Block const& sanitizeFillBlock(class BlockSource&, class BlockPos const&, class Block const&) const;
    virtual void               onFillBlock(class BlockSource&, class BlockPos const&, class Block const&) const;
    virtual int                getDirectSignal(class BlockSource&, class BlockPos const&, int) const;
    virtual bool               waterSpreadCausesSpawn() const;
    virtual bool               canContainLiquid() const;
    virtual bool               shouldConnectToRedstone(class BlockSource&, class BlockPos const&, int) const;
    virtual void               handleRain(class BlockSource&, class BlockPos const&, float) const;
    virtual bool               canBeUsedInCommands(bool, class BaseGameVersion const&) const;
    virtual float              getThickness() const;
    virtual float              getFlexibility(class BlockSource&, class BlockPos const&) const;
    virtual bool               checkIsPathable(class Actor&, class BlockPos const&, class BlockPos const&) const;
    virtual bool               shouldDispense(class BlockSource&, class Container&) const;
    virtual bool               dispense(class BlockSource&, class Container&, int, class Vec3 const&, unsigned char) const;
    virtual void               onPlace(class BlockSource&, class BlockPos const&) const;
    virtual void               onRemove(class BlockSource&, class BlockPos const&) const;
    virtual void               onExploded(class BlockSource&, class BlockPos const&, class Actor*) const;
    virtual void               onStepOn(class Actor&, class BlockPos const&) const;
    virtual void               onFallOn(class BlockSource&, class BlockPos const&, class Actor*, float) const;
    virtual void               transformOnFall(class BlockSource&, class BlockPos const&, class Actor*, float) const;
    virtual void               onRedstoneUpdate(class BlockSource&, class BlockPos const&, int, bool) const;
    virtual void               onMove(class BlockSource&, class BlockPos const&, class BlockPos const&) const;
    virtual bool               detachesOnPistonMove(class BlockSource&, class BlockPos const&) const;
    virtual void               movedByPiston(class BlockSource&, class BlockPos const&) const;
    virtual void               onStructureBlockPlace(class BlockSource&, class BlockPos const&) const;
    virtual void               setupRedstoneComponent(class BlockSource&, class BlockPos const&) const;
    virtual enum BlockProperty getRedstoneProperty(class BlockSource&, class BlockPos const&) const;
    virtual void               updateEntityAfterFallOn(class Actor&) const;
    virtual bool               isBounceBlock() const;
    virtual bool               ignoreEntitiesOnPistonMove(class Block const&) const;
    virtual bool               onFertilized(class BlockSource&, class BlockPos const&, class Actor*, enum FertilizerType) const;
    virtual bool               mayConsumeFertilizer(class BlockSource&) const;
    virtual bool               canBeFertilized(class BlockSource&, class BlockPos const&, class Block const&) const;
    virtual bool               mayPick() const;
    virtual bool               mayPick(class BlockSource&, class Block const&, bool) const;
    virtual bool               mayPlace(class BlockSource&, class BlockPos const&, unsigned char) const;
    virtual bool               mayPlace(class BlockSource&, class BlockPos const&) const;
    virtual bool               mayPlaceOn(class BlockSource&, class BlockPos const&) const;
    virtual bool               tryToPlace(
                      class BlockSource&, class BlockPos const&, class Block const&, struct ActorBlockSyncMessage const*) const;
    virtual bool               breaksFallingBlocks(class Block const&) const;
    virtual void               destroy(class BlockSource&, class BlockPos const&, class Block const&, class Actor*) const;
    virtual bool               playerWillDestroy(class Player&, class BlockPos const&, class Block const&) const;
    virtual bool               getIgnoresDestroyPermissions(class Actor&, class BlockPos const&) const;
    virtual void               neighborChanged(class BlockSource&, class BlockPos const&, class BlockPos const&) const;
    virtual bool               getSecondPart(class BlockSource&, class BlockPos const&, class BlockPos&) const;
    virtual int                getResourceCount(class Random&, class Block const&, int) const;
    virtual class ItemInstance getResourceItem(class Random&, class Block const&, int) const;
    virtual class ItemInstance asItemInstance(class BlockSource&, class BlockPos const&, class Block const&) const;
    virtual void               spawnResources(class BlockSource&, class BlockPos const&, class Block const&, float, int) const;
    virtual void               trySpawnResourcesOnExplosion(
                      class BlockSource&, class BlockPos const&, class Block const&, std::vector<class Item const*>*, float, int,
                      bool) const;
    virtual bool  spawnBurnResources(class BlockSource&, float, float, float) const;
    virtual float getExplosionResistance(class Actor*) const;
    virtual class HitResult
                 clip(class BlockSource&, class BlockPos const&, class Vec3 const&, class Vec3 const&, bool) const;
    virtual bool use(class Player&, class BlockPos const&) const;
    virtual class Block const&
                 getPlacementBlock(class Actor&, class BlockPos const&, unsigned char, class Vec3 const&, int) const;
    virtual int  calcVariant(class BlockSource&, class BlockPos const&) const;
    virtual bool isAttachedTo(class BlockSource&, class BlockPos const&, class BlockPos&) const;
    virtual bool attack(class Player*, class BlockPos const&) const;
    virtual void handleEntityInside(class BlockSource&, class BlockPos const&, class Actor*, class Vec3&) const;
    virtual void entityInside(class BlockSource&, class BlockPos const&, class Actor&) const;
    virtual void playerDestroy(class Player&, class BlockPos const&, class Block const&) const;
    virtual bool canSurvive(class BlockSource&, class BlockPos const&) const;
    virtual int  getExperienceDrop(class Random&) const;
    virtual bool canBeBuiltOver(class BlockSource&, class BlockPos const&) const;
    virtual void triggerEvent(class BlockSource&, class BlockPos const&, int, int) const;
    virtual void executeEvent(
        class BlockSource&, class BlockPos const&, class Block const&, std::string const&, class Actor&) const;
    virtual bool                        hasTag(class BlockSource&, class BlockPos const&, class Block const&, std::string const&) const;
    virtual class MobSpawnerData const* getMobToSpawn(class SpawnConditions const&, class BlockSource&) const;
    virtual class Color                 getMapColor(class BlockSource&, class BlockPos const&) const;
    virtual class Color                 getMapColor() const;
    virtual bool                        shouldStopFalling(class Actor&) const;
    virtual bool                        pushesUpFallingBlocks() const;
    virtual float                       calcGroundFriction(class Mob&, class BlockPos const&) const;
    virtual bool                        canHaveExtraData() const;
    virtual bool                        hasComparatorSignal() const;
    virtual int
                                  getComparatorSignal(class BlockSource&, class BlockPos const&, class Block const&, unsigned char) const;
    virtual bool                  canSlide(class BlockSource&, class BlockPos const&) const;
    virtual bool                  canSpawnAt(class BlockSource const&, class BlockPos const&) const;
    virtual bool                  notifySpawnedAt(class BlockSource&, class BlockPos const&) const;
    virtual int                   getIconYOffset() const;
    virtual enum BlockRenderLayer getRenderLayer() const;
    virtual std::string           buildDescriptionId(class Block const&) const;
    virtual bool                  isAuxValueRelevantForPicking() const;
    virtual int                   getColor(class Block const&) const;
    virtual int                   getColorAtPos(class BlockSource&, class BlockPos const&) const;
    virtual int                   getColor(class BlockSource&, class BlockPos const&, class Block const&) const;
    virtual int                   getColorForParticle(class BlockSource&, class BlockPos const&, class Block const&) const;
    virtual bool                  isSeasonTinted(class Block const&, class BlockSource&, class BlockPos const&) const;
    virtual void                  onGraphicsModeChanged(bool, bool, bool);
    virtual enum BlockRenderLayer getRenderLayer(class Block const&, class BlockSource&, class BlockPos const&) const;
    virtual int                   getExtraRenderLayers() const;
    virtual float                 getShadeBrightness() const;
    virtual class AABB const&
                               getVisualShapeInWorld(class Block const&, class BlockSource&, class BlockPos const&, class AABB&, bool) const;
    virtual class AABB const&  getVisualShape(class Block const&, class AABB&, bool) const;
    virtual class AABB const&  getUIShape(class Block const&, class AABB&) const;
    virtual int                telemetryVariant(class BlockSource&, class BlockPos const&) const;
    virtual int                getVariant(class Block const&) const;
    virtual bool               canSpawnOn() const;
    virtual Block const&       getRenderBlock() const;
    virtual unsigned char      getMappedFace(unsigned char, class Block const&) const;
    virtual enum Flip          getFaceFlip(unsigned char, class Block const&) const;
    virtual void               animateTick(class BlockSource&, class BlockPos const&, class Random&) const;
    virtual class BlockLegacy& init(void);
    virtual class BlockLegacy& setLightBlock(struct Brightness);
    virtual class BlockLegacy& setLightEmission(float);
    virtual class BlockLegacy& setExplodeable(float);
    virtual class BlockLegacy& setDestroyTime(float);
    virtual class BlockLegacy& setFriction(float);
    virtual class BlockLegacy& addProperty(enum BlockProperty);
    virtual class BlockLegacy& addState(class ItemState const&);
    virtual class BlockLegacy& addState(class ItemState const&, uint64_t);
    virtual class BlockLegacy& setAllowsRunes(bool);
    virtual class BlockLegacy& setMapColor(class Color const&);
    virtual bool               canBeSilkTouched(void) const;
    virtual class ItemInstance getSilkTouchItemInstance(class Block const&) const;
    virtual void               setVisualShape(class AABB const&);
    virtual void               setVisualShape(class Vec3 const&, class Vec3 const&);
    virtual class Block const* tryLegacyUpgrade(unsigned short) const;
    virtual bool               dealsContactDamage(class Actor const&, class Block const&, bool) const;

    //BUILD_ACCESS(unsigned short, BlockID, 328);
    //BUILD_ACCESS(class Block**, Block, 514);
    template <typename T>
    MCAPI T            getState(class ItemState const&, unsigned short) const;
    class Block const& getDefaultState(void) const;
};