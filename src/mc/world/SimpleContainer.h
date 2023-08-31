#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/Container.h"
#include "mc/world/containers/ContainerType.h"

class SimpleContainer : public ::Container {

public:
    // prevent constructor by default
    SimpleContainer& operator=(SimpleContainer const&) = delete;
    SimpleContainer(SimpleContainer const&)            = delete;
    SimpleContainer()                                  = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 2
     * @symbol ?serverInitItemStackIds\@SimpleContainer\@\@UEAAXHHV?$function\@$$A6AXHAEBVItemStack\@\@\@Z\@std\@\@\@Z
     */
    virtual void serverInitItemStackIds(int32_t, int32_t, std::function<void(int32_t, class ItemStack const&)>);
    /**
     * @vftbl 5
     * @symbol ?getItem\@SimpleContainer\@\@UEBAAEBVItemStack\@\@H\@Z
     */
    virtual class ItemStack const& getItem(int32_t) const;
    /**
     * @vftbl 10
     * @symbol ?setItem\@SimpleContainer\@\@UEAAXHAEBVItemStack\@\@\@Z
     */
    virtual void setItem(int32_t, class ItemStack const&);
    /**
     * @vftbl 16
     * @symbol ?getContainerSize\@SimpleContainer\@\@UEBAHXZ
     */
    virtual int32_t getContainerSize() const;
    /**
     * @vftbl 17
     * @symbol ?getMaxStackSize\@SimpleContainer\@\@UEBAHXZ
     */
    virtual int32_t getMaxStackSize() const;
    /**
     * @vftbl 18
     * @symbol ?startOpen\@SimpleContainer\@\@UEAAXAEAVPlayer\@\@\@Z
     */
    virtual void startOpen(class Player&);
    /**
     * @vftbl 19
     * @symbol ?stopOpen\@SimpleContainer\@\@UEAAXAEAVPlayer\@\@\@Z
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
     * @symbol
     * ??0SimpleContainer\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_NHW4ContainerType\@\@\@Z
     */
    MCAPI SimpleContainer(std::string const&, bool, int32_t, enum class ContainerType);
    // NOLINTEND
};
