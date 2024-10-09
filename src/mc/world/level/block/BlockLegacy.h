#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/WeakPtr.h"
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/world/Direction.h"
#include "mc/world/Flip.h"
#include "mc/world/item/CreativeItemCategory.h"
#include "mc/world/item/FertilizerType.h"
#include "mc/world/level/ShapeType.h"
#include "mc/world/level/block/BlockClientPredictionOverrides.h"
#include "mc/world/level/block/BlockProperty.h"
#include "mc/world/level/block/BlockRenderLayer.h"
#include "mc/world/level/block/BlockShape.h"
#include "mc/world/level/block/BlockSupportType.h"
#include "mc/world/level/block/BlockTintType.h"
#include "mc/world/level/block/BurnOdds.h"
#include "mc/world/level/block/FlameOdds.h"
#include "mc/world/level/block/LavaFlammable.h"
#include "mc/world/level/block/actor/BlockActorType.h"

// auto generated forward declare list
// clang-format off
namespace BlockEvents { struct BlockFallOnEvent; }
namespace BlockTrait { class IGetPlacementBlockCallback; }
namespace BlockTrait { class ITrait; }
namespace mce { class Color; }
// clang-format on

class BlockLegacy {
public:
    // BlockLegacy inner types declare
    // clang-format off
    struct AlteredStateCollection;
    struct HorizontalDirectionBits;
    struct NameInfo;
    struct RearrangedStateCollection;
    struct RemovedStateCollection;
    // clang-format on

    // BlockLegacy inner types define
    struct AlteredStateCollection {
    public:
        // prevent constructor by default
        AlteredStateCollection& operator=(AlteredStateCollection const&);
        AlteredStateCollection(AlteredStateCollection const&);
        AlteredStateCollection();

        // protected:
        // NOLINTBEGIN
        MCAPI static bool _checkVersioningRequirements(class SemVersion const& removedSupportVersion);

        // NOLINTEND
    };

    struct HorizontalDirectionBits {
    public:
        // prevent constructor by default
        HorizontalDirectionBits& operator=(HorizontalDirectionBits const&);
        HorizontalDirectionBits(HorizontalDirectionBits const&);
        HorizontalDirectionBits();
    };

    struct NameInfo {
    public:
        // prevent constructor by default
        NameInfo& operator=(NameInfo const&);
        NameInfo(NameInfo const&);
        NameInfo();

    public:
        // NOLINTBEGIN
        MCAPI ~NameInfo();

        // NOLINTEND
    };

    struct RearrangedStateCollection : public ::BlockLegacy::AlteredStateCollection {
    public:
        // prevent constructor by default
        RearrangedStateCollection& operator=(RearrangedStateCollection const&);
        RearrangedStateCollection(RearrangedStateCollection const&);
        RearrangedStateCollection();

    public:
        // NOLINTBEGIN
        // vIndex: 0
        virtual std::optional<int> getState(class BlockLegacy const& blockLegacy, int blockData) const;

        // vIndex: 1
        virtual class Block const* setState(class BlockLegacy const& blockLegacy, int blockData, int stateData) const;

        // vIndex: 2
        virtual ~RearrangedStateCollection() = default;

        MCAPI static void
        add(class BlockLegacy&                                                    blockLegacy,
            class BlockState const&                                               stateRef,
            std::function<std::optional<int>(class BlockLegacy const&, int)>      getter,
            std::function<class Block const*(class BlockLegacy const&, int, int)> setter,
            class SemVersion const&                                               removedSupportVersion);

        // NOLINTEND
    };

    struct RemovedStateCollection : public ::BlockLegacy::AlteredStateCollection {
    public:
        // RemovedStateCollection inner types declare
        // clang-format off
        struct SplitBlock;
        // clang-format on

        // RemovedStateCollection inner types define
        struct SplitBlock {
        public:
            // prevent constructor by default
            SplitBlock& operator=(SplitBlock const&);
            SplitBlock(SplitBlock const&);
            SplitBlock();

        public:
            // NOLINTBEGIN
            MCAPI SplitBlock(int data, class BlockLegacy& blockLegacyRef);

            // NOLINTEND
        };

    public:
        // prevent constructor by default
        RemovedStateCollection& operator=(RemovedStateCollection const&);
        RemovedStateCollection(RemovedStateCollection const&);
        RemovedStateCollection();

    public:
        // NOLINTBEGIN
        // vIndex: 0
        virtual std::optional<int> getState(class BlockLegacy const& blockLegacy, int) const;

