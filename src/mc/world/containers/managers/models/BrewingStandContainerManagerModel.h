#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/managers/models/ContainerManagerModel.h"

class BrewingStandContainerManagerModel : public ::ContainerManagerModel {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BREWINGSTANDCONTAINERMANAGERMODEL
public:
    BrewingStandContainerManagerModel& operator=(BrewingStandContainerManagerModel const&) = delete;
    BrewingStandContainerManagerModel(BrewingStandContainerManagerModel const&)            = delete;
    BrewingStandContainerManagerModel()                                                    = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 6
     * @symbol
     * ?getItemCopies\@BrewingStandContainerManagerModel\@\@UEBA?AV?$vector\@VItemStack\@\@V?$allocator\@VItemStack\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::vector<class ItemStack> getItemCopies() const;
    /**
     * @vftbl 7
     * @symbol ?setSlot\@BrewingStandContainerManagerModel\@\@UEAAXHAEBVItemStack\@\@_N\@Z
     */
    virtual void setSlot(int, class ItemStack const&, bool);
    /**
     * @vftbl 8
     * @symbol ?getSlot\@BrewingStandContainerManagerModel\@\@UEBAAEBVItemStack\@\@H\@Z
     */
    virtual class ItemStack const& getSlot(int) const;
    /**
     * @vftbl 9
     * @symbol ?setData\@BrewingStandContainerManagerModel\@\@UEAAXHH\@Z
     */
    virtual void setData(int, int);
    /**
     * @vftbl 10
     * @symbol ?broadcastChanges\@BrewingStandContainerManagerModel\@\@UEAAXXZ
     */
    virtual void broadcastChanges();
    /**
     * @vftbl 16
     * @symbol ?isValid\@BrewingStandContainerManagerModel\@\@UEAA_NM\@Z
     */
    virtual bool isValid(float);
    /**
     * @vftbl 17
     * @symbol ?_postInit\@BrewingStandContainerManagerModel\@\@MEAA?AVContainerScreenContext\@\@XZ
     */
    virtual class ContainerScreenContext _postInit();
    /**
     * @symbol ??0BrewingStandContainerManagerModel\@\@QEAA\@W4ContainerID\@\@AEAVPlayer\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI BrewingStandContainerManagerModel(enum class ContainerID, class Player&, class BlockPos const&);
};
