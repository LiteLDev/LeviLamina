/**
 * @file  BeaconContainerManagerModel.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "LevelContainerManagerModel.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BeaconContainerManagerModel.
 *
 */
class BeaconContainerManagerModel : public LevelContainerManagerModel {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEACONCONTAINERMANAGERMODEL
public:
    class BeaconContainerManagerModel& operator=(class BeaconContainerManagerModel const &) = delete;
    BeaconContainerManagerModel(class BeaconContainerManagerModel const &) = delete;
    BeaconContainerManagerModel() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~BeaconContainerManagerModel();
    /**
     * @hash   -936528506
     * @vftbl  6
     * @symbol ?getItemCopies@BeaconContainerManagerModel@@UEBA?AV?$vector@VItemStack@@V?$allocator@VItemStack@@@std@@@std@@XZ
     */
    virtual std::vector<class ItemStack> getItemCopies() const;
    /**
     * @hash   696981257
     * @vftbl  7
     * @symbol ?setSlot@BeaconContainerManagerModel@@UEAAXHAEBVItemStack@@_N@Z
     */
    virtual void setSlot(int, class ItemStack const &, bool);
    /**
     * @hash   445406930
     * @vftbl  8
     * @symbol ?getSlot@BeaconContainerManagerModel@@UEBAAEBVItemStack@@H@Z
     */
    virtual class ItemStack const & getSlot(int) const;
    /**
     * @hash   858578045
     * @vftbl  17
     * @symbol ?_postInit@BeaconContainerManagerModel@@MEAA?AVContainerScreenContext@@XZ
     */
    virtual class ContainerScreenContext _postInit();
    /**
     * @hash   429591564
     * @symbol ??0BeaconContainerManagerModel@@QEAA@W4ContainerID@@AEAVPlayer@@AEBVBlockPos@@@Z
     */
    MCAPI BeaconContainerManagerModel(enum ContainerID, class Player &, class BlockPos const &);
    /**
     * @hash   -1993433483
     * @symbol ?PAYMENT_SLOT@BeaconContainerManagerModel@@2HB
     */
    MCAPI static int const PAYMENT_SLOT;

//private:
    /**
     * @hash   -402482104
     * @symbol ?_resetSelectionState@BeaconContainerManagerModel@@AEAAXXZ
     */
    MCAPI void _resetSelectionState();

private:

};