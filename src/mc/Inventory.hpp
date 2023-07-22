/**
 * @file  Inventory.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "FillingContainer.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class Inventory.
 *
 */
class Inventory : public FillingContainer {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INVENTORY
public:
    class Inventory& operator=(class Inventory const &) = delete;
    Inventory(class Inventory const &) = delete;
    Inventory() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~Inventory();
    /**
     * @vftbl  1
     * @symbol  ?init\@Inventory\@\@UEAAXXZ
     */
    virtual void init();
    /**
     * @vftbl  9
     * @symbol  ?setItem\@Inventory\@\@UEAAXHAEBVItemStack\@\@\@Z
     */
    virtual void setItem(int, class ItemStack const &);
    /**
     * @vftbl  10
     * @symbol  ?setItemWithForceBalance\@Inventory\@\@UEAAXHAEBVItemStack\@\@_N\@Z
     */
    virtual void setItemWithForceBalance(int, class ItemStack const &, bool);
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
     * @vftbl  33
     * @symbol  ?add\@Inventory\@\@UEAA_NAEAVItemStack\@\@\@Z
     */
    virtual bool add(class ItemStack &);
    /**
     * @vftbl  34
     * @symbol  ?canAdd\@Inventory\@\@UEBA_NAEBVItemStack\@\@\@Z
     */
    virtual bool canAdd(class ItemStack const &) const;
    /**
     * @vftbl  38
     * @symbol  ?getEmptySlotsCount\@Inventory\@\@UEBAHXZ
     */
    virtual int getEmptySlotsCount() const;
    /**
     * @vftbl  39
     * @symbol  ?getFirstEmptySlot\@Inventory\@\@UEBAHXZ
     */
    virtual int getFirstEmptySlot() const;
    /**
     * @vftbl  40
     * @symbol  ?setContainerSize\@Inventory\@\@UEAAXH\@Z
     */
    virtual void setContainerSize(int);
    /**
     * @vftbl  41
     * @symbol  __unk_vfn_41
     */
    virtual void __unk_vfn_41();
    /**
     * @vftbl  42
     * @symbol  __unk_vfn_42
     */
    virtual void __unk_vfn_42();
    /**
     * @vftbl  43
     * @symbol  __unk_vfn_43
     */
    virtual void __unk_vfn_43();
    /**
     * @vftbl  44
     * @symbol  __unk_vfn_44
     */
    virtual void __unk_vfn_44();
    /**
     * @vftbl  45
     * @symbol  ?_Delete_this\@?$_Func_impl_no_alloc\@V?$_Fake_no_copy_callable_adapter\@P8thread\@std\@\@EAAXXZPEAV12\@\@std\@\@X$$V\@std\@\@EEAAX_N\@Z
     */
    virtual void _Delete_this(bool);
    /**
     * @symbol  ??0Inventory\@\@QEAA\@PEAVPlayer\@\@\@Z
     */
    MCAPI Inventory(class Player *);
    /**
     * @symbol  ?dropSlot\@Inventory\@\@QEAAXH_N00\@Z
     */
    MCAPI void dropSlot(int, bool, bool, bool);
    /**
     * @symbol  ?getComplexItems\@Inventory\@\@QEAA?AV?$vector\@VItemStack\@\@V?$allocator\@VItemStack\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<class ItemStack> getComplexItems();
    /**
     * @symbol  ?setupDefault\@Inventory\@\@QEAAXXZ
     */
    MCAPI void setupDefault();
    /**
     * @symbol  ?tick\@Inventory\@\@QEAAXH\@Z
     */
    MCAPI void tick(int);

};