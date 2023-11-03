#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/data/BidirectionalUnorderedMap.h"
#include "mc/world/TypedRuntimeId.h"
#include "mc/world/containers/ContainerType.h"

class ItemStack;
class ContainerContentChangeListener;
class ContainerSizeChangeListener;

class Container {
public:
    [[nodiscard]] inline std::string const& getTypeName() const { return getContainerTypeName(getContainerType()); }

    // prevent constructor by default
    Container& operator=(Container const&);
    Container();

    using TransactionContext = std::function<void(Container&, int, ItemStack const&, ItemStack const&)>;

    ContainerType                                       mContainerType;           // this+0x8
    ContainerType                                       mGameplayContainerType;   // this+0x9
    std::unordered_set<ContainerContentChangeListener*> mContentChangeListeners;  // this+0x10
    std::unordered_set<ContainerSizeChangeListener*>    mSizeChangeListeners;     // this+0x50
    std::deque<TransactionContext>                      mTransactionContextStack; // this+0x90
    std::string                                         mName;                    // this+0xB8
    bool                                                mCustomName;              // this+0xD8
    ContainerRuntimeId                                  mContainerRuntimeId;      // this+0xDC

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?init@Container@@UEAAXXZ
    virtual void init();

    // vIndex: 2, symbol: ?serverInitItemStackIds@CraftingContainer@@UEAAXHHV?$function@$$A6AXHAEBVItemStack@@@Z@std@@@Z
    virtual void serverInitItemStackIds(int, int, std::function<void(int, class ItemStack const&)>) = 0;

    // vIndex: 3, symbol: ?addContentChangeListener@Container@@UEAAXPEAVContainerContentChangeListener@@@Z
    virtual void addContentChangeListener(class ContainerContentChangeListener*);

    // vIndex: 4, symbol: ?removeContentChangeListener@Container@@UEAAXPEAVContainerContentChangeListener@@@Z
    virtual void removeContentChangeListener(class ContainerContentChangeListener*);

    // vIndex: 5, symbol: ?getItem@FillingContainer@@UEBAAEBVItemStack@@H@Z
    virtual class ItemStack const& getItem(int) const = 0;

    // vIndex: 6, symbol: ?hasRoomForItem@Container@@UEAA_NAEBVItemStack@@@Z
    virtual bool hasRoomForItem(class ItemStack const&);

    // vIndex: 7, symbol: ?addItem@Container@@UEAA_NAEAVItemStack@@@Z
    virtual bool addItem(class ItemStack&);

    // vIndex: 8, symbol: ?addItemWithForceBalance@Container@@UEAA_NAEAVItemStack@@@Z
    virtual bool addItemWithForceBalance(class ItemStack&);

    // vIndex: 9, symbol: ?addItemToFirstEmptySlot@Container@@UEAA_NAEBVItemStack@@@Z
    virtual bool addItemToFirstEmptySlot(class ItemStack const&);

    // vIndex: 10, symbol: ?setItem@Inventory@@UEAAXHAEBVItemStack@@@Z
    virtual void setItem(int, class ItemStack const&) = 0;

    // vIndex: 11, symbol: ?setItemWithForceBalance@Container@@UEAAXHAEBVItemStack@@_N@Z
    virtual void setItemWithForceBalance(int, class ItemStack const&, bool);

    // vIndex: 12, symbol: ?removeItem@Container@@UEAAXHH@Z
    virtual void removeItem(int, int);

    // vIndex: 13, symbol: ?removeAllItems@Container@@UEAAXXZ
    virtual void removeAllItems();

    // vIndex: 14, symbol: ?removeAllItemsWithForceBalance@Container@@UEAAXXZ
    virtual void removeAllItemsWithForceBalance();

    // vIndex: 15, symbol: ?dropContents@Container@@UEAAXAEAVBlockSource@@AEBVVec3@@_N@Z
    virtual void dropContents(class BlockSource&, class Vec3 const&, bool);

    // vIndex: 16, symbol: ?getContainerSize@FillingContainer@@UEBAHXZ
    virtual int getContainerSize() const = 0;

    // vIndex: 17, symbol: ?getMaxStackSize@FillingContainer@@UEBAHXZ
    virtual int getMaxStackSize() const = 0;

    // vIndex: 18, symbol: ?startOpen@FillingContainer@@UEAAXAEAVPlayer@@@Z
    virtual void startOpen(class Player&) = 0;

    // vIndex: 19, symbol: ?stopOpen@Container@@UEAAXAEAVPlayer@@@Z
    virtual void stopOpen(class Player&);

    // vIndex: 20, symbol: ?getSlotCopies@Container@@UEBA?AV?$vector@VItemStack@@V?$allocator@VItemStack@@@std@@@std@@XZ
    virtual std::vector<class ItemStack> getSlotCopies() const;

    // vIndex: 21, symbol:
    // ?getSlots@Container@@UEBA?BV?$vector@PEBVItemStack@@V?$allocator@PEBVItemStack@@@std@@@std@@XZ
    virtual std::vector<class ItemStack const*> const getSlots() const;

    // vIndex: 22, symbol: ?getEmptySlotsCount@Container@@UEBAHXZ
    virtual int getEmptySlotsCount() const;

    // vIndex: 23, symbol: ?getItemCount@Container@@UEBAHAEBVItemStack@@@Z
    virtual int getItemCount(class ItemStack const&) const;

    // vIndex: 24, symbol: ?findFirstSlotForItem@Container@@UEBAHAEBVItemStack@@@Z
    virtual int findFirstSlotForItem(class ItemStack const&) const;

    // vIndex: 25, symbol: __unk_vfn_25
    virtual void __unk_vfn_25();

    // vIndex: 26, symbol: __unk_vfn_26
    virtual void __unk_vfn_26();

