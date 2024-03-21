#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/enums/ShapeType.h"
#include "mc/world/Direction.h"
#include "mc/world/level/block/BlockLegacy.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class BaseRailBlock : public ::BlockLegacy {
public:
    // BaseRailBlock inner types declare
    // clang-format off
    class Rail;
    // clang-format on

    // BaseRailBlock inner types define
    class Rail {
    public:
        // prevent constructor by default
        Rail& operator=(Rail const&);
        Rail(Rail const&);
        Rail();

    public:
        // NOLINTBEGIN
        // symbol: ??0Rail@BaseRailBlock@@QEAA@AEAVBlockSource@@AEBVBlockPos@@@Z
        MCAPI Rail(class BlockSource& region, class BlockPos const& pos);

        // symbol: ?place@Rail@BaseRailBlock@@QEAAXH_N@Z
        MCAPI void place(int signalStrength, bool first);

        // symbol: ??1Rail@BaseRailBlock@@QEAA@XZ
        MCAPI ~Rail();

        // NOLINTEND

        // protected:
        // NOLINTBEGIN
        // symbol: ?connectTo@Rail@BaseRailBlock@@IEAAXAEAV12@@Z
        MCAPI void connectTo(class BaseRailBlock::Rail& rail);

        // symbol: ?connectsTo@Rail@BaseRailBlock@@IEAA_NAEAV12@@Z
        MCAPI bool connectsTo(class BaseRailBlock::Rail& rail);

        // symbol: ?getRail@Rail@BaseRailBlock@@IEAA?AV?$shared_ptr@VRail@BaseRailBlock@@@std@@AEBVBlockPos@@@Z
        MCAPI std::shared_ptr<class BaseRailBlock::Rail> getRail(class BlockPos const& p);

        // symbol: ?hasNeighborRail@Rail@BaseRailBlock@@IEAA_NAEBVBlockPos@@@Z
        MCAPI bool hasNeighborRail(class BlockPos const& pos);

        // symbol: ?removeSoftConnections@Rail@BaseRailBlock@@IEAAXXZ
        MCAPI void removeSoftConnections();

        // symbol: ?updateConnections@Rail@BaseRailBlock@@IEAAXH@Z
        MCAPI void updateConnections(int direction);

        // NOLINTEND
    };

public:
    // prevent constructor by default
    BaseRailBlock& operator=(BaseRailBlock const&);
    BaseRailBlock(BaseRailBlock const&);
    BaseRailBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1BaseRailBlock@@UEAA@XZ
    virtual ~BaseRailBlock() = default;

    // vIndex: 5, symbol:
    // ?getCollisionShape@BaseRailBlock@@UEBA?AVAABB@@AEBVBlock@@AEBVIConstBlockSource@@AEBVBlockPos@@V?$optional_ref@$$CBVGetCollisionShapeInterface@@@@@Z
    virtual class AABB
    getCollisionShape(class Block const&, class IConstBlockSource const&, class BlockPos const&, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    // vIndex: 11, symbol: ?getVisualShape@BaseRailBlock@@UEBAAEBVAABB@@AEBVBlock@@AEAV2@@Z
    virtual class AABB const& getVisualShape(class Block const&, class AABB&) const;

    // vIndex: 32, symbol: ?isWaterBlocking@BaseRailBlock@@UEBA_NXZ
    virtual bool isWaterBlocking() const;

    // vIndex: 41, symbol: ?isRailBlock@BaseRailBlock@@UEBA_NXZ
    virtual bool isRailBlock() const;

    // vIndex: 55, symbol: ?waterSpreadCausesSpawn@BaseRailBlock@@UEBA_NXZ
    virtual bool waterSpreadCausesSpawn() const;

    // vIndex: 56, symbol: ?canContainLiquid@BaseRailBlock@@UEBA_NXZ
    virtual bool canContainLiquid() const;

    // vIndex: 65, symbol: ?onRedstoneUpdate@BaseRailBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@H_N@Z
    virtual void
    onRedstoneUpdate(class BlockSource& region, class BlockPos const& pos, int strength, bool isFirstTime) const;

    // vIndex: 71, symbol: ?setupRedstoneComponent@BaseRailBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void setupRedstoneComponent(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 85, symbol: ?mayPlace@BaseRailBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual bool mayPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 92, symbol: ?neighborChanged@BaseRailBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@1@Z
    virtual void neighborChanged(class BlockSource& region, class BlockPos const& pos, class BlockPos const&) const;

    // vIndex: 125, symbol: ?onGraphicsModeChanged@BaseRailBlock@@UEAAXAEBUBlockGraphicsModeChangeContext@@@Z
    virtual void onGraphicsModeChanged(struct BlockGraphicsModeChangeContext const& context);

    // vIndex: 129, symbol: ?canSpawnOn@BaseRailBlock@@UEBA_NPEAVActor@@@Z
    virtual bool canSpawnOn(class Actor*) const;

    // vIndex: 145, symbol: ?onPlace@BaseRailBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void onPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 147, symbol: ?tick@BaseRailBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual void tick(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // vIndex: 153, symbol: ?canSurvive@BaseRailBlock@@MEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual bool canSurvive(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 155, symbol:
    // ?getRenderLayer@BaseRailBlock@@UEBA?AW4BlockRenderLayer@@AEBVBlock@@AEAVBlockSource@@AEBVBlockPos@@@Z
    virtual ::BlockRenderLayer
    getRenderLayer(class Block const&, class BlockSource& region, class BlockPos const& pos) const;

    // symbol: ??0BaseRailBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H_N@Z
    MCAPI BaseRailBlock(std::string const& nameId, int id, bool usesDataBit);

    // symbol: ?isCorner@BaseRailBlock@@SA_NAEBVBlockSource@@AEBVBlockPos@@@Z
    MCAPI static bool isCorner(class BlockSource const& region, class BlockPos const& pos);

    // symbol: ?isFacingWestEast@BaseRailBlock@@SA_NAEBVBlockSource@@AEBVBlockPos@@@Z
    MCAPI static bool isFacingWestEast(class BlockSource const& region, class BlockPos const& pos);

    // symbol: ?isRail@BaseRailBlock@@SA_NAEBVBlock@@@Z
    MCAPI static bool isRail(class Block const& block);

    // symbol: ?isRail@BaseRailBlock@@SA_NAEBVIConstBlockSource@@AEBVBlockPos@@@Z
    MCAPI static bool isRail(class IConstBlockSource const& region, class BlockPos const& pos);

    // symbol: ?isSlope@BaseRailBlock@@SA_NAEBVBlock@@@Z
    MCAPI static bool isSlope(class Block const& block);

    // symbol: ?isSlope@BaseRailBlock@@SA_NH@Z
    MCAPI static bool isSlope(int);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_updatePlacement@BaseRailBlock@@AEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI void _updatePlacement(class BlockSource& region, class BlockPos const& pos) const;

    // symbol: ?_createCircuitComponent@BaseRailBlock@@CAXAEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI static void _createCircuitComponent(class BlockSource& region, class BlockPos const& pos);

    // NOLINTEND
};
