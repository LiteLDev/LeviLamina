#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/enums/ShapeType.h"
#include "mc/world/level/block/BlockLegacy.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class BedBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    BedBlock& operator=(BedBlock const&);
    BedBlock(BedBlock const&);
    BedBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 3, symbol: ?getNextBlockPermutation@BedBlock@@UEBAPEBVBlock@@AEBV2@@Z
    virtual class Block const* getNextBlockPermutation(class Block const&) const;

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

    // vIndex: 57, symbol: ?canFillAtPos@BedBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
    virtual bool canFillAtPos(class BlockSource&, class BlockPos const&, class Block const&) const;

    // vIndex: 58, symbol: ?sanitizeFillBlock@BedBlock@@UEBAAEBVBlock@@AEAVBlockSource@@AEBVBlockPos@@AEBV2@@Z
    virtual class Block const& sanitizeFillBlock(class BlockSource&, class BlockPos const&, class Block const&) const;

    // vIndex: 59, symbol: ?onFillBlock@BedBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
    virtual void onFillBlock(class BlockSource&, class BlockPos const&, class Block const&) const;

    // vIndex: 61, symbol: __unk_vfn_61
    virtual void __unk_vfn_61();

    // vIndex: 62, symbol: __unk_vfn_62
    virtual void __unk_vfn_62();

    // vIndex: 70, symbol: ?checkIsPathable@BedBlock@@UEBA_NAEAVActor@@AEBVBlockPos@@1@Z
    virtual bool checkIsPathable(class Actor&, class BlockPos const&, class BlockPos const&) const;

    // vIndex: 76, symbol: __unk_vfn_76
    virtual void __unk_vfn_76();

    // vIndex: 82, symbol:
    // ?updateEntityAfterFallOn@BedBlock@@UEBAXAEBVBlockPos@@AEAUUpdateEntityAfterFallOnInterface@@@Z
    virtual void updateEntityAfterFallOn(class BlockPos const&, struct UpdateEntityAfterFallOnInterface&) const;

    // vIndex: 83, symbol: __unk_vfn_83
    virtual void __unk_vfn_83();

    // vIndex: 100, symbol: ?neighborChanged@BedBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@1@Z
    virtual void neighborChanged(class BlockSource&, class BlockPos const&, class BlockPos const&) const;

    // vIndex: 101, symbol: ?getSecondPart@BedBlock@@UEBA_NAEBVBlockSource@@AEBVBlockPos@@AEAV3@@Z
    virtual bool getSecondPart(class BlockSource const&, class BlockPos const&, class BlockPos&) const;

    // vIndex: 102, symbol: ?playerWillDestroy@BedBlock@@UEBA_NAEAVPlayer@@AEBVBlockPos@@AEBVBlock@@@Z
    virtual bool playerWillDestroy(class Player&, class BlockPos const&, class Block const&) const;

    // vIndex: 103, symbol:
    // ?spawnResources@BedBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@AEAVRandomize@@AEBUResourceDropsContext@@@Z
    virtual void
    spawnResources(class BlockSource&, class BlockPos const&, class Block const&, class Randomize&, struct ResourceDropsContext const&)
        const;

    // vIndex: 104, symbol: ?asItemInstance@BedBlock@@UEBA?AVItemInstance@@AEBVBlock@@PEBVBlockActor@@@Z
    virtual class ItemInstance asItemInstance(class Block const&, class BlockActor const*) const;

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

    // vIndex: 128, symbol: ?canSpawnAt@BedBlock@@UEBA_NAEBVBlockSource@@AEBVBlockPos@@@Z
    virtual bool canSpawnAt(class BlockSource const&, class BlockPos const&) const;

    // vIndex: 130, symbol: __unk_vfn_130
    virtual void __unk_vfn_130();

    // vIndex: 141, symbol: ?telemetryVariant@BedBlock@@UEBAHAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual int telemetryVariant(class BlockSource&, class BlockPos const&) const;

    // vIndex: 142, symbol: ?getVariant@BedBlock@@UEBAHAEBVBlock@@@Z
    virtual int getVariant(class Block const&) const;

    // vIndex: 145, symbol: ?getMappedFace@BedBlock@@UEBAEEAEBVBlock@@@Z
    virtual uchar getMappedFace(uchar, class Block const&) const;

    // vIndex: 153, symbol: __unk_vfn_153
    virtual void __unk_vfn_153();

    // vIndex: 162, symbol: __unk_vfn_162
    virtual void __unk_vfn_162();

    // vIndex: 163, symbol: __unk_vfn_163
    virtual void __unk_vfn_163();

    // vIndex: 164, symbol: __unk_vfn_164
    virtual void __unk_vfn_164();

    // vIndex: 165, symbol: ?onPlace@BedBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void onPlace(class BlockSource&, class BlockPos const&) const;

    // vIndex: 166, symbol: ?onFallOn@BedBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVActor@@M@Z
    virtual void onFallOn(class BlockSource&, class BlockPos const&, class Actor&, float) const;

    // vIndex: 167, symbol: __unk_vfn_167
    virtual void __unk_vfn_167();

    // vIndex: 171, symbol: __unk_vfn_171
    virtual void __unk_vfn_171();

    // vIndex: 173, symbol: ?use@BedBlock@@UEBA_NAEAVPlayer@@AEBVBlockPos@@E@Z
    virtual bool use(class Player&, class BlockPos const&, uchar) const;

    // vIndex: 174, symbol: __unk_vfn_174
    virtual void __unk_vfn_174();

    // vIndex: 182, symbol: ?getMapColor@BedBlock@@UEBA?AVColor@mce@@AEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
    virtual class mce::Color getMapColor(class BlockSource&, class BlockPos const&, class Block const&) const;

    // vIndex: 183, symbol: __unk_vfn_183
    virtual void __unk_vfn_183();

    // symbol: ?canBeSilkTouched@BedBlock@@MEBA_NXZ
    MCVAPI bool canBeSilkTouched() const;

    // symbol: ?isBounceBlock@BedBlock@@UEBA_NXZ
    MCVAPI bool isBounceBlock() const;

    // symbol: ?isInteractiveBlock@BedBlock@@UEBA_NXZ
    MCVAPI bool isInteractiveBlock() const;

    // symbol: ??0BedBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI BedBlock(std::string const&, int);

    // symbol:
    // ?findWakeupPosition@BedBlock@@SA?AV?$optional@VBlockPos@@@std@@AEAVBlockSource@@AEBVBlockPos@@AEBV?$optional@VVec3@@@3@@Z
    MCAPI static std::optional<class BlockPos>
    findWakeupPosition(class BlockSource&, class BlockPos const&, std::optional<class Vec3> const&);

    // symbol: ?isValidStandUpPosition@BedBlock@@SA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI static bool isValidStandUpPosition(class BlockSource&, class BlockPos const&);

    // symbol: ?setOccupied@BedBlock@@SAXAEAVBlockSource@@AEBVBlockPos@@_N@Z
    MCAPI static void setOccupied(class BlockSource&, class BlockPos const&, bool);

    // symbol: ?HEAD_PIECE_DATA@BedBlock@@2GB
    MCAPI static ushort const HEAD_PIECE_DATA;

    // symbol: ?OCCUPIED_DATA@BedBlock@@2GB
    MCAPI static ushort const OCCUPIED_DATA;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_isDangerousSpawnBlock@BedBlock@@CA_NAEBVBlock@@@Z
    MCAPI static bool _isDangerousSpawnBlock(class Block const&);

    // NOLINTEND
};
