/**
 * @file  CompoundCreatorContainerManagerModel.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "ContainerManagerModel.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class CompoundCreatorContainerManagerModel.
 *
 */
class CompoundCreatorContainerManagerModel : public ContainerManagerModel {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMPOUNDCREATORCONTAINERMANAGERMODEL
public:
    class CompoundCreatorContainerManagerModel& operator=(class CompoundCreatorContainerManagerModel const &) = delete;
    CompoundCreatorContainerManagerModel(class CompoundCreatorContainerManagerModel const &) = delete;
    CompoundCreatorContainerManagerModel() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~CompoundCreatorContainerManagerModel();
    /**
     * @vftbl  6
     * @symbol  ?getItemCopies\@CompoundCreatorContainerManagerModel\@\@UEBA?AV?$vector\@VItemStack\@\@V?$allocator\@VItemStack\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::vector<class ItemStack> getItemCopies() const;
    /**
     * @vftbl  7
     * @symbol  ?setSlot\@CompoundCreatorContainerManagerModel\@\@UEAAXHAEBVItemStack\@\@_N\@Z
     */
    virtual void setSlot(int, class ItemStack const &, bool);
    /**
     * @vftbl  8
     * @symbol  ?getSlot\@CompoundCreatorContainerManagerModel\@\@UEBAAEBVItemStack\@\@H\@Z
     */
    virtual class ItemStack const & getSlot(int) const;
    /**
     * @vftbl  9
     * @symbol  ?setData\@CompoundCreatorContainerManagerModel\@\@UEAAXHH\@Z
     */
    virtual void setData(int, int);
    /**
     * @vftbl  10
     * @symbol  ?broadcastChanges\@CompoundCreatorContainerManagerModel\@\@UEAAXXZ
     */
    virtual void broadcastChanges();
    /**
     * @vftbl  16
     * @symbol  ?isValid\@CompoundCreatorContainerManagerModel\@\@UEAA_NM\@Z
     */
    virtual bool isValid(float);
    /**
     * @vftbl  17
     * @symbol  ?_postInit\@CompoundCreatorContainerManagerModel\@\@MEAA?AVContainerScreenContext\@\@XZ
     */
    virtual class ContainerScreenContext _postInit();
    /**
     * @symbol  ??0CompoundCreatorContainerManagerModel\@\@QEAA\@W4ContainerID\@\@AEAVPlayer\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI CompoundCreatorContainerManagerModel(enum class ContainerID, class Player &, class BlockPos const &);

};