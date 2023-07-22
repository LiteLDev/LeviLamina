/**
 * @file  BeaconContainerManagerModel.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
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
     * @symbol  __unk_destructor_0
     */
    virtual ~BeaconContainerManagerModel();
    /**
     * @vftbl  6
     * @symbol  ?getItemCopies\@BeaconContainerManagerModel\@\@UEBA?AV?$vector\@VItemStack\@\@V?$allocator\@VItemStack\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::vector<class ItemStack> getItemCopies() const;
    /**
     * @vftbl  7
     * @symbol  ?setSlot\@BeaconContainerManagerModel\@\@UEAAXHAEBVItemStack\@\@_N\@Z
     */
    virtual void setSlot(int, class ItemStack const &, bool);
    /**
     * @vftbl  8
     * @symbol  ?getSlot\@BeaconContainerManagerModel\@\@UEBAAEBVItemStack\@\@H\@Z
     */
    virtual class ItemStack const & getSlot(int) const;
    /**
     * @vftbl  17
     * @symbol  ?_postInit\@BeaconContainerManagerModel\@\@MEAA?AVContainerScreenContext\@\@XZ
     */
    virtual class ContainerScreenContext _postInit();
    /**
     * @symbol  ??0BeaconContainerManagerModel\@\@QEAA\@W4ContainerID\@\@AEAVPlayer\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI BeaconContainerManagerModel(enum class ContainerID, class Player &, class BlockPos const &);
    /**
     * @symbol  ?PAYMENT_SLOT\@BeaconContainerManagerModel\@\@2HB
     */
    MCAPI static int const PAYMENT_SLOT;

//private:
    /**
     * @symbol  ?_resetSelectionState\@BeaconContainerManagerModel\@\@AEAAXXZ
     */
    MCAPI void _resetSelectionState();

private:

};