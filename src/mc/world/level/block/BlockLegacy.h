#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/string/HashedString.h"

// auto generated inclusion list
#include "mc/common/wrapper/WeakPtr.h"
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/BurnOdds.h"
#include "mc/enums/CreativeItemCategory.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/FlameOdds.h"
#include "mc/enums/Flip.h"
#include "mc/enums/LavaFlammable.h"
#include "mc/enums/ShapeType.h"
#include "mc/world/Direction.h"
#include "mc/world/level/block/utils/BlockActorType.h"
#include "mc/world/level/block/utils/BlockClientPredictionOverrides.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockShape.h"
#include "mc/world/level/block/utils/BlockSupportType.h"
#include "mc/world/level/block/utils/BlockTintType.h"

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
        // symbol: ?_checkVersioningRequirements@AlteredStateCollection@BlockLegacy@@KA_NAEBVSemVersion@@@Z
        MCAPI static bool _checkVersioningRequirements(class SemVersion const&);

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
        HashedString mRawName;       // this+0x0
        std::string  mNamespaceName; // this+0x30
        HashedString mFullName;      // this+0x50

    public:
        // NOLINTBEGIN
        // symbol: ??1NameInfo@BlockLegacy@@QEAA@XZ
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
        // vIndex: 0, symbol: ?getState@RearrangedStateCollection@BlockLegacy@@UEBA?AV?$optional@H@std@@AEBV2@H@Z
        virtual std::optional<int> getState(class BlockLegacy const& blockLegacy, int) const;

        // vIndex: 1, symbol: ?setState@RearrangedStateCollection@BlockLegacy@@UEBAPEBVBlock@@AEBV2@HH@Z
        virtual class Block const* setState(class BlockLegacy const& blockLegacy, int, int) const;

        // vIndex: 2, symbol: __gen_??1RearrangedStateCollection@BlockLegacy@@UEAA@XZ
        virtual ~RearrangedStateCollection() = default;

        // symbol:
        // ?add@RearrangedStateCollection@BlockLegacy@@SAXAEAV2@AEBVBlockState@@V?$function@$$A6A?AV?$optional@H@std@@AEBVBlockLegacy@@H@Z@std@@V?$function@$$A6APEBVBlock@@AEBVBlockLegacy@@HH@Z@5@AEBVSemVersion@@@Z
        MCAPI static void
        add(class BlockLegacy&,
            class BlockState const&,
            std::function<std::optional<int>(class BlockLegacy const&, int)>,
            std::function<class Block const*(class BlockLegacy const&, int, int)>,
            class SemVersion const&);

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
            // symbol: ??0SplitBlock@RemovedStateCollection@BlockLegacy@@QEAA@HAEAV2@@Z
            MCAPI SplitBlock(int data, class BlockLegacy&);

            // NOLINTEND
        };

    public:
        // prevent constructor by default
        RemovedStateCollection& operator=(RemovedStateCollection const&);
        RemovedStateCollection(RemovedStateCollection const&);
        RemovedStateCollection();

    public:
        // NOLINTBEGIN
        // vIndex: 0, symbol: ?getState@RemovedStateCollection@BlockLegacy@@UEBA?AV?$optional@H@std@@AEBV2@H@Z
        virtual std::optional<int> getState(class BlockLegacy const& blockLegacy, int) const;

        // vIndex: 1, symbol: ?setState@RemovedStateCollection@BlockLegacy@@UEBAPEBVBlock@@AEBV2@HH@Z
        virtual class Block const* setState(class BlockLegacy const& blockLegacy, int, int) const;

        // vIndex: 2, symbol: __gen_??1RemovedStateCollection@BlockLegacy@@UEAA@XZ
        virtual ~RemovedStateCollection() = default;

        // symbol:
        // ?add@RemovedStateCollection@BlockLegacy@@SAXAEBVBlockState@@$$QEAV?$vector@USplitBlock@RemovedStateCollection@BlockLegacy@@V?$allocator@USplitBlock@RemovedStateCollection@BlockLegacy@@@std@@@std@@AEBVSemVersion@@@Z
        MCAPI static void
        add(class BlockState const&,
            std::vector<struct BlockLegacy::RemovedStateCollection::SplitBlock>&&,
            class SemVersion const&);

        // NOLINTEND
    };

