/**
 * @file  BrewingStandContainerManagerModel.hpp
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
 * @brief MC class BrewingStandContainerManagerModel.
 *
 */
class BrewingStandContainerManagerModel : public ContainerManagerModel {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BREWINGSTANDCONTAINERMANAGERMODEL
public:
    class BrewingStandContainerManagerModel& operator=(class BrewingStandContainerManagerModel const &) = delete;
    BrewingStandContainerManagerModel(class BrewingStandContainerManagerModel const &) = delete;
    BrewingStandContainerManagerModel() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~BrewingStandContainerManagerModel();
    /**
     * @hash   -842707416
     * @vftbl  6
     * @symbol ?getItemCopies@BrewingStandContainerManagerModel@@UEBA?AV?$vector@VItemStack@@V?$allocator@VItemStack@@@std@@@std@@XZ
     */
    virtual std::vector<class ItemStack> getItemCopies() const;
    /**
     * @hash   -1307885257
     * @vftbl  7
     * @symbol ?setSlot@BrewingStandContainerManagerModel@@UEAAXHAEBVItemStack@@_N@Z
     */
    virtual void setSlot(int, class ItemStack const &, bool);
    /**
     * @hash   -200125840
     * @vftbl  8
     * @symbol ?getSlot@BrewingStandContainerManagerModel@@UEBAAEBVItemStack@@H@Z
     */
    virtual class ItemStack const & getSlot(int) const;
    /**
     * @hash   -1384823156
     * @vftbl  9
     * @symbol ?setData@BrewingStandContainerManagerModel@@UEAAXHH@Z
     */
    virtual void setData(int, int);
    /**
     * @hash   678610578
     * @vftbl  10
     * @symbol ?broadcastChanges@BrewingStandContainerManagerModel@@UEAAXXZ
     */
    virtual void broadcastChanges();
    /**
     * @hash   -733307970
     * @vftbl  16
     * @symbol ?isValid@BrewingStandContainerManagerModel@@UEAA_NM@Z
     */
    virtual bool isValid(float);
    /**
     * @hash   2121206303
     * @vftbl  17
     * @symbol ?_postInit@BrewingStandContainerManagerModel@@MEAA?AVContainerScreenContext@@XZ
     */
    virtual class ContainerScreenContext _postInit();
    /**
     * @hash   -226323378
     * @symbol ??0BrewingStandContainerManagerModel@@QEAA@W4ContainerID@@AEAVPlayer@@AEBVBlockPos@@@Z
     */
    MCAPI BrewingStandContainerManagerModel(enum ContainerID, class Player &, class BlockPos const &);

};