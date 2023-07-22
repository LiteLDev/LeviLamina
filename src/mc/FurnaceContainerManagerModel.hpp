/**
 * @file  FurnaceContainerManagerModel.hpp
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
     * @symbol  __unk_destructor_0
     */
    virtual ~FurnaceContainerManagerModel();
    /**
     * @vftbl  6
     * @symbol  ?getItemCopies\@FurnaceContainerManagerModel\@\@UEBA?AV?$vector\@VItemStack\@\@V?$allocator\@VItemStack\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::vector<class ItemStack> getItemCopies() const;
    /**
     * @vftbl  7
     * @symbol  ?setSlot\@FurnaceContainerManagerModel\@\@UEAAXHAEBVItemStack\@\@_N\@Z
     */
    virtual void setSlot(int, class ItemStack const &, bool);
    /**
     * @vftbl  8
     * @symbol  ?getSlot\@FurnaceContainerManagerModel\@\@UEBAAEBVItemStack\@\@H\@Z
     */
    virtual class ItemStack const & getSlot(int) const;
    /**
     * @vftbl  9
     * @symbol  ?setData\@FurnaceContainerManagerModel\@\@UEAAXHH\@Z
     */
    virtual void setData(int, int);
    /**
     * @vftbl  10
     * @symbol  ?broadcastChanges\@FurnaceContainerManagerModel\@\@UEAAXXZ
     */
    virtual void broadcastChanges();
    /**
     * @vftbl  16
     * @symbol  ?isValid\@FurnaceContainerManagerModel\@\@UEAA_NM\@Z
     */
    virtual bool isValid(float);
    /**
     * @vftbl  17
     * @symbol  ?_postInit\@FurnaceContainerManagerModel\@\@MEAA?AVContainerScreenContext\@\@XZ
     */
    virtual class ContainerScreenContext _postInit();
    /**
     * @symbol  ??0FurnaceContainerManagerModel\@\@QEAA\@W4ContainerID\@\@AEAVPlayer\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI FurnaceContainerManagerModel(enum class ContainerID, class Player &, class BlockPos const &);

//protected:
    /**
     * @symbol  ??0FurnaceContainerManagerModel\@\@IEAA\@AEBVHashedString\@\@W4ContainerType\@\@W4BlockActorType\@\@W4ContainerID\@\@AEAVPlayer\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI FurnaceContainerManagerModel(class HashedString const &, enum class ContainerType, enum class BlockActorType, enum class ContainerID, class Player &, class BlockPos const &);

//private:
    /**
     * @symbol  ?_getFurnaceEntity\@FurnaceContainerManagerModel\@\@AEAAPEAVFurnaceBlockActor\@\@XZ
     */
    MCAPI class FurnaceBlockActor * _getFurnaceEntity();
    /**
     * @symbol  ?_updateResultSlotInfo\@FurnaceContainerManagerModel\@\@AEAAXXZ
     */
    MCAPI void _updateResultSlotInfo();

protected:

private:

};