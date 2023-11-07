#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/actor/ChestBlockActor.h"
#include "mc/world/level/block/utils/BlockActorRendererId.h"
#include "mc/world/level/block/utils/BlockActorType.h"

class ShulkerBoxBlockActor : public ::ChestBlockActor {
public:
    // prevent constructor by default
    ShulkerBoxBlockActor& operator=(ShulkerBoxBlockActor const&);
    ShulkerBoxBlockActor(ShulkerBoxBlockActor const&);
    ShulkerBoxBlockActor();

public:
    // NOLINTBEGIN
    // symbol: ?_detectEntityObstruction@ShulkerBoxBlockActor@@MEBA_NAEAVBlockSource@@@Z
    MCVAPI bool _detectEntityObstruction(class BlockSource&) const;

    // symbol:
    // ?_getUpdatePacket@ShulkerBoxBlockActor@@MEAA?AV?$unique_ptr@VBlockActorDataPacket@@U?$default_delete@VBlockActorDataPacket@@@std@@@std@@AEAVBlockSource@@@Z
    MCVAPI std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource&);

    // symbol: ?_onUpdatePacket@ShulkerBoxBlockActor@@MEAAXAEBVCompoundTag@@AEAVBlockSource@@@Z
    MCVAPI void _onUpdatePacket(class CompoundTag const&, class BlockSource&);

    // symbol: ?canPushInItem@ShulkerBoxBlockActor@@UEBA_NHHAEBVItemStack@@@Z
    MCVAPI bool canPushInItem(int, int, class ItemStack const&) const;

    // symbol: ?getMaxStackSize@ShulkerBoxBlockActor@@UEBAHXZ
    MCVAPI int getMaxStackSize() const;

    // symbol: ?getName@ShulkerBoxBlockActor@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCVAPI std::string getName() const;

    // symbol: ?getObstructionAABB@ShulkerBoxBlockActor@@MEBA?AVAABB@@XZ
    MCVAPI class AABB getObstructionAABB() const;

    // symbol: ?load@ShulkerBoxBlockActor@@UEAAXAEAVLevel@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    MCVAPI void load(class Level&, class CompoundTag const&, class DataLoadHelper&);

    // symbol: ?onPlace@ShulkerBoxBlockActor@@UEAAXAEAVBlockSource@@@Z
    MCVAPI void onPlace(class BlockSource&);

    // symbol: ?playCloseSound@ShulkerBoxBlockActor@@MEAAXAEAVBlockSource@@@Z
    MCVAPI void playCloseSound(class BlockSource&);

    // symbol: ?playOpenSound@ShulkerBoxBlockActor@@MEAAXAEAVBlockSource@@@Z
    MCVAPI void playOpenSound(class BlockSource&);

    // symbol: ?save@ShulkerBoxBlockActor@@UEBA_NAEAVCompoundTag@@@Z
    MCVAPI bool save(class CompoundTag&) const;

    // symbol: ?startOpen@ShulkerBoxBlockActor@@UEAAXAEAVPlayer@@@Z
    MCVAPI void startOpen(class Player&);

    // symbol: ?stopOpen@ShulkerBoxBlockActor@@UEAAXAEAVPlayer@@@Z
    MCVAPI void stopOpen(class Player&);

    // symbol: ?tick@ShulkerBoxBlockActor@@UEAAXAEAVBlockSource@@@Z
    MCVAPI void tick(class BlockSource&);

    // symbol:
    // ??0ShulkerBoxBlockActor@@QEAA@W4BlockActorType@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4BlockActorRendererId@@AEBVBlockPos@@@Z
    MCAPI ShulkerBoxBlockActor(::BlockActorType, std::string const&, ::BlockActorRendererId, class BlockPos const&);

    // symbol: ?setFacingDir@ShulkerBoxBlockActor@@QEAAXE@Z
    MCAPI void setFacingDir(uchar);

    // symbol: ?setupRedstoneComponent@ShulkerBoxBlockActor@@QEBAXAEAVBlockSource@@@Z
    MCAPI void setupRedstoneComponent(class BlockSource&) const;

    // symbol: ?itemAllowedInSlot@ShulkerBoxBlockActor@@SA_NHAEBVItemStackBase@@H@Z
    MCAPI static bool itemAllowedInSlot(int, class ItemStackBase const&, int);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_addRedstoneComponent@ShulkerBoxBlockActor@@AEBAXAEAVBlockSource@@@Z
    MCAPI void _addRedstoneComponent(class BlockSource&) const;

    // symbol: ?_calculateBB@ShulkerBoxBlockActor@@AEAAXXZ
    MCAPI void _calculateBB();

    // symbol: ?_calculateMovementWithCollisions@ShulkerBoxBlockActor@@AEBA?AVVec3@@AEAVBlockSource@@PEAVActor@@@Z
    MCAPI class Vec3 _calculateMovementWithCollisions(class BlockSource&, class Actor*) const;

    // NOLINTEND

private:
    // NOLINTBEGIN
    // symbol: ?ITEMS_SIZE@ShulkerBoxBlockActor@@0HB
    MCAPI static int const ITEMS_SIZE;

    // NOLINTEND

    // member accessor
public:
    // NOLINTBEGIN
    static auto& $ITEMS_SIZE() { return ITEMS_SIZE; }

    // NOLINTEND
};
