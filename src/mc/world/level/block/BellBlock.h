#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/enums/ShapeType.h"
#include "mc/world/Direction.h"
#include "mc/world/level/block/ActorBlock.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class BellBlock : public ::ActorBlock {
public:
    // prevent constructor by default
    BellBlock& operator=(BellBlock const&);
    BellBlock(BellBlock const&);
    BellBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1BellBlock@@UEAA@XZ
    virtual ~BellBlock() = default;

    // vIndex: 11, symbol: ?getVisualShape@BellBlock@@UEBAAEBVAABB@@AEBVBlock@@AEAV2@@Z
    virtual class AABB const& getVisualShape(class Block const&, class AABB&) const;

    // vIndex: 17, symbol: ?onProjectileHit@BellBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEBVActor@@@Z
    virtual void
    onProjectileHit(class BlockSource& region, class BlockPos const& pos, class Actor const& projectile) const;

    // vIndex: 25, symbol: ?canConnect@BellBlock@@UEBA_NAEBVBlock@@E0@Z
    virtual bool canConnect(class Block const& otherBlock, uchar toOther, class Block const& thisBlock) const;

    // vIndex: 56, symbol: ?canContainLiquid@BellBlock@@UEBA_NXZ
    virtual bool canContainLiquid() const;

    // vIndex: 58, symbol: ?shouldConnectToRedstone@BellBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@W4Type@Direction@@@Z
    virtual bool shouldConnectToRedstone(class BlockSource&, class BlockPos const&, ::Direction::Type) const;

    // vIndex: 68, symbol: ?movedByPiston@BellBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void movedByPiston(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 71, symbol: ?setupRedstoneComponent@BellBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void setupRedstoneComponent(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 92, symbol: ?neighborChanged@BellBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@1@Z
    virtual void
    neighborChanged(class BlockSource& region, class BlockPos const& pos, class BlockPos const& neighborPos) const;

    // vIndex: 97, symbol: ?getPlacementBlock@BellBlock@@UEBAAEBVBlock@@AEBVActor@@AEBVBlockPos@@EAEBVVec3@@H@Z
    virtual class Block const& getPlacementBlock(
        class Actor const&    by,
        class BlockPos const& pos,
        uchar                 face,
        class Vec3 const&     clickPos,
        int                   itemValue
    ) const;

    // vIndex: 145, symbol: ?onPlace@BellBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void onPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 147, symbol: ?tick@BellBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual void tick(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // vIndex: 149, symbol: ?isInteractiveBlock@BellBlock@@UEBA_NXZ
    virtual bool isInteractiveBlock() const;

    // vIndex: 151, symbol: ?use@BellBlock@@UEBA_NAEAVPlayer@@AEBVBlockPos@@E@Z
    virtual bool use(class Player& player, class BlockPos const& pos, uchar face) const;

    // vIndex: 153, symbol: ?canSurvive@BellBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual bool canSurvive(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 160, symbol: ?_onHitByActivatingAttack@BellBlock@@EEBAXAEAVBlockSource@@AEBVBlockPos@@PEAVActor@@@Z
    virtual void _onHitByActivatingAttack(class BlockSource&, class BlockPos const&, class Actor*) const;

    // vIndex: 162, symbol: ?entityInside@BellBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVActor@@@Z
    virtual void entityInside(class BlockSource& region, class BlockPos const& pos, class Actor& actor) const;

    // symbol: ??0BellBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI BellBlock(std::string const& nameId, int id);

    // symbol: ?hasValidAttachment@BellBlock@@QEBA_NAEBVBlock@@AEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI bool hasValidAttachment(class Block const& block, class BlockSource& region, class BlockPos const& pos) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_determineAttachment@BellBlock@@AEBAAEBVBlock@@AEBVActor@@AEAVBlockSource@@AEBVBlockPos@@E@Z
    MCAPI class Block const&
    _determineAttachment(class Actor const& by, class BlockSource& region, class BlockPos const& pos, uchar face) const;

    // symbol: ?_getItemId@BellBlock@@AEBAFAEBVBlockSource@@V?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
    MCAPI short _getItemId(class BlockSource const& region, std::string_view itemName) const;

    // symbol: ?_sendBellUsedEventToClient@BellBlock@@AEBAXAEBVBlockSource@@AEBVActor@@@Z
    MCAPI void _sendBellUsedEventToClient(class BlockSource const& region, class Actor const& sourceActor) const;

    // symbol: ?_tryAttachToNeighbors@BellBlock@@AEBAXAEAVBlockSource@@AEBVBlockPos@@1H@Z
    MCAPI void _tryAttachToNeighbors(
        class BlockSource&    region,
        class BlockPos const& pos,
        class BlockPos const& neighborPos,
        int                   updateFlags
    ) const;

    // NOLINTEND
};
