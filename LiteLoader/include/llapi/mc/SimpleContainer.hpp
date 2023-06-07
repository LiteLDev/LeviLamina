/**
 * @file  SimpleContainer.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
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
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 2
     * @symbol ?serverInitItemStackIds\@SimpleContainer\@\@UEAAXHHV?$function\@$$A6AXHAEBVItemStack\@\@\@Z\@std\@\@\@Z
     */
    virtual void serverInitItemStackIds(int, int, class std::function<void (int, class ItemStack const &)>);
    /**
     * @vftbl 5
     * @symbol ?getItem\@SimpleContainer\@\@UEBAAEBVItemStack\@\@H\@Z
     */
    virtual class ItemStack const & getItem(int) const;
    /**
     * @vftbl 10
     * @symbol ?setItem\@SimpleContainer\@\@UEAAXHAEBVItemStack\@\@\@Z
     */
    virtual void setItem(int, class ItemStack const &);
    /**
     * @vftbl 16
     * @symbol ?getContainerSize\@SimpleContainer\@\@UEBAHXZ
     */
    virtual int getContainerSize() const;
    /**
     * @vftbl 17
     * @symbol ?getMaxStackSize\@SimpleContainer\@\@UEBAHXZ
     */
    virtual int getMaxStackSize() const;
    /**
     * @vftbl 18
     * @symbol ?startOpen\@SimpleContainer\@\@UEAAXAEAVPlayer\@\@\@Z
     */
    virtual void startOpen(class Player &);
    /**
     * @vftbl 19
     * @symbol ?stopOpen\@SimpleContainer\@\@UEAAXAEAVPlayer\@\@\@Z
     */
    virtual void stopOpen(class Player &);
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
     * @symbol ??0SimpleContainer\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_NHW4ContainerType\@\@\@Z
     */
    MCAPI SimpleContainer(std::string const &, bool, int, enum class ContainerType);

};
