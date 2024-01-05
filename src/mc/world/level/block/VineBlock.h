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

class VineBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    VineBlock& operator=(VineBlock const&);
    VineBlock(VineBlock const&);
    VineBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1VineBlock@@UEAA@XZ
    virtual ~VineBlock() = default;

    // vIndex: 5, symbol:
    // ?getCollisionShape@VineBlock@@UEBA?AVAABB@@AEBVBlock@@AEBVIConstBlockSource@@AEBVBlockPos@@V?$optional_ref@$$CBVGetCollisionShapeInterface@@@@@Z
    virtual class AABB
    getCollisionShape(class Block const&, class IConstBlockSource const&, class BlockPos const&, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    // vIndex: 9, symbol: ?getOutline@VineBlock@@UEBAAEBVAABB@@AEBVBlock@@AEBVIConstBlockSource@@AEBVBlockPos@@AEAV2@@Z
    virtual class AABB const&
    getOutline(class Block const&, class IConstBlockSource const&, class BlockPos const&, class AABB&) const;

    // vIndex: 10, symbol:
    // ?getVisualShapeInWorld@VineBlock@@UEBAAEBVAABB@@AEBVBlock@@AEBVIConstBlockSource@@AEBVBlockPos@@AEAV2@@Z
    virtual class AABB const&
    getVisualShapeInWorld(class Block const&, class IConstBlockSource const&, class BlockPos const&, class AABB&) const;

    // vIndex: 20, symbol: __unk_vfn_20
    virtual void __unk_vfn_20();

    // vIndex: 27, symbol: __unk_vfn_27
    virtual void __unk_vfn_27();

    // vIndex: 28, symbol: __unk_vfn_28
    virtual void __unk_vfn_28();

    // vIndex: 29, symbol: __unk_vfn_29
    virtual void __unk_vfn_29();

    // vIndex: 30, symbol: __unk_vfn_30
    virtual void __unk_vfn_30();

    // vIndex: 31, symbol: __unk_vfn_31
    virtual void __unk_vfn_31();

    // vIndex: 33, symbol: __unk_vfn_33
    virtual void __unk_vfn_33();

    // vIndex: 34, symbol: __unk_vfn_34
    virtual void __unk_vfn_34();

    // vIndex: 35, symbol: __unk_vfn_35
    virtual void __unk_vfn_35();

    // vIndex: 36, symbol: __unk_vfn_36
    virtual void __unk_vfn_36();

    // vIndex: 37, symbol: __unk_vfn_37
    virtual void __unk_vfn_37();

    // vIndex: 38, symbol: __unk_vfn_38
    virtual void __unk_vfn_38();

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

    // vIndex: 45, symbol: __unk_vfn_45
    virtual void __unk_vfn_45();

    // vIndex: 48, symbol: __unk_vfn_48
    virtual void __unk_vfn_48();

    // vIndex: 54, symbol: __unk_vfn_54
    virtual void __unk_vfn_54();

    // vIndex: 55, symbol: __unk_vfn_55
    virtual void __unk_vfn_55();

    // vIndex: 67, symbol: __unk_vfn_67
    virtual void __unk_vfn_67();

    // vIndex: 74, symbol: __unk_vfn_74
    virtual void __unk_vfn_74();

    // vIndex: 84, symbol: ?mayPlace@VineBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@E@Z
    virtual bool mayPlace(class BlockSource& region, class BlockPos const& pos, uchar face) const;

    // vIndex: 92, symbol: ?neighborChanged@VineBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@1@Z
    virtual void
    neighborChanged(class BlockSource& region, class BlockPos const& pos, class BlockPos const& neighborPos) const;

    // vIndex: 95, symbol:
    // ?spawnResources@VineBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@AEAVRandomize@@AEBUResourceDropsContext@@@Z
    virtual void
    spawnResources(class BlockSource&, class BlockPos const&, class Block const&, class Randomize&, struct ResourceDropsContext const&)
        const;

    // vIndex: 98, symbol: ?getPlacementBlock@VineBlock@@UEBAAEBVBlock@@AEBVActor@@AEBVBlockPos@@EAEBVVec3@@H@Z
    virtual class Block const& getPlacementBlock(
        class Actor const&    by,
        class BlockPos const& pos,
        uchar                 face,
        class Vec3 const&     clickPos,
        int                   itemValue
    ) const;

    // vIndex: 109, symbol: __unk_vfn_109
    virtual void __unk_vfn_109();

    // vIndex: 110, symbol: __unk_vfn_110
    virtual void __unk_vfn_110();

    // vIndex: 111, symbol: __unk_vfn_111
    virtual void __unk_vfn_111();

    // vIndex: 114, symbol: __unk_vfn_114
    virtual void __unk_vfn_114();

    // vIndex: 117, symbol: __unk_vfn_117
    virtual void __unk_vfn_117();

    // vIndex: 121, symbol: ?getColor@VineBlock@@UEBAHAEBVBlock@@@Z
    virtual int getColor(class Block const& block) const;

    // vIndex: 122, symbol: ?getColor@VineBlock@@UEBAHAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
    virtual int getColor(class BlockSource& region, class BlockPos const& pos, class Block const& block) const;

    // vIndex: 138, symbol: __unk_vfn_138
    virtual void __unk_vfn_138();

    // vIndex: 149, symbol: __unk_vfn_149
    virtual void __unk_vfn_149();

    // vIndex: 150, symbol: ?tick@VineBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual void tick(class BlockSource& region, class BlockPos const& pos, class Random&) const;

    // vIndex: 151, symbol: ?randomTick@VineBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual void randomTick(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // vIndex: 152, symbol: __unk_vfn_152
    virtual void __unk_vfn_152();

    // vIndex: 155, symbol: __unk_vfn_155
    virtual void __unk_vfn_155();

    // vIndex: 156, symbol: ?canSurvive@VineBlock@@MEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual bool canSurvive(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 162, symbol: ?getMapColor@VineBlock@@UEBA?AVColor@mce@@AEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
    virtual class mce::Color
    getMapColor(class BlockSource& region, class BlockPos const& pos, class Block const&) const;

    // symbol: ?canBeSilkTouched@VineBlock@@UEBA_NXZ
    MCVAPI bool canBeSilkTouched() const;

    // symbol: ?waterSpreadCausesSpawn@VineBlock@@UEBA_NXZ
    MCVAPI bool waterSpreadCausesSpawn() const;

    // symbol: ??0VineBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI VineBlock(std::string const& nameId, int);

    // symbol: ?growDown@VineBlock@@QEBAXAEAVBlockSource@@AEBVBlockPos@@H@Z
    MCAPI void growDown(class BlockSource& region, class BlockPos const& pos, int) const;

    // symbol: ?growSideways@VineBlock@@QEBAXAEAVBlockSource@@AEBVBlockPos@@H@Z
    MCAPI void growSideways(class BlockSource& region, class BlockPos const& pos, int) const;

    // symbol: ?growUp@VineBlock@@QEBAXAEAVBlockSource@@AEBVBlockPos@@H@Z
    MCAPI void growUp(class BlockSource& region, class BlockPos const& pos, int) const;

    // symbol: ?getBlockForFace@VineBlock@@SAAEBVBlock@@E@Z
    MCAPI static class Block const& getBlockForFace(uchar face);

    // symbol: ?isAcceptableNeighbour@VineBlock@@SA_NAEBVBlock@@@Z
    MCAPI static bool isAcceptableNeighbour(class Block const& block);

    // symbol: ?VINE_ALL@VineBlock@@2HB
    MCAPI static int const VINE_ALL;

    // symbol: ?VINE_EAST@VineBlock@@2HB
    MCAPI static int const VINE_EAST;

    // symbol: ?VINE_NORTH@VineBlock@@2HB
    MCAPI static int const VINE_NORTH;

    // symbol: ?VINE_SOUTH@VineBlock@@2HB
    MCAPI static int const VINE_SOUTH;

    // symbol: ?VINE_WEST@VineBlock@@2HB
    MCAPI static int const VINE_WEST;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_canGrowDown@VineBlock@@AEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI bool _canGrowDown(class BlockSource& region, class BlockPos const& pos) const;

    // symbol: ?_canGrowUp@VineBlock@@AEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI bool _canGrowUp(class BlockSource& region, class BlockPos const& pos) const;

    // symbol: ?_canSideSpread@VineBlock@@AEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI bool _canSideSpread(class BlockSource& region, class BlockPos const& pos) const;

    // symbol: ?_nextVineDirections@VineBlock@@AEBAHAEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI int _nextVineDirections(class BlockSource& region, class BlockPos const& pos) const;

    // NOLINTEND
};
