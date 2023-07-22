/**
 * @file  Container.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

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
    LLAPI std::string getTypeName();

    LLAPI bool addItem_s(ItemStack* item);
    LLAPI bool addItem_s(ItemStack* item, int amount);
    LLAPI bool addItemToFirstEmptySlot_s(ItemStack* item);
    LLAPI bool removeItem_s(int slot, unsigned int number);
    LLAPI ItemStack* getSlot(int slot);
    LLAPI std::vector<const ItemStack*> getAllSlots();
    LLAPI int getSize();

    // static??
    LLAPI bool hasContainer(Vec3& pos, int dim);
    // static??
    LLAPI Container* getContainerAt(Vec3& pos, int dim);
#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CONTAINER
public:
    class Container& operator=(class Container const &) = delete;
    Container() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~Container();
    /**
     * @vftbl  1
     * @symbol  ?init\@Container\@\@UEAAXXZ
     */
    virtual void init();
    /**
     * @vftbl  2
     * @symbol  ?serverInitItemStackIds\@SimpleContainer\@\@UEAAXHHV?$function\@$$A6AXHAEBVItemStack\@\@\@Z\@std\@\@\@Z
     */
    virtual void serverInitItemStackIds(int, int, class std::function<void (int, class ItemStack const &)>) = 0;
    /**
     * @vftbl  3
     * @symbol  ?addContentChangeListener\@Container\@\@UEAAXPEAVContainerContentChangeListener\@\@\@Z
     */
    virtual void addContentChangeListener(class ContainerContentChangeListener *);
    /**
     * @vftbl  4
     * @symbol  ?removeContentChangeListener\@Container\@\@UEAAXPEAVContainerContentChangeListener\@\@\@Z
     */
    virtual void removeContentChangeListener(class ContainerContentChangeListener *);
    /**
     * @vftbl  5
     * @symbol  ?getItem\@SimpleContainer\@\@UEBAAEBVItemStack\@\@H\@Z
     */
    virtual class ItemStack const & getItem(int) const = 0;
    /**
     * @vftbl  6
     * @symbol  ?hasRoomForItem\@Container\@\@UEAA_NAEBVItemStack\@\@\@Z
     */
    virtual bool hasRoomForItem(class ItemStack const &);
    /**
     * @vftbl  7
     * @symbol  ?addItem\@Container\@\@UEAA_NAEAVItemStack\@\@\@Z
     */
    virtual bool addItem(class ItemStack &);
    /**
     * @vftbl  8
     * @symbol  ?addItemToFirstEmptySlot\@Container\@\@UEAA_NAEBVItemStack\@\@\@Z
     */
    virtual bool addItemToFirstEmptySlot(class ItemStack const &);
    /**
     * @vftbl  9
     * @symbol  ?setItem\@SimplePlayerContainer\@\@UEAAXHAEBVItemStack\@\@\@Z
     */
    virtual void setItem(int, class ItemStack const &) = 0;
    /**
     * @vftbl  10
     * @symbol  ?setItemWithForceBalance\@Container\@\@UEAAXHAEBVItemStack\@\@_N\@Z
     */
    virtual void setItemWithForceBalance(int, class ItemStack const &, bool);
    /**
     * @vftbl  11
     * @symbol  ?removeItem\@Container\@\@UEAAXHH\@Z
     */
    virtual void removeItem(int, int);
    /**
     * @vftbl  12
     * @symbol  ?removeAllItems\@Container\@\@UEAAXXZ
     */
    virtual void removeAllItems();
    /**
     * @vftbl  13
     * @symbol  ?dropContents\@Container\@\@UEAAXAEAVBlockSource\@\@AEBVVec3\@\@_N\@Z
     */
    virtual void dropContents(class BlockSource &, class Vec3 const &, bool);
    /**
     * @vftbl  14
     * @symbol  ?getContainerSize\@SimpleContainer\@\@UEBAHXZ
     */
    virtual int getContainerSize() const = 0;
    /**
     * @vftbl  15
     * @symbol  ?getMaxStackSize\@SimpleContainer\@\@UEBAHXZ
     */
    virtual int getMaxStackSize() const = 0;
    /**
     * @vftbl  16
     * @symbol  ?startOpen\@FillingContainer\@\@UEAAXAEAVPlayer\@\@\@Z
     */
    virtual void startOpen(class Player &) = 0;
    /**
     * @vftbl  17
     * @symbol  ?stopOpen\@CraftingContainer\@\@UEAAXAEAVPlayer\@\@\@Z
     */
    virtual void stopOpen(class Player &) = 0;
    /**
     * @vftbl  18
     * @symbol  ?getSlotCopies\@Container\@\@UEBA?AV?$vector\@VItemStack\@\@V?$allocator\@VItemStack\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::vector<class ItemStack> getSlotCopies() const;
    /**
     * @vftbl  19
     * @symbol  ?getSlots\@Container\@\@UEBA?BV?$vector\@PEBVItemStack\@\@V?$allocator\@PEBVItemStack\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::vector<class ItemStack const *> const getSlots() const;
    /**
     * @vftbl  20
     * @symbol  ?getItemCount\@Container\@\@UEBAHAEBVItemStack\@\@\@Z
     */
    virtual int getItemCount(class ItemStack const &) const;
    /**
     * @vftbl  21
     * @symbol  ?findFirstSlotForItem\@Container\@\@UEBAHAEBVItemStack\@\@\@Z
     */
    virtual int findFirstSlotForItem(class ItemStack const &) const;
    /**
     * @vftbl  22
     * @symbol  __unk_vfn_22
     */
    virtual void __unk_vfn_22();
    /**
     * @vftbl  23
     * @symbol  __unk_vfn_23
     */
    virtual void __unk_vfn_23();
    /**
     * @vftbl  24
     * @symbol  ?setContainerChanged\@Container\@\@UEAAXH\@Z
     */
    virtual void setContainerChanged(int);
    /**
     * @vftbl  25
     * @symbol  ?setContainerMoved\@Container\@\@UEAAXXZ
     */
    virtual void setContainerMoved();
    /**
     * @vftbl  26
     * @symbol  ?setCustomName\@Container\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void setCustomName(std::string const &);
    /**
     * @vftbl  27
     * @symbol  ?hasCustomName\@Container\@\@UEBA_NXZ
     */
    virtual bool hasCustomName() const;
    /**
     * @vftbl  28
     * @symbol  ?readAdditionalSaveData\@Container\@\@UEAAXAEBVCompoundTag\@\@\@Z
     */
    virtual void readAdditionalSaveData(class CompoundTag const &);
    /**
     * @vftbl  29
     * @symbol  ?addAdditionalSaveData\@Container\@\@UEAAXAEAVCompoundTag\@\@\@Z
     */
    virtual void addAdditionalSaveData(class CompoundTag &);
    /**
     * @vftbl  30
     * @symbol  ?createTransactionContext\@Container\@\@UEAAXV?$function\@$$A6AXAEAVContainer\@\@HAEBVItemStack\@\@1\@Z\@std\@\@V?$function\@$$A6AXXZ\@3\@\@Z
     */
    virtual void createTransactionContext(class std::function<void (class Container &, int, class ItemStack const &, class ItemStack const &)>, class std::function<void (void)>);
    /**
     * @vftbl  31
     * @symbol  ?initializeContainerContents\@Container\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    virtual void initializeContainerContents(class BlockSource &);
    /**
     * @vftbl  32
     * @symbol  ?isEmpty\@Container\@\@UEBA_NXZ
     */
    virtual bool isEmpty() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CONTAINER
    /**
     * @symbol  ?canPullOutItem\@Container\@\@UEBA_NHHAEBVItemStack\@\@\@Z
     */
    MCVAPI bool canPullOutItem(int, int, class ItemStack const &) const;
    /**
     * @symbol  ?canPushInItem\@Container\@\@UEBA_NHHAEBVItemStack\@\@\@Z
     */
    MCVAPI bool canPushInItem(int, int, class ItemStack const &) const;
