#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LecternBlockActor {
public:
    // prevent constructor by default
    LecternBlockActor& operator=(LecternBlockActor const&);
    LecternBlockActor(LecternBlockActor const&);
    LecternBlockActor();

public:
    // NOLINTBEGIN
    // symbol:
    // ?_getUpdatePacket@LecternBlockActor@@MEAA?AV?$unique_ptr@VBlockActorDataPacket@@U?$default_delete@VBlockActorDataPacket@@@std@@@std@@AEAVBlockSource@@@Z
    MCVAPI std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource& region);

    // symbol: ?_onUpdatePacket@LecternBlockActor@@MEAAXAEBVCompoundTag@@AEAVBlockSource@@@Z
    MCVAPI void _onUpdatePacket(class CompoundTag const& data, class BlockSource& region);

    // symbol: ?getContainer@LecternBlockActor@@UEAAPEAVContainer@@XZ
    MCVAPI class Container* getContainer();

    // symbol: ?getContainer@LecternBlockActor@@UEBAPEBVContainer@@XZ
    MCVAPI class Container const* getContainer() const;

    // symbol: ?getContainerSize@LecternBlockActor@@UEBAHXZ
    MCVAPI int getContainerSize() const;

    // symbol: ?getItem@LecternBlockActor@@UEBAAEBVItemStack@@H@Z
    MCVAPI class ItemStack const& getItem(int slot) const;

    // symbol: ?getMaxStackSize@LecternBlockActor@@UEBAHXZ
    MCVAPI int getMaxStackSize() const;

    // symbol: ?load@LecternBlockActor@@UEAAXAEAVLevel@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    MCVAPI void load(class Level& level, class CompoundTag const& base, class DataLoadHelper& dataLoadHelper);

    // symbol: ?onChanged@LecternBlockActor@@UEAAXAEAVBlockSource@@@Z
    MCVAPI void onChanged(class BlockSource& region);

    // symbol: ?save@LecternBlockActor@@UEBA_NAEAVCompoundTag@@@Z
    MCVAPI bool save(class CompoundTag& tag) const;

    // symbol: ?serverInitItemStackIds@LecternBlockActor@@UEAAXHHV?$function@$$A6AXHAEBVItemStack@@@Z@std@@@Z
    MCVAPI void serverInitItemStackIds(
        int                                              containerSlot,
        int                                              count,
        std::function<void(int, class ItemStack const&)> onNetIdChanged
    );

    // symbol: ?setItem@LecternBlockActor@@UEAAXHAEBVItemStack@@@Z
    MCVAPI void setItem(int slot, class ItemStack const& item);

    // symbol: ?startOpen@LecternBlockActor@@UEAAXAEAVPlayer@@@Z
    MCVAPI void startOpen(class Player&);

    // symbol: ?stopOpen@LecternBlockActor@@UEAAXAEAVPlayer@@@Z
    MCVAPI void stopOpen(class Player&);

    // symbol: ??0LecternBlockActor@@QEAA@AEBVBlockPos@@@Z
    MCAPI explicit LecternBlockActor(class BlockPos const& pos);

    // symbol: ?dropBook@LecternBlockActor@@QEAAXAEAVBlockSource@@@Z
    MCAPI void dropBook(class BlockSource& region);

    // symbol: ?getPage@LecternBlockActor@@QEBAHXZ
    MCAPI int getPage() const;

    // symbol: ?getTotalPages@LecternBlockActor@@QEBAHXZ
    MCAPI int getTotalPages() const;

    // symbol: ?hasBook@LecternBlockActor@@QEBA_NXZ
    MCAPI bool hasBook() const;

    // symbol: ?setItemFromBlock@LecternBlockActor@@QEAAXHAEBVItemStack@@@Z
    MCAPI void setItemFromBlock(int slot, class ItemStack const& item);

    // symbol: ?setPageOnServer@LecternBlockActor@@QEAAXHAEAVBlockSource@@@Z
    MCAPI void setPageOnServer(int page, class BlockSource& region);

    // symbol: ?setTotalPages@LecternBlockActor@@QEAAXH@Z
    MCAPI void setTotalPages(int page);

    // NOLINTEND
};
