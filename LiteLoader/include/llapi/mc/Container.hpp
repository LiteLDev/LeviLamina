/**
 * @file  Container.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @symbol __unk_destructor_0
     */
    virtual ~Container();
    /**
     * @hash   497215446
     * @vftbl  1
     * @symbol ?init@Container@@UEAAXXZ
     */
    virtual void init();
    /**
     * @hash   -1488520011
     * @vftbl  2
     * @symbol ?serverInitItemStackIds@SimpleContainer@@UEAAXHHV?$function@$$A6AXHAEBVItemStack@@@Z@std@@@Z
     */
    virtual void serverInitItemStackIds(int, int, class std::function<void (int, class ItemStack const &)>) = 0;
    /**
     * @hash   114812610
     * @vftbl  3
     * @symbol ?addContentChangeListener@Container@@UEAAXPEAVContainerContentChangeListener@@@Z
     */
    virtual void addContentChangeListener(class ContainerContentChangeListener *);
    /**
     * @hash   127204709
     * @vftbl  4
     * @symbol ?removeContentChangeListener@Container@@UEAAXPEAVContainerContentChangeListener@@@Z
     */
    virtual void removeContentChangeListener(class ContainerContentChangeListener *);
    /**
     * @hash   -947143408
     * @vftbl  5
     * @symbol ?getItem@SimpleContainer@@UEBAAEBVItemStack@@H@Z
     */
    virtual class ItemStack const & getItem(int) const = 0;
    /**
     * @hash   -1259290091
     * @vftbl  6
     * @symbol ?hasRoomForItem@Container@@UEAA_NAEBVItemStack@@@Z
     */
    virtual bool hasRoomForItem(class ItemStack const &);
    /**
     * @hash   -204290053
     * @vftbl  7
     * @symbol ?addItem@Container@@UEAA_NAEAVItemStack@@@Z
     */
    virtual bool addItem(class ItemStack &);
    /**
     * @hash   810625762
     * @vftbl  8
     * @symbol ?addItemToFirstEmptySlot@Container@@UEAA_NAEBVItemStack@@@Z
     */
    virtual bool addItemToFirstEmptySlot(class ItemStack const &);
    /**
     * @hash   1156931643
     * @vftbl  9
     * @symbol ?setItem@SimplePlayerContainer@@UEAAXHAEBVItemStack@@@Z
     */
    virtual void setItem(int, class ItemStack const &) = 0;
    /**
     * @hash   -1017118363
     * @vftbl  10
     * @symbol ?setItemWithForceBalance@Container@@UEAAXHAEBVItemStack@@_N@Z
     */
    virtual void setItemWithForceBalance(int, class ItemStack const &, bool);
    /**
     * @hash   1070689085
     * @vftbl  11
     * @symbol ?removeItem@Container@@UEAAXHH@Z
     */
    virtual void removeItem(int, int);
    /**
     * @hash   145873449
     * @vftbl  12
     * @symbol ?removeAllItems@Container@@UEAAXXZ
     */
    virtual void removeAllItems();
    /**
     * @hash   2079023423
     * @vftbl  13
     * @symbol ?dropContents@Container@@UEAAXAEAVBlockSource@@AEBVVec3@@_N@Z
     */
    virtual void dropContents(class BlockSource &, class Vec3 const &, bool);
    /**
     * @hash   470228337
     * @vftbl  14
     * @symbol ?getContainerSize@SimpleContainer@@UEBAHXZ
     */
    virtual int getContainerSize() const = 0;
    /**
     * @hash   -970906752
     * @vftbl  15
     * @symbol ?getMaxStackSize@SimpleContainer@@UEBAHXZ
     */
    virtual int getMaxStackSize() const = 0;
    /**
     * @hash   368544188
     * @vftbl  16
     * @symbol ?startOpen@FillingContainer@@UEAAXAEAVPlayer@@@Z
     */
    virtual void startOpen(class Player &) = 0;
    /**
     * @hash   -64267396
     * @vftbl  17
     * @symbol ?stopOpen@CraftingContainer@@UEAAXAEAVPlayer@@@Z
     */
    virtual void stopOpen(class Player &) = 0;
    /**
     * @hash   1609927129
     * @vftbl  18
     * @symbol ?getSlotCopies@Container@@UEBA?AV?$vector@VItemStack@@V?$allocator@VItemStack@@@std@@@std@@XZ
     */
    virtual std::vector<class ItemStack> getSlotCopies() const;
    /**
     * @hash   1443060596
     * @vftbl  19
     * @symbol ?getSlots@Container@@UEBA?BV?$vector@PEBVItemStack@@V?$allocator@PEBVItemStack@@@std@@@std@@XZ
     */
    virtual std::vector<class ItemStack const *> const getSlots() const;
    /**
     * @hash   -396265630
     * @vftbl  20
     * @symbol ?getItemCount@Container@@UEBAHAEBVItemStack@@@Z
     */
    virtual int getItemCount(class ItemStack const &) const;
    /**
     * @hash   1862319457
     * @vftbl  21
     * @symbol ?findFirstSlotForItem@Container@@UEBAHAEBVItemStack@@@Z
     */
    virtual int findFirstSlotForItem(class ItemStack const &) const;
    /**
     * @vftbl  22
     * @symbol __unk_vfn_22
     */
    virtual void __unk_vfn_22();
    /**
     * @vftbl  23
     * @symbol __unk_vfn_23
     */
    virtual void __unk_vfn_23();
    /**
     * @hash   -1023347052
     * @vftbl  24
     * @symbol ?setContainerChanged@Container@@UEAAXH@Z
     */
    virtual void setContainerChanged(int);
    /**
     * @hash   -1864327318
     * @vftbl  25
     * @symbol ?setContainerMoved@Container@@UEAAXXZ
     */
    virtual void setContainerMoved();
    /**
     * @hash   -611509224
     * @vftbl  26
     * @symbol ?setCustomName@Container@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    virtual void setCustomName(std::string const &);
    /**
     * @hash   1041538541
     * @vftbl  27
     * @symbol ?hasCustomName@Container@@UEBA_NXZ
     */
    virtual bool hasCustomName() const;
    /**
     * @hash   -1735993344
     * @vftbl  28
     * @symbol ?readAdditionalSaveData@Container@@UEAAXAEBVCompoundTag@@@Z
     */
    virtual void readAdditionalSaveData(class CompoundTag const &);
    /**
     * @hash   1544782392
     * @vftbl  29
     * @symbol ?addAdditionalSaveData@Container@@UEAAXAEAVCompoundTag@@@Z
     */
    virtual void addAdditionalSaveData(class CompoundTag &);
    /**
     * @hash   -1150980493
     * @vftbl  30
     * @symbol ?createTransactionContext@Container@@UEAAXV?$function@$$A6AXAEAVContainer@@HAEBVItemStack@@1@Z@std@@V?$function@$$A6AXXZ@3@@Z
     */
    virtual void createTransactionContext(class std::function<void (class Container &, int, class ItemStack const &, class ItemStack const &)>, class std::function<void (void)>);
    /**
     * @hash   -896522477
     * @vftbl  31
     * @symbol ?initializeContainerContents@Container@@UEAAXAEAVBlockSource@@@Z
     */
    virtual void initializeContainerContents(class BlockSource &);
    /**
     * @hash   1043032298
     * @vftbl  32
     * @symbol ?isEmpty@Container@@UEBA_NXZ
     */
    virtual bool isEmpty() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CONTAINER
    /**
     * @hash   -230203192
     * @symbol ?canPullOutItem@Container@@UEBA_NAEAVBlockSource@@HHAEBVItemInstance@@@Z
     */
    MCVAPI bool canPullOutItem(class BlockSource &, int, int, class ItemInstance const &) const;
    /**
     * @hash   -103837250
     * @symbol ?canPushInItem@Container@@UEBA_NAEAVBlockSource@@HHAEBVItemInstance@@@Z
     */
    MCVAPI bool canPushInItem(class BlockSource &, int, int, class ItemInstance const &) const;
