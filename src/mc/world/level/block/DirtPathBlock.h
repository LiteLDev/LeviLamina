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

class DirtPathBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    DirtPathBlock& operator=(DirtPathBlock const&);
    DirtPathBlock(DirtPathBlock const&);
    DirtPathBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1DirtPathBlock@@UEAA@XZ
    virtual ~DirtPathBlock() = default;

    // vIndex: 5, symbol:
    // ?getCollisionShape@DirtPathBlock@@UEBA?AVAABB@@AEBVBlock@@AEBVIConstBlockSource@@AEBVBlockPos@@V?$optional_ref@$$CBVGetCollisionShapeInterface@@@@@Z
    virtual class AABB
    getCollisionShape(class Block const&, class IConstBlockSource const&, class BlockPos const&, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    // vIndex: 9, symbol:
    // ?getOutline@DirtPathBlock@@UEBAAEBVAABB@@AEBVBlock@@AEBVIConstBlockSource@@AEBVBlockPos@@AEAV2@@Z
    virtual class AABB const&
    getOutline(class Block const&, class IConstBlockSource const&, class BlockPos const&, class AABB&) const;

    // vIndex: 23, symbol: ?canProvideSupport@DirtPathBlock@@UEBA_NAEBVBlock@@EW4BlockSupportType@@@Z
    virtual bool canProvideSupport(class Block const&, uchar face, ::BlockSupportType) const;

    // vIndex: 47, symbol: ?canBeOriginalSurface@DirtPathBlock@@UEBA_NXZ
    virtual bool canBeOriginalSurface() const;

    // vIndex: 56, symbol: ?canContainLiquid@DirtPathBlock@@UEBA_NXZ
    virtual bool canContainLiquid() const;

    // vIndex: 88, symbol: ?tryToTill@DirtPathBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVActor@@AEAVItemStack@@@Z
    virtual bool
    tryToTill(class BlockSource& region, class BlockPos const& pos, class Actor& entity, class ItemStack& item) const;

    // vIndex: 92, symbol: ?neighborChanged@DirtPathBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@1@Z
    virtual void
    neighborChanged(class BlockSource& region, class BlockPos const& pos, class BlockPos const& neighborPos) const;

    // vIndex: 147, symbol: ?tick@DirtPathBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual void tick(class BlockSource& region, class BlockPos const& pos, class Random&) const;

    // vIndex: 151, symbol: ?use@DirtPathBlock@@UEBA_NAEAVPlayer@@AEBVBlockPos@@E@Z
    virtual bool use(class Player& player, class BlockPos const& pos, uchar face) const;

    // vIndex: 153, symbol: ?canSurvive@DirtPathBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual bool canSurvive(class BlockSource& region, class BlockPos const& pos) const;

    // symbol: ??0DirtPathBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI DirtPathBlock(std::string const& nameId, int id);

    // symbol: ?BLOCK_AABB@DirtPathBlock@@2VAABB@@A
    MCAPI static class AABB BLOCK_AABB;

    // NOLINTEND
};
