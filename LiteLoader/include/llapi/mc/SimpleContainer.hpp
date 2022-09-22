/**
 * @file  SimpleContainer.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Container.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class SimpleContainer.
 *
 */
class SimpleContainer : public Container {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SIMPLECONTAINER
public:
    class SimpleContainer& operator=(class SimpleContainer const &) = delete;
    SimpleContainer(class SimpleContainer const &) = delete;
    SimpleContainer() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~SimpleContainer();
    /**
     * @hash   57316568
     * @vftbl  2
     * @symbol ?serverInitItemStackIds@SimpleContainer@@UEAAXHHV?$function@$$A6AXHAEBVItemStack@@@Z@std@@@Z
     */
    virtual void serverInitItemStackIds(int, int, class std::function<void (int, class ItemStack const &)>);
    /**
     * @hash   -1846580125
     * @vftbl  5
     * @symbol ?getItem@SimpleContainer@@UEBAAEBVItemStack@@H@Z
     */
    virtual class ItemStack const & getItem(int) const;
    /**
     * @hash   -1933738350
     * @vftbl  9
     * @symbol ?setItem@SimpleContainer@@UEAAXHAEBVItemStack@@@Z
     */
    virtual void setItem(int, class ItemStack const &);
    /**
     * @hash   1170264856
     * @vftbl  14
     * @symbol ?getContainerSize@SimpleContainer@@UEBAHXZ
     */
    virtual int getContainerSize() const;
    /**
     * @hash   -842007161
     * @vftbl  15
     * @symbol ?getMaxStackSize@SimpleContainer@@UEBAHXZ
     */
    virtual int getMaxStackSize() const;
    /**
     * @hash   -1823791345
     * @vftbl  16
     * @symbol ?startOpen@SimpleContainer@@UEAAXAEAVPlayer@@@Z
     */
    virtual void startOpen(class Player &);
    /**
     * @hash   2008680367
     * @vftbl  17
     * @symbol ?stopOpen@SimpleContainer@@UEAAXAEAVPlayer@@@Z
     */
    virtual void stopOpen(class Player &);
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
     * @hash   -1509880399
     * @symbol ??0SimpleContainer@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_NHW4ContainerType@@@Z
     */
    MCAPI SimpleContainer(std::string const &, bool, int, enum ContainerType);

};