#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/enums/ShapeType.h"
#include "mc/enums/WoodType.h"
#include "mc/world/Direction.h"
#include "mc/world/level/block/BlockLegacy.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class FenceGateBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    FenceGateBlock& operator=(FenceGateBlock const&);
    FenceGateBlock(FenceGateBlock const&);
    FenceGateBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1FenceGateBlock@@UEAA@XZ
    virtual ~FenceGateBlock() = default;

    // vIndex: 5, symbol:
    // ?getCollisionShape@FenceGateBlock@@UEBA?AVAABB@@AEBVBlock@@AEBVIConstBlockSource@@AEBVBlockPos@@V?$optional_ref@$$CBVGetCollisionShapeInterface@@@@@Z
    virtual class AABB
    getCollisionShape(class Block const&, class IConstBlockSource const&, class BlockPos const&, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    // vIndex: 9, symbol:
    // ?getOutline@FenceGateBlock@@UEBAAEBVAABB@@AEBVBlock@@AEBVIConstBlockSource@@AEBVBlockPos@@AEAV2@@Z
    virtual class AABB const&
    getOutline(class Block const&, class IConstBlockSource const&, class BlockPos const&, class AABB&) const;

    // vIndex: 13, symbol:
    // ?getLiquidClipVolume@FenceGateBlock@@UEBA_NAEBVBlock@@AEAVBlockSource@@AEBVBlockPos@@AEAVAABB@@@Z
    virtual bool getLiquidClipVolume(class Block const&, class BlockSource&, class BlockPos const&, class AABB&) const;

    // vIndex: 25, symbol: ?canConnect@FenceGateBlock@@UEBA_NAEBVBlock@@E0@Z
    virtual bool canConnect(class Block const& otherBlock, uchar toOther, class Block const& thisBlock) const;

    // vIndex: 34, symbol: ?isFenceGateBlock@FenceGateBlock@@UEBA_NXZ
    virtual bool isFenceGateBlock() const;

    // vIndex: 56, symbol: ?canContainLiquid@FenceGateBlock@@UEBA_NXZ
    virtual bool canContainLiquid() const;

    // vIndex: 65, symbol: ?onRedstoneUpdate@FenceGateBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@H_N@Z
    virtual void
    onRedstoneUpdate(class BlockSource& region, class BlockPos const& pos, int strength, bool isFirstTime) const;

    // vIndex: 71, symbol: ?setupRedstoneComponent@FenceGateBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void setupRedstoneComponent(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 78, symbol: ?ignoreEntitiesOnPistonMove@FenceGateBlock@@UEBA_NAEBVBlock@@@Z
    virtual bool ignoreEntitiesOnPistonMove(class Block const& block) const;

    // vIndex: 92, symbol: ?neighborChanged@FenceGateBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@1@Z
    virtual void
    neighborChanged(class BlockSource& region, class BlockPos const& pos, class BlockPos const& neighborPos) const;

    // vIndex: 97, symbol: ?getPlacementBlock@FenceGateBlock@@UEBAAEBVBlock@@AEBVActor@@AEBVBlockPos@@EAEBVVec3@@H@Z
    virtual class Block const& getPlacementBlock(
        class Actor const&    by,
        class BlockPos const& pos,
        uchar                 face,
        class Vec3 const&     clickPos,
        int                   itemValue
    ) const;

    // vIndex: 145, symbol: ?onPlace@FenceGateBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void onPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 147, symbol: ?tick@FenceGateBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual void tick(class BlockSource& region, class BlockPos const& pos, class Random&) const;

    // vIndex: 149, symbol: ?isInteractiveBlock@FenceGateBlock@@UEBA_NXZ
    virtual bool isInteractiveBlock() const;

    // vIndex: 151, symbol: ?use@FenceGateBlock@@UEBA_NAEAVPlayer@@AEBVBlockPos@@E@Z
    virtual bool use(class Player& player, class BlockPos const& pos, uchar face) const;

    // vIndex: 160, symbol: ?_onHitByActivatingAttack@FenceGateBlock@@EEBAXAEAVBlockSource@@AEBVBlockPos@@PEAVActor@@@Z
    virtual void _onHitByActivatingAttack(class BlockSource&, class BlockPos const&, class Actor*) const;

    // symbol: ??0FenceGateBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HW4WoodType@@@Z
    MCAPI FenceGateBlock(std::string const& nameId, int id, ::WoodType woodType);

    // symbol: ?resolveIsInWall@FenceGateBlock@@QEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI void resolveIsInWall(class BlockSource& region, class BlockPos const& pos) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_onOpenChanged@FenceGateBlock@@AEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI void _onOpenChanged(class BlockSource& region, class BlockPos const& pos) const;

    // symbol:
    // ?_setOpen@FenceGateBlock@@AEBAXAEAVBlockSource@@V?$not_null@PEBVBlock@@@gsl@@AEBVBlockPos@@PEAVPlayer@@_N@Z
    MCAPI void _setOpen(
        class BlockSource&                region,
        gsl::not_null<class Block const*> block,
        class BlockPos const&             pos,
        class Player*                     player,
        bool                              shouldBeOpen
    ) const;

    // symbol: ?_getShape@FenceGateBlock@@CAAEBVAABB@@AEBVBlockPos@@AEBVBlock@@AEAV2@_N@Z
    MCAPI static class AABB const& _getShape(class BlockPos const&, class Block const&, class AABB&, bool);

    // NOLINTEND
};
