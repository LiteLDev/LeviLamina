/**
 * @file  HudContainerManagerModel.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "../../ContainerManagerModel.hpp"

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
     * @symbol  __unk_destructor_0
     */
    virtual ~HudContainerManagerModel();
    /**
     * @hash   -1423028967
     * @vftbl  6
     * @symbol  ?getItemCopies\@HudContainerManagerModel\@\@UEBA?AV?$vector\@VItemStack\@\@V?$allocator\@VItemStack\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::vector<class ItemStack> getItemCopies() const;
    /**
     * @hash   1033057670
     * @vftbl  7
     * @symbol  ?setSlot\@HudContainerManagerModel\@\@UEAAXHAEBVItemStack\@\@_N\@Z
     */
    virtual void setSlot(int, class ItemStack const &, bool);
    /**
     * @hash   1238864351
     * @vftbl  8
     * @symbol  ?getSlot\@HudContainerManagerModel\@\@UEBAAEBVItemStack\@\@H\@Z
     */
    virtual class ItemStack const & getSlot(int) const;
    /**
     * @hash   578037613
     * @vftbl  9
     * @symbol  ?setData\@HudContainerManagerModel\@\@UEAAXHH\@Z
     */
    virtual void setData(int, int);
    /**
     * @hash   77524051
     * @vftbl  10
     * @symbol  ?broadcastChanges\@HudContainerManagerModel\@\@UEAAXXZ
     */
    virtual void broadcastChanges();
    /**
     * @hash   1606582384
     * @vftbl  17
     * @symbol  ?_postInit\@HudContainerManagerModel\@\@MEAA?AVContainerScreenContext\@\@XZ
     */
    virtual class ContainerScreenContext _postInit();
    /**
     * @hash   1688011514
     * @symbol  ??0HudContainerManagerModel\@\@QEAA\@W4ContainerID\@\@AEAVPlayer\@\@\@Z
     */
    MCAPI HudContainerManagerModel(enum class ContainerID, class Player &);

};