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
        MCAPI Rail(class BlockSource&, class BlockPos const&);

        // symbol: ?place@Rail@BaseRailBlock@@QEAAXH_N@Z
        MCAPI void place(int, bool);

        // symbol: ??1Rail@BaseRailBlock@@QEAA@XZ
        MCAPI ~Rail();

        // NOLINTEND

        // protected:
        // NOLINTBEGIN
        // symbol: ?connectTo@Rail@BaseRailBlock@@IEAAXAEAV12@@Z
        MCAPI void connectTo(class BaseRailBlock::Rail&);

        // symbol: ?connectsTo@Rail@BaseRailBlock@@IEAA_NAEAV12@@Z
        MCAPI bool connectsTo(class BaseRailBlock::Rail&);

        // symbol: ?getRail@Rail@BaseRailBlock@@IEAA?AV?$shared_ptr@VRail@BaseRailBlock@@@std@@AEBVBlockPos@@@Z
        MCAPI std::shared_ptr<class BaseRailBlock::Rail> getRail(class BlockPos const&);

        // symbol: ?hasNeighborRail@Rail@BaseRailBlock@@IEAA_NAEBVBlockPos@@@Z
        MCAPI bool hasNeighborRail(class BlockPos const&);

        // symbol: ?removeSoftConnections@Rail@BaseRailBlock@@IEAAXXZ
        MCAPI void removeSoftConnections();

        // symbol: ?updateConnections@Rail@BaseRailBlock@@IEAAXH@Z
        MCAPI void updateConnections(int);

        // NOLINTEND
    };

