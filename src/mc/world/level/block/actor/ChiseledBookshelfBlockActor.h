#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ChiseledBookshelfBlockActor {
public:
    // prevent constructor by default
    ChiseledBookshelfBlockActor& operator=(ChiseledBookshelfBlockActor const&);
    ChiseledBookshelfBlockActor(ChiseledBookshelfBlockActor const&);
    ChiseledBookshelfBlockActor();

public:
    // NOLINTBEGIN
    // symbol:
    // ?_getUpdatePacket@ChiseledBookshelfBlockActor@@MEAA?AV?$unique_ptr@VBlockActorDataPacket@@U?$default_delete@VBlockActorDataPacket@@@std@@@std@@AEAVBlockSource@@@Z
    MCVAPI std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource&);

    // symbol: ?_onUpdatePacket@ChiseledBookshelfBlockActor@@MEAAXAEBVCompoundTag@@AEAVBlockSource@@@Z
    MCVAPI void _onUpdatePacket(class CompoundTag const& data, class BlockSource& region);

    // symbol: ?addItemToFirstEmptySlot@ChiseledBookshelfBlockActor@@UEAA_NAEBVItemStack@@@Z
    MCVAPI bool addItemToFirstEmptySlot(class ItemStack const& item);

    // symbol: ?canPullOutItem@ChiseledBookshelfBlockActor@@UEBA_NHHAEBVItemStack@@@Z
    MCVAPI bool canPullOutItem(int slot, int, class ItemStack const&) const;

    // symbol: ?canPushInItem@ChiseledBookshelfBlockActor@@UEBA_NHHAEBVItemStack@@@Z
    MCVAPI bool canPushInItem(int slot, int, class ItemStack const& item) const;

    // symbol: ?getContainer@ChiseledBookshelfBlockActor@@UEAAPEAVContainer@@XZ
    MCVAPI class Container* getContainer();

    // symbol: ?getContainer@ChiseledBookshelfBlockActor@@UEBAPEBVContainer@@XZ
    MCVAPI class Container const* getContainer() const;

    // symbol: ?getContainerSize@ChiseledBookshelfBlockActor@@UEBAHXZ
    MCVAPI int getContainerSize() const;

    // symbol: ?getItem@ChiseledBookshelfBlockActor@@UEBAAEBVItemStack@@H@Z
    MCVAPI class ItemStack const& getItem(int slot) const;

    // symbol: ?getMaxStackSize@ChiseledBookshelfBlockActor@@UEBAHXZ
    MCVAPI int getMaxStackSize() const;

    // symbol:
    // ?getName@ChiseledBookshelfBlockActor@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCVAPI std::string getName() const;

    // symbol: ?isEmpty@ChiseledBookshelfBlockActor@@UEBA_NXZ
    MCVAPI bool isEmpty() const;

    // symbol: ?load@ChiseledBookshelfBlockActor@@UEAAXAEAVLevel@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    MCVAPI void load(class Level& level, class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    // symbol: ?onChanged@ChiseledBookshelfBlockActor@@UEAAXAEAVBlockSource@@@Z
    MCVAPI void onChanged(class BlockSource& region);

    // symbol: ?save@ChiseledBookshelfBlockActor@@UEBA_NAEAVCompoundTag@@@Z
    MCVAPI bool save(class CompoundTag& tag) const;

    // symbol: ?serverInitItemStackIds@ChiseledBookshelfBlockActor@@UEAAXHHV?$function@$$A6AXHAEBVItemStack@@@Z@std@@@Z
    MCVAPI void serverInitItemStackIds(
        int                                              containerSlot,
        int                                              count,
        std::function<void(int, class ItemStack const&)> onNetIdChanged
    );

    // symbol: ?setItem@ChiseledBookshelfBlockActor@@UEAAXHAEBVItemStack@@@Z
    MCVAPI void setItem(int slot, class ItemStack const& item);

    // symbol: ?startOpen@ChiseledBookshelfBlockActor@@UEAAXAEAVPlayer@@@Z
    MCVAPI void startOpen(class Player&);

    // symbol: ?stopOpen@ChiseledBookshelfBlockActor@@UEAAXAEAVPlayer@@@Z
    MCVAPI void stopOpen(class Player&);

    // symbol: ??0ChiseledBookshelfBlockActor@@QEAA@AEBVBlockPos@@@Z
    MCAPI explicit ChiseledBookshelfBlockActor(class BlockPos const& pos);

    // symbol: ?getLastInteractedSlot@ChiseledBookshelfBlockActor@@QEBAIXZ
    MCAPI uint getLastInteractedSlot() const;

    // symbol: ?retrieveBook@ChiseledBookshelfBlockActor@@QEAA?AVItemStack@@H@Z
    MCAPI class ItemStack retrieveBook(int slot);

    // symbol: ?allowedItem@ChiseledBookshelfBlockActor@@SA_NAEBVItemStack@@@Z
    MCAPI static bool allowedItem(class ItemStack const& item);

    // symbol: ?tryGet@ChiseledBookshelfBlockActor@@SAPEAV1@AEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI static class ChiseledBookshelfBlockActor* tryGet(class BlockSource& region, class BlockPos const& pos);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_numberOfBooksStored@ChiseledBookshelfBlockActor@@AEBAIXZ
    MCAPI uint _numberOfBooksStored() const;

    // symbol: ?_setItemInternal@ChiseledBookshelfBlockActor@@AEAAXHAEBVItemStack@@_N@Z
    MCAPI void _setItemInternal(int, class ItemStack const&, bool);

    // NOLINTEND
};
