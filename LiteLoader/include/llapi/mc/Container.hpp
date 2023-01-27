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
    LIAPI bool hasContainer(Vec3& pos, int dim);
    // static??
    LIAPI Container* getContainerAt(Vec3& pos, int dim);
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
     * @hash   589102422
     * @vftbl  1
     * @symbol  ?init\@Container\@\@UEAAXXZ
     */
    virtual void init();
    /**
     * @hash   -1488520011
     * @vftbl  2
     * @symbol  ?serverInitItemStackIds\@SimpleContainer\@\@UEAAXHHV?$function\@$$A6AXHAEBVItemStack\@\@\@Z\@std\@\@\@Z
     */
    virtual void serverInitItemStackIds(int, int, class std::function<void (int, class ItemStack const &)>) = 0;
    /**
     * @hash   -529887694
     * @vftbl  3
     * @symbol  ?addContentChangeListener\@Container\@\@UEAAXPEAVContainerContentChangeListener\@\@\@Z
     */
    virtual void addContentChangeListener(class ContainerContentChangeListener *);
    /**
     * @hash   -517095819
     * @vftbl  4
     * @symbol  ?removeContentChangeListener\@Container\@\@UEAAXPEAVContainerContentChangeListener\@\@\@Z
     */
    virtual void removeContentChangeListener(class ContainerContentChangeListener *);
    /**
     * @hash   -947143408
     * @vftbl  5
     * @symbol  ?getItem\@SimpleContainer\@\@UEBAAEBVItemStack\@\@H\@Z
     */
    virtual class ItemStack const & getItem(int) const = 0;
    /**
     * @hash   -1903652123
     * @vftbl  6
     * @symbol  ?hasRoomForItem\@Container\@\@UEAA_NAEBVItemStack\@\@\@Z
     */
    virtual bool hasRoomForItem(class ItemStack const &);
    /**
     * @hash   -848990357
     * @vftbl  7
     * @symbol  ?addItem\@Container\@\@UEAA_NAEAVItemStack\@\@\@Z
     */
    virtual bool addItem(class ItemStack &);
    /**
     * @hash   165956210
     * @vftbl  8
     * @symbol  ?addItemToFirstEmptySlot\@Container\@\@UEAA_NAEBVItemStack\@\@\@Z
     */
    virtual bool addItemToFirstEmptySlot(class ItemStack const &);
    /**
     * @hash   1156931643
     * @vftbl  9
     * @symbol  ?setItem\@SimplePlayerContainer\@\@UEAAXHAEBVItemStack\@\@\@Z
     */
    virtual void setItem(int, class ItemStack const &) = 0;
    /**
     * @hash   -1869763691
     * @vftbl  10
     * @symbol  ?setItemWithForceBalance\@Container\@\@UEAAXHAEBVItemStack\@\@_N\@Z
     */
    virtual void setItemWithForceBalance(int, class ItemStack const &, bool);
    /**
     * @hash   426388557
     * @vftbl  11
     * @symbol  ?removeItem\@Container\@\@UEAAXHH\@Z
     */
    virtual void removeItem(int, int);
    /**
     * @hash   -498442455
     * @vftbl  12
     * @symbol  ?removeAllItems\@Container\@\@UEAAXXZ
     */
    virtual void removeAllItems();
    /**
     * @hash   1434399999
     * @vftbl  13
     * @symbol  ?dropContents\@Container\@\@UEAAXAEAVBlockSource\@\@AEBVVec3\@\@_N\@Z
     */
    virtual void dropContents(class BlockSource &, class Vec3 const &, bool);
    /**
     * @hash   470228337
     * @vftbl  14
     * @symbol  ?getContainerSize\@SimpleContainer\@\@UEBAHXZ
     */
    virtual int getContainerSize() const = 0;
    /**
     * @hash   -970906752
     * @vftbl  15
     * @symbol  ?getMaxStackSize\@SimpleContainer\@\@UEBAHXZ
     */
    virtual int getMaxStackSize() const = 0;
    /**
     * @hash   368544188
     * @vftbl  16
     * @symbol  ?startOpen\@FillingContainer\@\@UEAAXAEAVPlayer\@\@\@Z
     */
    virtual void startOpen(class Player &) = 0;
    /**
     * @hash   -64267396
     * @vftbl  17
     * @symbol  ?stopOpen\@CraftingContainer\@\@UEAAXAEAVPlayer\@\@\@Z
     */
    virtual void stopOpen(class Player &) = 0;
    /**
     * @hash   965503593
     * @vftbl  18
     * @symbol  ?getSlotCopies\@Container\@\@UEBA?AV?$vector\@VItemStack\@\@V?$allocator\@VItemStack\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::vector<class ItemStack> getSlotCopies() const;
    /**
     * @hash   798667812
     * @vftbl  19
     * @symbol  ?getSlots\@Container\@\@UEBA?BV?$vector\@PEBVItemStack\@\@V?$allocator\@PEBVItemStack\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::vector<class ItemStack const *> const getSlots() const;
    /**
     * @hash   -1040766046
     * @vftbl  20
     * @symbol  ?getItemCount\@Container\@\@UEBAHAEBVItemStack\@\@\@Z
     */
    virtual int getItemCount(class ItemStack const &) const;
    /**
     * @hash   1217788289
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
     * @hash   -1667586076
     * @vftbl  24
     * @symbol  ?setContainerChanged\@Container\@\@UEAAXH\@Z
     */
    virtual void setContainerChanged(int);
    /**
     * @hash   1786400954
     * @vftbl  25
     * @symbol  ?setContainerMoved\@Container\@\@UEAAXXZ
     */
    virtual void setContainerMoved();
    /**
     * @hash   -1255748248
     * @vftbl  26
     * @symbol  ?setCustomName\@Container\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void setCustomName(std::string const &);
    /**
     * @hash   109445421
     * @vftbl  27
     * @symbol  ?hasCustomName\@Container\@\@UEBA_NXZ
     */
    virtual bool hasCustomName() const;
    /**
     * @hash   1914627296
     * @vftbl  28
     * @symbol  ?readAdditionalSaveData\@Container\@\@UEAAXAEBVCompoundTag\@\@\@Z
     */
    virtual void readAdditionalSaveData(class CompoundTag const &);
    /**
     * @hash   900082088
     * @vftbl  29
     * @symbol  ?addAdditionalSaveData\@Container\@\@UEAAXAEAVCompoundTag\@\@\@Z
     */
    virtual void addAdditionalSaveData(class CompoundTag &);
    /**
     * @hash   -1795650045
     * @vftbl  30
     * @symbol  ?createTransactionContext\@Container\@\@UEAAXV?$function\@$$A6AXAEAVContainer\@\@HAEBVItemStack\@\@1\@Z\@std\@\@V?$function\@$$A6AXXZ\@3\@\@Z
     */
    virtual void createTransactionContext(class std::function<void (class Container &, int, class ItemStack const &, class ItemStack const &)>, class std::function<void (void)>);
    /**
     * @hash   -804635501
     * @vftbl  31
     * @symbol  ?initializeContainerContents\@Container\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    virtual void initializeContainerContents(class BlockSource &);
    /**
     * @hash   398685642
     * @vftbl  32
     * @symbol  ?isEmpty\@Container\@\@UEBA_NXZ
     */
    virtual bool isEmpty() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CONTAINER
    /**
     * @hash   -935935329
     * @symbol  ?canPullOutItem\@Container\@\@UEBA_NHHAEBVItemStack\@\@\@Z
     */
    MCVAPI bool canPullOutItem(int, int, class ItemStack const &) const;
    /**
     * @hash   544470249
     * @symbol  ?canPushInItem\@Container\@\@UEBA_NHHAEBVItemStack\@\@\@Z
     */
    MCVAPI bool canPushInItem(int, int, class ItemStack const &) const;
