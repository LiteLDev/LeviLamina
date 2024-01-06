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

class BedBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    BedBlock& operator=(BedBlock const&);
    BedBlock(BedBlock const&);
    BedBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1BedBlock@@UEAA@XZ
    virtual ~BedBlock() = default;

    // vIndex: 2, symbol: ?getNextBlockPermutation@BedBlock@@UEBAPEBVBlock@@AEBV2@@Z
    virtual class Block const* getNextBlockPermutation(class Block const&) const;

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

    // vIndex: 50, symbol: ?canFillAtPos@BedBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
    virtual bool canFillAtPos(class BlockSource& region, class BlockPos const& pos, class Block const& block) const;

    // vIndex: 51, symbol: ?sanitizeFillBlock@BedBlock@@UEBAAEBVBlock@@AEAVBlockSource@@AEBVBlockPos@@AEBV2@@Z
    virtual class Block const&
    sanitizeFillBlock(class BlockSource& region, class BlockPos const& pos, class Block const& block) const;

    // vIndex: 52, symbol: ?onFillBlock@BedBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
    virtual void onFillBlock(class BlockSource& region, class BlockPos const& pos, class Block const& block) const;

    // vIndex: 54, symbol: __unk_vfn_54
    virtual void __unk_vfn_54();

    // vIndex: 55, symbol: __unk_vfn_55
    virtual void __unk_vfn_55();

    // vIndex: 61, symbol: ?checkIsPathable@BedBlock@@UEBA_NAEAVActor@@AEBVBlockPos@@1@Z
    virtual bool
    checkIsPathable(class Actor& entity, class BlockPos const& lastPathPos, class BlockPos const& pathPos) const;

    // vIndex: 67, symbol: __unk_vfn_67
    virtual void __unk_vfn_67();

    // vIndex: 73, symbol:
    // ?updateEntityAfterFallOn@BedBlock@@UEBAXAEBVBlockPos@@AEAUUpdateEntityAfterFallOnInterface@@@Z
    virtual void
    updateEntityAfterFallOn(class BlockPos const& pos, struct UpdateEntityAfterFallOnInterface& entity) const;

    // vIndex: 74, symbol: __unk_vfn_74
    virtual void __unk_vfn_74();

    // vIndex: 92, symbol: ?neighborChanged@BedBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@1@Z
    virtual void
    neighborChanged(class BlockSource& region, class BlockPos const& pos, class BlockPos const& neighborPos) const;

    // vIndex: 93, symbol: ?getSecondPart@BedBlock@@UEBA_NAEBVBlockSource@@AEBVBlockPos@@AEAV3@@Z
    virtual bool getSecondPart(class BlockSource const& region, class BlockPos const& pos, class BlockPos& out) const;

    // vIndex: 94, symbol: ?playerWillDestroy@BedBlock@@UEBAPEBVBlock@@AEAVPlayer@@AEBVBlockPos@@AEBV2@@Z
    virtual class Block const*
    playerWillDestroy(class Player& player, class BlockPos const& pos, class Block const& block) const;

    // vIndex: 95, symbol:
    // ?spawnResources@BedBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@AEAVRandomize@@AEBUResourceDropsContext@@@Z
    virtual void
    spawnResources(class BlockSource& region, class BlockPos const& pos, class Block const& block, class Randomize&, struct ResourceDropsContext const&)
        const;

    // vIndex: 96, symbol: ?asItemInstance@BedBlock@@UEBA?AVItemInstance@@AEBVBlock@@PEBVBlockActor@@@Z
    virtual class ItemInstance asItemInstance(class Block const&, class BlockActor const* blockActor) const;

    // vIndex: 109, symbol: __unk_vfn_109
    virtual void __unk_vfn_109();

    // vIndex: 110, symbol: __unk_vfn_110
    virtual void __unk_vfn_110();

    // vIndex: 111, symbol: __unk_vfn_111
    virtual void __unk_vfn_111();

    // vIndex: 114, symbol: __unk_vfn_114
    virtual void __unk_vfn_114();

    // vIndex: 115, symbol: ?canSpawnAt@BedBlock@@UEBA_NAEBVBlockSource@@AEBVBlockPos@@@Z
    virtual bool canSpawnAt(class BlockSource const& region, class BlockPos const& pos) const;

    // vIndex: 117, symbol: __unk_vfn_117
    virtual void __unk_vfn_117();

    // vIndex: 128, symbol: ?telemetryVariant@BedBlock@@UEBAHAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual int telemetryVariant(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 129, symbol: ?getVariant@BedBlock@@UEBAHAEBVBlock@@@Z
    virtual int getVariant(class Block const& block) const;

    // vIndex: 132, symbol: ?getMappedFace@BedBlock@@UEBAEEAEBVBlock@@@Z
    virtual uchar getMappedFace(uchar face, class Block const& block) const;

    // vIndex: 138, symbol: __unk_vfn_138
    virtual void __unk_vfn_138();

    // vIndex: 147, symbol: ?onPlace@BedBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void onPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 148, symbol: ?onFallOn@BedBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVActor@@M@Z
    virtual void
    onFallOn(class BlockSource& region, class BlockPos const& pos, class Actor& entity, float fallDistance) const;

    // vIndex: 149, symbol: __unk_vfn_149
    virtual void __unk_vfn_149();

    // vIndex: 152, symbol: __unk_vfn_152
    virtual void __unk_vfn_152();

    // vIndex: 154, symbol: ?use@BedBlock@@UEBA_NAEAVPlayer@@AEBVBlockPos@@E@Z
    virtual bool use(class Player& player, class BlockPos const& pos, uchar face) const;

    // vIndex: 155, symbol: __unk_vfn_155
    virtual void __unk_vfn_155();

    // vIndex: 162, symbol: ?getMapColor@BedBlock@@UEBA?AVColor@mce@@AEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
    virtual class mce::Color
    getMapColor(class BlockSource& source, class BlockPos const& pos, class Block const& block) const;

    // symbol: ?canBeSilkTouched@BedBlock@@MEBA_NXZ
    MCVAPI bool canBeSilkTouched() const;

    // symbol: ?isBounceBlock@BedBlock@@UEBA_NXZ
    MCVAPI bool isBounceBlock() const;

    // symbol: ?isInteractiveBlock@BedBlock@@UEBA_NXZ
    MCVAPI bool isInteractiveBlock() const;

    // symbol: ??0BedBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI BedBlock(std::string const& nameId, int id);

    // symbol:
    // ?findWakeupPosition@BedBlock@@SA?AV?$optional@VBlockPos@@@std@@AEAVBlockSource@@AEBVBlockPos@@AEBV?$optional@VVec3@@@3@@Z
    MCAPI static std::optional<class BlockPos>
    findWakeupPosition(class BlockSource& region, class BlockPos const& pos, std::optional<class Vec3> const&);

    // symbol: ?isValidStandUpPosition@BedBlock@@SA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI static bool isValidStandUpPosition(class BlockSource& region, class BlockPos const& pos);

    // symbol: ?setOccupied@BedBlock@@SAXAEAVBlockSource@@AEBVBlockPos@@_N@Z
    MCAPI static void setOccupied(class BlockSource& region, class BlockPos const& pos, bool occupied);

    // symbol: ?HEAD_PIECE_DATA@BedBlock@@2GB
    MCAPI static ushort const HEAD_PIECE_DATA;

    // symbol: ?OCCUPIED_DATA@BedBlock@@2GB
    MCAPI static ushort const OCCUPIED_DATA;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_isDangerousSpawnBlock@BedBlock@@CA_NAEBVBlock@@@Z
    MCAPI static bool _isDangerousSpawnBlock(class Block const& block);

    // NOLINTEND
};
