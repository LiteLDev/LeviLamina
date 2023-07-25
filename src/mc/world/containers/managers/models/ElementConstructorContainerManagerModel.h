#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/managers/models/ContainerManagerModel.h"

class ElementConstructorContainerManagerModel : public ::ContainerManagerModel {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ELEMENTCONSTRUCTORCONTAINERMANAGERMODEL
public:
    ElementConstructorContainerManagerModel& operator=(ElementConstructorContainerManagerModel const&) = delete;
    ElementConstructorContainerManagerModel(ElementConstructorContainerManagerModel const&)            = delete;
    ElementConstructorContainerManagerModel()                                                          = delete;
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
     * ?getItemCopies\@ElementConstructorContainerManagerModel\@\@UEBA?AV?$vector\@VItemStack\@\@V?$allocator\@VItemStack\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::vector<class ItemStack> getItemCopies() const;
    /**
     * @vftbl 7
     * @symbol ?setSlot\@ElementConstructorContainerManagerModel\@\@UEAAXHAEBVItemStack\@\@_N\@Z
     */
    virtual void setSlot(int, class ItemStack const&, bool);
    /**
     * @vftbl 8
     * @symbol ?getSlot\@ElementConstructorContainerManagerModel\@\@UEBAAEBVItemStack\@\@H\@Z
     */
    virtual class ItemStack const& getSlot(int) const;
    /**
     * @vftbl 9
     * @symbol ?setData\@ElementConstructorContainerManagerModel\@\@UEAAXHH\@Z
     */
    virtual void setData(int, int);
    /**
     * @vftbl 10
     * @symbol ?broadcastChanges\@ElementConstructorContainerManagerModel\@\@UEAAXXZ
     */
    virtual void broadcastChanges();
    /**
     * @vftbl 16
     * @symbol ?isValid\@ElementConstructorContainerManagerModel\@\@UEAA_NM\@Z
     */
    virtual bool isValid(float);
    /**
     * @vftbl 17
     * @symbol ?_postInit\@ElementConstructorContainerManagerModel\@\@MEAA?AVContainerScreenContext\@\@XZ
     */
    virtual class ContainerScreenContext _postInit();
    /**
     * @symbol ??0ElementConstructorContainerManagerModel\@\@QEAA\@W4ContainerID\@\@AEAVPlayer\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI ElementConstructorContainerManagerModel(enum class ContainerID, class Player&, class BlockPos const&);
};
