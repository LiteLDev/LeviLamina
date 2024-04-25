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

class FenceBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    FenceBlock& operator=(FenceBlock const&);
    FenceBlock(FenceBlock const&);
    FenceBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1FenceBlock@@UEAA@XZ
    virtual ~FenceBlock() = default;

    // vIndex: 4, symbol:
    // ?clip@FenceBlock@@UEBA?AVHitResult@@AEBVBlock@@AEBVBlockSource@@AEBVBlockPos@@AEBVVec3@@3W4ShapeType@@V?$optional_ref@$$CBVGetCollisionShapeInterface@@@@@Z
    virtual class HitResult
    clip(class Block const&, class BlockSource const&, class BlockPos const&, class Vec3 const&, class Vec3 const&, ::ShapeType, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    // vIndex: 5, symbol:
    // ?getCollisionShape@FenceBlock@@UEBA?AVAABB@@AEBVBlock@@AEBVIConstBlockSource@@AEBVBlockPos@@V?$optional_ref@$$CBVGetCollisionShapeInterface@@@@@Z
    virtual class AABB
    getCollisionShape(class Block const&, class IConstBlockSource const&, class BlockPos const&, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    // vIndex: 7, symbol:
    // ?addCollisionShapes@FenceBlock@@UEBA_NAEBVBlock@@AEBVIConstBlockSource@@AEBVBlockPos@@PEBVAABB@@AEAV?$vector@VAABB@@V?$allocator@VAABB@@@std@@@std@@V?$optional_ref@$$CBVGetCollisionShapeInterface@@@@@Z
    virtual bool
    addCollisionShapes(class Block const& block, class IConstBlockSource const& region, class BlockPos const& pos, class AABB const* intersectTestBox, std::vector<class AABB>& inoutBoxes, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    // vIndex: 9, symbol: ?getOutline@FenceBlock@@UEBAAEBVAABB@@AEBVBlock@@AEBVIConstBlockSource@@AEBVBlockPos@@AEAV2@@Z
    virtual class AABB const&
    getOutline(class Block const&, class IConstBlockSource const&, class BlockPos const&, class AABB&) const;

    // vIndex: 10, symbol:
    // ?getVisualShapeInWorld@FenceBlock@@UEBAAEBVAABB@@AEBVBlock@@AEBVIConstBlockSource@@AEBVBlockPos@@AEAV2@@Z
    virtual class AABB const&
    getVisualShapeInWorld(class Block const&, class IConstBlockSource const&, class BlockPos const&, class AABB&) const;

    // vIndex: 13, symbol: ?getLiquidClipVolume@FenceBlock@@UEBA_NAEBVBlock@@AEAVBlockSource@@AEBVBlockPos@@AEAVAABB@@@Z
    virtual bool getLiquidClipVolume(class Block const&, class BlockSource&, class BlockPos const&, class AABB&) const;

    // vIndex: 23, symbol: ?canProvideSupport@FenceBlock@@UEBA_NAEBVBlock@@EW4BlockSupportType@@@Z
    virtual bool canProvideSupport(class Block const&, uchar face, ::BlockSupportType type) const;

    // vIndex: 25, symbol: ?canConnect@FenceBlock@@UEBA_NAEBVBlock@@E0@Z
    virtual bool canConnect(class Block const& otherBlock, uchar, class Block const&) const;

    // vIndex: 33, symbol: ?isFenceBlock@FenceBlock@@UEBA_NXZ
    virtual bool isFenceBlock() const;

    // vIndex: 56, symbol: ?canContainLiquid@FenceBlock@@UEBA_NXZ
    virtual bool canContainLiquid() const;

    // vIndex: 85, symbol: ?mayPlace@FenceBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual bool mayPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 89, symbol: ?breaksFallingBlocks@FenceBlock@@UEBA_NAEBVBlock@@VBaseGameVersion@@@Z
    virtual bool breaksFallingBlocks(class Block const&, class BaseGameVersion version) const;

    // vIndex: 95, symbol: ?asItemInstance@FenceBlock@@UEBA?AVItemInstance@@AEBVBlock@@PEBVBlockActor@@@Z
    virtual class ItemInstance asItemInstance(class Block const& block, class BlockActor const*) const;

    // vIndex: 118, symbol:
    // ?buildDescriptionId@FenceBlock@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVBlock@@@Z
    virtual std::string buildDescriptionId(class Block const&) const;

    // vIndex: 151, symbol: ?use@FenceBlock@@UEBA_NAEAVPlayer@@AEBVBlockPos@@E@Z
    virtual bool use(class Player& player, class BlockPos const& pos, uchar face) const;

    // symbol: ??0FenceBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBVMaterial@@@Z
    MCAPI FenceBlock(std::string const& nameId, int id, class Material const& material);

    // symbol:
    // ?fetchPathableNeighbors@FenceBlock@@QEBAXAEAV?$vector@VBlockPos@@V?$allocator@VBlockPos@@@std@@@std@@AEAVBlockSource@@AEBVBlockPos@@AEBVVec3@@@Z
    MCAPI void fetchPathableNeighbors(
        std::vector<class BlockPos>& outNeighbors,
        class BlockSource&           region,
        class BlockPos const&        pos,
        class Vec3 const&            entityPos
    ) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_getShape@FenceBlock@@CAAEBVAABB@@AEBVIConstBlockSource@@AEBVBlockPos@@AEBVBlock@@AEAV2@_N@Z
    MCAPI static class AABB const&
    _getShape(class IConstBlockSource const&, class BlockPos const&, class Block const&, class AABB&, bool);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?FENCE_DOESNT_BREAK_FALLING_BLOCK_VERSION@FenceBlock@@0VBaseGameVersion@@B
    MCAPI static class BaseGameVersion const FENCE_DOESNT_BREAK_FALLING_BLOCK_VERSION;

    // NOLINTEND
};
