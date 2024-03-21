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

class FireBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    FireBlock& operator=(FireBlock const&);
    FireBlock(FireBlock const&);
    FireBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1FireBlock@@UEAA@XZ
    virtual ~FireBlock() = default;

    // vIndex: 5, symbol:
    // ?getCollisionShape@FireBlock@@UEBA?AVAABB@@AEBVBlock@@AEBVIConstBlockSource@@AEBVBlockPos@@V?$optional_ref@$$CBVGetCollisionShapeInterface@@@@@Z
    virtual class AABB
    getCollisionShape(class Block const&, class IConstBlockSource const&, class BlockPos const&, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    // vIndex: 9, symbol: ?getOutline@FireBlock@@UEBAAEBVAABB@@AEBVBlock@@AEBVIConstBlockSource@@AEBVBlockPos@@AEAV2@@Z
    virtual class AABB const&
    getOutline(class Block const&, class IConstBlockSource const&, class BlockPos const&, class AABB&) const;

    // vIndex: 55, symbol: ?waterSpreadCausesSpawn@FireBlock@@UEBA_NXZ
    virtual bool waterSpreadCausesSpawn() const;

    // vIndex: 56, symbol: ?canContainLiquid@FireBlock@@UEBA_NXZ
    virtual bool canContainLiquid() const;

    // vIndex: 61, symbol: ?checkIsPathable@FireBlock@@UEBA_NAEAVActor@@AEBVBlockPos@@1@Z
    virtual bool
    checkIsPathable(class Actor& entity, class BlockPos const& lastPathPos, class BlockPos const& pathPos) const;

    // vIndex: 82, symbol: ?mayPick@FireBlock@@UEBA_NXZ
    virtual bool mayPick() const;

    // vIndex: 85, symbol: ?mayPlace@FireBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual bool mayPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 92, symbol: ?neighborChanged@FireBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@1@Z
    virtual void
    neighborChanged(class BlockSource& region, class BlockPos const& pos, class BlockPos const& neighborPos) const;

    // vIndex: 133, symbol: ?animateTickBedrockLegacy@FireBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual void animateTickBedrockLegacy(class BlockSource&, class BlockPos const&, class Random&) const;

    // vIndex: 145, symbol: ?onPlace@FireBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void onPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 147, symbol: ?tick@FireBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual void tick(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // vIndex: 162, symbol: ?entityInside@FireBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVActor@@@Z
    virtual void entityInside(class BlockSource&, class BlockPos const&, class Actor& entity) const;

    // symbol: ??0FireBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI FireBlock(std::string const& nameId, int id);

    // symbol: ?checkBurn@FireBlock@@QEBAXAEAVBlockSource@@AEBVBlockPos@@HAEAVRandomize@@H@Z
    MCAPI void
    checkBurn(class BlockSource& region, class BlockPos const& pos, int chance, class Randomize& randomize, int age)
        const;

    // symbol: ?isSolidToppedBlock@FireBlock@@SA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI static bool isSolidToppedBlock(class BlockSource& region, class BlockPos const& pos);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_tryAddToTickingQueue@FireBlock@@AEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    MCAPI void _tryAddToTickingQueue(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // symbol: ?_trySpawnSoulFire@FireBlock@@AEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI bool _trySpawnSoulFire(class BlockSource& region, class BlockPos const& pos) const;

    // symbol: ?getFireOdds@FireBlock@@AEBAMAEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI float getFireOdds(class BlockSource& region, class BlockPos const& pos) const;

    // symbol: ?isValidFireLocation@FireBlock@@AEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI bool isValidFireLocation(class BlockSource& region, class BlockPos const& pos) const;

    // NOLINTEND
};
