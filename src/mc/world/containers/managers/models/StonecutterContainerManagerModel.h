#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/managers/models/ContainerManagerModel.h"

class StonecutterContainerManagerModel : public ::ContainerManagerModel {

public:
    // prevent constructor by default
    StonecutterContainerManagerModel& operator=(StonecutterContainerManagerModel const&) = delete;
    StonecutterContainerManagerModel(StonecutterContainerManagerModel const&)            = delete;
    StonecutterContainerManagerModel()                                                   = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 6
     * @symbol
     * ?getItemCopies\@StonecutterContainerManagerModel\@\@UEBA?AV?$vector\@VItemStack\@\@V?$allocator\@VItemStack\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::vector<class ItemStack> getItemCopies() const; // NOLINT
    /**
     * @vftbl 7
     * @symbol ?setSlot\@StonecutterContainerManagerModel\@\@UEAAXHAEBVItemStack\@\@_N\@Z
     */
    virtual void setSlot(int, class ItemStack const&, bool); // NOLINT
    /**
     * @vftbl 8
     * @symbol ?getSlot\@StonecutterContainerManagerModel\@\@UEBAAEBVItemStack\@\@H\@Z
     */
    virtual class ItemStack const& getSlot(int) const; // NOLINT
    /**
     * @vftbl 9
     * @symbol ?setData\@StonecutterContainerManagerModel\@\@UEAAXHH\@Z
     */
    virtual void setData(int, int); // NOLINT
    /**
     * @vftbl 10
     * @symbol ?broadcastChanges\@StonecutterContainerManagerModel\@\@UEAAXXZ
     */
    virtual void broadcastChanges(); // NOLINT
    /**
     * @vftbl 16
     * @symbol ?isValid\@StonecutterContainerManagerModel\@\@UEAA_NM\@Z
     */
    virtual bool isValid(float); // NOLINT
    /**
     * @vftbl 17
     * @symbol ?_postInit\@StonecutterContainerManagerModel\@\@MEAA?AVContainerScreenContext\@\@XZ
     */
    virtual class ContainerScreenContext _postInit(); // NOLINT
    /**
     * @symbol ??0StonecutterContainerManagerModel\@\@QEAA\@W4ContainerID\@\@AEAVPlayer\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI StonecutterContainerManagerModel(enum class ContainerID, class Player&, class BlockPos const&); // NOLINT
};
