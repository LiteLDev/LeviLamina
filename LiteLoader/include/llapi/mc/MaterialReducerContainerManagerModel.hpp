/**
 * @file  MC/MaterialReducerContainerManagerModel.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ContainerManagerModel.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class MaterialReducerContainerManagerModel.
 *
 */
class MaterialReducerContainerManagerModel : public ContainerManagerModel {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MATERIALREDUCERCONTAINERMANAGERMODEL
public:
    class MaterialReducerContainerManagerModel& operator=(class MaterialReducerContainerManagerModel const &) = delete;
    MaterialReducerContainerManagerModel(class MaterialReducerContainerManagerModel const &) = delete;
    MaterialReducerContainerManagerModel() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~MaterialReducerContainerManagerModel();
    /**
     * @hash   1499748791
     * @vftbl  6
     * @symbol ?getItemCopies@MaterialReducerContainerManagerModel@@UEBA?AV?$vector@VItemStack@@V?$allocator@VItemStack@@@std@@@std@@XZ
     */
    virtual std::vector<class ItemStack> getItemCopies() const;
    /**
     * @hash   -1378474056
     * @vftbl  7
     * @symbol ?setSlot@MaterialReducerContainerManagerModel@@UEAAXHAEBVItemStack@@_N@Z
     */
    virtual void setSlot(int, class ItemStack const &, bool);
    /**
     * @hash   1655344177
     * @vftbl  8
     * @symbol ?getSlot@MaterialReducerContainerManagerModel@@UEBAAEBVItemStack@@H@Z
     */
    virtual class ItemStack const & getSlot(int) const;
    /**
     * @hash   -1283415461
     * @vftbl  9
     * @symbol ?setData@MaterialReducerContainerManagerModel@@UEAAXHH@Z
     */
    virtual void setData(int, int);
    /**
     * @hash   2105587537
     * @vftbl  10
     * @symbol ?broadcastChanges@MaterialReducerContainerManagerModel@@UEAAXXZ
     */
    virtual void broadcastChanges();
    /**
     * @hash   -1186108865
     * @vftbl  16
     * @symbol ?isValid@MaterialReducerContainerManagerModel@@UEAA_NM@Z
     */
    virtual bool isValid(float);
    /**
     * @hash   1606481790
     * @vftbl  17
     * @symbol ?_postInit@MaterialReducerContainerManagerModel@@MEAA?AVContainerScreenContext@@XZ
     */
    virtual class ContainerScreenContext _postInit();
    /**
     * @hash   -621982739
     * @symbol ??0MaterialReducerContainerManagerModel@@QEAA@W4ContainerID@@AEAVPlayer@@AEBVBlockPos@@@Z
     */
    MCAPI MaterialReducerContainerManagerModel(enum ContainerID, class Player &, class BlockPos const &);

};