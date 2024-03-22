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
namespace BlockEvents { struct BlockFallOnEvent; }
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

    // vIndex: 50, symbol: ?canFillAtPos@BedBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
    virtual bool canFillAtPos(class BlockSource& region, class BlockPos const& pos, class Block const& block) const;

    // vIndex: 51, symbol: ?sanitizeFillBlock@BedBlock@@UEBAAEBVBlock@@AEBV2@@Z
    virtual class Block const& sanitizeFillBlock(class Block const&) const;

    // vIndex: 52, symbol: ?onFillBlock@BedBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
    virtual void onFillBlock(class BlockSource& region, class BlockPos const& pos, class Block const& block) const;

    // vIndex: 61, symbol: ?checkIsPathable@BedBlock@@UEBA_NAEAVActor@@AEBVBlockPos@@1@Z
    virtual bool
    checkIsPathable(class Actor& entity, class BlockPos const& lastPathPos, class BlockPos const& pathPos) const;

    // vIndex: 73, symbol:
    // ?updateEntityAfterFallOn@BedBlock@@UEBAXAEBVBlockPos@@AEAUUpdateEntityAfterFallOnInterface@@@Z
    virtual void
    updateEntityAfterFallOn(class BlockPos const& pos, struct UpdateEntityAfterFallOnInterface& entity) const;

    // vIndex: 74, symbol: ?isBounceBlock@BedBlock@@UEBA_NXZ
    virtual bool isBounceBlock() const;

    // vIndex: 92, symbol: ?neighborChanged@BedBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@1@Z
    virtual void
    neighborChanged(class BlockSource& region, class BlockPos const& pos, class BlockPos const& neighborPos) const;

    // vIndex: 93, symbol: ?getSecondPart@BedBlock@@UEBA_NAEBVIConstBlockSource@@AEBVBlockPos@@AEAV3@@Z
    virtual bool
    getSecondPart(class IConstBlockSource const& region, class BlockPos const& pos, class BlockPos& out) const;

    // vIndex: 94, symbol: ?playerWillDestroy@BedBlock@@UEBAPEBVBlock@@AEAVPlayer@@AEBVBlockPos@@AEBV2@@Z
    virtual class Block const*
    playerWillDestroy(class Player& player, class BlockPos const& pos, class Block const& block) const;

    // vIndex: 95, symbol: ?asItemInstance@BedBlock@@UEBA?AVItemInstance@@AEBVBlock@@PEBVBlockActor@@@Z
    virtual class ItemInstance asItemInstance(class Block const&, class BlockActor const* blockActor) const;

    // vIndex: 114, symbol: ?canSpawnAt@BedBlock@@UEBA_NAEBVBlockSource@@AEBVBlockPos@@@Z
    virtual bool canSpawnAt(class BlockSource const& region, class BlockPos const& pos) const;

    // vIndex: 127, symbol: ?telemetryVariant@BedBlock@@UEBAHAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual int telemetryVariant(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 128, symbol: ?getVariant@BedBlock@@UEBAHAEBVBlock@@@Z
    virtual int getVariant(class Block const& block) const;

    // vIndex: 131, symbol: ?getMappedFace@BedBlock@@UEBAEEAEBVBlock@@@Z
    virtual uchar getMappedFace(uchar face, class Block const& block) const;

    // vIndex: 141, symbol: ?_addHardCodedBlockComponents@BedBlock@@MEAAXAEBVExperiments@@@Z
    virtual void _addHardCodedBlockComponents(class Experiments const&);

    // vIndex: 145, symbol: ?onPlace@BedBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void onPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 149, symbol: ?isInteractiveBlock@BedBlock@@UEBA_NXZ
    virtual bool isInteractiveBlock() const;

    // vIndex: 151, symbol: ?use@BedBlock@@UEBA_NAEAVPlayer@@AEBVBlockPos@@E@Z
    virtual bool use(class Player& player, class BlockPos const& pos, uchar face) const;

    // vIndex: 159, symbol: ?getMapColor@BedBlock@@UEBA?AVColor@mce@@AEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
    virtual class mce::Color
    getMapColor(class BlockSource& source, class BlockPos const& pos, class Block const& block) const;

    // symbol: ??0BedBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI BedBlock(std::string const& nameId, int id);

    // symbol: ?onFallOn@BedBlock@@QEBAXAEAUBlockFallOnEvent@BlockEvents@@@Z
    MCAPI void onFallOn(struct BlockEvents::BlockFallOnEvent&) const;

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