        // vIndex: 1
        virtual class Block const* setState(class BlockLegacy const& blockLegacy, int blockData, int stateData) const;

        // vIndex: 2
        virtual ~RemovedStateCollection() = default;

        MCAPI static void
        add(class BlockState const&                                               stateRef,
            std::vector<struct BlockLegacy::RemovedStateCollection::SplitBlock>&& splitBlocks,
            class SemVersion const&                                               removedSupportVersion);

        // NOLINTEND
    };

public:
    // prevent constructor by default
    BlockLegacy& operator=(BlockLegacy const&);
    BlockLegacy(BlockLegacy const&);
    BlockLegacy();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BlockLegacy();

    // vIndex: 1
    virtual std::shared_ptr<class BlockActor> newBlockEntity(class BlockPos const& pos, class Block const& block) const;

    // vIndex: 2
    virtual class Block const* getNextBlockPermutation(class Block const& currentBlock) const;

    // vIndex: 3
    virtual bool
    hasTag(class BlockSource& region, class BlockPos const& pos, class Block const& block, std::string const& tagName)
        const;

    // vIndex: 4
    virtual class HitResult clip(
        class Block const&                                         block,
        class BlockSource const&                                   region,
        class BlockPos const&                                      pos,
        class Vec3 const&                                          A,
        class Vec3 const&                                          B,
        ::ShapeType                                                shapeType,
        class optional_ref<class GetCollisionShapeInterface const> entity
    ) const;

