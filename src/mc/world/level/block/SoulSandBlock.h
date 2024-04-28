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

class SoulSandBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    SoulSandBlock& operator=(SoulSandBlock const&);
    SoulSandBlock(SoulSandBlock const&);
    SoulSandBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1SoulSandBlock@@UEAA@XZ
    virtual ~SoulSandBlock() = default;

    // vIndex: 5, symbol:
    // ?getCollisionShape@SoulSandBlock@@UEBA?AVAABB@@AEBVBlock@@AEBVIConstBlockSource@@AEBVBlockPos@@V?$optional_ref@$$CBVGetCollisionShapeInterface@@@@@Z
    virtual class AABB
    getCollisionShape(class Block const&, class IConstBlockSource const&, class BlockPos const&, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    // vIndex: 6, symbol:
    // ?getCollisionShapeForCamera@SoulSandBlock@@UEBA_NAEAVAABB@@AEBVBlock@@AEBVIConstBlockSource@@AEBVBlockPos@@@Z
    virtual bool
    getCollisionShapeForCamera(class AABB&, class Block const&, class IConstBlockSource const&, class BlockPos const&)
        const;

    // vIndex: 89, symbol: ?breaksFallingBlocks@SoulSandBlock@@UEBA_NAEBVBlock@@VBaseGameVersion@@@Z
    virtual bool breaksFallingBlocks(class Block const& block, class BaseGameVersion version) const;

    // vIndex: 92, symbol: ?neighborChanged@SoulSandBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@1@Z
    virtual void
    neighborChanged(class BlockSource& region, class BlockPos const& pos, class BlockPos const& neighborPos) const;

    // vIndex: 145, symbol: ?onPlace@SoulSandBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void onPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 147, symbol: ?tick@SoulSandBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual void tick(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // vIndex: 148, symbol: ?randomTick@SoulSandBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual void randomTick(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // symbol: ??0SoulSandBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI SoulSandBlock(std::string const& nameId, int id);

    // symbol: ?BLOCK_AABB@SoulSandBlock@@2VAABB@@A
    MCAPI static class AABB BLOCK_AABB;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?SOUL_SAND_BREAKS_FALLING_BLOCK_VERSION@SoulSandBlock@@0VBaseGameVersion@@B
    MCAPI static class BaseGameVersion const SOUL_SAND_BREAKS_FALLING_BLOCK_VERSION;

    // NOLINTEND
};
