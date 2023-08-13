#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IContainerManager {

public:
    // prevent constructor by default
    IContainerManager& operator=(IContainerManager const&) = delete;
    IContainerManager(IContainerManager const&)            = delete;
    IContainerManager()                                    = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getContainerId\@ContainerManagerModel\@\@UEBA?AW4ContainerID\@\@XZ
     */
    virtual enum class ContainerID getContainerId() const = 0;
    /**
     * @vftbl 2
     * @symbol ?setContainerId\@ContainerManagerModel\@\@UEAAXW4ContainerID\@\@\@Z
     */
    virtual void setContainerId(enum class ContainerID) = 0;
    /**
     * @vftbl 3
     * @symbol ?getContainerType\@ContainerManagerModel\@\@UEBA?AW4ContainerType\@\@XZ
     */
    virtual enum class ContainerType getContainerType() const = 0;
    /**
     * @vftbl 4
     * @symbol ?setContainerType\@ContainerManagerModel\@\@UEAAXW4ContainerType\@\@\@Z
     */
    virtual void setContainerType(enum class ContainerType) = 0;
    /**
     * @vftbl 5
     * @symbol ?serverInitItemStackIds\@ContainerManagerModel\@\@UEAAXXZ
     */
    virtual void serverInitItemStackIds() = 0;
    /**
     * @vftbl 6
     * @symbol
     * ?getItemCopies\@HorseContainerManagerModel\@\@UEBA?AV?$vector\@VItemStack\@\@V?$allocator\@VItemStack\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::vector<class ItemStack> getItemCopies() const = 0;
    /**
     * @vftbl 7
     * @symbol ?setSlot\@HorseContainerManagerModel\@\@UEAAXHAEBVItemStack\@\@_N\@Z
     */
    virtual void setSlot(int, class ItemStack const&, bool) = 0;
    /**
     * @vftbl 8
     * @symbol ?getSlot\@HorseContainerManagerModel\@\@UEBAAEBVItemStack\@\@H\@Z
     */
    virtual class ItemStack const& getSlot(int) const = 0;
    /**
     * @vftbl 9
     * @symbol ?setData\@ElementConstructorContainerManagerModel\@\@UEAAXHH\@Z
     */
    virtual void setData(int, int) = 0;
    /**
     * @vftbl 10
     * @symbol ?broadcastChanges\@FurnaceContainerManagerModel\@\@UEAAXXZ
     */
    virtual void broadcastChanges() = 0;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ICONTAINERMANAGER
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~IContainerManager();
#endif
    // NOLINTEND
};