#endif
    /**
     * @hash   1270643896
     * @symbol  ??0Container\@\@QEAA\@W4ContainerType\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_N\@Z
     */
    MCAPI Container(enum class ContainerType, std::string const &, bool);
    /**
     * @hash   14148840
     * @symbol  ??0Container\@\@QEAA\@W4ContainerType\@\@\@Z
     */
    MCAPI Container(enum class ContainerType);
    /**
     * @hash   -1347442431
     * @symbol  ??0Container\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI Container(class Container const &);
    /**
     * @hash   -519321828
     * @symbol  ?getContainerType\@Container\@\@QEBA?AW4ContainerType\@\@XZ
     */
    MCAPI enum class ContainerType getContainerType() const;
    /**
     * @hash   -1491611376
     * @symbol  ?getGameplayContainerType\@Container\@\@QEBA?AW4ContainerType\@\@XZ
     */
    MCAPI enum class ContainerType getGameplayContainerType() const;
    /**
     * @hash   -982334605
     * @symbol  ?getItemCount\@Container\@\@QEAAHV?$function\@$$A6A_NAEBVItemStack\@\@\@Z\@std\@\@\@Z
     */
    MCAPI int getItemCount(class std::function<bool (class ItemStack const &)>);
    /**
     * @hash   -1892033273
     * @symbol  ?getRedstoneSignalFromContainer\@Container\@\@QEAAHAEAVBlockSource\@\@\@Z
     */
    MCAPI int getRedstoneSignalFromContainer(class BlockSource &);
    /**
     * @hash   572923249
     * @symbol  ?getRuntimeId\@Container\@\@QEBAAEBV?$TypedRuntimeId\@UContainerRuntimeIdTag\@\@I$0A\@\@\@XZ
     */
    MCAPI class TypedRuntimeId<struct ContainerRuntimeIdTag, unsigned int, 0> const & getRuntimeId() const;
    /**
     * @hash   -828478229
     * @symbol  ?initRuntimeId\@Container\@\@QEAAXXZ
     */
    MCAPI void initRuntimeId();
    /**
     * @hash   515105038
     * @symbol  ?serverInitItemStackIdsAll\@Container\@\@QEAAXV?$function\@$$A6AXHAEBVItemStack\@\@\@Z\@std\@\@\@Z
     */
    MCAPI void serverInitItemStackIdsAll(class std::function<void (int, class ItemStack const &)>);
    /**
     * @hash   1813282172
     * @symbol  ?setGameplayContainerType\@Container\@\@QEAAXW4ContainerType\@\@\@Z
     */
    MCAPI void setGameplayContainerType(enum class ContainerType);
    /**
     * @hash   2032598841
     * @symbol  ?triggerTransactionChange\@Container\@\@QEAAXHAEBVItemStack\@\@0\@Z
     */
    MCAPI void triggerTransactionChange(int, class ItemStack const &, class ItemStack const &);
    /**
     * @hash   559485491
     * @symbol  ?getContainerTypeId\@Container\@\@SA?AW4ContainerType\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI static enum class ContainerType getContainerTypeId(std::string const &);
    /**
     * @hash   2001410349
     * @symbol  ?getContainerTypeName\@Container\@\@SAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4ContainerType\@\@\@Z
     */
    MCAPI static std::string const & getContainerTypeName(enum class ContainerType);

//protected:
    /**
     * @hash   1397546153
     * @symbol  ?_initRuntimeId\@Container\@\@IEAAXAEBV?$TypedRuntimeId\@UContainerRuntimeIdTag\@\@I$0A\@\@\@\@Z
     */
    MCAPI void _initRuntimeId(class TypedRuntimeId<struct ContainerRuntimeIdTag, unsigned int, 0> const &);
    /**
     * @hash   1374244391
     * @symbol  ?_serverInitId\@Container\@\@IEAAXHAEAVItemStack\@\@V?$function\@$$A6AXHAEBVItemStack\@\@\@Z\@std\@\@\@Z
     */
    MCAPI void _serverInitId(int, class ItemStack &, class std::function<void (int, class ItemStack const &)>);

protected:
    /**
     * @hash   2094990456
     * @symbol  ?containerTypeMap\@Container\@\@1V?$BidirectionalUnorderedMap\@W4ContainerType\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@\@B
     */
    MCAPI static class BidirectionalUnorderedMap<enum class ContainerType, std::string> const containerTypeMap;

};