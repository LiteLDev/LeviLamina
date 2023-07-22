/**
 * @file  GrindstoneContainerManagerModel.hpp
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
 * @brief MC class GrindstoneContainerManagerModel.
 *
 */
class GrindstoneContainerManagerModel : public ContainerManagerModel {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GRINDSTONECONTAINERMANAGERMODEL
public:
    class GrindstoneContainerManagerModel& operator=(class GrindstoneContainerManagerModel const &) = delete;
    GrindstoneContainerManagerModel(class GrindstoneContainerManagerModel const &) = delete;
    GrindstoneContainerManagerModel() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~GrindstoneContainerManagerModel();
    /**
     * @vftbl  6
     * @symbol  ?getItemCopies\@GrindstoneContainerManagerModel\@\@UEBA?AV?$vector\@VItemStack\@\@V?$allocator\@VItemStack\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::vector<class ItemStack> getItemCopies() const;
    /**
     * @vftbl  7
     * @symbol  ?setSlot\@GrindstoneContainerManagerModel\@\@UEAAXHAEBVItemStack\@\@_N\@Z
     */
    virtual void setSlot(int, class ItemStack const &, bool);
    /**
     * @vftbl  8
     * @symbol  ?getSlot\@GrindstoneContainerManagerModel\@\@UEBAAEBVItemStack\@\@H\@Z
     */
    virtual class ItemStack const & getSlot(int) const;
    /**
     * @vftbl  9
     * @symbol  ?setData\@GrindstoneContainerManagerModel\@\@UEAAXHH\@Z
     */
    virtual void setData(int, int);
    /**
     * @vftbl  10
     * @symbol  ?broadcastChanges\@GrindstoneContainerManagerModel\@\@UEAAXXZ
     */
    virtual void broadcastChanges();
    /**
     * @vftbl  16
     * @symbol  ?isValid\@GrindstoneContainerManagerModel\@\@UEAA_NM\@Z
     */
    virtual bool isValid(float);
    /**
     * @vftbl  17
     * @symbol  ?_postInit\@GrindstoneContainerManagerModel\@\@MEAA?AVContainerScreenContext\@\@XZ
     */
    virtual class ContainerScreenContext _postInit();
    /**
     * @symbol  ??0GrindstoneContainerManagerModel\@\@QEAA\@W4ContainerID\@\@AEAVPlayer\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI GrindstoneContainerManagerModel(enum class ContainerID, class Player &, class BlockPos const &);
    /**
     * @symbol  ?ADDITIONAL_SLOT\@GrindstoneContainerManagerModel\@\@2HB
     */
    MCAPI static int const ADDITIONAL_SLOT;
    /**
     * @symbol  ?INPUT_SLOT\@GrindstoneContainerManagerModel\@\@2HB
     */
    MCAPI static int const INPUT_SLOT;
    /**
     * @symbol  ?RESULT_SLOT\@GrindstoneContainerManagerModel\@\@2HB
     */
    MCAPI static int const RESULT_SLOT;

};