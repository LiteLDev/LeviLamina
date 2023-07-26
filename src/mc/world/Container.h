#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/data/BidirectionalUnorderedMap.h"
#include "mc/world/TypedRuntimeId.h"

class Container {

public:
    // prevent constructor by default
    Container& operator=(Container const&) = delete;
    Container()                            = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?init\@Container\@\@UEAAXXZ
     */
    virtual void init(); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?serverInitItemStackIds\@CraftingContainer\@\@UEAAXHHV?$function\@$$A6AXHAEBVItemStack\@\@\@Z\@std\@\@\@Z
     */
    virtual void serverInitItemStackIds(int, int, class std::function<void(int, class ItemStack const&)>) = 0; // NOLINT
    /**
     * @vftbl 3
     * @symbol ?addContentChangeListener\@Container\@\@UEAAXPEAVContainerContentChangeListener\@\@\@Z
     */
    virtual void addContentChangeListener(class ContainerContentChangeListener*); // NOLINT
    /**
     * @vftbl 4
     * @symbol ?removeContentChangeListener\@Container\@\@UEAAXPEAVContainerContentChangeListener\@\@\@Z
     */
    virtual void removeContentChangeListener(class ContainerContentChangeListener*); // NOLINT
    /**
     * @vftbl 5
     * @symbol ?getItem\@FillingContainer\@\@UEBAAEBVItemStack\@\@H\@Z
     */
    virtual class ItemStack const& getItem(int) const = 0; // NOLINT
    /**
     * @vftbl 6
     * @symbol ?hasRoomForItem\@Container\@\@UEAA_NAEBVItemStack\@\@\@Z
     */
    virtual bool hasRoomForItem(class ItemStack const&); // NOLINT
    /**
     * @vftbl 7
     * @symbol ?addItem\@Container\@\@UEAA_NAEAVItemStack\@\@\@Z
     */
    virtual bool addItem(class ItemStack&); // NOLINT
    /**
     * @vftbl 8
     * @symbol ?addItemWithForceBalance\@Container\@\@UEAA_NAEAVItemStack\@\@\@Z
     */
    virtual bool addItemWithForceBalance(class ItemStack&); // NOLINT
    /**
     * @vftbl 9
     * @symbol ?addItemToFirstEmptySlot\@Container\@\@UEAA_NAEBVItemStack\@\@\@Z
     */
    virtual bool addItemToFirstEmptySlot(class ItemStack const&); // NOLINT
    /**
     * @vftbl 10
     * @symbol ?setItem\@SimplePlayerContainer\@\@UEAAXHAEBVItemStack\@\@\@Z
     */
    virtual void setItem(int, class ItemStack const&) = 0; // NOLINT
    /**
     * @vftbl 11
     * @symbol ?setItemWithForceBalance\@Container\@\@UEAAXHAEBVItemStack\@\@_N\@Z
     */
    virtual void setItemWithForceBalance(int, class ItemStack const&, bool); // NOLINT
    /**
     * @vftbl 12
     * @symbol ?removeItem\@Container\@\@UEAAXHH\@Z
     */
    virtual void removeItem(int, int); // NOLINT
    /**
     * @vftbl 13
     * @symbol ?removeAllItems\@Container\@\@UEAAXXZ
     */
    virtual void removeAllItems(); // NOLINT
    /**
     * @vftbl 14
     * @symbol ?removeAllItemsWithForceBalance\@Container\@\@UEAAXXZ
     */
    virtual void removeAllItemsWithForceBalance(); // NOLINT
    /**
     * @vftbl 15
     * @symbol ?dropContents\@Container\@\@UEAAXAEAVBlockSource\@\@AEBVVec3\@\@_N\@Z
     */
    virtual void dropContents(class BlockSource&, class Vec3 const&, bool); // NOLINT
    /**
     * @vftbl 16
     * @symbol ?getContainerSize\@FillingContainer\@\@UEBAHXZ
     */
    virtual int getContainerSize() const = 0; // NOLINT
    /**
     * @vftbl 17
     * @symbol ?getMaxStackSize\@SimpleContainer\@\@UEBAHXZ
     */
    virtual int getMaxStackSize() const = 0; // NOLINT
    /**
     * @vftbl 18
     * @symbol ?startOpen\@FillingContainer\@\@UEAAXAEAVPlayer\@\@\@Z
     */
    virtual void startOpen(class Player&) = 0; // NOLINT
    /**
     * @vftbl 19
     * @symbol ?stopOpen\@CraftingContainer\@\@UEAAXAEAVPlayer\@\@\@Z
     */
    virtual void stopOpen(class Player&) = 0; // NOLINT
    /**
     * @vftbl 20
     * @symbol
     * ?getSlotCopies\@Container\@\@UEBA?AV?$vector\@VItemStack\@\@V?$allocator\@VItemStack\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::vector<class ItemStack> getSlotCopies() const; // NOLINT
    /**
     * @vftbl 21
     * @symbol
     * ?getSlots\@Container\@\@UEBA?BV?$vector\@PEBVItemStack\@\@V?$allocator\@PEBVItemStack\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::vector<class ItemStack const*> const getSlots() const; // NOLINT
    /**
     * @vftbl 22
     * @symbol ?getEmptySlotsCount\@Container\@\@UEBAHXZ
     */
    virtual int getEmptySlotsCount() const; // NOLINT
    /**
     * @vftbl 23
     * @symbol ?getItemCount\@Container\@\@UEBAHAEBVItemStack\@\@\@Z
     */
    virtual int getItemCount(class ItemStack const&) const; // NOLINT
    /**
     * @vftbl 24
     * @symbol ?findFirstSlotForItem\@Container\@\@UEBAHAEBVItemStack\@\@\@Z
     */
    virtual int findFirstSlotForItem(class ItemStack const&) const; // NOLINT
    /**
     * @vftbl 25
     * @symbol __unk_vfn_25
     */
    virtual void __unk_vfn_25(); // NOLINT
    /**
     * @vftbl 26
     * @symbol __unk_vfn_26
     */
    virtual void __unk_vfn_26(); // NOLINT
    /**
     * @vftbl 27
     * @symbol ?setContainerChanged\@Container\@\@UEAAXH\@Z
     */
    virtual void setContainerChanged(int); // NOLINT
    /**
     * @vftbl 28
     * @symbol ?setContainerMoved\@Container\@\@UEAAXXZ
     */
    virtual void setContainerMoved(); // NOLINT
    /**
     * @vftbl 29
     * @symbol
     * ?setCustomName\@Container\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void setCustomName(std::string const&); // NOLINT
    /**
     * @vftbl 30
     * @symbol ?hasCustomName\@Container\@\@UEBA_NXZ
     */
    virtual bool hasCustomName() const; // NOLINT
    /**
     * @vftbl 31
     * @symbol ?readAdditionalSaveData\@Container\@\@UEAAXAEBVCompoundTag\@\@\@Z
     */
    virtual void readAdditionalSaveData(class CompoundTag const&); // NOLINT
    /**
     * @vftbl 32
     * @symbol ?addAdditionalSaveData\@Container\@\@UEAAXAEAVCompoundTag\@\@\@Z
     */
    virtual void addAdditionalSaveData(class CompoundTag&); // NOLINT
    /**
     * @vftbl 33
     * @symbol
     * ?createTransactionContext\@Container\@\@UEAAXV?$function\@$$A6AXAEAVContainer\@\@HAEBVItemStack\@\@1\@Z\@std\@\@V?$function\@$$A6AXXZ\@3\@\@Z
     */
    virtual void
        createTransactionContext(class std::function<void(class Container&, int, class ItemStack const&, class ItemStack const&)>, class std::function<void(void)>); // NOLINT
    /**
     * @vftbl 34
     * @symbol ?initializeContainerContents\@Container\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    virtual void initializeContainerContents(class BlockSource&); // NOLINT
    /**
     * @vftbl 35
     * @symbol ?isEmpty\@Container\@\@UEBA_NXZ
     */
    virtual bool isEmpty() const; // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CONTAINER
    /**
     * @symbol ?canPullOutItem\@Container\@\@UEBA_NHHAEBVItemStack\@\@\@Z
     */
    MCVAPI bool canPullOutItem(int, int, class ItemStack const&) const; // NOLINT
    /**
     * @symbol ?canPushInItem\@Container\@\@UEBA_NHHAEBVItemStack\@\@\@Z
     */
    MCVAPI bool canPushInItem(int, int, class ItemStack const&) const; // NOLINT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~Container(); // NOLINT
#endif
    /**
     * @symbol ??0Container\@\@QEAA\@W4ContainerType\@\@\@Z
     */
    MCAPI Container(enum class ContainerType); // NOLINT
    /**
     * @symbol ??0Container\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI Container(class Container const&); // NOLINT
    /**
     * @symbol
     * ??0Container\@\@QEAA\@W4ContainerType\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_N\@Z
     */
    MCAPI Container(enum class ContainerType, std::string const&, bool); // NOLINT
    /**
     * @symbol ?getContainerType\@Container\@\@QEBA?AW4ContainerType\@\@XZ
     */
    MCAPI enum class ContainerType getContainerType() const; // NOLINT
    /**
     * @symbol ?getGameplayContainerType\@Container\@\@QEBA?AW4ContainerType\@\@XZ
     */
    MCAPI enum class ContainerType getGameplayContainerType() const; // NOLINT
    /**
     * @symbol ?getItemCount\@Container\@\@QEAAHV?$function\@$$A6A_NAEBVItemStack\@\@\@Z\@std\@\@\@Z
     */
    MCAPI int getItemCount(class std::function<bool(class ItemStack const&)>); // NOLINT
    /**
     * @symbol ?getRedstoneSignalFromContainer\@Container\@\@QEAAHAEAVBlockSource\@\@\@Z
     */
    MCAPI int getRedstoneSignalFromContainer(class BlockSource&); // NOLINT
    /**
     * @symbol ?getRuntimeId\@Container\@\@QEBAAEBV?$TypedRuntimeId\@UContainerRuntimeIdTag\@\@I$0A\@\@\@XZ
     */
    MCAPI class TypedRuntimeId<struct ContainerRuntimeIdTag, unsigned int, 0> const& getRuntimeId() const; // NOLINT
    /**
     * @symbol ?initRuntimeId\@Container\@\@QEAAXXZ
     */
    MCAPI void initRuntimeId(); // NOLINT
    /**
     * @symbol ?serverInitItemStackIdsAll\@Container\@\@QEAAXV?$function\@$$A6AXHAEBVItemStack\@\@\@Z\@std\@\@\@Z
     */
    MCAPI void serverInitItemStackIdsAll(class std::function<void(int, class ItemStack const&)>); // NOLINT
    /**
     * @symbol ?setGameplayContainerType\@Container\@\@QEAAXW4ContainerType\@\@\@Z
     */
    MCAPI void setGameplayContainerType(enum class ContainerType); // NOLINT
    /**
     * @symbol ?triggerTransactionChange\@Container\@\@QEAAXHAEBVItemStack\@\@0\@Z
     */
    MCAPI void triggerTransactionChange(int, class ItemStack const&, class ItemStack const&); // NOLINT
    /**
     * @symbol
     * ?getContainerTypeId\@Container\@\@SA?AW4ContainerType\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI static enum class ContainerType getContainerTypeId(std::string const&); // NOLINT
    /**
     * @symbol
     * ?getContainerTypeName\@Container\@\@SAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4ContainerType\@\@\@Z
     */
    MCAPI static std::string const& getContainerTypeName(enum class ContainerType); // NOLINT

    // protected:
    /**
     * @symbol ?_getEmptySlotsCount\@Container\@\@IEBAHHH\@Z
     */
    MCAPI int _getEmptySlotsCount(int, int) const; // NOLINT
    /**
     * @symbol ?_initRuntimeId\@Container\@\@IEAAXAEBV?$TypedRuntimeId\@UContainerRuntimeIdTag\@\@I$0A\@\@\@\@Z
     */
    MCAPI void _initRuntimeId(class TypedRuntimeId<struct ContainerRuntimeIdTag, unsigned int, 0> const&); // NOLINT
    /**
     * @symbol ?_serverInitId\@Container\@\@IEAAXHAEAVItemStack\@\@V?$function\@$$A6AXHAEBVItemStack\@\@\@Z\@std\@\@\@Z
     */
    MCAPI void _serverInitId(int, class ItemStack&, class std::function<void(int, class ItemStack const&)>); // NOLINT

protected:
    /**
     * @symbol
     * ?containerTypeMap\@Container\@\@1V?$BidirectionalUnorderedMap\@W4ContainerType\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@\@B
     */
    MCAPI static class BidirectionalUnorderedMap<enum class ContainerType, std::string> const
        containerTypeMap; // NOLINT
};
