/**
 * @file  LabTableContainerManagerModel.hpp
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
     * @symbol __unk_destructor_0
     */
    virtual ~LabTableContainerManagerModel();
    /**
     * @hash   2028869139
     * @vftbl  6
     * @symbol ?getItemCopies@LabTableContainerManagerModel@@UEBA?AV?$vector@VItemStack@@V?$allocator@VItemStack@@@std@@@std@@XZ
     */
    virtual std::vector<class ItemStack> getItemCopies() const;
    /**
     * @hash   -1124978868
     * @vftbl  7
     * @symbol ?setSlot@LabTableContainerManagerModel@@UEAAXHAEBVItemStack@@_N@Z
     */
    virtual void setSlot(int, class ItemStack const &, bool);
    /**
     * @hash   -1897714619
     * @vftbl  8
     * @symbol ?getSlot@LabTableContainerManagerModel@@UEBAAEBVItemStack@@H@Z
     */
    virtual class ItemStack const & getSlot(int) const;
    /**
     * @hash   1167393399
     * @vftbl  9
     * @symbol ?setData@LabTableContainerManagerModel@@UEAAXHH@Z
     */
    virtual void setData(int, int);
    /**
     * @hash   -1341472403
     * @vftbl  10
     * @symbol ?broadcastChanges@LabTableContainerManagerModel@@UEAAXXZ
     */
    virtual void broadcastChanges();
    /**
     * @hash   392553427
     * @vftbl  16
     * @symbol ?isValid@LabTableContainerManagerModel@@UEAA_NM@Z
     */
    virtual bool isValid(float);
    /**
     * @hash   1783874042
     * @vftbl  17
     * @symbol ?_postInit@LabTableContainerManagerModel@@MEAA?AVContainerScreenContext@@XZ
     */
    virtual class ContainerScreenContext _postInit();
    /**
     * @hash   -147309815
     * @symbol ??0LabTableContainerManagerModel@@QEAA@W4ContainerID@@AEAVPlayer@@AEBVBlockPos@@@Z
     */
    MCAPI LabTableContainerManagerModel(enum class ContainerID, class Player &, class BlockPos const &);
    /**
     * @hash   438284445
     * @symbol ?INPUT_SLOTS@LabTableContainerManagerModel@@2HB
     */
    MCAPI static int const INPUT_SLOTS;

};