public:
    LLNDAPI std::string const& getTypeName() const;

    LLNDAPI static optional_ref<BlockLegacy>       tryGetFromRegistry(std::string_view name);
    LLNDAPI static optional_ref<BlockLegacy const> tryGetFromRegistry(uint legacyBlockID);

    // prevent constructor by default
    BlockLegacy& operator=(BlockLegacy const&);
    BlockLegacy(BlockLegacy const&);
    BlockLegacy();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1BlockLegacy@@UEAA@XZ
    virtual ~BlockLegacy();

    // vIndex: 1, symbol:
    // ?newBlockEntity@BlockLegacy@@UEBA?AV?$shared_ptr@VBlockActor@@@std@@AEBVBlockPos@@AEBVBlock@@@Z
    virtual std::shared_ptr<class BlockActor> newBlockEntity(class BlockPos const& pos, class Block const& block) const;

    // vIndex: 2, symbol: ?getNextBlockPermutation@BlockLegacy@@UEBAPEBVBlock@@AEBV2@@Z
    virtual class Block const* getNextBlockPermutation(class Block const& currentBlock) const;

    // vIndex: 3, symbol:
    // ?hasTag@BlockLegacy@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual bool
    hasTag(class BlockSource& region, class BlockPos const& pos, class Block const& block, std::string const& tagName)
        const;

    // vIndex: 4, symbol:
    // ?clip@BlockLegacy@@UEBA?AVHitResult@@AEBVBlock@@AEBVBlockSource@@AEBVBlockPos@@AEBVVec3@@3W4ShapeType@@V?$optional_ref@$$CBVGetCollisionShapeInterface@@@@@Z
    virtual class HitResult
    clip(class Block const&, class BlockSource const&, class BlockPos const&, class Vec3 const&, class Vec3 const&, ::ShapeType, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    // vIndex: 5, symbol:
    // ?getCollisionShape@BlockLegacy@@UEBA?AVAABB@@AEBVBlock@@AEBVIConstBlockSource@@AEBVBlockPos@@V?$optional_ref@$$CBVGetCollisionShapeInterface@@@@@Z
    virtual class AABB
    getCollisionShape(class Block const&, class IConstBlockSource const&, class BlockPos const&, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    // vIndex: 6, symbol:
    // ?getCollisionShapeForCamera@BlockLegacy@@UEBA_NAEAVAABB@@AEBVBlock@@AEBVIConstBlockSource@@AEBVBlockPos@@@Z
    virtual bool
    getCollisionShapeForCamera(class AABB&, class Block const&, class IConstBlockSource const&, class BlockPos const&)
        const;

    // vIndex: 7, symbol:
    // ?addCollisionShapes@BlockLegacy@@UEBA_NAEBVBlock@@AEBVIConstBlockSource@@AEBVBlockPos@@PEBVAABB@@AEAV?$vector@VAABB@@V?$allocator@VAABB@@@std@@@std@@V?$optional_ref@$$CBVGetCollisionShapeInterface@@@@@Z
    virtual bool addCollisionShapes(
        class Block const&                                         block,
        class IConstBlockSource const&                             region,
        class BlockPos const&                                      pos,
        class AABB const*                                          intersectTestBox,
        std::vector<class AABB>&                                   inoutBoxes,
        class optional_ref<class GetCollisionShapeInterface const> entity
    ) const;

    // vIndex: 8, symbol:
    // ?addAABBs@BlockLegacy@@UEBAXAEBVBlock@@AEBVIConstBlockSource@@AEBVBlockPos@@PEBVAABB@@AEAV?$vector@VAABB@@V?$allocator@VAABB@@@std@@@std@@@Z
    virtual void addAABBs(
        class Block const&             block,
        class IConstBlockSource const& region,
        class BlockPos const&          pos,
        class AABB const*              intersectTestBox,
        std::vector<class AABB>&       inoutBoxes
    ) const;

    // vIndex: 9, symbol:
    // ?getOutline@BlockLegacy@@UEBAAEBVAABB@@AEBVBlock@@AEBVIConstBlockSource@@AEBVBlockPos@@AEAV2@@Z
    virtual class AABB const&
    getOutline(class Block const&, class IConstBlockSource const&, class BlockPos const&, class AABB&) const;

    // vIndex: 10, symbol:
    // ?getVisualShapeInWorld@BlockLegacy@@UEBAAEBVAABB@@AEBVBlock@@AEBVIConstBlockSource@@AEBVBlockPos@@AEAV2@@Z
    virtual class AABB const&
    getVisualShapeInWorld(class Block const&, class IConstBlockSource const&, class BlockPos const&, class AABB&) const;

    // vIndex: 11, symbol: ?getVisualShape@BlockLegacy@@UEBAAEBVAABB@@AEBVBlock@@AEAV2@@Z
    virtual class AABB const& getVisualShape(class Block const&, class AABB&) const;

    // vIndex: 12, symbol: ?getUIShape@BlockLegacy@@UEBAAEBVAABB@@AEBVBlock@@AEAV2@@Z
    virtual class AABB const& getUIShape(class Block const& block, class AABB& bufferAABB) const;

    // vIndex: 13, symbol:
    // ?getLiquidClipVolume@BlockLegacy@@UEBA_NAEBVBlock@@AEAVBlockSource@@AEBVBlockPos@@AEAVAABB@@@Z
    virtual bool getLiquidClipVolume(class Block const&, class BlockSource&, class BlockPos const&, class AABB&) const;

    // vIndex: 14, symbol: ?isObstructingChests@BlockLegacy@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
    virtual bool
    isObstructingChests(class BlockSource& region, class BlockPos const& pos, class Block const& thisBlock) const;

    // vIndex: 15, symbol: ?randomlyModifyPosition@BlockLegacy@@UEBA?AVVec3@@AEBVBlockPos@@AEAH@Z
    virtual class Vec3 randomlyModifyPosition(class BlockPos const& pos, int& seed) const;

    // vIndex: 16, symbol: ?randomlyModifyPosition@BlockLegacy@@UEBA?AVVec3@@AEBVBlockPos@@@Z
    virtual class Vec3 randomlyModifyPosition(class BlockPos const& pos) const;

    // vIndex: 17, symbol: ?onProjectileHit@BlockLegacy@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEBVActor@@@Z
    virtual void
    onProjectileHit(class BlockSource& region, class BlockPos const& pos, class Actor const& projectile) const;

    // vIndex: 18, symbol: ?onLightningHit@BlockLegacy@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void onLightningHit(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 19, symbol:
    // ?liquidCanFlowIntoFromDirection@BlockLegacy@@UEBA_NEAEBV?$function@$$A6AAEBVBlock@@AEBVBlockPos@@@Z@std@@AEBVBlockPos@@@Z
    virtual bool liquidCanFlowIntoFromDirection(
        uchar                                                           flowIntoFacing,
        std::function<class Block const&(class BlockPos const&)> const& getBlock,
        class BlockPos const&                                           pos
    ) const;

    // vIndex: 20, symbol: ?hasVariableLighting@BlockLegacy@@UEBA_NXZ
    virtual bool hasVariableLighting() const;

    // vIndex: 21, symbol: ?isStrippable@BlockLegacy@@UEBA_NAEBVBlock@@@Z
    virtual bool isStrippable(class Block const& srcBlock) const;

    // vIndex: 22, symbol: ?getStrippedBlock@BlockLegacy@@UEBAAEBVBlock@@AEBV2@@Z
    virtual class Block const& getStrippedBlock(class Block const& srcBlock) const;

    // vIndex: 23, symbol: ?canProvideSupport@BlockLegacy@@UEBA_NAEBVBlock@@EW4BlockSupportType@@@Z
    virtual bool canProvideSupport(class Block const& block, uchar face, ::BlockSupportType type) const;

    // vIndex: 24, symbol: ?canProvideMultifaceSupport@BlockLegacy@@UEBA_NAEBVBlock@@E@Z
    virtual bool canProvideMultifaceSupport(class Block const& block, uchar face) const;

    // vIndex: 25, symbol: ?canConnect@BlockLegacy@@UEBA_NAEBVBlock@@E0@Z
    virtual bool canConnect(class Block const&, uchar toOther, class Block const& thisBlock) const;

    // vIndex: 26, symbol: ?tryGetCopperBehavior@BlockLegacy@@UEBAPEBVCopperBehavior@@XZ
    virtual class CopperBehavior const* tryGetCopperBehavior() const;

    // vIndex: 27, symbol: ?canDamperVibrations@BlockLegacy@@UEBA_NXZ
    virtual bool canDamperVibrations() const;

    // vIndex: 28, symbol: ?canOccludeVibrations@BlockLegacy@@UEBA_NXZ
    virtual bool canOccludeVibrations() const;

    // vIndex: 29, symbol: ?isStemBlock@BlockLegacy@@UEBA_NXZ
    virtual bool isStemBlock() const;

    // vIndex: 30, symbol: ?isContainerBlock@BlockLegacy@@UEBA_NXZ
    virtual bool isContainerBlock() const;

    // vIndex: 31, symbol: ?isCraftingBlock@BlockLegacy@@UEBA_NXZ
    virtual bool isCraftingBlock() const;

    // vIndex: 32, symbol: ?isWaterBlocking@BlockLegacy@@UEBA_NXZ
    virtual bool isWaterBlocking() const;

    // vIndex: 33, symbol: ?isFenceBlock@BlockLegacy@@UEBA_NXZ
    virtual bool isFenceBlock() const;

    // vIndex: 34, symbol: ?isFenceGateBlock@BlockLegacy@@UEBA_NXZ
    virtual bool isFenceGateBlock() const;

    // vIndex: 35, symbol: ?isThinFenceBlock@BlockLegacy@@UEBA_NXZ
    virtual bool isThinFenceBlock() const;

    // vIndex: 36, symbol: ?isWallBlock@BlockLegacy@@UEBA_NXZ
    virtual bool isWallBlock() const;

    // vIndex: 37, symbol: ?isStairBlock@BlockLegacy@@UEBA_NXZ
    virtual bool isStairBlock() const;

    // vIndex: 38, symbol: ?isSlabBlock@BlockLegacy@@UEBA_NXZ
    virtual bool isSlabBlock() const;

    // vIndex: 39, symbol: ?isDoubleSlabBlock@BlockLegacy@@UEBA_NXZ
    virtual bool isDoubleSlabBlock() const;

    // vIndex: 40, symbol: ?isDoorBlock@BlockLegacy@@UEBA_NXZ
    virtual bool isDoorBlock() const;

    // vIndex: 41, symbol: ?isRailBlock@BlockLegacy@@UEBA_NXZ
    virtual bool isRailBlock() const;

    // vIndex: 42, symbol: ?isButtonBlock@BlockLegacy@@UEBA_NXZ
    virtual bool isButtonBlock() const;

    // vIndex: 43, symbol: ?isLeverBlock@BlockLegacy@@UEBA_NXZ
    virtual bool isLeverBlock() const;

    // vIndex: 44, symbol: ?isCandleCakeBlock@BlockLegacy@@UEBA_NXZ
    virtual bool isCandleCakeBlock() const;

    // vIndex: 45, symbol: ?isMultifaceBlock@BlockLegacy@@UEBA_NXZ
    virtual bool isMultifaceBlock() const;

    // vIndex: 46, symbol: ?isSignalSource@BlockLegacy@@UEBA_NXZ
    virtual bool isSignalSource() const;

    // vIndex: 47, symbol: ?canBeOriginalSurface@BlockLegacy@@UEBA_NXZ
    virtual bool canBeOriginalSurface() const;

    // vIndex: 48, symbol: ?isSilentWhenJumpingOff@BlockLegacy@@UEBA_NXZ
    virtual bool isSilentWhenJumpingOff() const;

    // vIndex: 49, symbol: ?isValidAuxValue@BlockLegacy@@UEBA_NH@Z
    virtual bool isValidAuxValue(int value) const;

    // vIndex: 50, symbol: ?canFillAtPos@BlockLegacy@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
    virtual bool canFillAtPos(class BlockSource& region, class BlockPos const& pos, class Block const& block) const;

    // vIndex: 51, symbol: ?sanitizeFillBlock@BlockLegacy@@UEBAAEBVBlock@@AEBV2@@Z
    virtual class Block const& sanitizeFillBlock(class Block const&) const;

    // vIndex: 52, symbol: ?onFillBlock@BlockLegacy@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
    virtual void onFillBlock(class BlockSource& region, class BlockPos const& pos, class Block const& block) const;

    // vIndex: 53, symbol: ?getDirectSignal@BlockLegacy@@UEBAHAEAVBlockSource@@AEBVBlockPos@@H@Z
    virtual int getDirectSignal(class BlockSource& region, class BlockPos const& pos, int dir) const;

    // vIndex: 54, symbol: ?canBeDestroyedByWaterSpread@BlockLegacy@@UEBA_NXZ
    virtual bool canBeDestroyedByWaterSpread() const;

    // vIndex: 55, symbol: ?waterSpreadCausesSpawn@BlockLegacy@@UEBA_NXZ
    virtual bool waterSpreadCausesSpawn() const;

    // vIndex: 56, symbol: ?canContainLiquid@BlockLegacy@@UEBA_NXZ
    virtual bool canContainLiquid() const;

    // vIndex: 57, symbol: ?getRequiredMedium@BlockLegacy@@UEBA?AV?$optional@VHashedString@@@std@@XZ
    virtual std::optional<class HashedString> getRequiredMedium() const;

    // vIndex: 58, symbol:
    // ?shouldConnectToRedstone@BlockLegacy@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@W4Type@Direction@@@Z
    virtual bool shouldConnectToRedstone(class BlockSource&, class BlockPos const&, ::Direction::Type) const;

    // vIndex: 59, symbol: ?handlePrecipitation@BlockLegacy@@UEBAXAEAVBlockSource@@AEBVBlockPos@@MM@Z
    virtual void
    handlePrecipitation(class BlockSource& region, class BlockPos const& pos, float downfallAmount, float temperature)
        const;

    // vIndex: 60, symbol: ?canBeUsedInCommands@BlockLegacy@@UEBA_NAEBVBaseGameVersion@@@Z
    virtual bool canBeUsedInCommands(class BaseGameVersion const& baseGameVersion) const;

    // vIndex: 61, symbol: ?checkIsPathable@BlockLegacy@@UEBA_NAEAVActor@@AEBVBlockPos@@1@Z
    virtual bool
    checkIsPathable(class Actor& entity, class BlockPos const& lastPathPos, class BlockPos const& pathPos) const;

    // vIndex: 62, symbol: ?shouldDispense@BlockLegacy@@UEBA_NAEAVBlockSource@@AEAVContainer@@@Z
    virtual bool shouldDispense(class BlockSource& region, class Container& container) const;

    // vIndex: 63, symbol: ?dispense@BlockLegacy@@UEBA_NAEAVBlockSource@@AEAVContainer@@HAEBVVec3@@E@Z
    virtual bool
    dispense(class BlockSource& region, class Container& container, int slot, class Vec3 const& pos, uchar face) const;

    // vIndex: 64, symbol: ?transformOnFall@BlockLegacy@@UEBAXAEAVBlockSource@@AEBVBlockPos@@PEAVActor@@M@Z
    virtual void
    transformOnFall(class BlockSource& region, class BlockPos const& pos, class Actor* entity, float fallDistance)
        const;

    // vIndex: 65, symbol: ?onRedstoneUpdate@BlockLegacy@@UEBAXAEAVBlockSource@@AEBVBlockPos@@H_N@Z
    virtual void
    onRedstoneUpdate(class BlockSource& region, class BlockPos const& pos, int strength, bool isFirstTime) const;

    // vIndex: 66, symbol: ?onMove@BlockLegacy@@UEBAXAEAVBlockSource@@AEBVBlockPos@@1@Z
    virtual void onMove(class BlockSource& region, class BlockPos const& from, class BlockPos const& to) const;

    // vIndex: 67, symbol: ?detachesOnPistonMove@BlockLegacy@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual bool detachesOnPistonMove(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 68, symbol: ?movedByPiston@BlockLegacy@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void movedByPiston(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 69, symbol: ?onStructureBlockPlace@BlockLegacy@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void onStructureBlockPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 70, symbol: ?onStructureNeighborBlockPlace@BlockLegacy@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void onStructureNeighborBlockPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 71, symbol: ?setupRedstoneComponent@BlockLegacy@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void setupRedstoneComponent(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 72, symbol: ?getRedstoneProperty@BlockLegacy@@UEBA?AW4BlockProperty@@AEAVBlockSource@@AEBVBlockPos@@@Z
    virtual ::BlockProperty getRedstoneProperty(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 73, symbol:
    // ?updateEntityAfterFallOn@BlockLegacy@@UEBAXAEBVBlockPos@@AEAUUpdateEntityAfterFallOnInterface@@@Z
    virtual void
    updateEntityAfterFallOn(class BlockPos const& pos, struct UpdateEntityAfterFallOnInterface& entity) const;

    // vIndex: 74, symbol: ?isBounceBlock@BlockLegacy@@UEBA_NXZ
    virtual bool isBounceBlock() const;

    // vIndex: 75, symbol: ?isPreservingMediumWhenPlaced@BlockLegacy@@UEBA_NPEBV1@@Z
    virtual bool isPreservingMediumWhenPlaced(class BlockLegacy const*) const;

    // vIndex: 76, symbol: ?isFilteredOut@BlockLegacy@@UEBA_NW4BlockRenderLayer@@@Z
    virtual bool isFilteredOut(::BlockRenderLayer) const;

    // vIndex: 77, symbol: ?canRenderSelectionOverlay@BlockLegacy@@UEBA_NW4BlockRenderLayer@@@Z
    virtual bool canRenderSelectionOverlay(::BlockRenderLayer) const;

    // vIndex: 78, symbol: ?ignoreEntitiesOnPistonMove@BlockLegacy@@UEBA_NAEBVBlock@@@Z
    virtual bool ignoreEntitiesOnPistonMove(class Block const& block) const;

    // vIndex: 79, symbol:
    // ?onFertilized@BlockLegacy@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@PEAVActor@@W4FertilizerType@@@Z
    virtual bool
    onFertilized(class BlockSource& region, class BlockPos const& pos, class Actor* actor, ::FertilizerType fType)
        const;

    // vIndex: 80, symbol: ?mayConsumeFertilizer@BlockLegacy@@UEBA_NAEAVBlockSource@@@Z
    virtual bool mayConsumeFertilizer(class BlockSource& region) const;

    // vIndex: 81, symbol: ?canBeFertilized@BlockLegacy@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
    virtual bool
    canBeFertilized(class BlockSource& region, class BlockPos const& pos, class Block const& aboveBlock) const;

    // vIndex: 82, symbol: ?mayPick@BlockLegacy@@UEBA_NXZ
    virtual bool mayPick() const;

    // vIndex: 83, symbol: ?mayPick@BlockLegacy@@UEBA_NAEBVBlockSource@@AEBVBlock@@_N@Z
    virtual bool mayPick(class BlockSource const& region, class Block const& block, bool liquid) const;

    // vIndex: 84, symbol: ?mayPlace@BlockLegacy@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@E@Z
    virtual bool mayPlace(class BlockSource& region, class BlockPos const& pos, uchar face) const;

    // vIndex: 85, symbol: ?mayPlace@BlockLegacy@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual bool mayPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 86, symbol: ?mayPlaceOn@BlockLegacy@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual bool mayPlaceOn(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 87, symbol:
    // ?tryToPlace@BlockLegacy@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@PEBUActorBlockSyncMessage@@@Z
    virtual bool tryToPlace(
        class BlockSource&                  region,
        class BlockPos const&               pos,
        class Block const&                  block,
        struct ActorBlockSyncMessage const* syncMsg
    ) const;

    // vIndex: 88, symbol: ?tryToTill@BlockLegacy@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVActor@@AEAVItemStack@@@Z
    virtual bool
    tryToTill(class BlockSource& region, class BlockPos const& pos, class Actor& entity, class ItemStack& item) const;

    // vIndex: 89, symbol: ?breaksFallingBlocks@BlockLegacy@@UEBA_NAEBVBlock@@VBaseGameVersion@@@Z
    virtual bool breaksFallingBlocks(class Block const& block, class BaseGameVersion version) const;

    // vIndex: 90, symbol: ?destroy@BlockLegacy@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@PEAVActor@@@Z
    virtual void
    destroy(class BlockSource& region, class BlockPos const& pos, class Block const& block, class Actor* entitySource)
        const;

    // vIndex: 91, symbol: ?getIgnoresDestroyPermissions@BlockLegacy@@UEBA_NAEAVActor@@AEBVBlockPos@@@Z
    virtual bool getIgnoresDestroyPermissions(class Actor& entity, class BlockPos const& pos) const;

    // vIndex: 92, symbol: ?neighborChanged@BlockLegacy@@UEBAXAEAVBlockSource@@AEBVBlockPos@@1@Z
    virtual void
    neighborChanged(class BlockSource& region, class BlockPos const& pos, class BlockPos const& neighborPos) const;

    // vIndex: 93, symbol: ?getSecondPart@BlockLegacy@@UEBA_NAEBVIConstBlockSource@@AEBVBlockPos@@AEAV3@@Z
    virtual bool
    getSecondPart(class IConstBlockSource const& region, class BlockPos const& pos, class BlockPos& out) const;

    // vIndex: 94, symbol: ?playerWillDestroy@BlockLegacy@@UEBAPEBVBlock@@AEAVPlayer@@AEBVBlockPos@@AEBV2@@Z
    virtual class Block const*
    playerWillDestroy(class Player& player, class BlockPos const& pos, class Block const& block) const;

    // vIndex: 95, symbol: ?asItemInstance@BlockLegacy@@UEBA?AVItemInstance@@AEBVBlock@@PEBVBlockActor@@@Z
    virtual class ItemInstance asItemInstance(class Block const&, class BlockActor const*) const;

    // vIndex: 96, symbol:
    // ?trySpawnResourcesOnExplosion@BlockLegacy@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@AEAVRandomize@@M@Z
    virtual void trySpawnResourcesOnExplosion(
        class BlockSource&    region,
        class BlockPos const& pos,
        class Block const&    block,
        class Randomize&      randomize,
        float                 explosionRadius
    ) const;

    // vIndex: 97, symbol: ?getPlacementBlock@BlockLegacy@@UEBAAEBVBlock@@AEBVActor@@AEBVBlockPos@@EAEBVVec3@@H@Z
    virtual class Block const& getPlacementBlock(
        class Actor const&    by,
        class BlockPos const& pos,
        uchar                 face,
        class Vec3 const&     clickPos,
        int                   itemValue
    ) const;

    // vIndex: 98, symbol: ?calcVariant@BlockLegacy@@UEBAHAEAVBlockSource@@AEBVBlockPos@@AEBVColor@mce@@@Z
    virtual int
    calcVariant(class BlockSource& region, class BlockPos const& pos, class mce::Color const& baseColor) const;

    // vIndex: 99, symbol: ?isAttachedTo@BlockLegacy@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAV3@@Z
    virtual bool
    isAttachedTo(class BlockSource& region, class BlockPos const& pos, class BlockPos& outAttachedTo) const;

    // vIndex: 100, symbol: ?attack@BlockLegacy@@UEBA_NPEAVPlayer@@AEBVBlockPos@@@Z
    virtual bool attack(class Player* player, class BlockPos const& pos) const;

    // vIndex: 101, symbol: ?shouldTriggerEntityInside@BlockLegacy@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVActor@@@Z
    virtual bool
    shouldTriggerEntityInside(class BlockSource& region, class BlockPos const& pos, class Actor& entity) const;

    // vIndex: 102, symbol: ?canBeBuiltOver@BlockLegacy@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEBVBlockItem@@@Z
    virtual bool
    canBeBuiltOver(class BlockSource& region, class BlockPos const& pos, class BlockItem const& newItem) const;

    // vIndex: 103, symbol: ?canBeBuiltOver@BlockLegacy@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual bool canBeBuiltOver(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 104, symbol: ?triggerEvent@BlockLegacy@@UEBAXAEAVBlockSource@@AEBVBlockPos@@HH@Z
    virtual void triggerEvent(class BlockSource& region, class BlockPos const& pos, int b0, int b1) const;

    // vIndex: 105, symbol:
    // ?executeEvent@BlockLegacy@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVActor@@@Z
    virtual void executeEvent(
        class BlockSource&    region,
        class BlockPos const& pos,
        class Block const&    block,
        std::string const&    eventName,
        class Actor&          sourceEntity
    ) const;

    // vIndex: 106, symbol: ?getMobToSpawn@BlockLegacy@@UEBAPEBVMobSpawnerData@@AEBVSpawnConditions@@AEAVBlockSource@@@Z
    virtual class MobSpawnerData const*
    getMobToSpawn(class SpawnConditions const& conditions, class BlockSource& region) const;

    // vIndex: 107, symbol: ?shouldStopFalling@BlockLegacy@@UEBA_NAEAVActor@@@Z
    virtual bool shouldStopFalling(class Actor& entity) const;

    // vIndex: 108, symbol: ?pushesUpFallingBlocks@BlockLegacy@@UEBA_NXZ
    virtual bool pushesUpFallingBlocks() const;

    // vIndex: 109, symbol: ?canHaveExtraData@BlockLegacy@@UEBA_NXZ
    virtual bool canHaveExtraData() const;

    // vIndex: 110, symbol: ?hasComparatorSignal@BlockLegacy@@UEBA_NXZ
    virtual bool hasComparatorSignal() const;

    // vIndex: 111, symbol: ?getComparatorSignal@BlockLegacy@@UEBAHAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@E@Z
    virtual int
    getComparatorSignal(class BlockSource& region, class BlockPos const& pos, class Block const& block, uchar dir)
        const;

    // vIndex: 112, symbol: ?canSlide@BlockLegacy@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual bool canSlide(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 113, symbol: ?canInstatick@BlockLegacy@@UEBA_NXZ
    virtual bool canInstatick() const;

    // vIndex: 114, symbol: ?canSpawnAt@BlockLegacy@@UEBA_NAEBVBlockSource@@AEBVBlockPos@@@Z
    virtual bool canSpawnAt(class BlockSource const& region, class BlockPos const& pos) const;

    // vIndex: 115, symbol: ?notifySpawnedAt@BlockLegacy@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void notifySpawnedAt(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 116, symbol: ?causesFreezeEffect@BlockLegacy@@UEBA_NXZ
    virtual bool causesFreezeEffect() const;

    // vIndex: 117, symbol: ?getIconYOffset@BlockLegacy@@UEBAHXZ
    virtual int getIconYOffset() const;

    // vIndex: 118, symbol:
    // ?buildDescriptionId@BlockLegacy@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVBlock@@@Z
    virtual std::string buildDescriptionId(class Block const&) const;

    // vIndex: 119, symbol: ?isAuxValueRelevantForPicking@BlockLegacy@@UEBA_NXZ
    virtual bool isAuxValueRelevantForPicking() const;

    // vIndex: 120, symbol: ?getColor@BlockLegacy@@UEBAHAEBVBlock@@@Z
    virtual int getColor(class Block const& block) const;

    // vIndex: 121, symbol: ?getColor@BlockLegacy@@UEBAHAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
    virtual int getColor(class BlockSource& region, class BlockPos const& pos, class Block const& block) const;

    // vIndex: 122, symbol: ?getColorAtPos@BlockLegacy@@UEBAHAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual int getColorAtPos(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 123, symbol: ?getColorForParticle@BlockLegacy@@UEBAHAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
    virtual int
    getColorForParticle(class BlockSource& region, class BlockPos const& pos, class Block const& block) const;

    // vIndex: 124, symbol: ?isSeasonTinted@BlockLegacy@@UEBA_NAEBVBlock@@AEAVBlockSource@@AEBVBlockPos@@@Z
    virtual bool isSeasonTinted(class Block const& block, class BlockSource& region, class BlockPos const& p) const;

    // vIndex: 125, symbol: ?onGraphicsModeChanged@BlockLegacy@@UEAAXAEBUBlockGraphicsModeChangeContext@@@Z
    virtual void onGraphicsModeChanged(struct BlockGraphicsModeChangeContext const& context);

    // vIndex: 126, symbol: ?getShadeBrightness@BlockLegacy@@UEBAMAEBVBlock@@@Z
    virtual float getShadeBrightness(class Block const& block) const;

    // vIndex: 127, symbol: ?telemetryVariant@BlockLegacy@@UEBAHAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual int telemetryVariant(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 128, symbol: ?getVariant@BlockLegacy@@UEBAHAEBVBlock@@@Z
    virtual int getVariant(class Block const& block) const;

    // vIndex: 129, symbol: ?canSpawnOn@BlockLegacy@@UEBA_NPEAVActor@@@Z
    virtual bool canSpawnOn(class Actor*) const;

    // vIndex: 130, symbol: ?getRenderBlock@BlockLegacy@@UEBAAEBVBlock@@XZ
    virtual class Block const& getRenderBlock() const;

    // vIndex: 131, symbol: ?getMappedFace@BlockLegacy@@UEBAEEAEBVBlock@@@Z
    virtual uchar getMappedFace(uchar face, class Block const& block) const;

    // vIndex: 132, symbol: ?getFaceFlip@BlockLegacy@@UEBA?AW4Flip@@EAEBVBlock@@@Z
    virtual ::Flip getFaceFlip(uchar face, class Block const& block) const;

    // vIndex: 133, symbol: ?animateTickBedrockLegacy@BlockLegacy@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual void animateTickBedrockLegacy(class BlockSource&, class BlockPos const&, class Random&) const;

    // vIndex: 134, symbol: ?animateTick@BlockLegacy@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual void animateTick(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // vIndex: 135, symbol: ?init@BlockLegacy@@UEAAAEAV1@XZ
    virtual class BlockLegacy& init();

    // vIndex: 136, symbol: ?getLightEmission@BlockLegacy@@MEBA?AUBrightness@@AEBVBlock@@@Z
    virtual struct Brightness getLightEmission(class Block const&) const;

    // vIndex: 137, symbol: ?tryLegacyUpgrade@BlockLegacy@@UEBAPEBVBlock@@G@Z
    virtual class Block const* tryLegacyUpgrade(ushort) const;

    // vIndex: 138, symbol: ?dealsContactDamage@BlockLegacy@@UEBA_NAEBVActor@@AEBVBlock@@_N@Z
    virtual bool dealsContactDamage(class Actor const& actor, class Block const& block, bool isPathFinding) const;

    // vIndex: 139, symbol: ?tryGetInfested@BlockLegacy@@UEBAPEBVBlock@@AEBV2@@Z
    virtual class Block const* tryGetInfested(class Block const&) const;

    // vIndex: 140, symbol: ?tryGetUninfested@BlockLegacy@@UEBAPEBVBlock@@AEBV2@@Z
    virtual class Block const* tryGetUninfested(class Block const&) const;

    // vIndex: 141, symbol: ?_addHardCodedBlockComponents@BlockLegacy@@UEAAXAEBVExperiments@@@Z
    virtual void _addHardCodedBlockComponents(class Experiments const&);

    // vIndex: 142, symbol: ?onRemove@BlockLegacy@@MEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void onRemove(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 143, symbol: ?onExploded@BlockLegacy@@MEBAXAEAVBlockSource@@AEBVBlockPos@@PEAVActor@@@Z
    virtual void onExploded(class BlockSource& region, class BlockPos const& pos, class Actor* entitySource) const;

    // vIndex: 144, symbol: ?onStandOn@BlockLegacy@@MEBAXAEAVEntityContext@@AEBVBlockPos@@@Z
    virtual void onStandOn(class EntityContext& entity, class BlockPos const& pos) const;

    // vIndex: 145, symbol: ?onPlace@BlockLegacy@@MEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void onPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 146, symbol: ?shouldTickOnSetBlock@BlockLegacy@@MEBA_NXZ
    virtual bool shouldTickOnSetBlock() const;

    // vIndex: 147, symbol: ?tick@BlockLegacy@@MEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual void tick(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // vIndex: 148, symbol: ?randomTick@BlockLegacy@@MEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual void randomTick(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // vIndex: 149, symbol: ?isInteractiveBlock@BlockLegacy@@MEBA_NXZ
    virtual bool isInteractiveBlock() const;

    // vIndex: 150, symbol: ?use@BlockLegacy@@MEBA_NAEAVPlayer@@AEBVBlockPos@@EV?$optional@VVec3@@@std@@@Z
    virtual bool use(class Player& player, class BlockPos const& pos, uchar face, std::optional<class Vec3>) const;

    // vIndex: 151, symbol: ?use@BlockLegacy@@MEBA_NAEAVPlayer@@AEBVBlockPos@@E@Z
    virtual bool use(class Player&, class BlockPos const&, uchar) const;

    // vIndex: 152, symbol: ?allowStateMismatchOnPlacement@BlockLegacy@@MEBA_NAEBVBlock@@0@Z
    virtual bool allowStateMismatchOnPlacement(class Block const&, class Block const&) const;

    // vIndex: 153, symbol: ?canSurvive@BlockLegacy@@MEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual bool canSurvive(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 154, symbol: ?getRenderLayer@BlockLegacy@@MEBA?AW4BlockRenderLayer@@XZ
    virtual ::BlockRenderLayer getRenderLayer() const;

    // vIndex: 155, symbol:
    // ?getRenderLayer@BlockLegacy@@MEBA?AW4BlockRenderLayer@@AEBVBlock@@AEAVBlockSource@@AEBVBlockPos@@@Z
    virtual ::BlockRenderLayer
    getRenderLayer(class Block const& block, class BlockSource&, class BlockPos const& pos) const;

    // vIndex: 156, symbol: ?getExtraRenderLayers@BlockLegacy@@MEBAHXZ
    virtual int getExtraRenderLayers() const;

    // vIndex: 157, symbol: ?getLight@BlockLegacy@@MEBA?AUBrightness@@AEBVBlock@@@Z
    virtual struct Brightness getLight(class Block const&) const;

    // vIndex: 158, symbol: ?getEmissiveBrightness@BlockLegacy@@MEBA?AUBrightness@@AEBVBlock@@@Z
    virtual struct Brightness getEmissiveBrightness(class Block const&) const;

    // vIndex: 159, symbol: ?getMapColor@BlockLegacy@@MEBA?AVColor@mce@@AEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
    virtual class mce::Color getMapColor(class BlockSource&, class BlockPos const&, class Block const&) const;

    // vIndex: 160, symbol: ?_onHitByActivatingAttack@BlockLegacy@@EEBAXAEAVBlockSource@@AEBVBlockPos@@PEAVActor@@@Z
    virtual void _onHitByActivatingAttack(class BlockSource&, class BlockPos const&, class Actor*) const;

    // vIndex: 161, symbol:
    // ?_spawnAfterBreak@BlockLegacy@@EEBAXAEAVBlockSource@@AEBVBlock@@AEBVBlockPos@@AEBUResourceDropsContext@@@Z
    virtual void
    _spawnAfterBreak(class BlockSource&, class Block const&, class BlockPos const&, struct ResourceDropsContext const&)
        const;

    // vIndex: 162, symbol: ?entityInside@BlockLegacy@@EEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVActor@@@Z
    virtual void entityInside(class BlockSource&, class BlockPos const&, class Actor&) const;

    // symbol: ??0BlockLegacy@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBVMaterial@@@Z
    MCAPI BlockLegacy(std::string const& nameId, int id, class Material const& material);

    // symbol: ?_isDataDrivingVanillaBlocksAndItems@BlockLegacy@@QEBA_NXZ
    MCAPI bool _isDataDrivingVanillaBlocksAndItems() const;

    // symbol: ?addAABB@BlockLegacy@@QEBA_NAEBVAABB@@PEBV2@AEAV?$vector@VAABB@@V?$allocator@VAABB@@@std@@@std@@@Z
    MCAPI bool
    addAABB(class AABB const& shape, class AABB const* intersectTestBox, std::vector<class AABB>& inoutBoxes) const;

    // symbol: ?addBlockProperties@BlockLegacy@@QEAAAEAV1@W4BlockProperty@@@Z
    MCAPI class BlockLegacy& addBlockProperties(::BlockProperty);

    // symbol: ?addComponent@BlockLegacy@@QEAAAEAV1@AEBUBlockComponentDescription@@@Z
    MCAPI class BlockLegacy& addComponent(struct BlockComponentDescription const&);

    // symbol:
    // ?addGetPlacementBlockCallback@BlockLegacy@@QEAAXV?$unique_ptr@VIGetPlacementBlockCallback@BlockTrait@@U?$default_delete@VIGetPlacementBlockCallback@BlockTrait@@@std@@@std@@@Z
    MCAPI void addGetPlacementBlockCallback(std::unique_ptr<class BlockTrait::IGetPlacementBlockCallback> callback);

    // symbol: ?addState@BlockLegacy@@QEAAAEAV1@AEBVBlockState@@@Z
    MCAPI class BlockLegacy& addState(class BlockState const& state);

    // symbol: ?addState@BlockLegacy@@QEAAAEAV1@AEBVBlockState@@_K@Z
    MCAPI class BlockLegacy& addState(class BlockState const& state, uint64 variationCount);

    // symbol: ?addTag@BlockLegacy@@QEAAAEAV1@AEBVHashedString@@@Z
    MCAPI class BlockLegacy& addTag(class HashedString const& tag);

    // symbol: ?addTrait@BlockLegacy@@QEAAAEAV1@AEBVITrait@BlockTrait@@@Z
    MCAPI class BlockLegacy& addTrait(class BlockTrait::ITrait const&);

    // symbol: ?anyOf@BlockLegacy@@QEBA_NV?$initializer_list@V?$reference_wrapper@$$CBVHashedString@@@std@@@std@@@Z
    MCAPI bool anyOf(std::initializer_list<std::reference_wrapper<class HashedString const>>) const;

    // symbol:
    // ?anyOf@BlockLegacy@@QEBA_NAEBV?$vector@V?$reference_wrapper@$$CBVHashedString@@@std@@V?$allocator@V?$reference_wrapper@$$CBVHashedString@@@std@@@2@@std@@@Z
    MCAPI bool anyOf(std::vector<std::reference_wrapper<class HashedString const>> const&) const;

    // symbol: ?canProvideFullSupport@BlockLegacy@@QEBA_NAEBVBlock@@E@Z
    MCAPI bool canProvideFullSupport(class Block const& block, uchar face) const;

    // symbol: ?createBlockPermutations@BlockLegacy@@QEAAXI@Z
    MCAPI void createBlockPermutations(uint latestUpdaterVersion);

    // symbol: ?createWeakPtr@BlockLegacy@@QEBA?AV?$WeakPtr@VBlockLegacy@@@@XZ
    MCAPI class WeakPtr<class BlockLegacy> createWeakPtr() const;

    // symbol:
    // ?executeEvent@BlockLegacy@@QEBAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVRenderParams@@@Z
    MCAPI void executeEvent(std::string const& name, class RenderParams& params) const;

    // symbol: ?finalizeBlockComponentStorage@BlockLegacy@@QEAAXXZ
    MCAPI void finalizeBlockComponentStorage();

    // symbol: ?finalizeBlockCustomComponentEvents@BlockLegacy@@QEAAXAEAVScriptBlockCustomComponentsFinalizer@@@Z
    MCAPI void finalizeBlockCustomComponentEvents(class ScriptBlockCustomComponentsFinalizer&);

    // symbol: ?forEachAlteredBlockState@BlockLegacy@@QEBAXV?$function@$$A6A_NAEBVBlockState@@@Z@std@@@Z
    MCAPI void forEachAlteredBlockState(std::function<bool(class BlockState const&)>) const;

    // symbol: ?forEachBlockPermutation@BlockLegacy@@QEBAXV?$function@$$A6A_NAEBVBlock@@@Z@std@@@Z
    MCAPI void forEachBlockPermutation(std::function<bool(class Block const&)> callback) const;

    // symbol: ?forEachBlockStateInstance@BlockLegacy@@QEBAXV?$function@$$A6A_NAEBVBlockStateInstance@@@Z@std@@@Z
    MCAPI void forEachBlockStateInstance(std::function<bool(class BlockStateInstance const&)> callback) const;

    // symbol: ?getBlockEntityType@BlockLegacy@@QEBA?AW4BlockActorType@@XZ
    MCAPI ::BlockActorType getBlockEntityType() const;

    // symbol: ?getBlockItemId@BlockLegacy@@QEBAFXZ
    MCAPI short getBlockItemId() const;

    // symbol: ?getBlockState@BlockLegacy@@QEBAPEBVBlockState@@AEBVHashedString@@@Z
    MCAPI class BlockState const* getBlockState(class HashedString const& name) const;

    // symbol: ?getBlockStateGroup@BlockLegacy@@QEAAPEAVBlockStateGroup@@XZ
    MCAPI class BlockStateGroup* getBlockStateGroup();

    // symbol: ?getCommandNames@BlockLegacy@@QEBA?AV?$vector@UCommandName@@V?$allocator@UCommandName@@@std@@@std@@XZ
    MCAPI std::vector<struct CommandName> getCommandNames() const;

    // symbol: ?getCreativeCategory@BlockLegacy@@QEBA?AW4CreativeItemCategory@@XZ
    MCAPI ::CreativeItemCategory getCreativeCategory() const;

    // symbol:
    // ?getDebugText@BlockLegacy@@QEBAXAEAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@AEBVBlockPos@@@Z
    MCAPI void getDebugText(std::vector<std::string>& outputInfo, class BlockPos const& debugPos) const;

    // symbol: ?getDefaultState@BlockLegacy@@QEBAAEBVBlock@@XZ
    MCAPI class Block const& getDefaultState() const;

    // symbol: ?getDescriptionId@BlockLegacy@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string const& getDescriptionId() const;

    // symbol: ?getMaterial@BlockLegacy@@QEBAAEBVMaterial@@XZ
    MCAPI class Material const& getMaterial() const;

    // symbol: ?getNamespace@BlockLegacy@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string const& getNamespace() const;

    // symbol: ?getRawNameHash@BlockLegacy@@QEBAAEBVHashedString@@XZ
    MCAPI class HashedString const& getRawNameHash() const;

    // symbol: ?getRawNameId@BlockLegacy@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string const& getRawNameId() const;

    // symbol: ?getRequiredBaseGameVersion@BlockLegacy@@QEBAAEBVBaseGameVersion@@XZ
    MCAPI class BaseGameVersion const& getRequiredBaseGameVersion() const;

    // symbol:
    // ?getResourceDrops@BlockLegacy@@QEBA?AUResourceDrops@@AEBVBlock@@AEAVRandomize@@AEBUResourceDropsContext@@@Z
    MCAPI struct ResourceDrops
    getResourceDrops(class Block const& block, class Randomize& randomize, struct ResourceDropsContext const&) const;

    // symbol: ?getStateFromLegacyData@BlockLegacy@@QEBAAEBVBlock@@G@Z
    MCAPI class Block const& getStateFromLegacyData(ushort data) const;

    // symbol: ?getUniquePermutations@BlockLegacy@@QEBA_KXZ
    MCAPI uint64 getUniquePermutations() const;

    // symbol: ?hasNonLegacyState@BlockLegacy@@QEBA_NAEB_K@Z
    MCAPI bool hasNonLegacyState(uint64 const&) const;

    // symbol: ?hasProperty@BlockLegacy@@QEBA_NW4BlockProperty@@@Z
    MCAPI bool hasProperty(::BlockProperty type) const;

    // symbol: ?hasResourceDropsStrategy@BlockLegacy@@QEBA_NXZ
    MCAPI bool hasResourceDropsStrategy() const;

    // symbol: ?hasState@BlockLegacy@@QEBA_NAEBVBlockState@@@Z
    MCAPI bool hasState(class BlockState const& stateType) const;

    // symbol: ?hasState@BlockLegacy@@QEBA_NAEBVHashedString@@@Z
    MCAPI bool hasState(class HashedString const& name) const;

    // symbol: ?hasTag@BlockLegacy@@QEBA_NAEBVHashedString@@@Z
    MCAPI bool hasTag(class HashedString const& tag) const;

    // symbol: ?initializeBlockStateGroup@BlockLegacy@@QEAAXXZ
    MCAPI void initializeBlockStateGroup();

    // symbol: ?isAir@BlockLegacy@@QEBA_NXZ
    MCAPI bool isAir() const;

    // symbol: ?isFullAndOpaque@BlockLegacy@@QEBA_NXZ
    MCAPI bool isFullAndOpaque() const;

    // symbol: ?isOpaqueFullBlock@BlockLegacy@@QEBA_NXZ
    MCAPI bool isOpaqueFullBlock() const;

    // symbol: ?isSolid@BlockLegacy@@QEBA_NXZ
    MCAPI bool isSolid() const;

    // symbol: ?isVanilla@BlockLegacy@@QEBA_NXZ
    MCAPI bool isVanilla() const;

    // symbol: ?matchesStates@BlockLegacy@@QEBA_NAEBV1@@Z
    MCAPI bool matchesStates(class BlockLegacy const& blockType) const;

    // symbol: ??8BlockLegacy@@QEBA_NAEBVHashedString@@@Z
    MCAPI bool operator==(class HashedString const&) const;

    // symbol: ?overrideBlockProperties@BlockLegacy@@QEAAAEAV1@W4BlockProperty@@@Z
    MCAPI class BlockLegacy& overrideBlockProperties(::BlockProperty);

    // symbol: ?setAllowsRunes@BlockLegacy@@QEAAAEAV1@_N@Z
    MCAPI class BlockLegacy& setAllowsRunes(bool interference);

    // symbol: ?setBlockTintType@BlockLegacy@@QEAAAEAV1@W4BlockTintType@@@Z
    MCAPI class BlockLegacy& setBlockTintType(::BlockTintType);

    // symbol: ?setCanBeExtraBlock@BlockLegacy@@QEAAAEAV1@_N@Z
    MCAPI class BlockLegacy& setCanBeExtraBlock(bool state);

    // symbol: ?setCanBeOriginalSurface@BlockLegacy@@QEAAAEAV1@_N@Z
    MCAPI class BlockLegacy& setCanBeOriginalSurface(bool);

    // symbol: ?setCanDropWithAnyTool@BlockLegacy@@QEAAX_N@Z
    MCAPI void setCanDropWithAnyTool(bool);

    // symbol: ?setCategory@BlockLegacy@@QEAAAEAV1@W4CreativeItemCategory@@@Z
    MCAPI class BlockLegacy& setCategory(::CreativeItemCategory creativeCategory);

    // symbol: ?setClientPredictionOverride@BlockLegacy@@QEAAXW4BlockClientPredictionOverrides@@_N@Z
    MCAPI void setClientPredictionOverride(::BlockClientPredictionOverrides, bool);

    // symbol: ?setCreativeEnumState@BlockLegacy@@QEAAAEAV1@AEBVBlockState@@@Z
    MCAPI class BlockLegacy& setCreativeEnumState(class BlockState const& state);

    // symbol:
    // ?setCreativeGroup@BlockLegacy@@QEAAAEAV1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI class BlockLegacy& setCreativeGroup(std::string const&);

    // symbol: ?setDefaultState@BlockLegacy@@QEAAXAEBVBlock@@@Z
    MCAPI void setDefaultState(class Block const& block);

    // symbol: ?setDestroyTime@BlockLegacy@@QEAAAEAV1@M@Z
    MCAPI class BlockLegacy& setDestroyTime(float destroySpeed);

    // symbol: ?setDestroyTime@BlockLegacy@@QEAAAEAV1@MM@Z
    MCAPI class BlockLegacy& setDestroyTime(float, float);

    // symbol: ?setEnableDataDrivenVanillaBlocksAndItems@BlockLegacy@@QEAAX_N@Z
    MCAPI void setEnableDataDrivenVanillaBlocksAndItems(bool);

    // symbol: ?setExperienceDrop@BlockLegacy@@QEAAAEAV1@UIntRange@@@Z
    MCAPI class BlockLegacy& setExperienceDrop(struct IntRange);

    // symbol: ?setFlammable@BlockLegacy@@QEAAAEAV1@W4FlameOdds@@W4BurnOdds@@W4LavaFlammable@@@Z
    MCAPI class BlockLegacy& setFlammable(::FlameOdds, ::BurnOdds, ::LavaFlammable);

    // symbol: ?setIgnoreBlockForInsideCubeRenderer@BlockLegacy@@QEAAX_N@Z
    MCAPI void setIgnoreBlockForInsideCubeRenderer(bool ignoreBlockForInsideCubeRenderer);

    // symbol: ?setIsHiddenInCommands@BlockLegacy@@QEAAAEAV1@_N@Z
    MCAPI class BlockLegacy& setIsHiddenInCommands(bool);

    // symbol: ?setIsInteraction@BlockLegacy@@QEAAX_N@Z
    MCAPI void setIsInteraction(bool canUse);

    // symbol: ?setIsVanillaBlock@BlockLegacy@@QEAAX_N@Z
    MCAPI void setIsVanillaBlock(bool isVanilla);

    // symbol: ?setLightBlock@BlockLegacy@@QEAAAEAV1@UBrightness@@@Z
    MCAPI class BlockLegacy& setLightBlock(struct Brightness brightness);

    // symbol: ?setLightEmission@BlockLegacy@@QEAAAEAV1@UBrightness@@@Z
    MCAPI class BlockLegacy& setLightEmission(struct Brightness brightness);

    // symbol: ?setMapColor@BlockLegacy@@QEAAAEAV1@AEBVColor@mce@@@Z
    MCAPI class BlockLegacy& setMapColor(class mce::Color const& color);

    // symbol: ?setMinRequiredBaseGameVersion@BlockLegacy@@QEAAAEAV1@AEBVBaseGameVersion@@@Z
    MCAPI class BlockLegacy& setMinRequiredBaseGameVersion(class BaseGameVersion const& baseGameVersion);

    // symbol: ?setNameId@BlockLegacy@@QEAAAEAV1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI class BlockLegacy& setNameId(std::string const& id);

    // symbol:
    // ?setOnlyPermutationandDefaultState@BlockLegacy@@QEAAXV?$unique_ptr@VBlock@@U?$default_delete@VBlock@@@std@@@std@@@Z
    MCAPI void setOnlyPermutationandDefaultState(std::unique_ptr<class Block> block);

    // symbol: ?setOpaqueFullBlock@BlockLegacy@@QEAAX_N@Z
    MCAPI void setOpaqueFullBlock(bool);

    // symbol: ?setPreFlatteningName@BlockLegacy@@QEAAXAEBVHashedString@@@Z
    MCAPI void setPreFlatteningName(class HashedString const&);

    // symbol: ?setPushesOutItems@BlockLegacy@@QEAAX_N@Z
    MCAPI void setPushesOutItems(bool pushesOutItems);

    // symbol: ?setRandomTicking@BlockLegacy@@QEBAX_N@Z
    MCAPI void setRandomTicking(bool tick) const;

    // symbol: ?setRandomTickingExtraLayer@BlockLegacy@@QEBAX_N@Z
    MCAPI void setRandomTickingExtraLayer(bool tick) const;

    // symbol:
    // ?setResourceDropsStrategy@BlockLegacy@@QEAAXV?$unique_ptr@VIResourceDropsStrategy@@U?$default_delete@VIResourceDropsStrategy@@@std@@@std@@@Z
    MCAPI void setResourceDropsStrategy(std::unique_ptr<class IResourceDropsStrategy>);

    // symbol: ?setSolid@BlockLegacy@@QEAAX_N@Z
    MCAPI void setSolid(bool solid);

    // symbol: ?setVisualShape@BlockLegacy@@QEAAXAEBVAABB@@@Z
    MCAPI void setVisualShape(class AABB const& shape);

    // symbol: ?setVisualShape@BlockLegacy@@QEAAXAEBVVec3@@0@Z
    MCAPI void setVisualShape(class Vec3 const& min, class Vec3 const& max);

    // symbol: ?shouldTriggerOnStandOn@BlockLegacy@@QEBA_NAEAVActor@@AEBVBlockPos@@@Z
    MCAPI bool shouldTriggerOnStandOn(class Actor& entity, class BlockPos const& pos) const;

    // symbol:
    // ?spawnResources@BlockLegacy@@QEBAXAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@AEAVRandomize@@AEBUResourceDropsContext@@@Z
    MCAPI void
    spawnResources(class BlockSource& region, class BlockPos const& pos, class Block const& block, class Randomize& randomize, struct ResourceDropsContext const&)
        const;

    // symbol: ?tryGetStateFromLegacyData@BlockLegacy@@QEBAPEBVBlock@@G@Z
    MCAPI class Block const* tryGetStateFromLegacyData(ushort) const;

    // symbol:
    // ?updateTallestCollisionShape@BlockLegacy@@QEBA_NAEBVBlock@@AEBVBlockSource@@AEBVBlockPos@@AEBVAABB@@V?$optional_ref@$$CBVGetCollisionShapeInterface@@@@AEAV5@AEBVVec3@@AEAM@Z
    MCAPI bool
    updateTallestCollisionShape(class Block const& block, class BlockSource const& region, class BlockPos const& pos, class AABB const& intersectTestBox, class optional_ref<class GetCollisionShapeInterface const> entity, class AABB& result, class Vec3 const&, float&)
        const;

    // symbol:
    // ?buildDescriptionIdFromNameInfo@BlockLegacy@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBUNameInfo@1@@Z
    MCAPI static std::string buildDescriptionIdFromNameInfo(struct BlockLegacy::NameInfo const&);

    // symbol:
    // ?extractBlockNameInfo@BlockLegacy@@SA?AUNameInfo@1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI static struct BlockLegacy::NameInfo extractBlockNameInfo(std::string const& name);

    // symbol:
    // ?getConnectedDirections@BlockLegacy@@SA?AUHorizontalDirectionBits@1@AEBVBlock@@AEBVBlockPos@@AEBVIConstBlockSource@@@Z
    MCAPI static struct BlockLegacy::HorizontalDirectionBits getConnectedDirections(
        class Block const&             thisBlock,
        class BlockPos const&          pos,
        class IConstBlockSource const& region
    );

    // symbol: ?getPlacementFacingAll@BlockLegacy@@SAEAEBVActor@@AEBVBlockPos@@M@Z
    MCAPI static uchar
    getPlacementFacingAll(class Actor const& entity, class BlockPos const& pos, float yRotOffsetDegree);

    // symbol: ?getPlacementFacingAllExceptAxisY@BlockLegacy@@SAEAEBVActor@@AEBVBlockPos@@M@Z
    MCAPI static uchar
    getPlacementFacingAllExceptAxisY(class Actor const& entity, class BlockPos const& pos, float yRotOffsetDegree);

    // symbol: ?popResource@BlockLegacy@@SAPEAVItemActor@@AEAVBlockSource@@AEBVBlockPos@@AEBVItemInstance@@@Z
    MCAPI static class ItemActor*
    popResource(class BlockSource& region, class BlockPos const& pos, class ItemInstance const& itemInstance);

    // symbol: ?popResource@BlockLegacy@@SAPEAVItemActor@@AEAVBlockSource@@AEBVBlockPos@@AEBVItemStack@@@Z
    MCAPI static class ItemActor*
    popResource(class BlockSource& region, class BlockPos const& pos, class ItemStack const& item);

    // symbol: ?BLOCK_DESCRIPTION_PREFIX@BlockLegacy@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const BLOCK_DESCRIPTION_PREFIX;

    // symbol: ?SIZE_OFFSET@BlockLegacy@@2MB
    MCAPI static float const SIZE_OFFSET;

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?_getBlockShape@BlockLegacy@@IEBA?AW4BlockShape@@XZ
    MCAPI ::BlockShape _getBlockShape() const;

    // symbol: ?forEachBlockPermutationMutable@BlockLegacy@@IEAA_NV?$function@$$A6A_NAEAVBlock@@@Z@std@@@Z
    MCAPI bool forEachBlockPermutationMutable(std::function<bool(class Block&)> callback);

    // symbol: ?getBurnOdds@BlockLegacy@@IEBAHXZ
    MCAPI int getBurnOdds() const;

    // symbol: ?getDestroySpeed@BlockLegacy@@IEBAMXZ
    MCAPI float getDestroySpeed() const;

    // symbol: ?getExplosionResistance@BlockLegacy@@IEBAMXZ
    MCAPI float getExplosionResistance() const;

    // symbol: ?getFlameOdds@BlockLegacy@@IEBAHXZ
    MCAPI int getFlameOdds() const;

    // symbol: ?getFriction@BlockLegacy@@IEBAMXZ
    MCAPI float getFriction() const;

    // symbol: ?onFallOnBase@BlockLegacy@@IEBAXAEAUBlockFallOnEvent@BlockEvents@@@Z
    MCAPI void onFallOnBase(struct BlockEvents::BlockFallOnEvent&) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_executeEvent@BlockLegacy@@AEBAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$vector@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@$$CBV12@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@$$CBV12@@std@@@2@@3@AEAVRenderParams@@@Z
    MCAPI void _executeEvent(
        std::string const&                                            name,
        std::vector<std::pair<std::string const, std::string const>>& eventStack,
        class RenderParams&                                           params
    ) const;

    // symbol:
    // ?_forceExecuteTrigger@BlockLegacy@@AEBAXAEBVDefinitionTrigger@@AEAV?$vector@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@$$CBV12@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@$$CBV12@@std@@@2@@std@@AEAVRenderParams@@@Z
    MCAPI void _forceExecuteTrigger(
        class DefinitionTrigger const&                                trigger,
        std::vector<std::pair<std::string const, std::string const>>& eventStack,
        class RenderParams&                                           params
    ) const;

    // symbol: ?_tryLookupAlteredStateCollection@BlockLegacy@@AEBA?AV?$optional@H@std@@_KG@Z
    MCAPI std::optional<int> _tryLookupAlteredStateCollection(uint64 stateId, ushort) const;

    // symbol: ?_trySetStateFromAlteredStateCollection@BlockLegacy@@AEBAPEBVBlock@@_KHG@Z
    MCAPI class Block const* _trySetStateFromAlteredStateCollection(uint64 stateId, int val, ushort) const;

    // NOLINTEND
};