    // vIndex: 5
    virtual class AABB
    getCollisionShape(class Block const& block, class IConstBlockSource const&, class BlockPos const& pos, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    // vIndex: 6
    virtual bool getCollisionShapeForCamera(
        class AABB&                    outAABB,
        class Block const&             block,
        class IConstBlockSource const& region,
        class BlockPos const&          pos
    ) const;

    // vIndex: 7
    virtual bool addCollisionShapes(
        class Block const&                                         block,
        class IConstBlockSource const&                             region,
        class BlockPos const&                                      pos,
        class AABB const*                                          intersectTestBox,
        std::vector<class AABB>&                                   inoutBoxes,
        class optional_ref<class GetCollisionShapeInterface const> entity
    ) const;

    // vIndex: 8
    virtual void addAABBs(
        class Block const&             block,
        class IConstBlockSource const& region,
        class BlockPos const&          pos,
        class AABB const*              intersectTestBox,
        std::vector<class AABB>&       inoutBoxes
    ) const;

    // vIndex: 9
    virtual class AABB const& getOutline(
        class Block const& block,
        class IConstBlockSource const&,
        class BlockPos const& pos,
        class AABB&           bufferValue
    ) const;

    // vIndex: 10
    virtual class AABB const& getVisualShapeInWorld(
        class Block const& block,
        class IConstBlockSource const&,
        class BlockPos const&,
        class AABB& bufferAABB
    ) const;

    // vIndex: 11
    virtual class AABB const& getVisualShape(class Block const&, class AABB&) const;

    // vIndex: 12
    virtual class AABB const& getUIShape(class Block const& block, class AABB& bufferAABB) const;

    // vIndex: 13
    virtual bool getLiquidClipVolume(
        class Block const&    block,
        class BlockSource&    region,
        class BlockPos const& pos,
        class AABB&           includeBox
    ) const;

    // vIndex: 14
    virtual bool
    isObstructingChests(class BlockSource& region, class BlockPos const& pos, class Block const& thisBlock) const;

    // vIndex: 15
    virtual class Vec3 randomlyModifyPosition(class BlockPos const& pos, int& seed) const;

    // vIndex: 16
    virtual class Vec3 randomlyModifyPosition(class BlockPos const& pos) const;

    // vIndex: 17
    virtual void onProjectileHit(class BlockSource&, class BlockPos const&, class Actor const&) const;

    // vIndex: 18
    virtual void onLightningHit(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 19
    virtual bool liquidCanFlowIntoFromDirection(
        uchar                                                           flowIntoFacing,
        std::function<class Block const&(class BlockPos const&)> const& getBlock,
        class BlockPos const&                                           pos
    ) const;

    // vIndex: 20
    virtual bool hasVariableLighting() const;

    // vIndex: 21
    virtual bool isStrippable(class Block const& srcBlock) const;

    // vIndex: 22
    virtual class Block const& getStrippedBlock(class Block const& srcBlock) const;

    // vIndex: 23
    virtual bool canProvideSupport(class Block const& block, uchar face, ::BlockSupportType) const;

    // vIndex: 24
    virtual bool canProvideMultifaceSupport(class Block const& block, uchar face) const;

    // vIndex: 25
    virtual bool canConnect(class Block const&, uchar toOther, class Block const& thisBlock) const;

    // vIndex: 26
    virtual bool isMovingBlock() const;

    // vIndex: 27
    virtual class CopperBehavior const* tryGetCopperBehavior() const;

    // vIndex: 28
    virtual bool canDamperVibrations() const;

    // vIndex: 29
    virtual bool canOccludeVibrations() const;

    // vIndex: 30
    virtual bool isStemBlock() const;

    // vIndex: 31
    virtual bool isContainerBlock() const;

    // vIndex: 32
    virtual bool isCraftingBlock() const;

    // vIndex: 33
    virtual bool isWaterBlocking() const;

    // vIndex: 34
    virtual bool isFenceBlock() const;

    // vIndex: 35
    virtual bool isFenceGateBlock() const;

    // vIndex: 36
    virtual bool isThinFenceBlock() const;

    // vIndex: 37
    virtual bool isWallBlock() const;

    // vIndex: 38
    virtual bool isStairBlock() const;

    // vIndex: 39
    virtual bool isSlabBlock() const;

    // vIndex: 40
    virtual bool isDoubleSlabBlock() const;

    // vIndex: 41
    virtual bool isDoorBlock() const;

    // vIndex: 42
    virtual bool isRailBlock() const;

    // vIndex: 43
    virtual bool isButtonBlock() const;

    // vIndex: 44
    virtual bool isLeverBlock() const;

    // vIndex: 45
    virtual bool isCandleCakeBlock() const;

    // vIndex: 46
    virtual bool isMultifaceBlock() const;

    // vIndex: 47
    virtual bool isSignalSource() const;

    // vIndex: 48
    virtual bool canBeOriginalSurface() const;

    // vIndex: 49
    virtual bool isSilentWhenJumpingOff() const;

    // vIndex: 50
    virtual bool isValidAuxValue(int value) const;

    // vIndex: 51
    virtual bool canFillAtPos(class BlockSource& region, class BlockPos const& pos, class Block const& block) const;

    // vIndex: 52
    virtual class Block const& sanitizeFillBlock(class Block const& block) const;

    // vIndex: 53
    virtual void onFillBlock(class BlockSource& region, class BlockPos const& pos, class Block const& block) const;

    // vIndex: 54
    virtual int getDirectSignal(class BlockSource& region, class BlockPos const& pos, int dir) const;

    // vIndex: 55
    virtual bool canBeDestroyedByWaterSpread() const;

    // vIndex: 56
    virtual bool waterSpreadCausesSpawn() const;

    // vIndex: 57
    virtual bool canContainLiquid() const;

    // vIndex: 58
    virtual std::optional<class HashedString> getRequiredMedium() const;

    // vIndex: 59
    virtual bool
    shouldConnectToRedstone(class BlockSource& region, class BlockPos const& pos, ::Direction::Type direction) const;

    // vIndex: 60
    virtual void
    handlePrecipitation(class BlockSource& region, class BlockPos const& pos, float downfallAmount, float temperature)
        const;

    // vIndex: 61
    virtual bool canBeUsedInCommands(class BaseGameVersion const& baseGameVersion) const;

    // vIndex: 62
    virtual bool
    checkIsPathable(class Actor& entity, class BlockPos const& lastPathPos, class BlockPos const& pathPos) const;

    // vIndex: 63
    virtual bool shouldDispense(class BlockSource& region, class Container& container) const;

    // vIndex: 64
    virtual bool
    dispense(class BlockSource& region, class Container& container, int slot, class Vec3 const& pos, uchar face) const;

    // vIndex: 65
    virtual void
    transformOnFall(class BlockSource& region, class BlockPos const& pos, class Actor* entity, float fallDistance)
        const;

    // vIndex: 66
    virtual void
    onRedstoneUpdate(class BlockSource& region, class BlockPos const& pos, int strength, bool isFirstTime) const;

    // vIndex: 67
    virtual void onMove(class BlockSource& region, class BlockPos const& from, class BlockPos const& to) const;

    // vIndex: 68
    virtual bool detachesOnPistonMove(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 69
    virtual void movedByPiston(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 70
    virtual void onStructureBlockPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 71
    virtual void onStructureNeighborBlockPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 72
    virtual void setupRedstoneComponent(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 73
    virtual ::BlockProperty getRedstoneProperty(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 74
    virtual void
    updateEntityAfterFallOn(class BlockPos const& pos, struct UpdateEntityAfterFallOnInterface& entity) const;

    // vIndex: 75
    virtual bool isBounceBlock() const;

    // vIndex: 76
    virtual bool isPreservingMediumWhenPlaced(class BlockLegacy const* medium) const;

    // vIndex: 77
    virtual bool isFilteredOut(::BlockRenderLayer) const;

    // vIndex: 78
    virtual bool canRenderSelectionOverlay(::BlockRenderLayer) const;

    // vIndex: 79
    virtual bool ignoreEntitiesOnPistonMove(class Block const& block) const;

    // vIndex: 80
    virtual bool
    onFertilized(class BlockSource& region, class BlockPos const& pos, class Actor* actor, ::FertilizerType fType)
        const;

    // vIndex: 81
    virtual bool mayConsumeFertilizer(class BlockSource& region) const;

    // vIndex: 82
    virtual bool
    canBeFertilized(class BlockSource& region, class BlockPos const& pos, class Block const& aboveBlock) const;

    // vIndex: 83
    virtual bool mayPick() const;

    // vIndex: 84
    virtual bool mayPick(class BlockSource const& region, class Block const& block, bool liquid) const;

    // vIndex: 85
    virtual bool mayPlace(class BlockSource& region, class BlockPos const& pos, uchar face) const;

    // vIndex: 86
    virtual bool mayPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 87
    virtual bool mayPlaceOn(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 88
    virtual bool tryToPlace(
        class BlockSource&                  region,
        class BlockPos const&               pos,
        class Block const&                  block,
        struct ActorBlockSyncMessage const* syncMsg
    ) const;

    // vIndex: 89
    virtual bool
    tryToTill(class BlockSource& region, class BlockPos const& pos, class Actor& entity, class ItemStack& item) const;

    // vIndex: 90
    virtual bool breaksFallingBlocks(class Block const& block, class BaseGameVersion version) const;

    // vIndex: 91
    virtual void
    destroy(class BlockSource& region, class BlockPos const& pos, class Block const& block, class Actor* entitySource)
        const;

    // vIndex: 92
    virtual bool getIgnoresDestroyPermissions(class Actor& entity, class BlockPos const& pos) const;

    // vIndex: 93
    virtual void
    neighborChanged(class BlockSource& region, class BlockPos const& pos, class BlockPos const& neighborPos) const;

    // vIndex: 94
    virtual bool
    getSecondPart(class IConstBlockSource const& region, class BlockPos const& pos, class BlockPos& out) const;

    // vIndex: 95
    virtual class Block const*
    playerWillDestroy(class Player& player, class BlockPos const& pos, class Block const& block) const;

    // vIndex: 96
    virtual class ItemInstance asItemInstance(class Block const&, class BlockActor const*) const;

    // vIndex: 97
    virtual void
    spawnAfterBreak(class BlockSource&, class Block const&, class BlockPos const&, struct ResourceDropsContext const&)
        const;

    // vIndex: 98
    virtual class Block const& getPlacementBlock(
        class Actor const&    by,
        class BlockPos const& pos,
        uchar                 face,
        class Vec3 const&     clickPos,
        int                   itemValue
    ) const;

    // vIndex: 99
    virtual int
    calcVariant(class BlockSource& region, class BlockPos const& pos, class mce::Color const& baseColor) const;

    // vIndex: 100
    virtual bool
    isAttachedTo(class BlockSource& region, class BlockPos const& pos, class BlockPos& outAttachedTo) const;

    // vIndex: 101
    virtual bool attack(class Player* player, class BlockPos const& pos) const;

    // vIndex: 102
    virtual bool
    shouldTriggerEntityInside(class BlockSource& region, class BlockPos const& pos, class Actor& entity) const;

    // vIndex: 103
    virtual bool
    canBeBuiltOver(class BlockSource& region, class BlockPos const& pos, class BlockItem const& newItem) const;

    // vIndex: 104
    virtual bool canBeBuiltOver(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 105
    virtual void triggerEvent(class BlockSource& region, class BlockPos const& pos, int b0, int b1) const;

    // vIndex: 106
    virtual void executeEvent(
        class BlockSource&    region,
        class BlockPos const& pos,
        class Block const&    block,
        std::string const&    eventName,
        class Actor&          sourceEntity
    ) const;

    // vIndex: 107
    virtual class MobSpawnerData const*
    getMobToSpawn(class SpawnConditions const& conditions, class BlockSource& region) const;

    // vIndex: 108
    virtual bool shouldStopFalling(class Actor& entity) const;

    // vIndex: 109
    virtual bool pushesUpFallingBlocks() const;

    // vIndex: 110
    virtual bool canHaveExtraData() const;

    // vIndex: 111
    virtual bool hasComparatorSignal() const;

    // vIndex: 112
    virtual int
    getComparatorSignal(class BlockSource& region, class BlockPos const& pos, class Block const& block, uchar dir)
        const;

    // vIndex: 113
    virtual bool canSlide(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 114
    virtual bool canInstatick() const;

    // vIndex: 115
    virtual bool canSpawnAt(class BlockSource const& region, class BlockPos const& pos) const;

    // vIndex: 116
    virtual void notifySpawnedAt(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 117
    virtual bool causesFreezeEffect() const;

    // vIndex: 118
    virtual int getIconYOffset() const;

    // vIndex: 119
    virtual std::string buildDescriptionId(class Block const&) const;

    // vIndex: 120
    virtual bool isAuxValueRelevantForPicking() const;

    // vIndex: 121
    virtual int getColor(class Block const& block) const;

    // vIndex: 122
    virtual int getColor(class BlockSource& region, class BlockPos const& pos, class Block const& block) const;

    // vIndex: 123
    virtual int getColorAtPos(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 124
    virtual int
    getColorForParticle(class BlockSource& region, class BlockPos const& pos, class Block const& block) const;

    // vIndex: 125
    virtual bool isSeasonTinted(class Block const& block, class BlockSource& region, class BlockPos const& p) const;

    // vIndex: 126
    virtual void onGraphicsModeChanged(struct BlockGraphicsModeChangeContext const& context);

    // vIndex: 127
    virtual float getShadeBrightness(class Block const& block) const;

    // vIndex: 128
    virtual int telemetryVariant(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 129
    virtual int getVariant(class Block const& block) const;

    // vIndex: 130
    virtual bool canSpawnOn(class Actor*) const;

    // vIndex: 131
    virtual class Block const& getRenderBlock() const;

    // vIndex: 132
    virtual uchar getMappedFace(uchar face, class Block const& block) const;

    // vIndex: 133
    virtual ::Flip getFaceFlip(uchar face, class Block const& block) const;

    // vIndex: 134
    virtual void
    animateTickBedrockLegacy(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // vIndex: 135
    virtual void animateTick(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // vIndex: 136
    virtual class BlockLegacy& init();

    // vIndex: 137
    virtual struct Brightness getLightEmission(class Block const&) const;

    // vIndex: 138
    virtual class Block const* tryLegacyUpgrade(ushort) const;

    // vIndex: 139
    virtual bool dealsContactDamage(class Actor const& actor, class Block const& block, bool isPathFinding) const;

    // vIndex: 140
    virtual class Block const* tryGetInfested(class Block const&) const;

    // vIndex: 141
    virtual class Block const* tryGetUninfested(class Block const&) const;

    // vIndex: 142
    virtual void _addHardCodedBlockComponents(class Experiments const&);

    // vIndex: 143
    virtual void onRemove(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 144
    virtual void onExploded(class BlockSource& region, class BlockPos const& pos, class Actor* entitySource) const;

    // vIndex: 145
    virtual void onStandOn(class EntityContext& entity, class BlockPos const& pos) const;

    // vIndex: 146
    virtual void onPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 147
    virtual bool shouldTickOnSetBlock() const;

    // vIndex: 148
    virtual void tick(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // vIndex: 149
    virtual void randomTick(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // vIndex: 150
    virtual bool isInteractiveBlock() const;

    // vIndex: 151
    virtual bool use(class Player& player, class BlockPos const& pos, uchar face, std::optional<class Vec3>) const;

    // vIndex: 152
    virtual bool use(class Player&, class BlockPos const&, uchar) const;

    // vIndex: 153
    virtual bool allowStateMismatchOnPlacement(class Block const& clientTarget, class Block const& serverTarget) const;

    // vIndex: 154
    virtual bool canSurvive(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 155
    virtual ::BlockRenderLayer getRenderLayer() const;

    // vIndex: 156
    virtual ::BlockRenderLayer
    getRenderLayer(class Block const& block, class BlockSource&, class BlockPos const& pos) const;

    // vIndex: 157
    virtual int getExtraRenderLayers() const;

    // vIndex: 158
    virtual struct Brightness getLight(class Block const&) const;

    // vIndex: 159
    virtual struct Brightness getEmissiveBrightness(class Block const&) const;

    // vIndex: 160
    virtual class mce::Color getMapColor(class BlockSource&, class BlockPos const&, class Block const&) const;

    // vIndex: 161
    virtual void _onHitByActivatingAttack(class BlockSource&, class BlockPos const&, class Actor*) const;

    // vIndex: 162
    virtual void entityInside(class BlockSource&, class BlockPos const&, class Actor&) const;

    // vIndex: 163
    virtual class mce::Color getDustColor(class Block const&) const;

    // vIndex: 164
    virtual void
    _iterateCandles(class Block const&, class BlockPos const&, std::function<void(class Vec3 const&, int)> callback)
        const;

    // vIndex: 165
    virtual class ItemInstance const getBaseSeed() const;

    // vIndex: 166
    virtual void onLand(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 167
    virtual bool isFreeToFall(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 168
    virtual void
    startFalling(class BlockSource& region, class BlockPos const& pos, class Block const& oldBlock, bool creative)
        const;

    // vIndex: 169
    virtual int getInputSignal(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 170
    virtual bool isAlternateInput(class Block const& block) const;

    // vIndex: 171
    virtual int getAlternateSignal(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 172
    virtual int getOutputSignal(class Block const& block) const;

    // vIndex: 173
    virtual int getTurnOffDelay(class Block const& block) const;

    // vIndex: 174
    virtual int getTurnOnDelay(class Block const& block) const;

    // vIndex: 175
    virtual class Block const* getOnBlock(class Block const* block) const;

    // vIndex: 176
    virtual class Block const* getOffBlock(class Block const* block) const;

    MCAPI BlockLegacy(std::string const& nameId, int id, class Material const& material);

    MCAPI bool _isDataDrivingVanillaBlocksAndItems() const;

    MCAPI bool
    addAABB(class AABB const& shape, class AABB const* intersectTestBox, std::vector<class AABB>& inoutBoxes) const;

    MCAPI class BlockLegacy& addBlockProperties(::BlockProperty addedProperties);

    MCAPI class BlockLegacy& addComponent(struct BlockComponentDescription const& blockComponentDescription);

    MCAPI void addGetPlacementBlockCallback(std::unique_ptr<class BlockTrait::IGetPlacementBlockCallback> callback);

    MCAPI class BlockLegacy& addState(class BlockState const& state);

    MCAPI class BlockLegacy& addState(class BlockState const& state, uint64 variationCount);

    MCAPI class BlockLegacy& addTag(class HashedString const& tag);

    MCAPI class BlockLegacy& addTrait(class BlockTrait::ITrait const& trait);

    MCAPI bool anyOf(std::initializer_list<std::reference_wrapper<class HashedString const>> blockTypeIdList) const;

    MCAPI bool anyOf(std::vector<std::reference_wrapper<class HashedString const>> const& blockTypeIdList) const;

    MCAPI std::string buildDescriptionName(class Block const& block) const;

    MCAPI bool canDropWithAnyTool() const;

    MCAPI bool canHurtAndBreakItem() const;

    MCAPI bool canProvideFullSupport(class Block const& block, uchar face) const;

    MCAPI bool canReactToNeighborsDuringInstatick() const;

    MCAPI void createBlockPermutations(uint latestUpdaterVersion);

    MCAPI class WeakPtr<class BlockLegacy> createWeakPtr() const;

    MCAPI void executeEvent(std::string const& name, class RenderParams& params) const;

    MCAPI bool executeTrigger(class DefinitionTrigger const& trigger, class RenderParams& params) const;

    MCAPI void finalizeBlockComponentStorage();

    MCAPI void finalizeBlockCustomComponentEvents(class ScriptBlockCustomComponentsFinalizer& finalizer);

    MCAPI void forEachAlteredBlockState(std::function<bool(class BlockState const&)> callback) const;

    MCAPI void forEachBlockPermutation(std::function<bool(class Block const&)> callback) const;

    MCAPI void forEachBlockStateInstance(std::function<bool(class BlockStateInstance const&)> callback) const;

    MCAPI bool getAllowsRunes() const;

    MCAPI ::BlockActorType getBlockEntityType() const;

    MCAPI short getBlockItemId() const;

    MCAPI class BlockState const* getBlockState(class HashedString const& name) const;

    MCAPI class BlockStateGroup* getBlockStateGroup();

    MCAPI bool getClientPredictionOverride(::BlockClientPredictionOverrides type) const;

    MCAPI std::vector<struct CommandName> getCommandNames() const;

    MCAPI ::CreativeItemCategory getCreativeCategory() const;

    MCAPI void getDebugText(std::vector<std::string>& outputInfo, class BlockPos const& debugPos) const;

    MCAPI class Block const& getDefaultState() const;

    MCAPI std::string const& getDescriptionId() const;

    MCAPI int getExperienceDrop(class Random& random) const;

    MCAPI class Material const& getMaterial() const;

    MCAPI std::string const& getNamespace() const;

    MCAPI class HashedString const& getRawNameHash() const;

    MCAPI std::string const& getRawNameId() const;

    MCAPI class BaseGameVersion const& getRequiredBaseGameVersion() const;

    MCAPI struct ResourceDrops getResourceDrops(
        class Block const&                 block,
        class Randomize&                   randomize,
        struct ResourceDropsContext const& resourceDropsContext
    ) const;

    MCAPI class Block const& getStateFromLegacyData(ushort data) const;

    MCAPI float getThickness() const;

    MCAPI uint64 getUniquePermutations() const;

    MCAPI bool hasBlockEntity() const;

    MCAPI bool hasNonLegacyState(uint64 const& stateType) const;

    MCAPI bool hasProperty(::BlockProperty type) const;

    MCAPI bool hasResourceDropsStrategy() const;

    MCAPI bool hasState(class BlockState const& stateType) const;

    MCAPI bool hasState(class HashedString const& name) const;

    MCAPI bool hasTag(class HashedString const& tag) const;

    MCAPI bool hasTag(uint64 const& tag) const;

    MCAPI void initializeBlockStateGroup();

    MCAPI bool isAir() const;

    MCAPI bool isEmpty() const;

    MCAPI bool isFallingBlock() const;

    MCAPI bool isFullAndOpaque() const;

    MCAPI bool isMotionBlockingBlock() const;

    MCAPI bool isOpaqueFullBlock() const;

    MCAPI bool isSolid() const;

    MCAPI bool isSolidBlockingBlock() const;

    MCAPI bool isVanilla() const;

    MCAPI bool matchesStates(class BlockLegacy const& blockType) const;

    MCAPI bool operator==(class HashedString const&) const;

    MCAPI class BlockLegacy& overrideBlockProperties(::BlockProperty newProperties);

    MCAPI class BlockLegacy& setAllowsRunes(bool interference);

    MCAPI class BlockLegacy& setBlockTintType(::BlockTintType tintType);

    MCAPI class BlockLegacy& setCanBeExtraBlock(bool state);

    MCAPI class BlockLegacy& setCanBeOriginalSurface(bool canBeOriginalSurface);

    MCAPI void setCanDropWithAnyTool(bool canDropWithAnyTool);

    MCAPI class BlockLegacy& setCategory(::CreativeItemCategory creativeCategory);

    MCAPI void setClientPredictionOverride(::BlockClientPredictionOverrides type, bool val);

    MCAPI class BlockLegacy& setCreativeEnumState(class BlockState const& state);

    MCAPI class BlockLegacy& setCreativeGroup(std::string const&);

    MCAPI void setDefaultState(class Block const& block);

    MCAPI class BlockLegacy& setDestroyTime(float destroyTime);

    MCAPI class BlockLegacy& setDestroyTime(float destroyTime, float explosionResistance);

    MCAPI void setEnableDataDrivenVanillaBlocksAndItems(bool enabled);

    MCAPI class BlockLegacy& setExperienceDrop(struct IntRange dropRange);

    MCAPI class BlockLegacy& setFlammable(::FlameOdds flameOdds, ::BurnOdds burnOdds, ::LavaFlammable lavaFlammable);

    MCAPI void setIgnoreBlockForInsideCubeRenderer(bool ignoreBlockForInsideCubeRenderer);

    MCAPI class BlockLegacy& setIsHiddenInCommands(bool isHiddenInCommands);

    MCAPI void setIsInteraction(bool canUse);

    MCAPI void setIsVanillaBlock(bool isVanilla);

    MCAPI class BlockLegacy& setLightBlock(struct Brightness brightness);

    MCAPI class BlockLegacy& setLightEmission(struct Brightness brightness);

    MCAPI class BlockLegacy& setMapColor(class mce::Color const& color);

    MCAPI class BlockLegacy& setMinRequiredBaseGameVersion(class BaseGameVersion const& baseGameVersion);

    MCAPI class BlockLegacy& setNameId(std::string const& id);

    MCAPI void setOnlyPermutationandDefaultState(std::unique_ptr<class Block> block);

    MCAPI void setOpaqueFullBlock(bool opaqueFullBlock);

    MCAPI void setPreFlatteningName(class HashedString const& preFlattenName);

    MCAPI void setPushesOutItems(bool pushesOutItems);

    MCAPI void setRandomTicking(bool tick) const;

    MCAPI void setRandomTickingExtraLayer(bool tick) const;

    MCAPI void setResourceDropsStrategy(std::unique_ptr<class IResourceDropsStrategy> dropsStrategy);

    MCAPI void setSolid(bool solid);

    MCAPI void setVisualShape(class AABB const& shape);

    MCAPI void setVisualShape(class Vec3 const& min, class Vec3 const& max);

    MCAPI bool shouldTriggerOnStandOn(class Actor& entity, class BlockPos const& pos) const;

    MCAPI void spawnResources(
        class BlockSource&                 region,
        class BlockPos const&              pos,
        class Block const&                 block,
        class Randomize&                   randomize,
        struct ResourceDropsContext const& resourceDropsContext
    ) const;

    MCAPI class Block const* tryGetStateFromLegacyData(ushort data) const;

    MCAPI bool updateTallestCollisionShape(
        class Block const&                                         block,
        class BlockSource const&                                   region,
        class BlockPos const&                                      pos,
        class AABB const&                                          intersectTestBox,
        class optional_ref<class GetCollisionShapeInterface const> entity,
        class AABB&                                                result,
        class Vec3 const&                                          posToMinimizeDistanceToIfMatchingHeight,
        float&                                                     currentDistanceSqr
    ) const;

    MCAPI static std::string buildDescriptionIdFromNameInfo(struct BlockLegacy::NameInfo const& nameInfo);

    MCAPI static struct BlockLegacy::NameInfo extractBlockNameInfo(std::string const& name);

    MCAPI static struct BlockLegacy::HorizontalDirectionBits getConnectedDirections(
        class Block const&             thisBlock,
        class BlockPos const&          pos,
        class IConstBlockSource const& region
    );

    MCAPI static uchar
    getPlacementFacingAll(class Actor const& entity, class BlockPos const& pos, float yRotOffsetDegree);

    MCAPI static uchar
    getPlacementFacingAllExceptAxisY(class Actor const& entity, class BlockPos const& pos, float yRotOffsetDegree);

    MCAPI static class ItemActor*
    popResource(class BlockSource& region, class BlockPos const& pos, class ItemInstance const& itemInstance);

    MCAPI static class ItemActor*
    popResource(class BlockSource& region, class BlockPos const& pos, class ItemStack const& item);

    MCAPI static std::string const BLOCK_DESCRIPTION_PREFIX;

    MCAPI static float const SIZE_OFFSET;

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI ::BlockShape _getBlockShape() const;

    MCAPI bool forEachBlockPermutationMutable(std::function<bool(class Block&)> callback);

    MCAPI int getBurnOdds() const;

    MCAPI float getDestroySpeed() const;

    MCAPI float getExplosionResistance() const;

    MCAPI int getFlameOdds() const;

    MCAPI float getFriction() const;

    MCAPI bool isCropBlock() const;

    MCAPI bool isLavaFlammable() const;

    MCAPI void onFallOnBase(struct BlockEvents::BlockFallOnEvent& eventData) const;

    MCAPI void
    onHitByActivatingAttack(class BlockSource& region, class BlockPos const& pos, class Actor* sourceActor) const;

    MCAPI class Block const* onPlayerPlacing(
        class BlockSource&    region,
        class BlockPos const& pos,
        class Actor&          actor,
        uchar                 face,
        class Block const&    blockBeingPlaced
    ) const;

    MCAPI bool shouldRandomTick() const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _executeEvent(
        std::string const&                                            name,
        std::vector<std::pair<std::string const, std::string const>>& eventStack,
        class RenderParams&                                           params
    ) const;

    MCAPI void _forceExecuteTrigger(
        class DefinitionTrigger const&                                trigger,
        std::vector<std::pair<std::string const, std::string const>>& eventStack,
        class RenderParams&                                           params
    ) const;

    MCAPI std::optional<int> _tryLookupAlteredStateCollection(uint64 stateId, ushort blockData) const;

    MCAPI class Block const* _trySetStateFromAlteredStateCollection(uint64 stateId, int val, ushort blockData) const;

    // NOLINTEND
};
