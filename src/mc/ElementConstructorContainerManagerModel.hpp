/**
 * @file  ElementConstructorContainerManagerModel.hpp
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
 * @brief MC class ElementConstructorContainerManagerModel.
 *
 */
class ElementConstructorContainerManagerModel : public ContainerManagerModel {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ELEMENTCONSTRUCTORCONTAINERMANAGERMODEL
public:
    class ElementConstructorContainerManagerModel& operator=(class ElementConstructorContainerManagerModel const &) = delete;
    ElementConstructorContainerManagerModel(class ElementConstructorContainerManagerModel const &) = delete;
    ElementConstructorContainerManagerModel() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~ElementConstructorContainerManagerModel();
    /**
     * @vftbl  6
     * @symbol  ?getItemCopies\@ElementConstructorContainerManagerModel\@\@UEBA?AV?$vector\@VItemStack\@\@V?$allocator\@VItemStack\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::vector<class ItemStack> getItemCopies() const;
    /**
     * @vftbl  7
     * @symbol  ?setSlot\@ElementConstructorContainerManagerModel\@\@UEAAXHAEBVItemStack\@\@_N\@Z
     */
    virtual void setSlot(int, class ItemStack const &, bool);
    /**
     * @vftbl  8
     * @symbol  ?getSlot\@ElementConstructorContainerManagerModel\@\@UEBAAEBVItemStack\@\@H\@Z
     */
    virtual class ItemStack const & getSlot(int) const;
    /**
     * @vftbl  9
     * @symbol  ?setData\@ElementConstructorContainerManagerModel\@\@UEAAXHH\@Z
     */
    virtual void setData(int, int);
    /**
     * @vftbl  10
     * @symbol  ?broadcastChanges\@ElementConstructorContainerManagerModel\@\@UEAAXXZ
     */
    virtual void broadcastChanges();
    /**
     * @vftbl  16
     * @symbol  ?isValid\@ElementConstructorContainerManagerModel\@\@UEAA_NM\@Z
     */
    virtual bool isValid(float);
    /**
     * @vftbl  17
     * @symbol  ?_postInit\@ElementConstructorContainerManagerModel\@\@MEAA?AVContainerScreenContext\@\@XZ
     */
    virtual class ContainerScreenContext _postInit();
    /**
     * @symbol  ??0ElementConstructorContainerManagerModel\@\@QEAA\@W4ContainerID\@\@AEAVPlayer\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI ElementConstructorContainerManagerModel(enum class ContainerID, class Player &, class BlockPos const &);

};