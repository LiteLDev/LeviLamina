/**
 * @file  MC/FurnaceContainerManagerModel.hpp
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
 * @brief MC class FurnaceContainerManagerModel.
 *
 */
class FurnaceContainerManagerModel : public ContainerManagerModel {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FURNACECONTAINERMANAGERMODEL
public:
    class FurnaceContainerManagerModel& operator=(class FurnaceContainerManagerModel const &) = delete;
    FurnaceContainerManagerModel(class FurnaceContainerManagerModel const &) = delete;
    FurnaceContainerManagerModel() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~FurnaceContainerManagerModel();
    /**
     * @hash   1108528970
     * @vftbl  6
     * @symbol ?getItemCopies@FurnaceContainerManagerModel@@UEBA?AV?$vector@VItemStack@@V?$allocator@VItemStack@@@std@@@std@@XZ
     */
    virtual std::vector<class ItemStack> getItemCopies() const;
    /**
     * @hash   -598874379
     * @vftbl  7
     * @symbol ?setSlot@FurnaceContainerManagerModel@@UEAAXHAEBVItemStack@@_N@Z
     */
    virtual void setSlot(int, class ItemStack const &, bool);
    /**
     * @hash   744128974
     * @vftbl  8
     * @symbol ?getSlot@FurnaceContainerManagerModel@@UEBAAEBVItemStack@@H@Z
     */
    virtual class ItemStack const & getSlot(int) const;
    /**
     * @hash   -2035946770
     * @vftbl  9
     * @symbol ?setData@FurnaceContainerManagerModel@@UEAAXHH@Z
     */
    virtual void setData(int, int);
    /**
     * @hash   1831464948
     * @vftbl  10
     * @symbol ?broadcastChanges@FurnaceContainerManagerModel@@UEAAXXZ
     */
    virtual void broadcastChanges();
    /**
     * @hash   -1875547764
     * @vftbl  16
     * @symbol ?isValid@FurnaceContainerManagerModel@@UEAA_NM@Z
     */
    virtual bool isValid(float);
    /**
     * @hash   -46311359
     * @vftbl  17
     * @symbol ?_postInit@FurnaceContainerManagerModel@@MEAA?AVContainerScreenContext@@XZ
     */
    virtual class ContainerScreenContext _postInit();
    /**
     * @hash   -1720161632
     * @symbol ??0FurnaceContainerManagerModel@@QEAA@W4ContainerID@@AEAVPlayer@@AEBVBlockPos@@@Z
     */
    MCAPI FurnaceContainerManagerModel(enum ContainerID, class Player &, class BlockPos const &);

//protected:
    /**
     * @hash   -757420654
     * @symbol ??0FurnaceContainerManagerModel@@IEAA@AEBVHashedString@@W4ContainerType@@W4BlockActorType@@W4ContainerID@@AEAVPlayer@@AEBVBlockPos@@@Z
     */
    MCAPI FurnaceContainerManagerModel(class HashedString const &, enum ContainerType, enum BlockActorType, enum ContainerID, class Player &, class BlockPos const &);

//private:
    /**
     * @hash   -555405943
     * @symbol ?_getFurnaceEntity@FurnaceContainerManagerModel@@AEAAPEAVFurnaceBlockActor@@XZ
     */
    MCAPI class FurnaceBlockActor * _getFurnaceEntity();
    /**
     * @hash   -440816152
     * @symbol ?_updateResultSlotInfo@FurnaceContainerManagerModel@@AEAAXXZ
     */
    MCAPI void _updateResultSlotInfo();

protected:

private:

};