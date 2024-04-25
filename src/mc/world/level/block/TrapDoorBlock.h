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

class TrapDoorBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    TrapDoorBlock& operator=(TrapDoorBlock const&);
    TrapDoorBlock(TrapDoorBlock const&);
    TrapDoorBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1TrapDoorBlock@@UEAA@XZ
    virtual ~TrapDoorBlock();

    // vIndex: 9, symbol:
    // ?getOutline@TrapDoorBlock@@UEBAAEBVAABB@@AEBVBlock@@AEBVIConstBlockSource@@AEBVBlockPos@@AEAV2@@Z
    virtual class AABB const&
    getOutline(class Block const&, class IConstBlockSource const&, class BlockPos const&, class AABB&) const;

    // vIndex: 11, symbol: ?getVisualShape@TrapDoorBlock@@UEBAAEBVAABB@@AEBVBlock@@AEAV2@@Z
    virtual class AABB const& getVisualShape(class Block const&, class AABB&) const;

    // vIndex: 23, symbol: ?canProvideSupport@TrapDoorBlock@@UEBA_NAEBVBlock@@EW4BlockSupportType@@@Z
    virtual bool canProvideSupport(class Block const& block, uchar face, ::BlockSupportType type) const;

    // vIndex: 25, symbol: ?canConnect@TrapDoorBlock@@UEBA_NAEBVBlock@@E0@Z
    virtual bool canConnect(class Block const& otherBlock, uchar toOther, class Block const& thisBlock) const;

    // vIndex: 61, symbol: ?checkIsPathable@TrapDoorBlock@@UEBA_NAEAVActor@@AEBVBlockPos@@1@Z
    virtual bool
    checkIsPathable(class Actor& entity, class BlockPos const& lastPathPos, class BlockPos const& pathPos) const;

    // vIndex: 65, symbol: ?onRedstoneUpdate@TrapDoorBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@H_N@Z
    virtual void
    onRedstoneUpdate(class BlockSource& region, class BlockPos const& pos, int strength, bool isFirstTime) const;

    // vIndex: 71, symbol: ?setupRedstoneComponent@TrapDoorBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void setupRedstoneComponent(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 89, symbol: ?breaksFallingBlocks@TrapDoorBlock@@UEBA_NAEBVBlock@@VBaseGameVersion@@@Z
    virtual bool breaksFallingBlocks(class Block const& block, class BaseGameVersion version) const;

    // vIndex: 95, symbol: ?asItemInstance@TrapDoorBlock@@UEBA?AVItemInstance@@AEBVBlock@@PEBVBlockActor@@@Z
    virtual class ItemInstance asItemInstance(class Block const& block, class BlockActor const*) const;

    // vIndex: 97, symbol: ?getPlacementBlock@TrapDoorBlock@@UEBAAEBVBlock@@AEBVActor@@AEBVBlockPos@@EAEBVVec3@@H@Z
    virtual class Block const& getPlacementBlock(
        class Actor const&    by,
        class BlockPos const& pos,
        uchar                 face,
        class Vec3 const&     clickPos,
        int                   itemValue
    ) const;

    // vIndex: 145, symbol: ?onPlace@TrapDoorBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void onPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 149, symbol: ?isInteractiveBlock@TrapDoorBlock@@UEBA_NXZ
    virtual bool isInteractiveBlock() const;

    // vIndex: 151, symbol: ?use@TrapDoorBlock@@UEBA_NAEAVPlayer@@AEBVBlockPos@@E@Z
    virtual bool use(class Player& player, class BlockPos const& pos, uchar face) const;

    // vIndex: 160, symbol: ?_onHitByActivatingAttack@TrapDoorBlock@@EEBAXAEAVBlockSource@@AEBVBlockPos@@PEAVActor@@@Z
    virtual void _onHitByActivatingAttack(class BlockSource&, class BlockPos const&, class Actor*) const;

    // symbol: ??0TrapDoorBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBVMaterial@@@Z
    MCAPI TrapDoorBlock(std::string const& nameId, int id, class Material const& material);

    // symbol: ?setOpen@TrapDoorBlock@@QEBAXAEAVBlockSource@@AEBVBlockPos@@_N@Z
    MCAPI void setOpen(class BlockSource& region, class BlockPos const& pos, bool shouldOpen) const;

    // symbol: ?toggleOpen@TrapDoorBlock@@QEBAXAEAVBlockSource@@PEAVActor@@AEBVBlockPos@@@Z
    MCAPI void toggleOpen(class BlockSource&, class Actor*, class BlockPos const&) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_getShape@TrapDoorBlock@@CAAEBVAABB@@AEBVBlock@@AEAV2@_N@Z
    MCAPI static class AABB const& _getShape(class Block const&, class AABB&, bool);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?TRAP_DOOR_DOESNT_BREAK_FALLING_BLOCK_VERSION@TrapDoorBlock@@0VBaseGameVersion@@B
    MCAPI static class BaseGameVersion const TRAP_DOOR_DOESNT_BREAK_FALLING_BLOCK_VERSION;

    // NOLINTEND
};
