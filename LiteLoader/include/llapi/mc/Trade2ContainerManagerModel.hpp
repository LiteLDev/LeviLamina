/**
 * @file  Trade2ContainerManagerModel.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "ContainerManagerModel.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class Trade2ContainerManagerModel.
 *
 */
class Trade2ContainerManagerModel : public ContainerManagerModel {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TRADE2CONTAINERMANAGERMODEL
public:
    class Trade2ContainerManagerModel& operator=(class Trade2ContainerManagerModel const &) = delete;
    Trade2ContainerManagerModel(class Trade2ContainerManagerModel const &) = delete;
    Trade2ContainerManagerModel() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~Trade2ContainerManagerModel();
    /**
     * @hash   1479100096
     * @vftbl  6
     * @symbol  ?getItemCopies\@Trade2ContainerManagerModel\@\@UEBA?AV?$vector\@VItemStack\@\@V?$allocator\@VItemStack\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::vector<class ItemStack> getItemCopies() const;
    /**
     * @hash   -1629908785
     * @vftbl  7
     * @symbol  ?setSlot\@Trade2ContainerManagerModel\@\@UEAAXHAEBVItemStack\@\@_N\@Z
     */
    virtual void setSlot(int, class ItemStack const &, bool);
    /**
     * @hash   1537794520
     * @vftbl  8
     * @symbol  ?getSlot\@Trade2ContainerManagerModel\@\@UEBAAEBVItemStack\@\@H\@Z
     */
    virtual class ItemStack const & getSlot(int) const;
    /**
     * @hash   -1600087206
     * @vftbl  10
     * @symbol  ?broadcastChanges\@Trade2ContainerManagerModel\@\@UEAAXXZ
     */
    virtual void broadcastChanges();
    /**
     * @hash   764876086
     * @vftbl  16
     * @symbol  ?isValid\@Trade2ContainerManagerModel\@\@UEAA_NM\@Z
     */
    virtual bool isValid(float);
    /**
     * @hash   1249966535
     * @vftbl  17
     * @symbol  ?_postInit\@Trade2ContainerManagerModel\@\@MEAA?AVContainerScreenContext\@\@XZ
     */
    virtual class ContainerScreenContext _postInit();
    /**
     * @hash   -611014148
     * @symbol  ??0Trade2ContainerManagerModel\@\@QEAA\@W4ContainerID\@\@AEAVPlayer\@\@AEBUActorUniqueID\@\@\@Z
     */
    MCAPI Trade2ContainerManagerModel(enum class ContainerID, class Player &, struct ActorUniqueID const &);
    /**
     * @hash   -1359479365
     * @symbol  ?getEntity\@Trade2ContainerManagerModel\@\@QEBAPEAVActor\@\@XZ
     */
    MCAPI class Actor * getEntity() const;

};