#endif
    /**
     * @hash   1915159688
     * @symbol ??0Container@@QEAA@W4ContainerType@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
     */
    MCAPI Container(enum class ContainerType, std::string const &, bool);
    /**
     * @hash   658649256
     * @symbol ??0Container@@QEAA@W4ContainerType@@@Z
     */
    MCAPI Container(enum class ContainerType);
    /**
     * @hash   -494627967
     * @symbol ??0Container@@QEAA@AEBV0@@Z
     */
    MCAPI Container(class Container const &);
    /**
     * @hash   331263116
     * @symbol ?getContainerType@Container@@QEBA?AW4ContainerType@@XZ
     */
    MCAPI enum class ContainerType getContainerType() const;
    /**
     * @hash   -1628534656
     * @symbol ?getGameplayContainerType@Container@@QEBA?AW4ContainerType@@XZ
     */
    MCAPI enum class ContainerType getGameplayContainerType() const;
    /**
     * @hash   -337788061
     * @symbol ?getItemCount@Container@@QEAAHV?$function@$$A6A_NAEBVItemStack@@@Z@std@@@Z
     */
    MCAPI int getItemCount(class std::function<bool (class ItemStack const &)>);
    /**
     * @hash   -1247563609
     * @symbol ?getRedstoneSignalFromContainer@Container@@QEAAHAEAVBlockSource@@@Z
     */
    MCAPI int getRedstoneSignalFromContainer(class BlockSource &);
    /**
     * @hash   1217346785
     * @symbol ?getRuntimeId@Container@@QEBAAEBV?$TypedRuntimeId@UContainerRuntimeIdTag@@I$0A@@@XZ
     */
    MCAPI class TypedRuntimeId<struct ContainerRuntimeIdTag, unsigned int, 0> const & getRuntimeId() const;
    /**
     * @hash   -184131573
     * @symbol ?initRuntimeId@Container@@QEAAXXZ
     */
    MCAPI void initRuntimeId();
    /**
     * @hash   1159359438
     * @symbol ?serverInitItemStackIdsAll@Container@@QEAAXV?$function@$$A6AXHAEBVItemStack@@@Z@std@@@Z
     */
    MCAPI void serverInitItemStackIdsAll(class std::function<void (int, class ItemStack const &)>);
    /**
     * @hash   1676051372
     * @symbol ?setGameplayContainerType@Container@@QEAAXW4ContainerType@@@Z
     */
    MCAPI void setGameplayContainerType(enum class ContainerType);
    /**
     * @hash   -1618129431
     * @symbol ?triggerTransactionChange@Container@@QEAAXHAEBVItemStack@@0@Z
     */
    MCAPI void triggerTransactionChange(int, class ItemStack const &, class ItemStack const &);
    /**
     * @hash   1204016659
     * @symbol ?getContainerTypeId@Container@@SA?AW4ContainerType@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI static enum class ContainerType getContainerTypeId(std::string const &);
    /**
     * @hash   -1649010403
     * @symbol ?getContainerTypeName@Container@@SAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4ContainerType@@@Z
     */
    MCAPI static std::string const & getContainerTypeName(enum class ContainerType);

//protected:
    /**
     * @hash   2042261833
     * @symbol ?_initRuntimeId@Container@@IEAAXAEBV?$TypedRuntimeId@UContainerRuntimeIdTag@@I$0A@@@@Z
     */
    MCAPI void _initRuntimeId(class TypedRuntimeId<struct ContainerRuntimeIdTag, unsigned int, 0> const &);
    /**
     * @hash   2018960071
     * @symbol ?_serverInitId@Container@@IEAAXHAEAVItemStack@@V?$function@$$A6AXHAEBVItemStack@@@Z@std@@@Z
     */
    MCAPI void _serverInitId(int, class ItemStack &, class std::function<void (int, class ItemStack const &)>);

protected:
    /**
     * @hash   989333048
     * @symbol ?containerTypeMap@Container@@1V?$BidirectionalUnorderedMap@W4ContainerType@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@@B
     */
    MCAPI static class BidirectionalUnorderedMap<enum class ContainerType, std::string> const containerTypeMap;

};