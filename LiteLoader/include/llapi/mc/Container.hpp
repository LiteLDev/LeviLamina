/**
 * @file  Container.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Add include headers & pre-declares
class ItemStack;
#undef BEFORE_EXTRA

/**
 * @brief MC class Container.
 *
 */
class Container {

#define AFTER_EXTRA
// Add new members to class
public:
    LIAPI std::string getTypeName();

    LIAPI bool addItem_s(ItemStack* item);
    LIAPI bool addItem_s(ItemStack* item, int amount);
    LIAPI bool addItemToFirstEmptySlot_s(ItemStack* item);
    LIAPI bool removeItem_s(int slot, unsigned int number);
    LIAPI ItemStack* getSlot(int slot);
    LIAPI std::vector<const ItemStack*> getAllSlots();
    LIAPI int getSize();

    // static??
    LIAPI bool hasContainer(class Vec3& pos, int dim);
    // static??
    LIAPI Container* getContainerAt(class Vec3& pos, int dim);
#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CONTAINER
public:
    class Container& operator=(class Container const &) = delete;
    Container() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?init\@Container\@\@UEAAXXZ
     */
    virtual void init();
    /**
     * @vftbl 2
     * @symbol ?serverInitItemStackIds\@CraftingContainer\@\@UEAAXHHV?$function\@$$A6AXHAEBVItemStack\@\@\@Z\@std\@\@\@Z
     */
    virtual void serverInitItemStackIds(int, int, class std::function<void (int, class ItemStack const &)>) = 0;
    /**
     * @vftbl 3
     * @symbol ?addContentChangeListener\@Container\@\@UEAAXPEAVContainerContentChangeListener\@\@\@Z
     */
    virtual void addContentChangeListener(class ContainerContentChangeListener *);
    /**
     * @vftbl 4
     * @symbol ?removeContentChangeListener\@Container\@\@UEAAXPEAVContainerContentChangeListener\@\@\@Z
     */
    virtual void removeContentChangeListener(class ContainerContentChangeListener *);
    /**
     * @vftbl 5
     * @symbol ?getItem\@FillingContainer\@\@UEBAAEBVItemStack\@\@H\@Z
     */
    virtual class ItemStack const & getItem(int) const = 0;
    /**
     * @vftbl 6
     * @symbol ?hasRoomForItem\@Container\@\@UEAA_NAEBVItemStack\@\@\@Z
     */
    virtual bool hasRoomForItem(class ItemStack const &);
    /**
     * @vftbl 7
     * @symbol ?addItem\@Container\@\@UEAA_NAEAVItemStack\@\@\@Z
     */
    virtual bool addItem(class ItemStack &);
    /**
     * @vftbl 8
     * @symbol ?addItemWithForceBalance\@Container\@\@UEAA_NAEAVItemStack\@\@\@Z
     */
    virtual bool addItemWithForceBalance(class ItemStack &);
    /**
     * @vftbl 9
     * @symbol ?addItemToFirstEmptySlot\@Container\@\@UEAA_NAEBVItemStack\@\@\@Z
     */
    virtual bool addItemToFirstEmptySlot(class ItemStack const &);
    /**
     * @vftbl 10
     * @symbol ?setItem\@SimplePlayerContainer\@\@UEAAXHAEBVItemStack\@\@\@Z
     */
    virtual void setItem(int, class ItemStack const &) = 0;
    /**
     * @vftbl 11
     * @symbol ?setItemWithForceBalance\@Container\@\@UEAAXHAEBVItemStack\@\@_N\@Z
     */
    virtual void setItemWithForceBalance(int, class ItemStack const &, bool);
    /**
     * @vftbl 12
     * @symbol ?removeItem\@Container\@\@UEAAXHH\@Z
     */
    virtual void removeItem(int, int);
    /**
     * @vftbl 13
     * @symbol ?removeAllItems\@Container\@\@UEAAXXZ
     */
    virtual void removeAllItems();
    /**
     * @vftbl 14
     * @symbol ?removeAllItemsWithForceBalance\@Container\@\@UEAAXXZ
     */
    virtual void removeAllItemsWithForceBalance();
    /**
     * @vftbl 15
     * @symbol ?dropContents\@Container\@\@UEAAXAEAVBlockSource\@\@AEBVVec3\@\@_N\@Z
     */
    virtual void dropContents(class BlockSource &, class Vec3 const &, bool);
    /**
     * @vftbl 16
     * @symbol ?getContainerSize\@FillingContainer\@\@UEBAHXZ
     */
    virtual int getContainerSize() const = 0;
    /**
     * @vftbl 17
     * @symbol ?getMaxStackSize\@SimpleContainer\@\@UEBAHXZ
     */
    virtual int getMaxStackSize() const = 0;
    /**
     * @vftbl 18
     * @symbol ?startOpen\@FillingContainer\@\@UEAAXAEAVPlayer\@\@\@Z
     */
    virtual void startOpen(class Player &) = 0;
    /**
     * @vftbl 19
     * @symbol ?stopOpen\@CraftingContainer\@\@UEAAXAEAVPlayer\@\@\@Z
     */
    virtual void stopOpen(class Player &) = 0;
    /**
     * @vftbl 20
     * @symbol ?getSlotCopies\@Container\@\@UEBA?AV?$vector\@VItemStack\@\@V?$allocator\@VItemStack\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::vector<class ItemStack> getSlotCopies() const;
    /**
     * @vftbl 21
     * @symbol ?getSlots\@Container\@\@UEBA?BV?$vector\@PEBVItemStack\@\@V?$allocator\@PEBVItemStack\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::vector<class ItemStack const *> const getSlots() const;
    /**
     * @vftbl 22
     * @symbol ?getEmptySlotsCount\@Container\@\@UEBAHXZ
     */
    virtual int getEmptySlotsCount() const;
    /**
     * @vftbl 23
     * @symbol ?getItemCount\@Container\@\@UEBAHAEBVItemStack\@\@\@Z
     */
    virtual int getItemCount(class ItemStack const &) const;
    /**
     * @vftbl 24
     * @symbol ?findFirstSlotForItem\@Container\@\@UEBAHAEBVItemStack\@\@\@Z
     */
    virtual int findFirstSlotForItem(class ItemStack const &) const;
    /**
     * @vftbl 25
     * @symbol __unk_vfn_25
     */
    virtual void __unk_vfn_25();
    /**
     * @vftbl 26
     * @symbol __unk_vfn_26
     */
    virtual void __unk_vfn_26();
    /**
     * @vftbl 27
     * @symbol ?setContainerChanged\@Container\@\@UEAAXH\@Z
     */
    virtual void setContainerChanged(int);
    /**
     * @vftbl 28
     * @symbol ?setContainerMoved\@Container\@\@UEAAXXZ
     */
    virtual void setContainerMoved();
    /**
     * @vftbl 29
     * @symbol ?setCustomName\@Container\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void setCustomName(std::string const &);
    /**
     * @vftbl 30
     * @symbol ?hasCustomName\@Container\@\@UEBA_NXZ
     */
    virtual bool hasCustomName() const;
    /**
     * @vftbl 31
     * @symbol ?readAdditionalSaveData\@Container\@\@UEAAXAEBVCompoundTag\@\@\@Z
     */
    virtual void readAdditionalSaveData(class CompoundTag const &);
    /**
     * @vftbl 32
     * @symbol ?addAdditionalSaveData\@Container\@\@UEAAXAEAVCompoundTag\@\@\@Z
     */
    virtual void addAdditionalSaveData(class CompoundTag &);
    /**
     * @vftbl 33
     * @symbol ?createTransactionContext\@Container\@\@UEAAXV?$function\@$$A6AXAEAVContainer\@\@HAEBVItemStack\@\@1\@Z\@std\@\@V?$function\@$$A6AXXZ\@3\@\@Z
     */
    virtual void createTransactionContext(class std::function<void (class Container &, int, class ItemStack const &, class ItemStack const &)>, class std::function<void (void)>);
    /**
     * @vftbl 34
     * @symbol ?initializeContainerContents\@Container\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    virtual void initializeContainerContents(class BlockSource &);
    /**
     * @vftbl 35
     * @symbol ?isEmpty\@Container\@\@UEBA_NXZ
     */
    virtual bool isEmpty() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CONTAINER
    /**
     * @symbol ?canPullOutItem\@Container\@\@UEBA_NHHAEBVItemStack\@\@\@Z
     */
    MCVAPI bool canPullOutItem(int, int, class ItemStack const &) const;
    /**
     * @symbol ?canPushInItem\@Container\@\@UEBA_NHHAEBVItemStack\@\@\@Z
     */
    MCVAPI bool canPushInItem(int, int, class ItemStack const &) const;
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~Container();
#endif
    /**
     * @symbol ??0Container\@\@QEAA\@W4ContainerType\@\@\@Z
     */
    MCAPI Container(enum class ContainerType);
    /**
     * @symbol ??0Container\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI Container(class Container const &);
    /**
     * @symbol ??0Container\@\@QEAA\@W4ContainerType\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_N\@Z
     */
    MCAPI Container(enum class ContainerType, std::string const &, bool);
    /**
     * @symbol ?getContainerType\@Container\@\@QEBA?AW4ContainerType\@\@XZ
     */
    MCAPI enum class ContainerType getContainerType() const;
    /**
     * @symbol ?getGameplayContainerType\@Container\@\@QEBA?AW4ContainerType\@\@XZ
     */
    MCAPI enum class ContainerType getGameplayContainerType() const;
    /**
     * @symbol ?getItemCount\@Container\@\@QEAAHV?$function\@$$A6A_NAEBVItemStack\@\@\@Z\@std\@\@\@Z
     */
    MCAPI int getItemCount(class std::function<bool (class ItemStack const &)>);
    /**
     * @symbol ?getRedstoneSignalFromContainer\@Container\@\@QEAAHAEAVBlockSource\@\@\@Z
     */
    MCAPI int getRedstoneSignalFromContainer(class BlockSource &);
    /**
     * @symbol ?getRuntimeId\@Container\@\@QEBAAEBV?$TypedRuntimeId\@UContainerRuntimeIdTag\@\@I$0A\@\@\@XZ
     */
    MCAPI class TypedRuntimeId<struct ContainerRuntimeIdTag, unsigned int, 0> const & getRuntimeId() const;
    /**
     * @symbol ?initRuntimeId\@Container\@\@QEAAXXZ
     */
    MCAPI void initRuntimeId();
    /**
     * @symbol ?serverInitItemStackIdsAll\@Container\@\@QEAAXV?$function\@$$A6AXHAEBVItemStack\@\@\@Z\@std\@\@\@Z
     */
    MCAPI void serverInitItemStackIdsAll(class std::function<void (int, class ItemStack const &)>);
    /**
     * @symbol ?setGameplayContainerType\@Container\@\@QEAAXW4ContainerType\@\@\@Z
     */
    MCAPI void setGameplayContainerType(enum class ContainerType);
    /**
     * @symbol ?triggerTransactionChange\@Container\@\@QEAAXHAEBVItemStack\@\@0\@Z
     */
    MCAPI void triggerTransactionChange(int, class ItemStack const &, class ItemStack const &);
    /**
     * @symbol ?getContainerTypeId\@Container\@\@SA?AW4ContainerType\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI static enum class ContainerType getContainerTypeId(std::string const &);
    /**
     * @symbol ?getContainerTypeName\@Container\@\@SAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4ContainerType\@\@\@Z
     */
    MCAPI static std::string const & getContainerTypeName(enum class ContainerType);

//protected:
    /**
     * @symbol ?_getEmptySlotsCount\@Container\@\@IEBAHHH\@Z
     */
    MCAPI int _getEmptySlotsCount(int, int) const;
    /**
     * @symbol ?_initRuntimeId\@Container\@\@IEAAXAEBV?$TypedRuntimeId\@UContainerRuntimeIdTag\@\@I$0A\@\@\@\@Z
     */
    MCAPI void _initRuntimeId(class TypedRuntimeId<struct ContainerRuntimeIdTag, unsigned int, 0> const &);
    /**
     * @symbol ?_serverInitId\@Container\@\@IEAAXHAEAVItemStack\@\@V?$function\@$$A6AXHAEBVItemStack\@\@\@Z\@std\@\@\@Z
     */
    MCAPI void _serverInitId(int, class ItemStack &, class std::function<void (int, class ItemStack const &)>);

protected:
    /**
     * @symbol ?containerTypeMap\@Container\@\@1V?$BidirectionalUnorderedMap\@W4ContainerType\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@\@B
     */
    MCAPI static class BidirectionalUnorderedMap<enum class ContainerType, std::string> const containerTypeMap;

};
