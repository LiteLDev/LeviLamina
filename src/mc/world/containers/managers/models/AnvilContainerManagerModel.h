#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/managers/models/ContainerManagerModel.h"

class AnvilContainerManagerModel : public ::ContainerManagerModel {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ANVILCONTAINERMANAGERMODEL
public:
    AnvilContainerManagerModel& operator=(AnvilContainerManagerModel const&) = delete;
    AnvilContainerManagerModel(AnvilContainerManagerModel const&)            = delete;
    AnvilContainerManagerModel()                                             = delete;
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
     * ?getItemCopies\@AnvilContainerManagerModel\@\@UEBA?AV?$vector\@VItemStack\@\@V?$allocator\@VItemStack\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::vector<class ItemStack> getItemCopies() const;
    /**
     * @vftbl 7
     * @symbol ?setSlot\@AnvilContainerManagerModel\@\@UEAAXHAEBVItemStack\@\@_N\@Z
     */
    virtual void setSlot(int, class ItemStack const&, bool);
    /**
     * @vftbl 8
     * @symbol ?getSlot\@AnvilContainerManagerModel\@\@UEBAAEBVItemStack\@\@H\@Z
     */
    virtual class ItemStack const& getSlot(int) const;
    /**
     * @vftbl 9
     * @symbol ?setData\@AnvilContainerManagerModel\@\@UEAAXHH\@Z
     */
    virtual void setData(int, int);
    /**
     * @vftbl 10
     * @symbol ?broadcastChanges\@AnvilContainerManagerModel\@\@UEAAXXZ
     */
    virtual void broadcastChanges();
    /**
     * @vftbl 16
     * @symbol ?isValid\@AnvilContainerManagerModel\@\@UEAA_NM\@Z
     */
    virtual bool isValid(float);
    /**
     * @vftbl 17
     * @symbol ?_postInit\@AnvilContainerManagerModel\@\@MEAA?AVContainerScreenContext\@\@XZ
     */
    virtual class ContainerScreenContext _postInit();
    /**
     * @symbol ??0AnvilContainerManagerModel\@\@QEAA\@W4ContainerID\@\@AEAVPlayer\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI AnvilContainerManagerModel(enum class ContainerID, class Player&, class BlockPos const&);
    /**
     * @symbol ?INPUT_SLOT\@AnvilContainerManagerModel\@\@2HB
     */
    MCAPI static int const INPUT_SLOT;
    /**
     * @symbol ?MATERIAL_SLOT\@AnvilContainerManagerModel\@\@2HB
     */
    MCAPI static int const MATERIAL_SLOT;
    /**
     * @symbol ?RESULT_SLOT\@AnvilContainerManagerModel\@\@2HB
     */
    MCAPI static int const RESULT_SLOT;
};
