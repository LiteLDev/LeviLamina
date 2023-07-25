#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/Container.h"

class CraftingContainer : public ::Container {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CRAFTINGCONTAINER
public:
    CraftingContainer& operator=(CraftingContainer const&) = delete;
    CraftingContainer(CraftingContainer const&)            = delete;
    CraftingContainer()                                    = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 2
     * @symbol ?serverInitItemStackIds\@CraftingContainer\@\@UEAAXHHV?$function\@$$A6AXHAEBVItemStack\@\@\@Z\@std\@\@\@Z
     */
    virtual void serverInitItemStackIds(int, int, class std::function<void(int, class ItemStack const&)>);
    /**
     * @vftbl 5
     * @symbol ?getItem\@CraftingContainer\@\@UEBAAEBVItemStack\@\@H\@Z
     */
    virtual class ItemStack const& getItem(int) const;
    /**
     * @vftbl 10
     * @symbol ?setItem\@CraftingContainer\@\@UEAAXHAEBVItemStack\@\@\@Z
     */
    virtual void setItem(int, class ItemStack const&);
    /**
     * @vftbl 16
     * @symbol ?getContainerSize\@CraftingContainer\@\@UEBAHXZ
     */
    virtual int getContainerSize() const;
    /**
     * @vftbl 17
     * @symbol ?getMaxStackSize\@CraftingContainer\@\@UEBAHXZ
     */
    virtual int getMaxStackSize() const;
    /**
     * @vftbl 18
     * @symbol ?startOpen\@CraftingContainer\@\@UEAAXAEAVPlayer\@\@\@Z
     */
    virtual void startOpen(class Player&);
    /**
     * @vftbl 19
     * @symbol ?stopOpen\@CraftingContainer\@\@UEAAXAEAVPlayer\@\@\@Z
     */
    virtual void stopOpen(class Player&);
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
     * @symbol ?setContainerChanged\@CraftingContainer\@\@UEAAXH\@Z
     */
    virtual void setContainerChanged(int);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CRAFTINGCONTAINER
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~CraftingContainer();
#endif
    /**
     * @symbol ??0CraftingContainer\@\@QEAA\@HH\@Z
     */
    MCAPI CraftingContainer(int, int);
    /**
     * @symbol ?getItem\@CraftingContainer\@\@QEBAAEBVItemStack\@\@HH\@Z
     */
    MCAPI class ItemStack const& getItem(int, int) const;
};
