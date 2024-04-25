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

class ThinFenceBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    ThinFenceBlock& operator=(ThinFenceBlock const&);
    ThinFenceBlock(ThinFenceBlock const&);
    ThinFenceBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ThinFenceBlock@@UEAA@XZ
    virtual ~ThinFenceBlock() = default;

    // vIndex: 5, symbol:
    // ?getCollisionShape@ThinFenceBlock@@UEBA?AVAABB@@AEBVBlock@@AEBVIConstBlockSource@@AEBVBlockPos@@V?$optional_ref@$$CBVGetCollisionShapeInterface@@@@@Z
    virtual class AABB
    getCollisionShape(class Block const&, class IConstBlockSource const&, class BlockPos const&, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    // vIndex: 6, symbol:
    // ?getCollisionShapeForCamera@ThinFenceBlock@@UEBA_NAEAVAABB@@AEBVBlock@@AEBVIConstBlockSource@@AEBVBlockPos@@@Z
    virtual bool
    getCollisionShapeForCamera(class AABB&, class Block const&, class IConstBlockSource const&, class BlockPos const&)
        const;

    // vIndex: 7, symbol:
    // ?addCollisionShapes@ThinFenceBlock@@UEBA_NAEBVBlock@@AEBVIConstBlockSource@@AEBVBlockPos@@PEBVAABB@@AEAV?$vector@VAABB@@V?$allocator@VAABB@@@std@@@std@@V?$optional_ref@$$CBVGetCollisionShapeInterface@@@@@Z
    virtual bool addCollisionShapes(
        class Block const&                                         block,
        class IConstBlockSource const&                             region,
        class BlockPos const&                                      pos,
        class AABB const*                                          intersectTestBox,
        std::vector<class AABB>&                                   inoutBoxes,
        class optional_ref<class GetCollisionShapeInterface const> entity
    ) const;

    // vIndex: 8, symbol:
    // ?addAABBs@ThinFenceBlock@@UEBAXAEBVBlock@@AEBVIConstBlockSource@@AEBVBlockPos@@PEBVAABB@@AEAV?$vector@VAABB@@V?$allocator@VAABB@@@std@@@std@@@Z
    virtual void addAABBs(
        class Block const&             block,
        class IConstBlockSource const& region,
        class BlockPos const&          blockPos,
        class AABB const*              intersectTestBox,
        std::vector<class AABB>&       inoutBoxes
    ) const;

    // vIndex: 9, symbol:
    // ?getOutline@ThinFenceBlock@@UEBAAEBVAABB@@AEBVBlock@@AEBVIConstBlockSource@@AEBVBlockPos@@AEAV2@@Z
    virtual class AABB const&
    getOutline(class Block const&, class IConstBlockSource const&, class BlockPos const&, class AABB&) const;

    // vIndex: 10, symbol:
    // ?getVisualShapeInWorld@ThinFenceBlock@@UEBAAEBVAABB@@AEBVBlock@@AEBVIConstBlockSource@@AEBVBlockPos@@AEAV2@@Z
    virtual class AABB const&
    getVisualShapeInWorld(class Block const&, class IConstBlockSource const&, class BlockPos const&, class AABB&) const;

    // vIndex: 13, symbol:
    // ?getLiquidClipVolume@ThinFenceBlock@@UEBA_NAEBVBlock@@AEAVBlockSource@@AEBVBlockPos@@AEAVAABB@@@Z
    virtual bool getLiquidClipVolume(class Block const&, class BlockSource&, class BlockPos const&, class AABB&) const;

    // vIndex: 23, symbol: ?canProvideSupport@ThinFenceBlock@@UEBA_NAEBVBlock@@EW4BlockSupportType@@@Z
    virtual bool canProvideSupport(class Block const& block, uchar face, ::BlockSupportType type) const;

    // vIndex: 25, symbol: ?canConnect@ThinFenceBlock@@UEBA_NAEBVBlock@@E0@Z
    virtual bool canConnect(class Block const& otherBlock, uchar toOther, class Block const& thisBlock) const;

    // vIndex: 35, symbol: ?isThinFenceBlock@ThinFenceBlock@@UEBA_NXZ
    virtual bool isThinFenceBlock() const;

    // vIndex: 56, symbol: ?canContainLiquid@ThinFenceBlock@@UEBA_NXZ
    virtual bool canContainLiquid() const;

    // vIndex: 89, symbol: ?breaksFallingBlocks@ThinFenceBlock@@UEBA_NAEBVBlock@@VBaseGameVersion@@@Z
    virtual bool breaksFallingBlocks(class Block const& block, class BaseGameVersion version) const;

    // symbol:
    // ??0ThinFenceBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBVMaterial@@_N2@Z
    MCAPI ThinFenceBlock(std::string const&, int, class Material const&, bool, bool);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?THIN_FENCE_DOESNT_BREAK_FALLING_BLOCK_VERSION@ThinFenceBlock@@0VBaseGameVersion@@B
    MCAPI static class BaseGameVersion const THIN_FENCE_DOESNT_BREAK_FALLING_BLOCK_VERSION;

    // NOLINTEND
};
