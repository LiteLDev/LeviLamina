/**
 * @file  HudContainerManagerModel.hpp
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
 * @brief MC class HudContainerManagerModel.
 *
 */
class HudContainerManagerModel : public ContainerManagerModel {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HUDCONTAINERMANAGERMODEL
public:
    class HudContainerManagerModel& operator=(class HudContainerManagerModel const &) = delete;
    HudContainerManagerModel(class HudContainerManagerModel const &) = delete;
    HudContainerManagerModel() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~HudContainerManagerModel();
    /**
     * @hash   -1626561079
     * @vftbl  6
     * @symbol ?getItemCopies@HudContainerManagerModel@@UEBA?AV?$vector@VItemStack@@V?$allocator@VItemStack@@@std@@@std@@XZ
     */
    virtual std::vector<class ItemStack> getItemCopies() const;
    /**
     * @hash   2071598838
     * @vftbl  7
     * @symbol ?setSlot@HudContainerManagerModel@@UEAAXHAEBVItemStack@@_N@Z
     */
    virtual void setSlot(int, class ItemStack const &, bool);
    /**
     * @hash   -2017561777
     * @vftbl  8
     * @symbol ?getSlot@HudContainerManagerModel@@UEBAAEBVItemStack@@H@Z
     */
    virtual class ItemStack const & getSlot(int) const;
    /**
     * @hash   486150637
     * @vftbl  9
     * @symbol ?setData@HudContainerManagerModel@@UEAAXHH@Z
     */
    virtual void setData(int, int);
    /**
     * @hash   1116065219
     * @vftbl  10
     * @symbol ?broadcastChanges@HudContainerManagerModel@@UEAAXXZ
     */
    virtual void broadcastChanges();
    /**
     * @hash   -1649843744
     * @vftbl  17
     * @symbol ?_postInit@HudContainerManagerModel@@MEAA?AVContainerScreenContext@@XZ
     */
    virtual class ContainerScreenContext _postInit();
    /**
     * @hash   -1568414614
     * @symbol ??0HudContainerManagerModel@@QEAA@W4ContainerID@@AEAVPlayer@@@Z
     */
    MCAPI HudContainerManagerModel(enum ContainerID, class Player &);

};