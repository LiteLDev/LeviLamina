/**
 * @file  AnvilContainerManagerModel.hpp
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
 * @brief MC class AnvilContainerManagerModel.
 *
 */
class AnvilContainerManagerModel : public ContainerManagerModel {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ANVILCONTAINERMANAGERMODEL
public:
    class AnvilContainerManagerModel& operator=(class AnvilContainerManagerModel const &) = delete;
    AnvilContainerManagerModel(class AnvilContainerManagerModel const &) = delete;
    AnvilContainerManagerModel() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~AnvilContainerManagerModel();
    /**
     * @hash   1867710110
     * @vftbl  6
     * @symbol  ?getItemCopies\@AnvilContainerManagerModel\@\@UEBA?AV?$vector\@VItemStack\@\@V?$allocator\@VItemStack\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::vector<class ItemStack> getItemCopies() const;
    /**
     * @hash   -1910606655
     * @vftbl  7
     * @symbol  ?setSlot\@AnvilContainerManagerModel\@\@UEAAXHAEBVItemStack\@\@_N\@Z
     */
    virtual void setSlot(int, class ItemStack const &, bool);
    /**
     * @hash   515591674
     * @vftbl  8
     * @symbol  ?getSlot\@AnvilContainerManagerModel\@\@UEBAAEBVItemStack\@\@H\@Z
     */
    virtual class ItemStack const & getSlot(int) const;
    /**
     * @hash   1847557218
     * @vftbl  9
     * @symbol  ?setData\@AnvilContainerManagerModel\@\@UEAAXHH\@Z
     */
    virtual void setData(int, int);
    /**
     * @hash   1989748504
     * @vftbl  10
     * @symbol  ?broadcastChanges\@AnvilContainerManagerModel\@\@UEAAXXZ
     */
    virtual void broadcastChanges();
    /**
     * @hash   4202056
     * @vftbl  16
     * @symbol  ?isValid\@AnvilContainerManagerModel\@\@UEAA_NM\@Z
     */
    virtual bool isValid(float);
    /**
     * @hash   -38357547
     * @vftbl  17
     * @symbol  ?_postInit\@AnvilContainerManagerModel\@\@MEAA?AVContainerScreenContext\@\@XZ
     */
    virtual class ContainerScreenContext _postInit();
    /**
     * @hash   154723524
     * @symbol  ??0AnvilContainerManagerModel\@\@QEAA\@W4ContainerID\@\@AEAVPlayer\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI AnvilContainerManagerModel(enum class ContainerID, class Player &, class BlockPos const &);
    /**
     * @hash   -810622755
     * @symbol  ?INPUT_SLOT\@AnvilContainerManagerModel\@\@2HB
     */
    MCAPI static int const INPUT_SLOT;
    /**
     * @hash   426328671
     * @symbol  ?MATERIAL_SLOT\@AnvilContainerManagerModel\@\@2HB
     */
    MCAPI static int const MATERIAL_SLOT;
    /**
     * @hash   1738559843
     * @symbol  ?RESULT_SLOT\@AnvilContainerManagerModel\@\@2HB
     */
    MCAPI static int const RESULT_SLOT;

};