#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/Container.h"

class SimpleContainer : public ::Container {

public:
    // prevent constructor by default
    SimpleContainer& operator=(SimpleContainer const&) = delete;
    SimpleContainer(SimpleContainer const&)            = delete;
    SimpleContainer()                                  = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?serverInitItemStackIds\@SimpleContainer\@\@UEAAXHHV?$function\@$$A6AXHAEBVItemStack\@\@\@Z\@std\@\@\@Z
     */
    virtual void serverInitItemStackIds(int, int, class std::function<void(int, class ItemStack const&)>); // NOLINT
    /**
     * @vftbl 5
     * @symbol ?getItem\@SimpleContainer\@\@UEBAAEBVItemStack\@\@H\@Z
     */
    virtual class ItemStack const& getItem(int) const; // NOLINT
    /**
     * @vftbl 10
     * @symbol ?setItem\@SimpleContainer\@\@UEAAXHAEBVItemStack\@\@\@Z
     */
    virtual void setItem(int, class ItemStack const&); // NOLINT
    /**
     * @vftbl 16
     * @symbol ?getContainerSize\@SimpleContainer\@\@UEBAHXZ
     */
    virtual int getContainerSize() const; // NOLINT
    /**
     * @vftbl 17
     * @symbol ?getMaxStackSize\@SimpleContainer\@\@UEBAHXZ
     */
    virtual int getMaxStackSize() const; // NOLINT
    /**
     * @vftbl 18
     * @symbol ?startOpen\@SimpleContainer\@\@UEAAXAEAVPlayer\@\@\@Z
     */
    virtual void startOpen(class Player&); // NOLINT
    /**
     * @vftbl 19
     * @symbol ?stopOpen\@SimpleContainer\@\@UEAAXAEAVPlayer\@\@\@Z
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
     * @symbol
     * ??0SimpleContainer\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_NHW4ContainerType\@\@\@Z
     */
    MCAPI SimpleContainer(std::string const&, bool, int, enum class ContainerType); // NOLINT
};
