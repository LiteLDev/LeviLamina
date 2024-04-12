#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/ChemistryTableType.h"

class ChemistryTableBlockActor {
public:
    // prevent constructor by default
    ChemistryTableBlockActor& operator=(ChemistryTableBlockActor const&);
    ChemistryTableBlockActor(ChemistryTableBlockActor const&);
    ChemistryTableBlockActor();

public:
    // NOLINTBEGIN
    // symbol: ?getContainer@ChemistryTableBlockActor@@UEAAPEAVContainer@@XZ
    MCVAPI class Container* getContainer();

    // symbol: ?getContainer@ChemistryTableBlockActor@@UEBAPEBVContainer@@XZ
    MCVAPI class Container const* getContainer() const;

    // symbol: ?getContainerSize@ChemistryTableBlockActor@@UEBAHXZ
    MCVAPI int getContainerSize() const;

    // symbol: ?getItem@ChemistryTableBlockActor@@UEBAAEBVItemStack@@H@Z
    MCVAPI class ItemStack const& getItem(int slot) const;

    // symbol: ?getMaxStackSize@ChemistryTableBlockActor@@UEBAHXZ
    MCVAPI int getMaxStackSize() const;

    // symbol: ?load@ChemistryTableBlockActor@@UEAAXAEAVLevel@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    MCVAPI void load(class Level& level, class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    // symbol: ?onRemoved@ChemistryTableBlockActor@@UEAAXAEAVBlockSource@@@Z
    MCVAPI void onRemoved(class BlockSource& region);

    // symbol: ?save@ChemistryTableBlockActor@@UEBA_NAEAVCompoundTag@@@Z
    MCVAPI bool save(class CompoundTag& tag) const;

    // symbol: ?serverInitItemStackIds@ChemistryTableBlockActor@@UEAAXHHV?$function@$$A6AXHAEBVItemStack@@@Z@std@@@Z
    MCVAPI void serverInitItemStackIds(
        int                                              containerSlot,
        int                                              count,
        std::function<void(int, class ItemStack const&)> onNetIdChanged
    );

    // symbol: ?setItem@ChemistryTableBlockActor@@UEAAXHAEBVItemStack@@@Z
    MCVAPI void setItem(int slot, class ItemStack const& item);

    // symbol: ?startOpen@ChemistryTableBlockActor@@UEAAXAEAVPlayer@@@Z
    MCVAPI void startOpen(class Player& p);

    // symbol: ?stopOpen@ChemistryTableBlockActor@@UEAAXAEAVPlayer@@@Z
    MCVAPI void stopOpen(class Player& p);

    // symbol: ?tick@ChemistryTableBlockActor@@UEAAXAEAVBlockSource@@@Z
    MCVAPI void tick(class BlockSource& region);

    // symbol: ?isSameType@ChemistryTableBlockActor@@QEBA_NW4ChemistryTableType@@@Z
    MCAPI bool isSameType(::ChemistryTableType type) const;

    // symbol: ?playerOpenLabTable@ChemistryTableBlockActor@@QEAAXAEAVPlayer@@@Z
    MCAPI void playerOpenLabTable(class Player& player);

    // symbol: ?reset@ChemistryTableBlockActor@@QEAAXAEAVBlockSource@@@Z
    MCAPI void reset(class BlockSource& region);

    // symbol:
    // ?serverCombine@ChemistryTableBlockActor@@QEAAXAEAVBlockSource@@AEBV?$vector@VItemStack@@V?$allocator@VItemStack@@@std@@@std@@@Z
    MCAPI void serverCombine(class BlockSource& region, std::vector<class ItemStack> const& consumedInput);

    // symbol: ?serverLabTablePacket_DEPRECATED@ChemistryTableBlockActor@@QEAAXAEBVLabTablePacket@@AEAVBlockSource@@@Z
    MCAPI void serverLabTablePacket_DEPRECATED(class LabTablePacket const& packet, class BlockSource& region);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_createReaction@ChemistryTableBlockActor@@AEAA?AV?$unique_ptr@VLabTableReaction@@U?$default_delete@VLabTableReaction@@@std@@@std@@AEAVRandom@@AEBV?$vector@VItemStack@@V?$allocator@VItemStack@@@std@@@3@@Z
    MCAPI std::unique_ptr<class LabTableReaction>
          _createReaction(class Random& random, std::vector<class ItemStack> const& consumedInput);

    // symbol: ?_popPendingReactionOutput@ChemistryTableBlockActor@@AEAAXAEAVBlockSource@@@Z
    MCAPI void _popPendingReactionOutput(class BlockSource& region);

    // symbol: ?_updateType@ChemistryTableBlockActor@@AEAA?AW4ChemistryTableType@@AEAVBlockSource@@@Z
    MCAPI ::ChemistryTableType _updateType(class BlockSource& region);

    // NOLINTEND
};