#endif
    /**
     * @symbol  ??0Container\@\@QEAA\@W4ContainerType\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_N\@Z
     */
    MCAPI Container(enum class ContainerType, std::string const &, bool);
    /**
     * @symbol  ??0Container\@\@QEAA\@W4ContainerType\@\@\@Z
     */
    MCAPI Container(enum class ContainerType);
    /**
     * @symbol  ??0Container\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI Container(class Container const &);
    /**
     * @symbol  ?getContainerType\@Container\@\@QEBA?AW4ContainerType\@\@XZ
     */
    MCAPI enum class ContainerType getContainerType() const;
    /**
     * @symbol  ?getGameplayContainerType\@Container\@\@QEBA?AW4ContainerType\@\@XZ
     */
    MCAPI enum class ContainerType getGameplayContainerType() const;
    /**
     * @symbol  ?getItemCount\@Container\@\@QEAAHV?$function\@$$A6A_NAEBVItemStack\@\@\@Z\@std\@\@\@Z
     */
    MCAPI int getItemCount(class std::function<bool (class ItemStack const &)>);
    /**
     * @symbol  ?getRedstoneSignalFromContainer\@Container\@\@QEAAHAEAVBlockSource\@\@\@Z
     */
    MCAPI int getRedstoneSignalFromContainer(class BlockSource &);
    /**
     * @symbol  ?getRuntimeId\@Container\@\@QEBAAEBV?$TypedRuntimeId\@UContainerRuntimeIdTag\@\@I$0A\@\@\@XZ
     */
    MCAPI class TypedRuntimeId<struct ContainerRuntimeIdTag, unsigned int, 0> const & getRuntimeId() const;
    /**
     * @symbol  ?initRuntimeId\@Container\@\@QEAAXXZ
     */
    MCAPI void initRuntimeId();
    /**
     * @symbol  ?serverInitItemStackIdsAll\@Container\@\@QEAAXV?$function\@$$A6AXHAEBVItemStack\@\@\@Z\@std\@\@\@Z
     */
    MCAPI void serverInitItemStackIdsAll(class std::function<void (int, class ItemStack const &)>);
    /**
     * @symbol  ?setGameplayContainerType\@Container\@\@QEAAXW4ContainerType\@\@\@Z
     */
    MCAPI void setGameplayContainerType(enum class ContainerType);
    /**
     * @symbol  ?triggerTransactionChange\@Container\@\@QEAAXHAEBVItemStack\@\@0\@Z
     */
    MCAPI void triggerTransactionChange(int, class ItemStack const &, class ItemStack const &);
    /**
     * @symbol  ?getContainerTypeId\@Container\@\@SA?AW4ContainerType\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI static enum class ContainerType getContainerTypeId(std::string const &);
    /**
     * @symbol  ?getContainerTypeName\@Container\@\@SAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4ContainerType\@\@\@Z
     */
    MCAPI static std::string const & getContainerTypeName(enum class ContainerType);

//protected:
    /**
     * @symbol  ?_initRuntimeId\@Container\@\@IEAAXAEBV?$TypedRuntimeId\@UContainerRuntimeIdTag\@\@I$0A\@\@\@\@Z
     */
    MCAPI void _initRuntimeId(class TypedRuntimeId<struct ContainerRuntimeIdTag, unsigned int, 0> const &);
    /**
     * @symbol  ?_serverInitId\@Container\@\@IEAAXHAEAVItemStack\@\@V?$function\@$$A6AXHAEBVItemStack\@\@\@Z\@std\@\@\@Z
     */
    MCAPI void _serverInitId(int, class ItemStack &, class std::function<void (int, class ItemStack const &)>);

protected:
    /**
     * @symbol  ?containerTypeMap\@Container\@\@1V?$BidirectionalUnorderedMap\@W4ContainerType\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@\@B
     */
    MCAPI static class BidirectionalUnorderedMap<enum class ContainerType, std::string> const containerTypeMap;

};