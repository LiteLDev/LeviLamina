#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/actor/RandomizableBlockActorFillingContainer.h"
#include "mc/world/level/block/utils/BlockActorRendererId.h"
#include "mc/world/level/block/utils/BlockActorType.h"

class ChestBlockActor : public ::RandomizableBlockActorFillingContainer {
public:
    // prevent constructor by default
    ChestBlockActor& operator=(ChestBlockActor const&);
    ChestBlockActor(ChestBlockActor const&);
    ChestBlockActor();

public:
    // NOLINTBEGIN
    // symbol: ?_canOpenThis@ChestBlockActor@@MEBA_NAEAVBlockSource@@@Z
    MCVAPI bool _canOpenThis(class BlockSource& region) const;

    // symbol: ?_detectEntityObstruction@ChestBlockActor@@MEBA_NAEAVBlockSource@@@Z
    MCVAPI bool _detectEntityObstruction(class BlockSource& region) const;

    // symbol:
    // ?_getUpdatePacket@ChestBlockActor@@MEAA?AV?$unique_ptr@VBlockActorDataPacket@@U?$default_delete@VBlockActorDataPacket@@@std@@@std@@AEAVBlockSource@@@Z
    MCVAPI std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource& region);

    // symbol: ?_onUpdatePacket@ChestBlockActor@@MEAAXAEBVCompoundTag@@AEAVBlockSource@@@Z
    MCVAPI void _onUpdatePacket(class CompoundTag const& data, class BlockSource& region);

    // symbol: ?addContentChangeListener@ChestBlockActor@@UEAAXPEAVContainerContentChangeListener@@@Z
    MCVAPI void addContentChangeListener(class ContainerContentChangeListener* listener);

    // symbol: ?canPullOutItem@ChestBlockActor@@UEBA_NHHAEBVItemStack@@@Z
    MCVAPI bool canPullOutItem(int, int, class ItemStack const&) const;

    // symbol: ?canPushInItem@ChestBlockActor@@UEBA_NHHAEBVItemStack@@@Z
    MCVAPI bool canPushInItem(int, int, class ItemStack const&) const;

    // symbol: ?clearCache@ChestBlockActor@@UEAAXXZ
    MCVAPI void clearCache();

    // symbol: ?clearInventory@ChestBlockActor@@UEAAHH@Z
    MCVAPI int clearInventory(int resizeTo);

    // symbol: ?getContainer@ChestBlockActor@@UEAAPEAVContainer@@XZ
    MCVAPI class Container* getContainer();

    // symbol: ?getContainer@ChestBlockActor@@UEBAPEBVContainer@@XZ
    MCVAPI class Container const* getContainer() const;

    // symbol: ?getContainerSize@ChestBlockActor@@UEBAHXZ
    MCVAPI int getContainerSize() const;

    // symbol: ?getCrackEntity@ChestBlockActor@@UEAAPEAVBlockActor@@AEAVBlockSource@@AEBVBlockPos@@@Z
    MCVAPI class BlockActor* getCrackEntity(class BlockSource& region, class BlockPos const& pos);

    // symbol:
    // ?getDebugText@ChestBlockActor@@UEAAXAEAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@AEBVBlockPos@@@Z
    MCVAPI void getDebugText(std::vector<std::string>& outputInfo, class BlockPos const& debugPos);

    // symbol: ?getItem@ChestBlockActor@@UEBAAEBVItemStack@@H@Z
    MCVAPI class ItemStack const& getItem(int slot) const;

    // symbol: ?getMaxStackSize@ChestBlockActor@@UEBAHXZ
    MCVAPI int getMaxStackSize() const;

    // symbol: ?getName@ChestBlockActor@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCVAPI std::string getName() const;

    // symbol: ?getObstructionAABB@ChestBlockActor@@MEBA?AVAABB@@XZ
    MCVAPI class AABB getObstructionAABB() const;

    // symbol: ?initializeContainerContents@ChestBlockActor@@UEAAXAEAVBlockSource@@@Z
    MCVAPI void initializeContainerContents(class BlockSource& region);

    // symbol: ?load@ChestBlockActor@@UEAAXAEAVLevel@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    MCVAPI void load(class Level& level, class CompoundTag const& base, class DataLoadHelper& dataLoadHelper);

    // symbol: ?loadItems@ChestBlockActor@@UEAAXAEBVCompoundTag@@AEAVLevel@@@Z
    MCVAPI void loadItems(class CompoundTag const& base, class Level& level);

    // symbol: ?onChanged@ChestBlockActor@@UEAAXAEAVBlockSource@@@Z
    MCVAPI void onChanged(class BlockSource& region);

    // symbol: ?onMove@ChestBlockActor@@UEAAXXZ
    MCVAPI void onMove();

    // symbol: ?onNeighborChanged@ChestBlockActor@@UEAAXAEAVBlockSource@@AEBVBlockPos@@@Z
    MCVAPI void onNeighborChanged(class BlockSource& region, class BlockPos const& position);

    // symbol: ?onPlace@ChestBlockActor@@UEAAXAEAVBlockSource@@@Z
    MCVAPI void onPlace(class BlockSource& region);

    // symbol: ?onRemoved@ChestBlockActor@@UEAAXAEAVBlockSource@@@Z
    MCVAPI void onRemoved(class BlockSource&);

    // symbol: ?playCloseSound@ChestBlockActor@@MEAAXAEAVBlockSource@@@Z
    MCVAPI void playCloseSound(class BlockSource& region);

    // symbol: ?playOpenSound@ChestBlockActor@@MEAAXAEAVBlockSource@@@Z
    MCVAPI void playOpenSound(class BlockSource& region);

    // symbol: ?removeContentChangeListener@ChestBlockActor@@UEAAXPEAVContainerContentChangeListener@@@Z
    MCVAPI void removeContentChangeListener(class ContainerContentChangeListener* listener);

    // symbol: ?save@ChestBlockActor@@UEBA_NAEAVCompoundTag@@@Z
    MCVAPI bool save(class CompoundTag& tag) const;

    // symbol: ?saveItemInstanceData@ChestBlockActor@@UEBA_NAEAVCompoundTag@@@Z
    MCVAPI bool saveItemInstanceData(class CompoundTag& base) const;

    // symbol: ?saveItems@ChestBlockActor@@UEBA_NAEAVCompoundTag@@@Z
    MCVAPI bool saveItems(class CompoundTag& base) const;

    // symbol: ?serverInitItemStackIds@ChestBlockActor@@UEAAXHHV?$function@$$A6AXHAEBVItemStack@@@Z@std@@@Z
    MCVAPI void serverInitItemStackIds(
        int                                              containerSlot,
        int                                              count,
        std::function<void(int, class ItemStack const&)> onNetIdChanged
    );

    // symbol: ?setContainerChanged@ChestBlockActor@@UEAAXH@Z
    MCVAPI void setContainerChanged(int slot);

    // symbol: ?setItem@ChestBlockActor@@UEAAXHAEBVItemStack@@@Z
    MCVAPI void setItem(int slot, class ItemStack const& item);

    // symbol: ?setItemWithForceBalance@ChestBlockActor@@UEAAXHAEBVItemStack@@_N@Z
    MCVAPI void setItemWithForceBalance(int slot, class ItemStack const& item, bool forceBalanced);

    // symbol: ?startOpen@ChestBlockActor@@UEAAXAEAVPlayer@@@Z
    MCVAPI void startOpen(class Player& player);

    // symbol: ?stopOpen@ChestBlockActor@@UEAAXAEAVPlayer@@@Z
    MCVAPI void stopOpen(class Player& player);

    // symbol: ?tick@ChestBlockActor@@UEAAXAEAVBlockSource@@@Z
    MCVAPI void tick(class BlockSource& region);

    // symbol: ?triggerEvent@ChestBlockActor@@UEAAXHH@Z
    MCVAPI void triggerEvent(int b0, int b1);

    // symbol: ??1ChestBlockActor@@UEAA@XZ
    MCVAPI ~ChestBlockActor();

    // symbol:
    // ??0ChestBlockActor@@QEAA@W4BlockActorType@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4BlockActorRendererId@@AEBVBlockPos@@_N@Z
    MCAPI ChestBlockActor(
        ::BlockActorType       type,
        std::string const&     id,
        ::BlockActorRendererId renderId,
        class BlockPos const&  pos,
        bool                   isTrapped
    );

    // symbol: ?canOpen@ChestBlockActor@@QEBA_NAEAVBlockSource@@@Z
    MCAPI bool canOpen(class BlockSource& region) const;

    // symbol: ?canPairWith@ChestBlockActor@@QEAA_NPEAVBlockActor@@AEAVBlockSource@@@Z
    MCAPI bool canPairWith(class BlockActor* entity, class BlockSource& region);

    // symbol: ?forceCloseChest@ChestBlockActor@@QEAAXAEAVBlockSource@@@Z
    MCAPI void forceCloseChest(class BlockSource& region);

    // symbol: ?getOpenCount@ChestBlockActor@@QEBAHXZ
    MCAPI int getOpenCount() const;

    // symbol: ?getOpenness@ChestBlockActor@@QEBAMXZ
    MCAPI float getOpenness() const;

    // symbol: ?getPairedChestPosition@ChestBlockActor@@QEAAAEBVBlockPos@@XZ
    MCAPI class BlockPos const& getPairedChestPosition();

    // symbol: ?isFindable@ChestBlockActor@@QEBA_NXZ
    MCAPI bool isFindable() const;

    // symbol: ?isLargeChest@ChestBlockActor@@QEBA_NXZ
    MCAPI bool isLargeChest() const;

    // symbol: ?onMove@ChestBlockActor@@QEAAXAEAVBlockSource@@AEBVBlockPos@@1@Z
    MCAPI void onMove(class BlockSource& region, class BlockPos const& from, class BlockPos const& to);

    // symbol: ?openBy@ChestBlockActor@@QEAAXAEAVPlayer@@@Z
    MCAPI void openBy(class Player& p);

    // symbol: ?pairWith@ChestBlockActor@@QEAAXPEAV1@_N@Z
    MCAPI void pairWith(class ChestBlockActor* chest, bool lead);

    // symbol: ?setFindable@ChestBlockActor@@QEAAX_N@Z
    MCAPI void setFindable(bool isFindable);

    // symbol: ?unpair@ChestBlockActor@@QEAAXAEAVBlockSource@@@Z
    MCAPI void unpair(class BlockSource& region);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?_getCenter@ChestBlockActor@@IEAAXAEAM00@Z
    MCAPI void _getCenter(float& outx, float& outy, float& outz);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_closeChest@ChestBlockActor@@AEAAXAEAVBlockSource@@PEAVPlayer@@@Z
    MCAPI void _closeChest(class BlockSource& region, class Player* player);

    // symbol: ?_saveClientSideState@ChestBlockActor@@AEBA_NAEAVCompoundTag@@@Z
    MCAPI bool _saveClientSideState(class CompoundTag& tag) const;

    // symbol: ?_tryToPairWith@ChestBlockActor@@AEAAXAEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI void _tryToPairWith(class BlockSource& region, class BlockPos const& position);

    // symbol: ?_unpair@ChestBlockActor@@AEAAXXZ
    MCAPI void _unpair();

    // NOLINTEND
};
