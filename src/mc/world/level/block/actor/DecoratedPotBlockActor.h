#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/actor/RandomizableBlockActorContainer.h"

class DecoratedPotBlockActor : public ::RandomizableBlockActorContainer {
public:
    // prevent constructor by default
    DecoratedPotBlockActor& operator=(DecoratedPotBlockActor const&);
    DecoratedPotBlockActor(DecoratedPotBlockActor const&);
    DecoratedPotBlockActor();

public:
    // NOLINTBEGIN
    // symbol:
    // ?_getUpdatePacket@DecoratedPotBlockActor@@EEAA?AV?$unique_ptr@VBlockActorDataPacket@@U?$default_delete@VBlockActorDataPacket@@@std@@@std@@AEAVBlockSource@@@Z
    MCVAPI std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource&);

    // symbol: ?_onUpdatePacket@DecoratedPotBlockActor@@EEAAXAEBVCompoundTag@@AEAVBlockSource@@@Z
    MCVAPI void _onUpdatePacket(class CompoundTag const& data, class BlockSource& region);

    // symbol: ?getContainerSize@DecoratedPotBlockActor@@UEBAHXZ
    MCVAPI int getContainerSize() const;

    // symbol: ?getItem@DecoratedPotBlockActor@@UEBAAEBVItemStack@@H@Z
    MCVAPI class ItemStack const& getItem(int) const;

    // symbol: ?getMaxStackSize@DecoratedPotBlockActor@@UEBAHXZ
    MCVAPI int getMaxStackSize() const;

    // symbol: ?load@DecoratedPotBlockActor@@UEAAXAEAVLevel@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    MCVAPI void load(class Level& level, class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    // symbol: ?save@DecoratedPotBlockActor@@UEBA_NAEAVCompoundTag@@@Z
    MCVAPI bool save(class CompoundTag& tag) const;

    // symbol: ?serverInitItemStackIds@DecoratedPotBlockActor@@UEAAXHHV?$function@$$A6AXHAEBVItemStack@@@Z@std@@@Z
    MCVAPI void serverInitItemStackIds(int, int, std::function<void(int, class ItemStack const&)>);

    // symbol: ?setItem@DecoratedPotBlockActor@@UEAAXHAEBVItemStack@@@Z
    MCVAPI void setItem(int, class ItemStack const&);

    // symbol: ?tick@DecoratedPotBlockActor@@UEAAXAEAVBlockSource@@@Z
    MCVAPI void tick(class BlockSource&);

    // symbol:
    // ?getSherdNames@DecoratedPotBlockActor@@QEBAAEBV?$array@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@$03@std@@XZ
    MCAPI std::array<std::string, 4> const& getSherdNames() const;

    // symbol: ?tryAddItem@DecoratedPotBlockActor@@QEAAXAEAVPlayer@@@Z
    MCAPI void tryAddItem(class Player&);

    // symbol: ?removeDefaultSherdsFromUserData@DecoratedPotBlockActor@@SAXAEAVItemStackBase@@@Z
    MCAPI static void removeDefaultSherdsFromUserData(class ItemStackBase&);

    // symbol:
    // ?saveSherdsToTag@DecoratedPotBlockActor@@SAXAEAVCompoundTag@@AEBV?$array@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@$03@std@@_N@Z
    MCAPI static void saveSherdsToTag(class CompoundTag&, std::array<std::string, 4> const&, bool);

    // symbol: ?tryGet@DecoratedPotBlockActor@@SAPEAV1@AEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI static class DecoratedPotBlockActor* tryGet(class BlockSource& region, class BlockPos const& pos);

    // symbol:
    // ?tryGetSherdsFromTag@DecoratedPotBlockActor@@SA?AV?$optional@V?$array@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@$03@std@@@std@@AEBVCompoundTag@@@Z
    MCAPI static std::optional<std::array<std::string, 4>> tryGetSherdsFromTag(class CompoundTag const&);

    // symbol:
    // ?DEFAULT_SHERD_LIST@DecoratedPotBlockActor@@2V?$array@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@$03@std@@B
    MCAPI static std::array<std::string, 4> const DEFAULT_SHERD_LIST;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_onInsertFeedback@DecoratedPotBlockActor@@AEAAXAEAVBlockSource@@AEBVItemStack@@AEAVPlayer@@@Z
    MCAPI void _onInsertFeedback(class BlockSource&, class ItemStack const&, class Player&);

    // symbol: ?_resetSherdItemNames@DecoratedPotBlockActor@@AEAAXXZ
    MCAPI void _resetSherdItemNames();

    // symbol: ?_setContainedItem@DecoratedPotBlockActor@@AEAAXAEBVItemStack@@@Z
    MCAPI void _setContainedItem(class ItemStack const&);

    // symbol:
    // ?_areDefaultSherds@DecoratedPotBlockActor@@CA_NAEBV?$array@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@$03@std@@@Z
    MCAPI static bool _areDefaultSherds(std::array<std::string, 4> const&);

    // symbol:
    // ?_tryGetSherdsFromItem@DecoratedPotBlockActor@@CA?AV?$optional@V?$array@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@$03@std@@@std@@AEBVItemStackBase@@@Z
    MCAPI static std::optional<std::array<std::string, 4>> _tryGetSherdsFromItem(class ItemStackBase const&);

    // NOLINTEND
};
