/**
 * @file  MC/TradeContainerManagerModel.hpp
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
 * @brief MC class TradeContainerManagerModel.
 *
 */
class TradeContainerManagerModel : public ContainerManagerModel {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TRADECONTAINERMANAGERMODEL
public:
    class TradeContainerManagerModel& operator=(class TradeContainerManagerModel const &) = delete;
    TradeContainerManagerModel(class TradeContainerManagerModel const &) = delete;
    TradeContainerManagerModel() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~TradeContainerManagerModel();
    /**
     * @hash   -830488666
     * @vftbl  6
     * @symbol ?getItemCopies@TradeContainerManagerModel@@UEBA?AV?$vector@VItemStack@@V?$allocator@VItemStack@@@std@@@std@@XZ
     */
    virtual std::vector<class ItemStack> getItemCopies() const;
    /**
     * @hash   -1913377399
     * @vftbl  7
     * @symbol ?setSlot@TradeContainerManagerModel@@UEAAXHAEBVItemStack@@_N@Z
     */
    virtual void setSlot(int, class ItemStack const &, bool);
    /**
     * @hash   446400146
     * @vftbl  8
     * @symbol ?getSlot@TradeContainerManagerModel@@UEBAAEBVItemStack@@H@Z
     */
    virtual class ItemStack const & getSlot(int) const;
    /**
     * @hash   1791170352
     * @vftbl  10
     * @symbol ?broadcastChanges@TradeContainerManagerModel@@UEAAXXZ
     */
    virtual void broadcastChanges();
    /**
     * @hash   836961600
     * @vftbl  16
     * @symbol ?isValid@TradeContainerManagerModel@@UEAA_NM@Z
     */
    virtual bool isValid(float);
    /**
     * @hash   -1687515267
     * @vftbl  17
     * @symbol ?_postInit@TradeContainerManagerModel@@MEAA?AVContainerScreenContext@@XZ
     */
    virtual class ContainerScreenContext _postInit();
    /**
     * @hash   -1956301194
     * @symbol ??0TradeContainerManagerModel@@QEAA@W4ContainerID@@AEAVPlayer@@AEBUActorUniqueID@@@Z
     */
    MCAPI TradeContainerManagerModel(enum ContainerID, class Player &, struct ActorUniqueID const &);
    /**
     * @hash   28206551
     * @symbol ?getEntity@TradeContainerManagerModel@@QEBAPEAVActor@@XZ
     */
    MCAPI class Actor * getEntity() const;

};