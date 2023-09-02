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
#include "mc/world/level/block/utils/BlockActorType.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockShape.h"
#include "mc/world/level/block/utils/BlockSupportType.h"
#include "mc/world/level/block/utils/BlockTintType.h"

// auto generated forward declare list
// clang-format off
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
        AlteredStateCollection& operator=(AlteredStateCollection const&) = delete;
        AlteredStateCollection(AlteredStateCollection const&)            = delete;
        AlteredStateCollection()                                         = delete;

        // protected:
        // NOLINTBEGIN
        // symbol: ?_checkVersioningRequirements@AlteredStateCollection@BlockLegacy@@KA_NAEBVSemVersion@@@Z
        MCAPI static bool _checkVersioningRequirements(class SemVersion const&);

        // NOLINTEND
    };

    struct HorizontalDirectionBits {
    public:
        // prevent constructor by default
        HorizontalDirectionBits& operator=(HorizontalDirectionBits const&) = delete;
        HorizontalDirectionBits(HorizontalDirectionBits const&)            = delete;
        HorizontalDirectionBits()                                          = delete;
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
        RearrangedStateCollection& operator=(RearrangedStateCollection const&) = delete;
        RearrangedStateCollection(RearrangedStateCollection const&)            = delete;
        RearrangedStateCollection()                                            = delete;

    public:
        // NOLINTBEGIN
        // vIndex: 0, symbol: ?getState@RearrangedStateCollection@BlockLegacy@@UEBA?AV?$optional@H@std@@AEBV2@H@Z
        virtual std::optional<int> getState(class BlockLegacy const&, int) const;

        // vIndex: 1, symbol: ?setState@RearrangedStateCollection@BlockLegacy@@UEBAPEBVBlock@@AEBV2@HH@Z
        virtual class Block const* setState(class BlockLegacy const&, int, int) const;

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
            SplitBlock& operator=(SplitBlock const&) = delete;
            SplitBlock(SplitBlock const&)            = delete;
            SplitBlock()                             = delete;

        public:
            // NOLINTBEGIN
            // symbol: ??0SplitBlock@RemovedStateCollection@BlockLegacy@@QEAA@HAEAV2@@Z
            MCAPI SplitBlock(int, class BlockLegacy&);

            // NOLINTEND
        };

    public:
        // prevent constructor by default
        RemovedStateCollection& operator=(RemovedStateCollection const&) = delete;
        RemovedStateCollection(RemovedStateCollection const&)            = delete;
        RemovedStateCollection()                                         = delete;

    public:
        // NOLINTBEGIN
        // vIndex: 0, symbol: ?getState@RemovedStateCollection@BlockLegacy@@UEBA?AV?$optional@H@std@@AEBV2@H@Z
        virtual std::optional<int> getState(class BlockLegacy const&, int) const;

        // vIndex: 1, symbol: ?setState@RemovedStateCollection@BlockLegacy@@UEBAPEBVBlock@@AEBV2@HH@Z
        virtual class Block const* setState(class BlockLegacy const&, int, int) const;

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

    LLNDAPI static optional_ref<BlockLegacy> tryGetFromRegistry(std::string const& name);
    LLNDAPI static optional_ref<BlockLegacy> tryGetFromRegistry(uint legacyBlockID);

    // prevent constructor by default
    BlockLegacy& operator=(BlockLegacy const&) = delete;
    BlockLegacy(BlockLegacy const&)            = delete;
    BlockLegacy()                              = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?getStateFromLegacyData@BlockLegacy@@UEBAAEBVBlock@@G@Z
    virtual class Block const& getStateFromLegacyData(ushort) const;

    // vIndex: 2, symbol:
    // ?newBlockEntity@BlockLegacy@@UEBA?AV?$shared_ptr@VBlockActor@@@std@@AEBVBlockPos@@AEBVBlock@@@Z
    virtual std::shared_ptr<class BlockActor> newBlockEntity(class BlockPos const&, class Block const&) const;

    // vIndex: 3, symbol: ?getNextBlockPermutation@BlockLegacy@@UEBAPEBVBlock@@AEBV2@@Z
    virtual class Block const* getNextBlockPermutation(class Block const&) const;

    // vIndex: 4, symbol:
    // ?hasTag@BlockLegacy@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual bool hasTag(class BlockSource&, class BlockPos const&, class Block const&, std::string const&) const;

    // vIndex: 5, symbol: ?clip@BlockLegacy@@UEBA?AVHitResult@@AEBVBlockSource@@AEBVBlockPos@@AEBVVec3@@2_N@Z
    virtual class HitResult
    clip(class BlockSource const&, class BlockPos const&, class Vec3 const&, class Vec3 const&, bool) const;

    // vIndex: 6, symbol:
    // ?getCollisionShape@BlockLegacy@@UEBA_NAEAVAABB@@AEBVBlock@@AEBVIConstBlockSource@@AEBVBlockPos@@V?$optional_ref@$$CBVGetCollisionShapeInterface@@@@@Z
    virtual bool
    getCollisionShape(class AABB&, class Block const&, class IConstBlockSource const&, class BlockPos const&, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    // vIndex: 7, symbol:
    // ?addCollisionShapes@BlockLegacy@@UEBA_NAEBVBlock@@AEBVBlockSource@@AEBVBlockPos@@PEBVAABB@@AEAV?$vector@VAABB@@V?$allocator@VAABB@@@std@@@std@@V?$optional_ref@$$CBVGetCollisionShapeInterface@@@@@Z
    virtual bool
    addCollisionShapes(class Block const&, class BlockSource const&, class BlockPos const&, class AABB const*, std::vector<class AABB>&, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    // vIndex: 8, symbol: ?getAABB@BlockLegacy@@UEBAAEBVAABB@@AEBVIConstBlockSource@@AEBVBlockPos@@AEBVBlock@@AEAV2@_N@Z
    virtual class AABB const&
    getAABB(class IConstBlockSource const&, class BlockPos const&, class Block const&, class AABB&, bool) const;

    // vIndex: 9, symbol:
    // ?addAABBs@BlockLegacy@@UEBAXAEBVBlock@@AEBVBlockSource@@AEBVBlockPos@@PEBVAABB@@AEAV?$vector@VAABB@@V?$allocator@VAABB@@@std@@@std@@@Z
    virtual void
    addAABBs(class Block const&, class BlockSource const&, class BlockPos const&, class AABB const*, std::vector<class AABB>&)
        const;

    // vIndex: 10, symbol: ?getOutline@BlockLegacy@@UEBAAEBVAABB@@AEAVBlockSource@@AEBVBlockPos@@AEAV2@@Z
    virtual class AABB const& getOutline(class BlockSource&, class BlockPos const&, class AABB&) const;

    // vIndex: 11, symbol:
    // ?getVisualShapeInWorld@BlockLegacy@@UEBAAEBVAABB@@AEBVBlock@@AEBVIConstBlockSource@@AEBVBlockPos@@AEAV2@@Z
    virtual class AABB const&
    getVisualShapeInWorld(class Block const&, class IConstBlockSource const&, class BlockPos const&, class AABB&) const;

    // vIndex: 12, symbol: ?getVisualShape@BlockLegacy@@UEBAAEBVAABB@@AEBVBlock@@AEAV2@@Z
    virtual class AABB const& getVisualShape(class Block const&, class AABB&) const;

    // vIndex: 13, symbol: ?getUIShape@BlockLegacy@@UEBAAEBVAABB@@AEBVBlock@@AEAV2@@Z
    virtual class AABB const& getUIShape(class Block const&, class AABB&) const;

    // vIndex: 14, symbol: ?getLiquidClipVolume@BlockLegacy@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVAABB@@@Z
    virtual bool getLiquidClipVolume(class BlockSource&, class BlockPos const&, class AABB&) const;

    // vIndex: 15, symbol: ?isObstructingChests@BlockLegacy@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
    virtual bool isObstructingChests(class BlockSource&, class BlockPos const&, class Block const&) const;

    // vIndex: 16, symbol: ?randomlyModifyPosition@BlockLegacy@@UEBA?AVVec3@@AEBVBlockPos@@AEAH@Z
    virtual class Vec3 randomlyModifyPosition(class BlockPos const&, int&) const;

    // vIndex: 17, symbol: ?randomlyModifyPosition@BlockLegacy@@UEBA?AVVec3@@AEBVBlockPos@@@Z
    virtual class Vec3 randomlyModifyPosition(class BlockPos const&) const;

    // vIndex: 18, symbol: ?onProjectileHit@BlockLegacy@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEBVActor@@@Z
    virtual void onProjectileHit(class BlockSource&, class BlockPos const&, class Actor const&) const;

    // vIndex: 19, symbol: ?onLightningHit@BlockLegacy@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void onLightningHit(class BlockSource&, class BlockPos const&) const;

    // vIndex: 20, symbol:
    // ?liquidCanFlowIntoFromDirection@BlockLegacy@@UEBA_NEAEBV?$function@$$A6AAEBVBlock@@AEBVBlockPos@@@Z@std@@AEBVBlockPos@@@Z
    virtual bool
    liquidCanFlowIntoFromDirection(uchar, std::function<class Block const&(class BlockPos const&)> const&, class BlockPos const&)
        const;

    // vIndex: 21, symbol: ?isSolid@BlockLegacy@@UEBA_NXZ
    virtual bool isSolid() const;

    // vIndex: 22, symbol: __unk_vfn_22
    virtual void __unk_vfn_22();

    // vIndex: 23, symbol: ?isStrippable@BlockLegacy@@UEBA_NAEBVBlock@@@Z
    virtual bool isStrippable(class Block const&) const;

    // vIndex: 24, symbol: ?getStrippedBlock@BlockLegacy@@UEBAAEBVBlock@@AEBV2@@Z
    virtual class Block const& getStrippedBlock(class Block const&) const;

    // vIndex: 25, symbol: ?canProvideSupport@BlockLegacy@@UEBA_NAEBVBlock@@EW4BlockSupportType@@@Z
    virtual bool canProvideSupport(class Block const&, uchar, ::BlockSupportType) const;

    // vIndex: 26, symbol: ?canProvideFullSupport@BlockLegacy@@UEBA_NAEBVBlock@@E@Z
    virtual bool canProvideFullSupport(class Block const&, uchar) const;

    // vIndex: 27, symbol: ?canProvideMultifaceSupport@BlockLegacy@@UEBA_NAEBVBlock@@E@Z
    virtual bool canProvideMultifaceSupport(class Block const&, uchar) const;

    // vIndex: 28, symbol: ?canConnect@BlockLegacy@@UEBA_NAEBVBlock@@E0@Z
    virtual bool canConnect(class Block const&, uchar, class Block const&) const;

    // vIndex: 29, symbol: ?isAir@BlockLegacy@@UEBA_NXZ
    virtual bool isAir() const;

    // vIndex: 30, symbol: ?tryGetCopperBehavior@BlockLegacy@@UEBAPEBVCopperBehavior@@XZ
    virtual class CopperBehavior const* tryGetCopperBehavior() const;

    // vIndex: 31, symbol: __unk_vfn_31
    virtual void __unk_vfn_31();

    // vIndex: 32, symbol: __unk_vfn_32
    virtual void __unk_vfn_32();

    // vIndex: 33, symbol: ?isClimbable@BlockLegacy@@UEBA_NAEBUIActorMovementProxy@@@Z
    virtual bool isClimbable(struct IActorMovementProxy const&) const;

    // vIndex: 34, symbol: __unk_vfn_34
    virtual void __unk_vfn_34();

    // vIndex: 35, symbol: __unk_vfn_35
    virtual void __unk_vfn_35();

    // vIndex: 36, symbol: __unk_vfn_36
    virtual void __unk_vfn_36();

    // vIndex: 37, symbol: ?isWaterBlocking@BlockLegacy@@UEBA_NXZ
    virtual bool isWaterBlocking() const;

    // vIndex: 38, symbol: __unk_vfn_38
    virtual void __unk_vfn_38();

    // vIndex: 39, symbol: __unk_vfn_39
    virtual void __unk_vfn_39();

    // vIndex: 40, symbol: __unk_vfn_40
    virtual void __unk_vfn_40();

    // vIndex: 41, symbol: __unk_vfn_41
    virtual void __unk_vfn_41();

    // vIndex: 42, symbol: __unk_vfn_42
    virtual void __unk_vfn_42();

    // vIndex: 43, symbol: __unk_vfn_43
    virtual void __unk_vfn_43();

    // vIndex: 44, symbol: __unk_vfn_44
    virtual void __unk_vfn_44();

    // vIndex: 45, symbol: ?isDoubleSlabBlock@BlockLegacy@@UEBA_NXZ
    virtual bool isDoubleSlabBlock() const;

    // vIndex: 46, symbol: __unk_vfn_46
    virtual void __unk_vfn_46();

    // vIndex: 47, symbol: __unk_vfn_47
    virtual void __unk_vfn_47();

    // vIndex: 48, symbol: __unk_vfn_48
    virtual void __unk_vfn_48();

    // vIndex: 49, symbol: __unk_vfn_49
    virtual void __unk_vfn_49();

    // vIndex: 50, symbol: __unk_vfn_50
    virtual void __unk_vfn_50();

    // vIndex: 51, symbol: __unk_vfn_51
    virtual void __unk_vfn_51();

    // vIndex: 52, symbol: ?canHurtAndBreakItem@BlockLegacy@@UEBA_NXZ
    virtual bool canHurtAndBreakItem() const;

    // vIndex: 53, symbol: ?isSignalSource@BlockLegacy@@UEBA_NXZ
    virtual bool isSignalSource() const;

    // vIndex: 54, symbol: ?canBeOriginalSurface@BlockLegacy@@UEBA_NXZ
    virtual bool canBeOriginalSurface() const;

    // vIndex: 55, symbol: ?canBeAscendedByJumping@BlockLegacy@@UEBA_NAEBVActor@@AEBVBlockPos@@@Z
    virtual bool canBeAscendedByJumping(class Actor const&, class BlockPos const&) const;

    // vIndex: 56, symbol: __unk_vfn_56
    virtual void __unk_vfn_56();

    // vIndex: 57, symbol: ?isValidAuxValue@BlockLegacy@@UEBA_NH@Z
    virtual bool isValidAuxValue(int) const;

    // vIndex: 58, symbol: ?canFillAtPos@BlockLegacy@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
    virtual bool canFillAtPos(class BlockSource&, class BlockPos const&, class Block const&) const;

    // vIndex: 59, symbol: ?sanitizeFillBlock@BlockLegacy@@UEBAAEBVBlock@@AEAVBlockSource@@AEBVBlockPos@@AEBV2@@Z
    virtual class Block const& sanitizeFillBlock(class BlockSource&, class BlockPos const&, class Block const&) const;

    // vIndex: 60, symbol: ?onFillBlock@BlockLegacy@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
    virtual void onFillBlock(class BlockSource&, class BlockPos const&, class Block const&) const;

    // vIndex: 61, symbol: ?getDirectSignal@BlockLegacy@@UEBAHAEAVBlockSource@@AEBVBlockPos@@H@Z
    virtual int getDirectSignal(class BlockSource&, class BlockPos const&, int) const;

    // vIndex: 62, symbol: __unk_vfn_62
    virtual void __unk_vfn_62();

    // vIndex: 63, symbol: __unk_vfn_63
    virtual void __unk_vfn_63();

    // vIndex: 64, symbol: ?canContainLiquid@BlockLegacy@@UEBA_NXZ
    virtual bool canContainLiquid() const;

    // vIndex: 65, symbol: ?getRequiredMedium@BlockLegacy@@UEBA?AV?$optional@VHashedString@@@std@@XZ
    virtual std::optional<class HashedString> getRequiredMedium() const;

    // vIndex: 66, symbol: ?shouldConnectToRedstone@BlockLegacy@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@H@Z
    virtual bool shouldConnectToRedstone(class BlockSource&, class BlockPos const&, int) const;

    // vIndex: 67, symbol: ?handlePrecipitation@BlockLegacy@@UEBAXAEAVBlockSource@@AEBVBlockPos@@MM@Z
    virtual void handlePrecipitation(class BlockSource&, class BlockPos const&, float, float) const;

    // vIndex: 68, symbol: ?canBeUsedInCommands@BlockLegacy@@UEBA_NAEBVBaseGameVersion@@@Z
    virtual bool canBeUsedInCommands(class BaseGameVersion const&) const;

    // vIndex: 69, symbol: ?getThickness@BlockLegacy@@UEBAMXZ
    virtual float getThickness() const;

    // vIndex: 70, symbol: ?getFlexibility@BlockLegacy@@UEBAMAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual float getFlexibility(class BlockSource&, class BlockPos const&) const;

    // vIndex: 71, symbol: ?checkIsPathable@BlockLegacy@@UEBA_NAEAVActor@@AEBVBlockPos@@1@Z
    virtual bool checkIsPathable(class Actor&, class BlockPos const&, class BlockPos const&) const;

    // vIndex: 72, symbol: ?shouldDispense@BlockLegacy@@UEBA_NAEAVBlockSource@@AEAVContainer@@@Z
    virtual bool shouldDispense(class BlockSource&, class Container&) const;

    // vIndex: 73, symbol: ?dispense@BlockLegacy@@UEBA_NAEAVBlockSource@@AEAVContainer@@HAEBVVec3@@E@Z
    virtual bool dispense(class BlockSource&, class Container&, int, class Vec3 const&, uchar) const;

    // vIndex: 74, symbol: ?transformOnFall@BlockLegacy@@UEBAXAEAVBlockSource@@AEBVBlockPos@@PEAVActor@@M@Z
    virtual void transformOnFall(class BlockSource&, class BlockPos const&, class Actor*, float) const;

    // vIndex: 75, symbol: ?onRedstoneUpdate@BlockLegacy@@UEBAXAEAVBlockSource@@AEBVBlockPos@@H_N@Z
    virtual void onRedstoneUpdate(class BlockSource&, class BlockPos const&, int, bool) const;

    // vIndex: 76, symbol: ?onMove@BlockLegacy@@UEBAXAEAVBlockSource@@AEBVBlockPos@@1@Z
    virtual void onMove(class BlockSource&, class BlockPos const&, class BlockPos const&) const;

    // vIndex: 77, symbol: __unk_vfn_77
    virtual void __unk_vfn_77();

    // vIndex: 78, symbol: ?movedByPiston@BlockLegacy@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void movedByPiston(class BlockSource&, class BlockPos const&) const;

    // vIndex: 79, symbol: ?onStructureBlockPlace@BlockLegacy@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void onStructureBlockPlace(class BlockSource&, class BlockPos const&) const;

    // vIndex: 80, symbol: ?onStructureNeighborBlockPlace@BlockLegacy@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void onStructureNeighborBlockPlace(class BlockSource&, class BlockPos const&) const;

    // vIndex: 81, symbol: ?setupRedstoneComponent@BlockLegacy@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void setupRedstoneComponent(class BlockSource&, class BlockPos const&) const;

    // vIndex: 82, symbol: ?getRedstoneProperty@BlockLegacy@@UEBA?AW4BlockProperty@@AEAVBlockSource@@AEBVBlockPos@@@Z
    virtual ::BlockProperty getRedstoneProperty(class BlockSource&, class BlockPos const&) const;

    // vIndex: 83, symbol:
    // ?updateEntityAfterFallOn@BlockLegacy@@UEBAXAEBVBlockPos@@AEAUUpdateEntityAfterFallOnInterface@@@Z
    virtual void updateEntityAfterFallOn(class BlockPos const&, struct UpdateEntityAfterFallOnInterface&) const;

    // vIndex: 84, symbol: __unk_vfn_84
    virtual void __unk_vfn_84();

    // vIndex: 85, symbol: ?isFilteredOut@BlockLegacy@@UEBA_NW4BlockRenderLayer@@@Z
    virtual bool isFilteredOut(::BlockRenderLayer) const;

    // vIndex: 86, symbol: ?isPreservingMediumWhenPlaced@BlockLegacy@@UEBA_NPEBV1@@Z
    virtual bool isPreservingMediumWhenPlaced(class BlockLegacy const*) const;

    // vIndex: 87, symbol: ?ignoreEntitiesOnPistonMove@BlockLegacy@@UEBA_NAEBVBlock@@@Z
    virtual bool ignoreEntitiesOnPistonMove(class Block const&) const;

    // vIndex: 88, symbol:
    // ?onFertilized@BlockLegacy@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@PEAVActor@@W4FertilizerType@@@Z
    virtual bool onFertilized(class BlockSource&, class BlockPos const&, class Actor*, ::FertilizerType) const;

    // vIndex: 89, symbol: ?mayConsumeFertilizer@BlockLegacy@@UEBA_NAEAVBlockSource@@@Z
    virtual bool mayConsumeFertilizer(class BlockSource&) const;

    // vIndex: 90, symbol: ?canBeFertilized@BlockLegacy@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
    virtual bool canBeFertilized(class BlockSource&, class BlockPos const&, class Block const&) const;

    // vIndex: 91, symbol: ?mayPick@BlockLegacy@@UEBA_NXZ
    virtual bool mayPick() const;

    // vIndex: 92, symbol: ?mayPick@BlockLegacy@@UEBA_NAEBVBlockSource@@AEBVBlock@@_N@Z
    virtual bool mayPick(class BlockSource const&, class Block const&, bool) const;

    // vIndex: 93, symbol: ?mayPlace@BlockLegacy@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@E@Z
    virtual bool mayPlace(class BlockSource&, class BlockPos const&, uchar) const;

    // vIndex: 94, symbol: ?mayPlace@BlockLegacy@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual bool mayPlace(class BlockSource&, class BlockPos const&) const;

    // vIndex: 95, symbol: ?mayPlaceOn@BlockLegacy@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual bool mayPlaceOn(class BlockSource&, class BlockPos const&) const;

    // vIndex: 96, symbol:
    // ?tryToPlace@BlockLegacy@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@PEBUActorBlockSyncMessage@@@Z
    virtual bool
    tryToPlace(class BlockSource&, class BlockPos const&, class Block const&, struct ActorBlockSyncMessage const*)
        const;

    // vIndex: 97, symbol: ?tryToTill@BlockLegacy@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVActor@@AEAVItemStack@@@Z
    virtual bool tryToTill(class BlockSource&, class BlockPos const&, class Actor&, class ItemStack&) const;

    // vIndex: 98, symbol: ?breaksFallingBlocks@BlockLegacy@@UEBA_NAEBVBlock@@VBaseGameVersion@@@Z
    virtual bool breaksFallingBlocks(class Block const&, class BaseGameVersion) const;

    // vIndex: 99, symbol: ?destroy@BlockLegacy@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@PEAVActor@@@Z
    virtual void destroy(class BlockSource&, class BlockPos const&, class Block const&, class Actor*) const;

    // vIndex: 100, symbol: ?getIgnoresDestroyPermissions@BlockLegacy@@UEBA_NAEAVActor@@AEBVBlockPos@@@Z
    virtual bool getIgnoresDestroyPermissions(class Actor&, class BlockPos const&) const;

    // vIndex: 101, symbol: ?neighborChanged@BlockLegacy@@UEBAXAEAVBlockSource@@AEBVBlockPos@@1@Z
    virtual void neighborChanged(class BlockSource&, class BlockPos const&, class BlockPos const&) const;

    // vIndex: 102, symbol: ?getSecondPart@BlockLegacy@@UEBA_NAEBVBlockSource@@AEBVBlockPos@@AEAV3@@Z
    virtual bool getSecondPart(class BlockSource const&, class BlockPos const&, class BlockPos&) const;

    // vIndex: 103, symbol: ?playerWillDestroy@BlockLegacy@@UEBA_NAEAVPlayer@@AEBVBlockPos@@AEBVBlock@@@Z
    virtual bool playerWillDestroy(class Player&, class BlockPos const&, class Block const&) const;

    // vIndex: 104, symbol:
    // ?spawnResources@BlockLegacy@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@AEAVRandomize@@AEBUResourceDropsContext@@@Z
    virtual void
    spawnResources(class BlockSource&, class BlockPos const&, class Block const&, class Randomize&, struct ResourceDropsContext const&)
        const;

    // vIndex: 105, symbol: ?asItemInstance@BlockLegacy@@UEBA?AVItemInstance@@AEBVBlock@@PEBVBlockActor@@@Z
    virtual class ItemInstance asItemInstance(class Block const&, class BlockActor const*) const;

    // vIndex: 106, symbol:
    // ?trySpawnResourcesOnExplosion@BlockLegacy@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@AEAVRandomize@@M@Z
    virtual void
    trySpawnResourcesOnExplosion(class BlockSource&, class BlockPos const&, class Block const&, class Randomize&, float)
        const;

    // vIndex: 107, symbol: __unk_vfn_107
    virtual void __unk_vfn_107();

    // vIndex: 108, symbol: ?getPlacementBlock@BlockLegacy@@UEBAAEBVBlock@@AEBVActor@@AEBVBlockPos@@EAEBVVec3@@H@Z
    virtual class Block const&
    getPlacementBlock(class Actor const&, class BlockPos const&, uchar, class Vec3 const&, int) const;

    // vIndex: 109, symbol: ?calcVariant@BlockLegacy@@UEBAHAEAVBlockSource@@AEBVBlockPos@@AEBVColor@mce@@@Z
    virtual int calcVariant(class BlockSource&, class BlockPos const&, class mce::Color const&) const;

    // vIndex: 110, symbol: ?isAttachedTo@BlockLegacy@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAV3@@Z
    virtual bool isAttachedTo(class BlockSource&, class BlockPos const&, class BlockPos&) const;

    // vIndex: 111, symbol: ?attack@BlockLegacy@@UEBA_NPEAVPlayer@@AEBVBlockPos@@@Z
    virtual bool attack(class Player*, class BlockPos const&) const;

    // vIndex: 112, symbol: ?shouldTriggerOnStandOn@BlockLegacy@@UEBA_NAEAVActor@@AEBVBlockPos@@@Z
    virtual bool shouldTriggerOnStandOn(class Actor&, class BlockPos const&) const;

    // vIndex: 113, symbol: ?shouldTriggerEntityInside@BlockLegacy@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVActor@@@Z
    virtual bool shouldTriggerEntityInside(class BlockSource&, class BlockPos const&, class Actor&) const;

    // vIndex: 114, symbol: ?canBeBuiltOver@BlockLegacy@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEBVBlockItem@@@Z
    virtual bool canBeBuiltOver(class BlockSource&, class BlockPos const&, class BlockItem const&) const;

    // vIndex: 115, symbol: ?canBeBuiltOver@BlockLegacy@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual bool canBeBuiltOver(class BlockSource&, class BlockPos const&) const;

    // vIndex: 116, symbol: ?triggerEvent@BlockLegacy@@UEBAXAEAVBlockSource@@AEBVBlockPos@@HH@Z
    virtual void triggerEvent(class BlockSource&, class BlockPos const&, int, int) const;

    // vIndex: 117, symbol:
    // ?executeEvent@BlockLegacy@@UEBAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVRenderParams@@@Z
    virtual void executeEvent(std::string const&, class RenderParams&) const;

    // vIndex: 118, symbol:
    // ?executeEvent@BlockLegacy@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVActor@@@Z
    virtual void
    executeEvent(class BlockSource&, class BlockPos const&, class Block const&, std::string const&, class Actor&) const;

    // vIndex: 119, symbol: ?executeTrigger@BlockLegacy@@UEBA_NAEBVDefinitionTrigger@@AEAVRenderParams@@@Z
    virtual bool executeTrigger(class DefinitionTrigger const&, class RenderParams&) const;

    // vIndex: 120, symbol: ?forceExecuteTrigger@BlockLegacy@@UEBAXAEBVDefinitionTrigger@@AEAVRenderParams@@@Z
    virtual void forceExecuteTrigger(class DefinitionTrigger const&, class RenderParams&) const;

    // vIndex: 121, symbol: ?getMobToSpawn@BlockLegacy@@UEBAPEBVMobSpawnerData@@AEBVSpawnConditions@@AEAVBlockSource@@@Z
    virtual class MobSpawnerData const* getMobToSpawn(class SpawnConditions const&, class BlockSource&) const;

    // vIndex: 122, symbol: ?shouldStopFalling@BlockLegacy@@UEBA_NAEAVActor@@@Z
    virtual bool shouldStopFalling(class Actor&) const;

    // vIndex: 123, symbol: __unk_vfn_123
    virtual void __unk_vfn_123();

    // vIndex: 124, symbol: __unk_vfn_124
    virtual void __unk_vfn_124();

    // vIndex: 125, symbol: __unk_vfn_125
    virtual void __unk_vfn_125();

    // vIndex: 126, symbol: ?getComparatorSignal@BlockLegacy@@UEBAHAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@E@Z
    virtual int getComparatorSignal(class BlockSource&, class BlockPos const&, class Block const&, uchar) const;

    // vIndex: 127, symbol: ?canSlide@BlockLegacy@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual bool canSlide(class BlockSource&, class BlockPos const&) const;

    // vIndex: 128, symbol: __unk_vfn_128
    virtual void __unk_vfn_128();

    // vIndex: 129, symbol: ?canSpawnAt@BlockLegacy@@UEBA_NAEBVBlockSource@@AEBVBlockPos@@@Z
    virtual bool canSpawnAt(class BlockSource const&, class BlockPos const&) const;

    // vIndex: 130, symbol: ?notifySpawnedAt@BlockLegacy@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void notifySpawnedAt(class BlockSource&, class BlockPos const&) const;

    // vIndex: 131, symbol: __unk_vfn_131
    virtual void __unk_vfn_131();

    // vIndex: 132, symbol: ?getIconYOffset@BlockLegacy@@UEBAHXZ
    virtual int getIconYOffset() const;

    // vIndex: 133, symbol:
    // ?buildDescriptionId@BlockLegacy@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVBlock@@@Z
    virtual std::string buildDescriptionId(class Block const&) const;

    // vIndex: 134, symbol: ?isAuxValueRelevantForPicking@BlockLegacy@@UEBA_NXZ
    virtual bool isAuxValueRelevantForPicking() const;

    // vIndex: 135, symbol: ?getColor@BlockLegacy@@UEBAHAEBVBlock@@@Z
    virtual int getColor(class Block const&) const;

    // vIndex: 136, symbol: ?getColor@BlockLegacy@@UEBAHAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
    virtual int getColor(class BlockSource&, class BlockPos const&, class Block const&) const;

    // vIndex: 137, symbol: ?getColorAtPos@BlockLegacy@@UEBAHAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual int getColorAtPos(class BlockSource&, class BlockPos const&) const;

    // vIndex: 138, symbol: ?getColorForParticle@BlockLegacy@@UEBAHAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
    virtual int getColorForParticle(class BlockSource&, class BlockPos const&, class Block const&) const;

    // vIndex: 139, symbol: ?isSeasonTinted@BlockLegacy@@UEBA_NAEBVBlock@@AEAVBlockSource@@AEBVBlockPos@@@Z
    virtual bool isSeasonTinted(class Block const&, class BlockSource&, class BlockPos const&) const;

    // vIndex: 140, symbol: ?onGraphicsModeChanged@BlockLegacy@@UEAAXAEBUBlockGraphicsModeChangeContext@@@Z
    virtual void onGraphicsModeChanged(struct BlockGraphicsModeChangeContext const&);

    // vIndex: 141, symbol: ?getShadeBrightness@BlockLegacy@@UEBAMAEBVBlock@@@Z
    virtual float getShadeBrightness(class Block const&) const;

    // vIndex: 142, symbol: ?telemetryVariant@BlockLegacy@@UEBAHAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual int telemetryVariant(class BlockSource&, class BlockPos const&) const;

    // vIndex: 143, symbol: ?getVariant@BlockLegacy@@UEBAHAEBVBlock@@@Z
    virtual int getVariant(class Block const&) const;

    // vIndex: 144, symbol: ?canSpawnOn@BlockLegacy@@UEBA_NPEAVActor@@@Z
    virtual bool canSpawnOn(class Actor*) const;

    // vIndex: 145, symbol: ?getRenderBlock@BlockLegacy@@UEBAAEBVBlock@@XZ
    virtual class Block const& getRenderBlock() const;

    // vIndex: 146, symbol: ?getMappedFace@BlockLegacy@@UEBAEEAEBVBlock@@@Z
    virtual uchar getMappedFace(uchar, class Block const&) const;

    // vIndex: 147, symbol: ?getFaceFlip@BlockLegacy@@UEBA?AW4Flip@@EAEBVBlock@@@Z
    virtual ::Flip getFaceFlip(uchar, class Block const&) const;

    // vIndex: 148, symbol: ?animateTick@BlockLegacy@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual void animateTick(class BlockSource&, class BlockPos const&, class Random&) const;

    // vIndex: 149, symbol: ?init@BlockLegacy@@UEAAAEAV1@XZ
    virtual class BlockLegacy& init();

    // vIndex: 150, symbol: ?getLightEmission@BlockLegacy@@MEBA?AUBrightness@@AEBVBlock@@@Z
    virtual struct Brightness getLightEmission(class Block const&) const;

    // vIndex: 151, symbol: ?addState@BlockLegacy@@UEAAAEAV1@AEBVBlockState@@@Z
    virtual class BlockLegacy& addState(class BlockState const&);

    // vIndex: 152, symbol: ?addState@BlockLegacy@@UEAAAEAV1@AEBVBlockState@@_K@Z
    virtual class BlockLegacy& addState(class BlockState const&, uint64);

    // vIndex: 153, symbol: __unk_vfn_153
    virtual void __unk_vfn_153();

    // vIndex: 154, symbol: ?tryLegacyUpgrade@BlockLegacy@@UEBAPEBVBlock@@G@Z
    virtual class Block const* tryLegacyUpgrade(ushort) const;

    // vIndex: 155, symbol: ?dealsContactDamage@BlockLegacy@@UEBA_NAEBVActor@@AEBVBlock@@_N@Z
    virtual bool dealsContactDamage(class Actor const&, class Block const&, bool) const;

    // vIndex: 156, symbol: ?tryGetInfested@BlockLegacy@@UEBAPEBVBlock@@AEBV2@@Z
    virtual class Block const* tryGetInfested(class Block const&) const;

    // vIndex: 157, symbol: ?tryGetUninfested@BlockLegacy@@UEBAPEBVBlock@@AEBV2@@Z
    virtual class Block const* tryGetUninfested(class Block const&) const;

    // vIndex: 158, symbol: ?_addHardCodedBlockComponents@BlockLegacy@@UEAAXXZ
    virtual void _addHardCodedBlockComponents();

    // vIndex: 159, symbol: ?onRemove@BlockLegacy@@MEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void onRemove(class BlockSource&, class BlockPos const&) const;

    // vIndex: 160, symbol: ?onExploded@BlockLegacy@@MEBAXAEAVBlockSource@@AEBVBlockPos@@PEAVActor@@@Z
    virtual void onExploded(class BlockSource&, class BlockPos const&, class Actor*) const;

    // vIndex: 161, symbol: ?onStandOn@BlockLegacy@@MEBAXAEAVEntityContext@@AEBVBlockPos@@@Z
    virtual void onStandOn(class EntityContext&, class BlockPos const&) const;

    // vIndex: 162, symbol: __unk_vfn_162
    virtual void __unk_vfn_162();

    // vIndex: 163, symbol: __unk_vfn_163
    virtual void __unk_vfn_163();

    // vIndex: 164, symbol: __unk_vfn_164
    virtual void __unk_vfn_164();

    // vIndex: 165, symbol: ?onPlace@BlockLegacy@@MEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void onPlace(class BlockSource&, class BlockPos const&) const;

    // vIndex: 166, symbol: ?onFallOn@BlockLegacy@@MEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVActor@@M@Z
    virtual void onFallOn(class BlockSource&, class BlockPos const&, class Actor&, float) const;

    // vIndex: 167, symbol: __unk_vfn_167
    virtual void __unk_vfn_167();

    // vIndex: 168, symbol: ?tick@BlockLegacy@@MEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual void tick(class BlockSource&, class BlockPos const&, class Random&) const;

    // vIndex: 169, symbol: ?randomTick@BlockLegacy@@MEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual void randomTick(class BlockSource&, class BlockPos const&, class Random&) const;

    // vIndex: 170, symbol: ?shouldRandomTick@BlockLegacy@@MEBA_NXZ
    virtual bool shouldRandomTick() const;

    // vIndex: 171, symbol: __unk_vfn_171
    virtual void __unk_vfn_171();

    // vIndex: 172, symbol: ?use@BlockLegacy@@MEBA_NAEAVPlayer@@AEBVBlockPos@@EV?$optional@VVec3@@@std@@@Z
    virtual bool use(class Player&, class BlockPos const&, uchar, std::optional<class Vec3>) const;

    // vIndex: 173, symbol: ?use@BlockLegacy@@MEBA_NAEAVPlayer@@AEBVBlockPos@@E@Z
    virtual bool use(class Player&, class BlockPos const&, uchar) const;

    // vIndex: 174, symbol: __unk_vfn_174
    virtual void __unk_vfn_174();

    // vIndex: 175, symbol: ?canSurvive@BlockLegacy@@MEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual bool canSurvive(class BlockSource&, class BlockPos const&) const;

    // vIndex: 176, symbol: ?getRenderLayer@BlockLegacy@@MEBA?AW4BlockRenderLayer@@XZ
    virtual ::BlockRenderLayer getRenderLayer() const;

    // vIndex: 177, symbol:
    // ?getRenderLayer@BlockLegacy@@MEBA?AW4BlockRenderLayer@@AEBVBlock@@AEAVBlockSource@@AEBVBlockPos@@@Z
    virtual ::BlockRenderLayer getRenderLayer(class Block const&, class BlockSource&, class BlockPos const&) const;

    // vIndex: 178, symbol: ?getExtraRenderLayers@BlockLegacy@@MEBAHXZ
    virtual int getExtraRenderLayers() const;

    // vIndex: 179, symbol: ?getExplosionResistance@BlockLegacy@@MEBAMXZ
    virtual float getExplosionResistance() const;

    // vIndex: 180, symbol: ?getLight@BlockLegacy@@MEBA?AUBrightness@@AEBVBlock@@@Z
    virtual struct Brightness getLight(class Block const&) const;

    // vIndex: 181, symbol: ?getEmissiveBrightness@BlockLegacy@@MEBA?AUBrightness@@AEBVBlock@@@Z
    virtual struct Brightness getEmissiveBrightness(class Block const&) const;

    // vIndex: 182, symbol: ?getMapColor@BlockLegacy@@MEBA?AVColor@mce@@AEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
    virtual class mce::Color getMapColor(class BlockSource&, class BlockPos const&, class Block const&) const;

    // vIndex: 183, symbol: __unk_vfn_183
    virtual void __unk_vfn_183();

    // vIndex: 184, symbol: ?playerDestroy@BlockLegacy@@MEBAXAEAVPlayer@@AEBVBlockPos@@AEBVBlock@@@Z
    virtual void playerDestroy(class Player&, class BlockPos const&, class Block const&) const;

    // vIndex: 185, symbol: ?getResourceItem@BlockLegacy@@MEBA?AVItemInstance@@AEAVRandomize@@AEBVBlock@@H@Z
    virtual class ItemInstance getResourceItem(class Randomize&, class Block const&, int) const;

    // vIndex: 186, symbol: ?getResourceCount@BlockLegacy@@MEBAHAEAVRandomize@@AEBVBlock@@H@Z
    virtual int getResourceCount(class Randomize&, class Block const&, int) const;

    // vIndex: 187, symbol: ?getSilkTouchItemInstance@BlockLegacy@@MEBA?AVItemInstance@@AEBVBlock@@@Z
    virtual class ItemInstance getSilkTouchItemInstance(class Block const&) const;

    // vIndex: 188, symbol: ?entityInside@BlockLegacy@@EEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVActor@@@Z
    virtual void entityInside(class BlockSource&, class BlockPos const&, class Actor&) const;

    // vIndex: 189, symbol:
    // ?_executeEvent@BlockLegacy@@EEBAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$vector@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@$$CBV12@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@$$CBV12@@std@@@2@@3@AEAVRenderParams@@@Z
    virtual void
    _executeEvent(std::string const&, std::vector<std::pair<std::string const, std::string const>>&, class RenderParams&)
        const;

    // vIndex: 190, symbol:
    // ?_executeTrigger@BlockLegacy@@EEBA_NAEBVDefinitionTrigger@@AEAV?$vector@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@$$CBV12@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@$$CBV12@@std@@@2@@std@@AEAVRenderParams@@@Z
    virtual bool
    _executeTrigger(class DefinitionTrigger const&, std::vector<std::pair<std::string const, std::string const>>&, class RenderParams&)
        const;

    // vIndex: 191, symbol:
    // ?_forceExecuteTrigger@BlockLegacy@@EEBAXAEBVDefinitionTrigger@@AEAV?$vector@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@$$CBV12@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@$$CBV12@@std@@@2@@std@@AEAVRenderParams@@@Z
    virtual void
    _forceExecuteTrigger(class DefinitionTrigger const&, std::vector<std::pair<std::string const, std::string const>>&, class RenderParams&)
        const;

    // symbol: ?allowStateMismatchOnPlacement@BlockLegacy@@MEBA_NAEBVBlock@@0@Z
    MCVAPI bool allowStateMismatchOnPlacement(class Block const&, class Block const&) const;

    // symbol: ?canBeDestroyedByWaterSpread@BlockLegacy@@UEBA_NXZ
    MCVAPI bool canBeDestroyedByWaterSpread() const;

    // symbol: ?canBeSilkTouched@BlockLegacy@@UEBA_NXZ
    MCVAPI bool canBeSilkTouched() const;

    // symbol: ?canDamperVibrations@BlockLegacy@@UEBA_NXZ
    MCVAPI bool canDamperVibrations() const;

    // symbol: ?canHaveExtraData@BlockLegacy@@UEBA_NXZ
    MCVAPI bool canHaveExtraData() const;

    // symbol: ?canInstatick@BlockLegacy@@UEBA_NXZ
    MCVAPI bool canInstatick() const;

    // symbol: ?canOccludeVibrations@BlockLegacy@@UEBA_NXZ
    MCVAPI bool canOccludeVibrations() const;

    // symbol: ?causesFreezeEffect@BlockLegacy@@UEBA_NXZ
    MCVAPI bool causesFreezeEffect() const;

    // symbol: ?detachesOnPistonMove@BlockLegacy@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    MCVAPI bool detachesOnPistonMove(class BlockSource&, class BlockPos const&) const;

    // symbol: ?hasComparatorSignal@BlockLegacy@@UEBA_NXZ
    MCVAPI bool hasComparatorSignal() const;

    // symbol: ?hasVariableLighting@BlockLegacy@@UEBA_NXZ
    MCVAPI bool hasVariableLighting() const;

    // symbol: ?isBounceBlock@BlockLegacy@@UEBA_NXZ
    MCVAPI bool isBounceBlock() const;

    // symbol: ?isButtonBlock@BlockLegacy@@UEBA_NXZ
    MCVAPI bool isButtonBlock() const;

    // symbol: ?isCandleCakeBlock@BlockLegacy@@UEBA_NXZ
    MCVAPI bool isCandleCakeBlock() const;

    // symbol: ?isContainerBlock@BlockLegacy@@UEBA_NXZ
    MCVAPI bool isContainerBlock() const;

    // symbol: ?isCraftingBlock@BlockLegacy@@UEBA_NXZ
    MCVAPI bool isCraftingBlock() const;

    // symbol: ?isCropBlock@BlockLegacy@@MEBA_NXZ
    MCVAPI bool isCropBlock() const;

    // symbol: ?isDoorBlock@BlockLegacy@@UEBA_NXZ
    MCVAPI bool isDoorBlock() const;

    // symbol: ?isFenceBlock@BlockLegacy@@UEBA_NXZ
    MCVAPI bool isFenceBlock() const;

    // symbol: ?isFenceGateBlock@BlockLegacy@@UEBA_NXZ
    MCVAPI bool isFenceGateBlock() const;

    // symbol: ?isHurtableBlock@BlockLegacy@@UEBA_NXZ
    MCVAPI bool isHurtableBlock() const;

    // symbol: ?isInteractiveBlock@BlockLegacy@@MEBA_NXZ
    MCVAPI bool isInteractiveBlock() const;

    // symbol: ?isLeverBlock@BlockLegacy@@UEBA_NXZ
    MCVAPI bool isLeverBlock() const;

    // symbol: ?isMultifaceBlock@BlockLegacy@@UEBA_NXZ
    MCVAPI bool isMultifaceBlock() const;

    // symbol: ?isRailBlock@BlockLegacy@@UEBA_NXZ
    MCVAPI bool isRailBlock() const;

    // symbol: ?isSilentWhenJumpingOff@BlockLegacy@@UEBA_NXZ
    MCVAPI bool isSilentWhenJumpingOff() const;

    // symbol: ?isSlabBlock@BlockLegacy@@UEBA_NXZ
    MCVAPI bool isSlabBlock() const;

    // symbol: ?isStairBlock@BlockLegacy@@UEBA_NXZ
    MCVAPI bool isStairBlock() const;

    // symbol: ?isStemBlock@BlockLegacy@@UEBA_NXZ
    MCVAPI bool isStemBlock() const;

    // symbol: ?isThinFenceBlock@BlockLegacy@@UEBA_NXZ
    MCVAPI bool isThinFenceBlock() const;

    // symbol: ?isWallBlock@BlockLegacy@@UEBA_NXZ
    MCVAPI bool isWallBlock() const;

    // symbol: ?onPlayerPlacing@BlockLegacy@@MEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVActor@@E@Z
    MCVAPI void onPlayerPlacing(class BlockSource&, class BlockPos const&, class Actor&, uchar) const;

    // symbol: ?onStepOff@BlockLegacy@@MEBAXAEAVActor@@AEBVBlockPos@@@Z
    MCVAPI void onStepOff(class Actor&, class BlockPos const&) const;

    // symbol: ?onStepOn@BlockLegacy@@MEBAXAEAVActor@@AEBVBlockPos@@@Z
    MCVAPI void onStepOn(class Actor&, class BlockPos const&) const;

    // symbol: ?pushesUpFallingBlocks@BlockLegacy@@UEBA_NXZ
    MCVAPI bool pushesUpFallingBlocks() const;

    // symbol: ?shouldTickOnSetBlock@BlockLegacy@@MEBA_NXZ
    MCVAPI bool shouldTickOnSetBlock() const;

    // symbol: ?spawnBurnResources@BlockLegacy@@UEBA_NAEAVBlockSource@@MMM@Z
    MCVAPI bool spawnBurnResources(class BlockSource&, float, float, float) const;

    // symbol: ?waterSpreadCausesSpawn@BlockLegacy@@UEBA_NXZ
    MCVAPI bool waterSpreadCausesSpawn() const;

    // symbol: ??1BlockLegacy@@UEAA@XZ
    MCVAPI ~BlockLegacy();

    // symbol: ??0BlockLegacy@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBVMaterial@@@Z
    MCAPI BlockLegacy(std::string const&, int, class Material const&);

    // symbol: ?_isDataDrivingVanillaBlocksAndItems@BlockLegacy@@QEBA_NXZ
    MCAPI bool _isDataDrivingVanillaBlocksAndItems() const;

    // symbol: ?addAABB@BlockLegacy@@QEBA_NAEBVAABB@@PEBV2@AEAV?$vector@VAABB@@V?$allocator@VAABB@@@std@@@std@@@Z
    MCAPI bool addAABB(class AABB const&, class AABB const*, std::vector<class AABB>&) const;

    // symbol: ?addBlockProperties@BlockLegacy@@QEAAAEAV1@W4BlockProperty@@@Z
    MCAPI class BlockLegacy& addBlockProperties(::BlockProperty);

    // symbol: ?addComponent@BlockLegacy@@QEAAAEAV1@AEBUBlockComponentDescription@@@Z
    MCAPI class BlockLegacy& addComponent(struct BlockComponentDescription const&);

    // symbol:
    // ?addGetPlacementBlockCallback@BlockLegacy@@QEAAXV?$unique_ptr@VIGetPlacementBlockCallback@BlockTrait@@U?$default_delete@VIGetPlacementBlockCallback@BlockTrait@@@std@@@std@@@Z
    MCAPI void addGetPlacementBlockCallback(std::unique_ptr<class BlockTrait::IGetPlacementBlockCallback>);

    // symbol: ?addTag@BlockLegacy@@QEAAAEAV1@AEBVHashedString@@@Z
    MCAPI class BlockLegacy& addTag(class HashedString const&);

    // symbol: ?addTrait@BlockLegacy@@QEAAAEAV1@AEBVITrait@BlockTrait@@@Z
    MCAPI class BlockLegacy& addTrait(class BlockTrait::ITrait const&);

    // symbol: ?anyOf@BlockLegacy@@QEBA_NV?$initializer_list@$$CBVHashedString@@@std@@@Z
    MCAPI bool anyOf(std::initializer_list<class HashedString const>) const;

    // symbol:
    // ?anyOf@BlockLegacy@@QEBA_NAEBV?$vector@V?$reference_wrapper@$$CBVHashedString@@@std@@V?$allocator@V?$reference_wrapper@$$CBVHashedString@@@std@@@2@@std@@@Z
    MCAPI bool anyOf(std::vector<std::reference_wrapper<class HashedString const>> const&) const;

    // symbol: ?clip@BlockLegacy@@QEBA?AVHitResult@@AEBVBlockSource@@AEBVBlockPos@@AEBVVec3@@2_NAEBVAABB@@@Z
    MCAPI class HitResult
    clip(class BlockSource const&, class BlockPos const&, class Vec3 const&, class Vec3 const&, bool, class AABB const&)
        const;

    // symbol: ?createBlockPermutations@BlockLegacy@@QEAAXI@Z
    MCAPI void createBlockPermutations(uint);

    // symbol: ?createWeakPtr@BlockLegacy@@QEBA?AV?$WeakPtr@VBlockLegacy@@@@XZ
    MCAPI class WeakPtr<class BlockLegacy> createWeakPtr() const;

    // symbol: ?finalizeBlockComponentStorage@BlockLegacy@@QEAAXXZ
    MCAPI void finalizeBlockComponentStorage();

    // symbol: ?forEachBlockPermutation@BlockLegacy@@QEBAXV?$function@$$A6A_NAEBVBlock@@@Z@std@@@Z
    MCAPI void forEachBlockPermutation(std::function<bool(class Block const&)>) const;

    // symbol: ?forEachBlockStateInstance@BlockLegacy@@QEBAXV?$function@$$A6A_NAEBVBlockStateInstance@@@Z@std@@@Z
    MCAPI void forEachBlockStateInstance(std::function<bool(class BlockStateInstance const&)>) const;

    // symbol: ?getBlockEntityType@BlockLegacy@@QEBA?AW4BlockActorType@@XZ
    MCAPI ::BlockActorType getBlockEntityType() const;

    // symbol: ?getBlockItemId@BlockLegacy@@QEBAFXZ
    MCAPI short getBlockItemId() const;

    // symbol: ?getBlockState@BlockLegacy@@QEBAPEBVBlockState@@AEBVHashedString@@@Z
    MCAPI class BlockState const* getBlockState(class HashedString const&) const;

    // symbol: ?getBlockStateGroup@BlockLegacy@@QEAAPEAVBlockStateGroup@@XZ
    MCAPI class BlockStateGroup* getBlockStateGroup();

    // symbol: ?getCommandNames@BlockLegacy@@QEBA?AV?$vector@UCommandName@@V?$allocator@UCommandName@@@std@@@std@@XZ
    MCAPI std::vector<struct CommandName> getCommandNames() const;

    // symbol: ?getCreativeCategory@BlockLegacy@@QEBA?AW4CreativeItemCategory@@XZ
    MCAPI ::CreativeItemCategory getCreativeCategory() const;

    // symbol:
    // ?getDebugText@BlockLegacy@@QEBAXAEAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@AEBVBlockPos@@@Z
    MCAPI void getDebugText(std::vector<std::string>&, class BlockPos const&) const;

    // symbol: ?getDefaultState@BlockLegacy@@QEBAAEBVBlock@@XZ
    MCAPI class Block const& getDefaultState() const;

    // symbol: ?getDescriptionId@BlockLegacy@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string const& getDescriptionId() const;

    // symbol: ?getEntity@BlockLegacy@@QEBAAEBVEntityContext@@XZ
    MCAPI class EntityContext const& getEntity() const;

    // symbol: ?getEntityForModification@BlockLegacy@@QEBAAEAVEntityContext@@XZ
    MCAPI class EntityContext& getEntityForModification() const;

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
    // ?getResourceDrops@BlockLegacy@@QEBA?AV?$vector@VItemStack@@V?$allocator@VItemStack@@@std@@@std@@AEBVBlock@@AEAVRandomize@@AEBUResourceDropsContext@@@Z
    MCAPI std::vector<class ItemStack>
          getResourceDrops(class Block const&, class Randomize&, struct ResourceDropsContext const&) const;

    // symbol: ?getUniquePermutations@BlockLegacy@@QEBA_KXZ
    MCAPI uint64 getUniquePermutations() const;

    // symbol: ?hasProperty@BlockLegacy@@QEBA_NW4BlockProperty@@@Z
    MCAPI bool hasProperty(::BlockProperty) const;

    // symbol: ?hasState@BlockLegacy@@QEBA_NAEBVBlockState@@@Z
    MCAPI bool hasState(class BlockState const&) const;

    // symbol: ?hasState@BlockLegacy@@QEBA_NAEBVHashedString@@@Z
    MCAPI bool hasState(class HashedString const&) const;

    // symbol: ?hasTag@BlockLegacy@@QEBA_NAEBVHashedString@@@Z
    MCAPI bool hasTag(class HashedString const&) const;

    // symbol: ?initEntity@BlockLegacy@@QEAAXAEAVEntityRegistry@@@Z
    MCAPI void initEntity(class EntityRegistry&);

    // symbol: ?initializeBlockStateGroup@BlockLegacy@@QEAAXXZ
    MCAPI void initializeBlockStateGroup();

    // symbol: ?isFullAndOpaque@BlockLegacy@@QEBA_NXZ
    MCAPI bool isFullAndOpaque() const;

    // symbol: ?isVanilla@BlockLegacy@@QEBA_NXZ
    MCAPI bool isVanilla() const;

    // symbol: ?matchesStates@BlockLegacy@@QEBA_NAEBV1@@Z
    MCAPI bool matchesStates(class BlockLegacy const&) const;

    // symbol: ??9BlockLegacy@@QEBA_NAEBVHashedString@@@Z
    MCAPI bool operator!=(class HashedString const&) const;

    // symbol: ??8BlockLegacy@@QEBA_NAEBVHashedString@@@Z
    MCAPI bool operator==(class HashedString const&) const;

    // symbol: ?overrideBlockProperties@BlockLegacy@@QEAAAEAV1@W4BlockProperty@@@Z
    MCAPI class BlockLegacy& overrideBlockProperties(::BlockProperty);

    // symbol: ?setAllowsRunes@BlockLegacy@@QEAAAEAV1@_N@Z
    MCAPI class BlockLegacy& setAllowsRunes(bool);

    // symbol: ?setBlockTintType@BlockLegacy@@QEAAAEAV1@W4BlockTintType@@@Z
    MCAPI class BlockLegacy& setBlockTintType(::BlockTintType);

    // symbol: ?setCanBeExtraBlock@BlockLegacy@@QEAAAEAV1@_N@Z
    MCAPI class BlockLegacy& setCanBeExtraBlock(bool);

    // symbol: ?setCanBeOriginalSurface@BlockLegacy@@QEAAAEAV1@_N@Z
    MCAPI class BlockLegacy& setCanBeOriginalSurface(bool);

    // symbol: ?setCategory@BlockLegacy@@QEAAAEAV1@W4CreativeItemCategory@@@Z
    MCAPI class BlockLegacy& setCategory(::CreativeItemCategory);

    // symbol: ?setCreativeEnumState@BlockLegacy@@QEAAAEAV1@AEBVBlockState@@@Z
    MCAPI class BlockLegacy& setCreativeEnumState(class BlockState const&);

    // symbol:
    // ?setCreativeGroup@BlockLegacy@@QEAAAEAV1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI class BlockLegacy& setCreativeGroup(std::string const&);

    // symbol: ?setDefaultState@BlockLegacy@@QEAAXAEBVBlock@@@Z
    MCAPI void setDefaultState(class Block const&);

    // symbol: ?setDestroyTime@BlockLegacy@@QEAAAEAV1@M@Z
    MCAPI class BlockLegacy& setDestroyTime(float);

    // symbol: ?setExperienceDrop@BlockLegacy@@QEAAAEAV1@UIntRange@@@Z
    MCAPI class BlockLegacy& setExperienceDrop(struct IntRange);

    // symbol: ?setExplosionResistance@BlockLegacy@@QEAAAEAV1@M@Z
    MCAPI class BlockLegacy& setExplosionResistance(float);

    // symbol: ?setFlammable@BlockLegacy@@QEAAAEAV1@W4FlameOdds@@W4BurnOdds@@W4LavaFlammable@@@Z
    MCAPI class BlockLegacy& setFlammable(::FlameOdds, ::BurnOdds, ::LavaFlammable);

    // symbol: ?setIgnoreBlockForInsideCubeRenderer@BlockLegacy@@QEAAX_N@Z
    MCAPI void setIgnoreBlockForInsideCubeRenderer(bool);

    // symbol: ?setIsHiddenInCommands@BlockLegacy@@QEAAAEAV1@_N@Z
    MCAPI class BlockLegacy& setIsHiddenInCommands(bool);

    // symbol: ?setIsInteraction@BlockLegacy@@QEAAX_N@Z
    MCAPI void setIsInteraction(bool);

    // symbol: ?setIsVanillaBlock@BlockLegacy@@QEAAX_N@Z
    MCAPI void setIsVanillaBlock(bool);

    // symbol: ?setLightBlock@BlockLegacy@@QEAAAEAV1@UBrightness@@@Z
    MCAPI class BlockLegacy& setLightBlock(struct Brightness);

    // symbol: ?setLightEmission@BlockLegacy@@QEAAAEAV1@UBrightness@@@Z
    MCAPI class BlockLegacy& setLightEmission(struct Brightness);

    // symbol: ?setMapColor@BlockLegacy@@QEAAAEAV1@AEBVColor@mce@@@Z
    MCAPI class BlockLegacy& setMapColor(class mce::Color const&);

    // symbol: ?setMinRequiredBaseGameVersion@BlockLegacy@@QEAAAEAV1@AEBVBaseGameVersion@@@Z
    MCAPI class BlockLegacy& setMinRequiredBaseGameVersion(class BaseGameVersion const&);

    // symbol: ?setNameId@BlockLegacy@@QEAAAEAV1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI class BlockLegacy& setNameId(std::string const&);

    // symbol:
    // ?setOnlyPermutationandDefaultState@BlockLegacy@@QEAAXV?$unique_ptr@VBlock@@U?$default_delete@VBlock@@@std@@@std@@@Z
    MCAPI void setOnlyPermutationandDefaultState(std::unique_ptr<class Block>);

    // symbol: ?setPreFlatteningName@BlockLegacy@@QEAAXAEBVHashedString@@@Z
    MCAPI void setPreFlatteningName(class HashedString const&);

    // symbol: ?setPushesOutItems@BlockLegacy@@QEAAX_N@Z
    MCAPI void setPushesOutItems(bool);

    // symbol: ?setRandomTicking@BlockLegacy@@QEBAX_N@Z
    MCAPI void setRandomTicking(bool) const;

    // symbol: ?setRandomTickingExtraLayer@BlockLegacy@@QEBAX_N@Z
    MCAPI void setRandomTickingExtraLayer(bool) const;

    // symbol:
    // ?setResourceDropsStrategy@BlockLegacy@@QEAAXV?$unique_ptr@VIResourceDropsStrategy@@U?$default_delete@VIResourceDropsStrategy@@@std@@@std@@@Z
    MCAPI void setResourceDropsStrategy(std::unique_ptr<class IResourceDropsStrategy>);

    // symbol: ?setSolid@BlockLegacy@@QEAAX_N@Z
    MCAPI void setSolid(bool);

    // symbol: ?setVisualShape@BlockLegacy@@QEAAXAEBVVec3@@0@Z
    MCAPI void setVisualShape(class Vec3 const&, class Vec3 const&);

    // symbol: ?setVisualShape@BlockLegacy@@QEAAXAEBVAABB@@@Z
    MCAPI void setVisualShape(class AABB const&);

    // symbol: ?tryGetStateFromLegacyData@BlockLegacy@@QEBAPEBVBlock@@G_N@Z
    MCAPI class Block const* tryGetStateFromLegacyData(ushort, bool unknown = false) const;

    // symbol:
    // ?updateTallestCollisionShape@BlockLegacy@@QEBA_NAEBVBlock@@AEBVBlockSource@@AEBVBlockPos@@AEBVAABB@@V?$optional_ref@$$CBVGetCollisionShapeInterface@@@@AEAV5@AEBVVec3@@AEAM@Z
    MCAPI bool
    updateTallestCollisionShape(class Block const&, class BlockSource const&, class BlockPos const&, class AABB const&, class optional_ref<class GetCollisionShapeInterface const>, class AABB&, class Vec3 const&, float&)
        const;

    // symbol:
    // ?buildDescriptionIdFromNameInfo@BlockLegacy@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBUNameInfo@1@@Z
    MCAPI static std::string buildDescriptionIdFromNameInfo(struct BlockLegacy::NameInfo const&);

    // symbol:
    // ?extractBlockNameInfo@BlockLegacy@@SA?AUNameInfo@1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI static struct BlockLegacy::NameInfo extractBlockNameInfo(std::string const&);

    // symbol:
    // ?getConnectedDirections@BlockLegacy@@SA?AUHorizontalDirectionBits@1@AEBVBlock@@AEBVBlockPos@@AEBVIConstBlockSource@@@Z
    MCAPI static struct BlockLegacy::HorizontalDirectionBits
    getConnectedDirections(class Block const&, class BlockPos const&, class IConstBlockSource const&);

    // symbol: ?getPlacementFacingAll@BlockLegacy@@SAEAEBVActor@@AEBVBlockPos@@M@Z
    MCAPI static uchar getPlacementFacingAll(class Actor const&, class BlockPos const&, float);

    // symbol: ?getPlacementFacingAllExceptAxisY@BlockLegacy@@SAEAEBVActor@@AEBVBlockPos@@M@Z
    MCAPI static uchar getPlacementFacingAllExceptAxisY(class Actor const&, class BlockPos const&, float);

    // symbol: ?popResource@BlockLegacy@@SAPEAVItemActor@@AEAVBlockSource@@AEBVBlockPos@@AEBVItemStack@@@Z
    MCAPI static class ItemActor* popResource(class BlockSource&, class BlockPos const&, class ItemStack const&);

    // symbol: ?popResource@BlockLegacy@@SAPEAVItemActor@@AEAVBlockSource@@AEBVBlockPos@@AEBVItemInstance@@@Z
    MCAPI static class ItemActor* popResource(class BlockSource&, class BlockPos const&, class ItemInstance const&);

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
    MCAPI bool forEachBlockPermutationMutable(std::function<bool(class Block&)>);

    // symbol: ?getFriction@BlockLegacy@@IEBAMXZ
    MCAPI float getFriction() const;

    // symbol: ?createAABBWithPixelCoordinates@BlockLegacy@@KA?AVAABB@@MMMMMM@Z
    MCAPI static class AABB createAABBWithPixelCoordinates(float, float, float, float, float, float);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_tryLookupAlteredStateCollection@BlockLegacy@@AEBA?AV?$optional@H@std@@_KG@Z
    MCAPI std::optional<int> _tryLookupAlteredStateCollection(uint64, ushort) const;

    // symbol: ?_trySetStateFromAlteredStateCollection@BlockLegacy@@AEBAPEBVBlock@@_KHG@Z
    MCAPI class Block const* _trySetStateFromAlteredStateCollection(uint64, int, ushort) const;

    // symbol: ?initParams@BlockLegacy@@AEBAXAEAVRenderParams@@AEAVBlockSource@@AEBVBlockPos@@PEAVActor@@@Z
    MCAPI void initParams(class RenderParams&, class BlockSource&, class BlockPos const&, class Actor*) const;

    // NOLINTEND
};
