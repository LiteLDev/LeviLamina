/**
 * @file  LabTableContainerManagerModel.hpp
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
 * @brief MC class LabTableContainerManagerModel.
 *
 */
class LabTableContainerManagerModel : public ContainerManagerModel {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LABTABLECONTAINERMANAGERMODEL
public:
    class LabTableContainerManagerModel& operator=(class LabTableContainerManagerModel const &) = delete;
    LabTableContainerManagerModel(class LabTableContainerManagerModel const &) = delete;
    LabTableContainerManagerModel() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~LabTableContainerManagerModel();
    /**
     * @hash   -2058921933
     * @vftbl  6
     * @symbol  ?getItemCopies\@LabTableContainerManagerModel\@\@UEBA?AV?$vector\@VItemStack\@\@V?$allocator\@VItemStack\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::vector<class ItemStack> getItemCopies() const;
    /**
     * @hash   -917771892
     * @vftbl  7
     * @symbol  ?setSlot\@LabTableContainerManagerModel\@\@UEAAXHAEBVItemStack\@\@_N\@Z
     */
    virtual void setSlot(int, class ItemStack const &, bool);
    /**
     * @hash   -1690523019
     * @vftbl  8
     * @symbol  ?getSlot\@LabTableContainerManagerModel\@\@UEBAAEBVItemStack\@\@H\@Z
     */
    virtual class ItemStack const & getSlot(int) const;
    /**
     * @hash   1259280375
     * @vftbl  9
     * @symbol  ?setData\@LabTableContainerManagerModel\@\@UEAAXHH\@Z
     */
    virtual void setData(int, int);
    /**
     * @hash   -1249585427
     * @vftbl  10
     * @symbol  ?broadcastChanges\@LabTableContainerManagerModel\@\@UEAAXXZ
     */
    virtual void broadcastChanges();
    /**
     * @hash   599760403
     * @vftbl  16
     * @symbol  ?isValid\@LabTableContainerManagerModel\@\@UEAA_NM\@Z
     */
    virtual bool isValid(float);
    /**
     * @hash   1991065642
     * @vftbl  17
     * @symbol  ?_postInit\@LabTableContainerManagerModel\@\@MEAA?AVContainerScreenContext\@\@XZ
     */
    virtual class ContainerScreenContext _postInit();
    /**
     * @hash   59866409
     * @symbol  ??0LabTableContainerManagerModel\@\@QEAA\@W4ContainerID\@\@AEAVPlayer\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI LabTableContainerManagerModel(enum class ContainerID, class Player &, class BlockPos const &);
    /**
     * @hash   1395378941
     * @symbol  ?INPUT_SLOTS\@LabTableContainerManagerModel\@\@2HB
     */
    MCAPI static int const INPUT_SLOTS;

};