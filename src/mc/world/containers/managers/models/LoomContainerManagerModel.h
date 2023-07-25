#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/managers/models/ContainerManagerModel.h"

class LoomContainerManagerModel : public ::ContainerManagerModel {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LOOMCONTAINERMANAGERMODEL
public:
    LoomContainerManagerModel& operator=(LoomContainerManagerModel const&) = delete;
    LoomContainerManagerModel(LoomContainerManagerModel const&)            = delete;
    LoomContainerManagerModel()                                            = delete;
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
     * ?getItemCopies\@LoomContainerManagerModel\@\@UEBA?AV?$vector\@VItemStack\@\@V?$allocator\@VItemStack\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::vector<class ItemStack> getItemCopies() const;
    /**
     * @vftbl 7
     * @symbol ?setSlot\@LoomContainerManagerModel\@\@UEAAXHAEBVItemStack\@\@_N\@Z
     */
    virtual void setSlot(int, class ItemStack const&, bool);
    /**
     * @vftbl 8
     * @symbol ?getSlot\@LoomContainerManagerModel\@\@UEBAAEBVItemStack\@\@H\@Z
     */
    virtual class ItemStack const& getSlot(int) const;
    /**
     * @vftbl 9
     * @symbol ?setData\@LoomContainerManagerModel\@\@UEAAXHH\@Z
     */
    virtual void setData(int, int);
    /**
     * @vftbl 10
     * @symbol ?broadcastChanges\@LoomContainerManagerModel\@\@UEAAXXZ
     */
    virtual void broadcastChanges();
    /**
     * @vftbl 16
     * @symbol ?isValid\@LoomContainerManagerModel\@\@UEAA_NM\@Z
     */
    virtual bool isValid(float);
    /**
     * @vftbl 17
     * @symbol ?_postInit\@LoomContainerManagerModel\@\@MEAA?AVContainerScreenContext\@\@XZ
     */
    virtual class ContainerScreenContext _postInit();
    /**
     * @symbol ??0LoomContainerManagerModel\@\@QEAA\@W4ContainerID\@\@AEAVPlayer\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI LoomContainerManagerModel(enum class ContainerID, class Player&, class BlockPos const&);
    /**
     * @symbol ?BANNER_SLOT\@LoomContainerManagerModel\@\@2HB
     */
    MCAPI static int const BANNER_SLOT;
    /**
     * @symbol ?DYE_SLOT\@LoomContainerManagerModel\@\@2HB
     */
    MCAPI static int const DYE_SLOT;
    /**
     * @symbol ?MATERIAL_SLOT\@LoomContainerManagerModel\@\@2HB
     */
    MCAPI static int const MATERIAL_SLOT;
    /**
     * @symbol ?RESULT_SLOT\@LoomContainerManagerModel\@\@2HB
     */
    MCAPI static int const RESULT_SLOT;
};