public:
    // prevent constructor by default
    BaseRailBlock& operator=(BaseRailBlock const&);
    BaseRailBlock(BaseRailBlock const&);
    BaseRailBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~BaseRailBlock() = default;

    // vIndex: 6, symbol:
    // ?getCollisionShape@BaseRailBlock@@UEBA?AVAABB@@AEBVBlock@@AEBVIConstBlockSource@@AEBVBlockPos@@V?$optional_ref@$$CBVGetCollisionShapeInterface@@@@@Z
    virtual class AABB
    getCollisionShape(class Block const&, class IConstBlockSource const&, class BlockPos const&, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    // vIndex: 12, symbol: ?getVisualShape@BaseRailBlock@@UEBAAEBVAABB@@AEBVBlock@@AEAV2@@Z
    virtual class AABB const& getVisualShape(class Block const&, class AABB&) const;

    // vIndex: 22, symbol: __unk_vfn_22
    virtual void __unk_vfn_22();

    // vIndex: 31, symbol: __unk_vfn_31
    virtual void __unk_vfn_31();

    // vIndex: 32, symbol: __unk_vfn_32
    virtual void __unk_vfn_32();

    // vIndex: 34, symbol: __unk_vfn_34
    virtual void __unk_vfn_34();

    // vIndex: 35, symbol: __unk_vfn_35
    virtual void __unk_vfn_35();

    // vIndex: 36, symbol: __unk_vfn_36
    virtual void __unk_vfn_36();

    // vIndex: 37, symbol: ?isWaterBlocking@BaseRailBlock@@UEBA_NXZ
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

    // vIndex: 55, symbol: __unk_vfn_55
    virtual void __unk_vfn_55();

    // vIndex: 61, symbol: __unk_vfn_61
    virtual void __unk_vfn_61();

    // vIndex: 62, symbol: __unk_vfn_62
    virtual void __unk_vfn_62();

    // vIndex: 63, symbol: ?canContainLiquid@BaseRailBlock@@UEBA_NXZ
    virtual bool canContainLiquid() const;

    // vIndex: 74, symbol: ?onRedstoneUpdate@BaseRailBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@H_N@Z
    virtual void onRedstoneUpdate(class BlockSource&, class BlockPos const&, int, bool) const;

    // vIndex: 76, symbol: __unk_vfn_76
    virtual void __unk_vfn_76();

    // vIndex: 80, symbol: ?setupRedstoneComponent@BaseRailBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void setupRedstoneComponent(class BlockSource&, class BlockPos const&) const;

    // vIndex: 83, symbol: __unk_vfn_83
    virtual void __unk_vfn_83();

    // vIndex: 93, symbol: ?mayPlace@BaseRailBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual bool mayPlace(class BlockSource&, class BlockPos const&) const;

    // vIndex: 100, symbol: ?neighborChanged@BaseRailBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@1@Z
    virtual void neighborChanged(class BlockSource&, class BlockPos const&, class BlockPos const&) const;

    // vIndex: 106, symbol: __unk_vfn_106
    virtual void __unk_vfn_106();

    // vIndex: 122, symbol: __unk_vfn_122
    virtual void __unk_vfn_122();

    // vIndex: 123, symbol: __unk_vfn_123
    virtual void __unk_vfn_123();

    // vIndex: 124, symbol: __unk_vfn_124
    virtual void __unk_vfn_124();

    // vIndex: 127, symbol: __unk_vfn_127
    virtual void __unk_vfn_127();

    // vIndex: 130, symbol: __unk_vfn_130
    virtual void __unk_vfn_130();

    // vIndex: 139, symbol: ?onGraphicsModeChanged@BaseRailBlock@@UEAAXAEBUBlockGraphicsModeChangeContext@@@Z
    virtual void onGraphicsModeChanged(struct BlockGraphicsModeChangeContext const&);

    // vIndex: 143, symbol: ?canSpawnOn@BaseRailBlock@@UEBA_NPEAVActor@@@Z
    virtual bool canSpawnOn(class Actor*) const;

    // vIndex: 153, symbol: __unk_vfn_153
    virtual void __unk_vfn_153();

    // vIndex: 162, symbol: __unk_vfn_162
    virtual void __unk_vfn_162();

    // vIndex: 163, symbol: __unk_vfn_163
    virtual void __unk_vfn_163();

    // vIndex: 164, symbol: __unk_vfn_164
    virtual void __unk_vfn_164();

    // vIndex: 165, symbol: ?onPlace@BaseRailBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void onPlace(class BlockSource&, class BlockPos const&) const;

    // vIndex: 167, symbol: __unk_vfn_167
    virtual void __unk_vfn_167();

    // vIndex: 168, symbol: ?tick@BaseRailBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual void tick(class BlockSource&, class BlockPos const&, class Random&) const;

    // vIndex: 171, symbol: __unk_vfn_171
    virtual void __unk_vfn_171();

    // vIndex: 174, symbol: __unk_vfn_174
    virtual void __unk_vfn_174();

    // vIndex: 175, symbol: ?canSurvive@BaseRailBlock@@MEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual bool canSurvive(class BlockSource&, class BlockPos const&) const;

    // vIndex: 177, symbol:
    // ?getRenderLayer@BaseRailBlock@@UEBA?AW4BlockRenderLayer@@AEBVBlock@@AEAVBlockSource@@AEBVBlockPos@@@Z
    virtual ::BlockRenderLayer getRenderLayer(class Block const&, class BlockSource&, class BlockPos const&) const;

    // vIndex: 183, symbol: __unk_vfn_183
    virtual void __unk_vfn_183();

    // symbol: ?isRailBlock@BaseRailBlock@@UEBA_NXZ
    MCVAPI bool isRailBlock() const;

    // symbol: ?waterSpreadCausesSpawn@BaseRailBlock@@UEBA_NXZ
    MCVAPI bool waterSpreadCausesSpawn() const;

    // symbol: ??0BaseRailBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H_N@Z
    MCAPI BaseRailBlock(std::string const&, int, bool);

    // symbol: ?isCorner@BaseRailBlock@@SA_NAEBVBlockSource@@AEBVBlockPos@@@Z
    MCAPI static bool isCorner(class BlockSource const&, class BlockPos const&);

    // symbol: ?isFacingWestEast@BaseRailBlock@@SA_NAEBVBlockSource@@AEBVBlockPos@@@Z
    MCAPI static bool isFacingWestEast(class BlockSource const&, class BlockPos const&);

    // symbol: ?isRail@BaseRailBlock@@SA_NAEBVBlock@@@Z
    MCAPI static bool isRail(class Block const&);

    // symbol: ?isRail@BaseRailBlock@@SA_NAEBVIConstBlockSource@@AEBVBlockPos@@@Z
    MCAPI static bool isRail(class IConstBlockSource const&, class BlockPos const&);

    // symbol: ?isSlope@BaseRailBlock@@SA_NAEBVBlock@@@Z
    MCAPI static bool isSlope(class Block const&);

    // symbol: ?isSlope@BaseRailBlock@@SA_NH@Z
    MCAPI static bool isSlope(int);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_updatePlacement@BaseRailBlock@@AEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI void _updatePlacement(class BlockSource&, class BlockPos const&) const;

    // symbol: ?_createCircuitComponent@BaseRailBlock@@CAXAEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI static void _createCircuitComponent(class BlockSource&, class BlockPos const&);

    // NOLINTEND
};
