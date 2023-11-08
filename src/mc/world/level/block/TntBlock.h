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

class TntBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    TntBlock& operator=(TntBlock const&);
    TntBlock(TntBlock const&);
    TntBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1TntBlock@@UEAA@XZ
    virtual ~TntBlock() = default;

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

    // vIndex: 71, symbol: ?shouldDispense@TntBlock@@UEBA_NAEAVBlockSource@@AEAVContainer@@@Z
    virtual bool shouldDispense(class BlockSource&, class Container&) const;

    // vIndex: 72, symbol: ?dispense@TntBlock@@UEBA_NAEAVBlockSource@@AEAVContainer@@HAEBVVec3@@E@Z
    virtual bool dispense(class BlockSource&, class Container&, int, class Vec3 const&, uchar) const;

    // vIndex: 74, symbol: ?onRedstoneUpdate@TntBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@H_N@Z
    virtual void onRedstoneUpdate(class BlockSource&, class BlockPos const&, int, bool) const;

    // vIndex: 76, symbol: __unk_vfn_76
    virtual void __unk_vfn_76();

    // vIndex: 80, symbol: ?setupRedstoneComponent@TntBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void setupRedstoneComponent(class BlockSource&, class BlockPos const&) const;

    // vIndex: 83, symbol: __unk_vfn_83
    virtual void __unk_vfn_83();

    // vIndex: 98, symbol: ?destroy@TntBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@PEAVActor@@@Z
    virtual void destroy(class BlockSource&, class BlockPos const&, class Block const&, class Actor*) const;

    // vIndex: 105, symbol:
    // ?trySpawnResourcesOnExplosion@TntBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@AEAVRandomize@@M@Z
    virtual void
    trySpawnResourcesOnExplosion(class BlockSource&, class BlockPos const&, class Block const&, class Randomize&, float)
        const;

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

    // vIndex: 132, symbol:
    // ?buildDescriptionId@TntBlock@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVBlock@@@Z
    virtual std::string buildDescriptionId(class Block const&) const;

    // vIndex: 133, symbol: ?isAuxValueRelevantForPicking@TntBlock@@UEBA_NXZ
    virtual bool isAuxValueRelevantForPicking() const;

    // vIndex: 142, symbol: ?getVariant@TntBlock@@UEBAHAEBVBlock@@@Z
    virtual int getVariant(class Block const&) const;

    // vIndex: 153, symbol: __unk_vfn_153
    virtual void __unk_vfn_153();

    // vIndex: 160, symbol: ?onExploded@TntBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@PEAVActor@@@Z
    virtual void onExploded(class BlockSource&, class BlockPos const&, class Actor*) const;

    // vIndex: 162, symbol: __unk_vfn_162
    virtual void __unk_vfn_162();

    // vIndex: 163, symbol: __unk_vfn_163
    virtual void __unk_vfn_163();

    // vIndex: 164, symbol: __unk_vfn_164
    virtual void __unk_vfn_164();

    // vIndex: 165, symbol: ?onPlace@TntBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void onPlace(class BlockSource&, class BlockPos const&) const;

    // vIndex: 167, symbol: __unk_vfn_167
    virtual void __unk_vfn_167();

    // vIndex: 171, symbol: __unk_vfn_171
    virtual void __unk_vfn_171();

    // vIndex: 173, symbol: ?use@TntBlock@@UEBA_NAEAVPlayer@@AEBVBlockPos@@E@Z
    virtual bool use(class Player&, class BlockPos const&, uchar) const;

    // vIndex: 174, symbol: __unk_vfn_174
    virtual void __unk_vfn_174();

    // vIndex: 183, symbol: __unk_vfn_183
    virtual void __unk_vfn_183();

    // vIndex: 185, symbol: ?getResourceItem@TntBlock@@UEBA?AVItemInstance@@AEAVRandomize@@AEBVBlock@@H@Z
    virtual class ItemInstance getResourceItem(class Randomize&, class Block const&, int) const;

    // symbol: ??0TntBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI TntBlock(std::string const&, int);

    // symbol: ?_setAllowUnderwater@TntBlock@@QEBAXPEAVActor@@@Z
    MCAPI void _setAllowUnderwater(class Actor*) const;

    // symbol: ?_shouldAllowUnderwater@TntBlock@@QEBA_NAEBVBlock@@@Z
    MCAPI bool _shouldAllowUnderwater(class Block const&) const;

    // symbol: ?tryLightTnt@TntBlock@@SA_NAEAVPlayer@@AEBVBlockPos@@@Z
    MCAPI static bool tryLightTnt(class Player&, class BlockPos const&);

    // NOLINTEND
};
