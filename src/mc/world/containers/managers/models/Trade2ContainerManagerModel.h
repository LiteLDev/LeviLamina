#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/managers/models/ContainerManagerModel.h"

class Trade2ContainerManagerModel : public ::ContainerManagerModel {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TRADE2CONTAINERMANAGERMODEL
public:
    Trade2ContainerManagerModel& operator=(Trade2ContainerManagerModel const&) = delete;
    Trade2ContainerManagerModel(Trade2ContainerManagerModel const&)            = delete;
    Trade2ContainerManagerModel()                                              = delete;
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
     * ?getItemCopies\@Trade2ContainerManagerModel\@\@UEBA?AV?$vector\@VItemStack\@\@V?$allocator\@VItemStack\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::vector<class ItemStack> getItemCopies() const;
    /**
     * @vftbl 7
     * @symbol ?setSlot\@Trade2ContainerManagerModel\@\@UEAAXHAEBVItemStack\@\@_N\@Z
     */
    virtual void setSlot(int, class ItemStack const&, bool);
    /**
     * @vftbl 8
     * @symbol ?getSlot\@Trade2ContainerManagerModel\@\@UEBAAEBVItemStack\@\@H\@Z
     */
    virtual class ItemStack const& getSlot(int) const;
    /**
     * @vftbl 10
     * @symbol ?broadcastChanges\@Trade2ContainerManagerModel\@\@UEAAXXZ
     */
    virtual void broadcastChanges();
    /**
     * @vftbl 16
     * @symbol ?isValid\@Trade2ContainerManagerModel\@\@UEAA_NM\@Z
     */
    virtual bool isValid(float);
    /**
     * @vftbl 17
     * @symbol ?_postInit\@Trade2ContainerManagerModel\@\@MEAA?AVContainerScreenContext\@\@XZ
     */
    virtual class ContainerScreenContext _postInit();
    /**
     * @symbol ??0Trade2ContainerManagerModel\@\@QEAA\@W4ContainerID\@\@AEAVPlayer\@\@AEBUActorUniqueID\@\@\@Z
     */
    MCAPI Trade2ContainerManagerModel(enum class ContainerID, class Player&, struct ActorUniqueID const&);
};
