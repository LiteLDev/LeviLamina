#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/Container.h"

class CraftingContainer : public ::Container {

public:
    // prevent constructor by default
    CraftingContainer& operator=(CraftingContainer const&) = delete;
    CraftingContainer(CraftingContainer const&)            = delete;
    CraftingContainer()                                    = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?serverInitItemStackIds\@CraftingContainer\@\@UEAAXHHV?$function\@$$A6AXHAEBVItemStack\@\@\@Z\@std\@\@\@Z
     */
    virtual void serverInitItemStackIds(int, int, class std::function<void(int, class ItemStack const&)>); // NOLINT
    /**
     * @vftbl 5
     * @symbol ?getItem\@CraftingContainer\@\@UEBAAEBVItemStack\@\@H\@Z
     */
    virtual class ItemStack const& getItem(int) const; // NOLINT
    /**
     * @vftbl 10
     * @symbol ?setItem\@CraftingContainer\@\@UEAAXHAEBVItemStack\@\@\@Z
     */
    virtual void setItem(int, class ItemStack const&); // NOLINT
    /**
     * @vftbl 16
     * @symbol ?getContainerSize\@CraftingContainer\@\@UEBAHXZ
     */
    virtual int getContainerSize() const; // NOLINT
    /**
     * @vftbl 17
     * @symbol ?getMaxStackSize\@CraftingContainer\@\@UEBAHXZ
     */
    virtual int getMaxStackSize() const; // NOLINT
    /**
     * @vftbl 18
     * @symbol ?startOpen\@CraftingContainer\@\@UEAAXAEAVPlayer\@\@\@Z
     */
    virtual void startOpen(class Player&); // NOLINT
    /**
     * @vftbl 19
     * @symbol ?stopOpen\@CraftingContainer\@\@UEAAXAEAVPlayer\@\@\@Z
     */
    virtual void stopOpen(class Player&); // NOLINT
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
     * @symbol ?setContainerChanged\@CraftingContainer\@\@UEAAXH\@Z
     */
    virtual void setContainerChanged(int); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CRAFTINGCONTAINER
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~CraftingContainer(); // NOLINT
#endif
    /**
     * @symbol ??0CraftingContainer\@\@QEAA\@HH\@Z
     */
    MCAPI CraftingContainer(int, int); // NOLINT
    /**
     * @symbol ?getItem\@CraftingContainer\@\@QEBAAEBVItemStack\@\@HH\@Z
     */
    MCAPI class ItemStack const& getItem(int, int) const; // NOLINT
};