    // vIndex: 27, symbol: ?setContainerChanged@Container@@UEAAXH@Z
    virtual void setContainerChanged(int);

    // vIndex: 28, symbol: ?setContainerMoved@Container@@UEAAXXZ
    virtual void setContainerMoved();

    // vIndex: 29, symbol:
    // ?setCustomName@Container@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void setCustomName(std::string const&);

    // vIndex: 30, symbol: ?hasCustomName@Container@@UEBA_NXZ
    virtual bool hasCustomName() const;

    // vIndex: 31, symbol: ?readAdditionalSaveData@Container@@UEAAXAEBVCompoundTag@@@Z
    virtual void readAdditionalSaveData(class CompoundTag const&);

    // vIndex: 32, symbol: ?addAdditionalSaveData@Container@@UEAAXAEAVCompoundTag@@@Z
    virtual void addAdditionalSaveData(class CompoundTag&);

    // vIndex: 33, symbol:
    // ?createTransactionContext@Container@@UEAAXV?$function@$$A6AXAEAVContainer@@HAEBVItemStack@@1@Z@std@@V?$function@$$A6AXXZ@3@@Z
    virtual void createTransactionContext(TransactionContext, std::function<void(void)>);

    // vIndex: 34, symbol: ?initializeContainerContents@Container@@UEAAXAEAVBlockSource@@@Z
    virtual void initializeContainerContents(class BlockSource&);

    // vIndex: 35, symbol: ?isEmpty@Container@@UEBA_NXZ
    virtual bool isEmpty() const;

    // symbol: ?canPullOutItem@Container@@UEBA_NHHAEBVItemStack@@@Z
    MCVAPI bool canPullOutItem(int, int, class ItemStack const&) const;

    // symbol: ?canPushInItem@Container@@UEBA_NHHAEBVItemStack@@@Z
    MCVAPI bool canPushInItem(int, int, class ItemStack const&) const;

    // symbol: ??1Container@@UEAA@XZ
    MCVAPI ~Container();

    // symbol: ??0Container@@QEAA@AEBV0@@Z
    MCAPI Container(class Container const&);

    // symbol: ??0Container@@QEAA@W4ContainerType@@@Z
    MCAPI explicit Container(::ContainerType);

    // symbol: ?addCloseListener@Container@@QEAAXPEAVContainerCloseListener@@@Z
    MCAPI void addCloseListener(class ContainerCloseListener*);

    // symbol: ?getContainerType@Container@@QEBA?AW4ContainerType@@XZ
    MCAPI ::ContainerType getContainerType() const;

    // symbol: ?getGameplayContainerType@Container@@QEBA?AW4ContainerType@@XZ
    MCAPI ::ContainerType getGameplayContainerType() const;

    // symbol: ?getItemCount@Container@@QEAAHV?$function@$$A6A_NAEBVItemStack@@@Z@std@@@Z
    MCAPI int getItemCount(std::function<bool(class ItemStack const&)>);

    // symbol: ?getRedstoneSignalFromContainer@Container@@QEAAHAEAVBlockSource@@@Z
    MCAPI int getRedstoneSignalFromContainer(class BlockSource&);

    // symbol: ?getRuntimeId@Container@@QEBAAEBV?$TypedRuntimeId@UContainerRuntimeIdTag@@I$0A@@@XZ
    MCAPI ContainerRuntimeId const& getRuntimeId() const;

    // symbol: ?initRuntimeId@Container@@QEAAXXZ
    MCAPI void initRuntimeId();

    // symbol: ?removeCloseListener@Container@@QEAAXPEAVContainerCloseListener@@@Z
    MCAPI void removeCloseListener(class ContainerCloseListener*);

    // symbol: ?serverInitItemStackIdsAll@Container@@QEAAXV?$function@$$A6AXHAEBVItemStack@@@Z@std@@@Z
    MCAPI void serverInitItemStackIdsAll(std::function<void(int, class ItemStack const&)>);

    // symbol: ?setGameplayContainerType@Container@@QEAAXW4ContainerType@@@Z
    MCAPI void setGameplayContainerType(::ContainerType);

    // symbol: ?triggerTransactionChange@Container@@QEAAXHAEBVItemStack@@0@Z
    MCAPI void triggerTransactionChange(int, class ItemStack const&, class ItemStack const&);

    // symbol:
    // ?getContainerTypeId@Container@@SA?AW4ContainerType@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI static ::ContainerType getContainerTypeId(std::string const&);

    // symbol:
    // ?getContainerTypeName@Container@@SAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4ContainerType@@@Z
    MCAPI static std::string const& getContainerTypeName(::ContainerType);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?_getEmptySlotsCount@Container@@IEBAHHH@Z
    MCAPI int _getEmptySlotsCount(int, int) const;

    // symbol: ?_initRuntimeId@Container@@IEAAXAEBV?$TypedRuntimeId@UContainerRuntimeIdTag@@I$0A@@@@Z
    MCAPI void _initRuntimeId(ContainerRuntimeId const&);

    // symbol: ?_serverInitId@Container@@IEAAXHAEAVItemStack@@V?$function@$$A6AXHAEBVItemStack@@@Z@std@@@Z
    MCAPI void _serverInitId(int, class ItemStack&, std::function<void(int, class ItemStack const&)>);

    // NOLINTEND

protected:
    // NOLINTBEGIN
    // symbol:
    // ?containerTypeMap@Container@@1V?$BidirectionalUnorderedMap@W4ContainerType@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@@B
    MCAPI static class BidirectionalUnorderedMap<::ContainerType, std::string> const containerTypeMap;

    // NOLINTEND

    // member accessor
public:
    // NOLINTBEGIN
    auto& $containerTypeMap() { return containerTypeMap; }

    // NOLINTEND
};
