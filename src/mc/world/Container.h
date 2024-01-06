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
    using TransactionContext = std::function<void(Container&, int, ItemStack const&, ItemStack const&)>;

    ContainerType                                       mContainerType;           // this+0x8
    ContainerType                                       mGameplayContainerType;   // this+0x9
    std::unordered_set<ContainerContentChangeListener*> mContentChangeListeners;  // this+0x10
    std::unordered_set<ContainerSizeChangeListener*>    mSizeChangeListeners;     // this+0x50
    std::deque<TransactionContext>                      mTransactionContextStack; // this+0x90
    std::string                                         mName;                    // this+0xB8
    bool                                                mCustomName;              // this+0xD8
    ContainerRuntimeId                                  mContainerRuntimeId;      // this+0xDC

    [[nodiscard]] inline std::string const& getTypeName() const { return getContainerTypeName(getContainerType()); }

    LLNDAPI optional_ref<ItemStack> getItemNonConst(int index);

public:
    // prevent constructor by default
    Container& operator=(Container const&);
    Container();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1Container@@UEAA@XZ
    virtual ~Container();

    // vIndex: 1, symbol: ?init@Container@@UEAAXXZ
    virtual void init();

    // vIndex: 2, symbol: ?serverInitItemStackIds@CraftingContainer@@UEAAXHHV?$function@$$A6AXHAEBVItemStack@@@Z@std@@@Z
    virtual void serverInitItemStackIds(int, int count, std::function<void(int, class ItemStack const&)>) = 0;

    // vIndex: 3, symbol: ?addContentChangeListener@Container@@UEAAXPEAVContainerContentChangeListener@@@Z
    virtual void addContentChangeListener(class ContainerContentChangeListener* listener);

    // vIndex: 4, symbol: ?removeContentChangeListener@Container@@UEAAXPEAVContainerContentChangeListener@@@Z
    virtual void removeContentChangeListener(class ContainerContentChangeListener* listener);

    // vIndex: 5, symbol: ?getItem@CraftingContainer@@UEBAAEBVItemStack@@H@Z
    virtual class ItemStack const& getItem(int slot) const = 0;

    // vIndex: 6, symbol: ?hasRoomForItem@Container@@UEAA_NAEBVItemStack@@@Z
    virtual bool hasRoomForItem(class ItemStack const& item);

    // vIndex: 7, symbol: ?addItem@Container@@UEAA_NAEAVItemStack@@@Z
    virtual bool addItem(class ItemStack& item);

    // vIndex: 8, symbol: ?addItemWithForceBalance@Container@@UEAA_NAEAVItemStack@@@Z
    virtual bool addItemWithForceBalance(class ItemStack& item);

    // vIndex: 9, symbol: ?addItemToFirstEmptySlot@Container@@UEAA_NAEBVItemStack@@@Z
    virtual bool addItemToFirstEmptySlot(class ItemStack const& item);

    // vIndex: 10, symbol: ?setItem@CraftingContainer@@UEAAXHAEBVItemStack@@@Z
    virtual void setItem(int slot, class ItemStack const& item) = 0;

    // vIndex: 11, symbol: ?setItemWithForceBalance@Container@@UEAAXHAEBVItemStack@@_N@Z
    virtual void setItemWithForceBalance(int slot, class ItemStack const& item, bool);

    // vIndex: 12, symbol: ?removeItem@Container@@UEAAXHH@Z
    virtual void removeItem(int slot, int count);

    // vIndex: 13, symbol: ?removeAllItems@Container@@UEAAXXZ
    virtual void removeAllItems();

    // vIndex: 14, symbol: ?removeAllItemsWithForceBalance@Container@@UEAAXXZ
    virtual void removeAllItemsWithForceBalance();

    // vIndex: 15, symbol: ?dropContents@Container@@UEAAXAEAVBlockSource@@AEBVVec3@@_N@Z
    virtual void dropContents(class BlockSource& region, class Vec3 const& pos, bool randomizeDrop);

    // vIndex: 16, symbol: ?getContainerSize@CraftingContainer@@UEBAHXZ
    virtual int getContainerSize() const = 0;

    // vIndex: 17, symbol: ?getMaxStackSize@CraftingContainer@@UEBAHXZ
    virtual int getMaxStackSize() const = 0;

    // vIndex: 18, symbol: ?startOpen@EnderChestContainer@@UEAAXAEAVPlayer@@@Z
    virtual void startOpen(class Player& player) = 0;

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
    virtual int getItemCount(class ItemStack const& compare) const;

    // vIndex: 24, symbol: ?findFirstSlotForItem@Container@@UEBAHAEBVItemStack@@@Z
    virtual int findFirstSlotForItem(class ItemStack const& item) const;

    // vIndex: 25, symbol: __unk_vfn_25
    virtual void __unk_vfn_25();

    // vIndex: 26, symbol: __unk_vfn_26
    virtual void __unk_vfn_26();

    // vIndex: 27, symbol: ?setContainerChanged@Container@@UEAAXH@Z
    virtual void setContainerChanged(int slot);

    // vIndex: 28, symbol: ?setContainerMoved@Container@@UEAAXXZ
    virtual void setContainerMoved();

    // vIndex: 29, symbol:
    // ?setCustomName@Container@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void setCustomName(std::string const& name);

    // vIndex: 30, symbol: ?hasCustomName@Container@@UEBA_NXZ
    virtual bool hasCustomName() const;

    // vIndex: 31, symbol: ?readAdditionalSaveData@Container@@UEAAXAEBVCompoundTag@@@Z
    virtual void readAdditionalSaveData(class CompoundTag const& tag);

    // vIndex: 32, symbol: ?addAdditionalSaveData@Container@@UEAAXAEAVCompoundTag@@@Z
    virtual void addAdditionalSaveData(class CompoundTag& tag);

    // vIndex: 33, symbol:
    // ?createTransactionContext@Container@@UEAAXV?$function@$$A6AXAEAVContainer@@HAEBVItemStack@@1@Z@std@@V?$function@$$A6AXXZ@3@@Z
    virtual void createTransactionContext(TransactionContext callback, std::function<void(void)> execute);

    // vIndex: 34, symbol: __unk_vfn_34
    virtual void __unk_vfn_34();

    // vIndex: 35, symbol: ?isEmpty@Container@@UEBA_NXZ
    virtual bool isEmpty() const;

    // vIndex: 36, symbol: ?isSlotDisabled@Container@@UEBA_NH@Z
    virtual bool isSlotDisabled(int) const;

    // symbol: ?canPullOutItem@Container@@UEBA_NHHAEBVItemStack@@@Z
    MCVAPI bool canPullOutItem(int slot, int face, class ItemStack const& item) const;

    // symbol: ?canPushInItem@Container@@UEBA_NHHAEBVItemStack@@@Z
    MCVAPI bool canPushInItem(int slot, int face, class ItemStack const& item) const;

    // symbol: ?initializeContainerContents@Container@@UEAAXAEAVBlockSource@@@Z
    MCVAPI void initializeContainerContents(class BlockSource& region);

    // symbol: ??0Container@@QEAA@AEBV0@@Z
    MCAPI Container(class Container const&);

    // symbol: ??0Container@@QEAA@W4ContainerType@@@Z
    MCAPI explicit Container(::ContainerType type);

    // symbol: ?addCloseListener@Container@@QEAAXPEAVContainerCloseListener@@@Z
    MCAPI void addCloseListener(class ContainerCloseListener*);

    // symbol: ?getContainerType@Container@@QEBA?AW4ContainerType@@XZ
    MCAPI ::ContainerType getContainerType() const;

    // symbol: ?getGameplayContainerType@Container@@QEBA?AW4ContainerType@@XZ
    MCAPI ::ContainerType getGameplayContainerType() const;

    // symbol: ?getItemCount@Container@@QEAAHV?$function@$$A6A_NAEBVItemStack@@@Z@std@@@Z
    MCAPI int getItemCount(std::function<bool(class ItemStack const&)> comparator);

    // symbol: ?getRedstoneSignalFromContainer@Container@@QEAAHAEAVBlockSource@@@Z
    MCAPI int getRedstoneSignalFromContainer(class BlockSource& region);

    // symbol: ?getRuntimeId@Container@@QEBAAEBV?$TypedRuntimeId@UContainerRuntimeIdTag@@I$0A@@@XZ
    MCAPI ContainerRuntimeId const& getRuntimeId() const;

    // symbol: ?initRuntimeId@Container@@QEAAXXZ
    MCAPI void initRuntimeId();

    // symbol: ?removeCloseListener@Container@@QEAAXPEAVContainerCloseListener@@@Z
    MCAPI void removeCloseListener(class ContainerCloseListener*);

    // symbol: ?serverInitItemStackIdsAll@Container@@QEAAXV?$function@$$A6AXHAEBVItemStack@@@Z@std@@@Z
    MCAPI void serverInitItemStackIdsAll(std::function<void(int, class ItemStack const&)>);

    // symbol: ?setGameplayContainerType@Container@@QEAAXW4ContainerType@@@Z
    MCAPI void setGameplayContainerType(::ContainerType type);

    // symbol: ?triggerTransactionChange@Container@@QEAAXHAEBVItemStack@@0@Z
    MCAPI void triggerTransactionChange(int slot, class ItemStack const& oldItem, class ItemStack const& newItem);

    // symbol:
    // ?getContainerTypeId@Container@@SA?AW4ContainerType@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI static ::ContainerType getContainerTypeId(std::string const& name);

    // symbol:
    // ?getContainerTypeName@Container@@SAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4ContainerType@@@Z
    MCAPI static std::string const& getContainerTypeName(::ContainerType);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?_getEmptySlotsCount@Container@@IEBAHHH@Z
    MCAPI int _getEmptySlotsCount(int start, int end) const;

    // symbol: ?_initRuntimeId@Container@@IEAAXAEBV?$TypedRuntimeId@UContainerRuntimeIdTag@@I$0A@@@@Z
    MCAPI void _initRuntimeId(ContainerRuntimeId const&);

    // symbol: ?_serverInitId@Container@@IEAAXHAEAVItemStack@@V?$function@$$A6AXHAEBVItemStack@@@Z@std@@@Z
    MCAPI void _serverInitId(int slot, class ItemStack& item, std::function<void(int, class ItemStack const&)>);

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
    static auto& $containerTypeMap() { return containerTypeMap; }

    // NOLINTEND
};
