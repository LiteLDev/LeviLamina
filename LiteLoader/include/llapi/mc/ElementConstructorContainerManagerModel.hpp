/**
 * @file  ElementConstructorContainerManagerModel.hpp
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
     * @symbol __unk_destructor_0
     */
    virtual ~ElementConstructorContainerManagerModel();
    /**
     * @hash   9307856
     * @vftbl  6
     * @symbol ?getItemCopies@ElementConstructorContainerManagerModel@@UEBA?AV?$vector@VItemStack@@V?$allocator@VItemStack@@@std@@@std@@XZ
     */
    virtual std::vector<class ItemStack> getItemCopies() const;
    /**
     * @hash   -2708929
     * @vftbl  7
     * @symbol ?setSlot@ElementConstructorContainerManagerModel@@UEAAXHAEBVItemStack@@_N@Z
     */
    virtual void setSlot(int, class ItemStack const &, bool);
    /**
     * @hash   509353912
     * @vftbl  8
     * @symbol ?getSlot@ElementConstructorContainerManagerModel@@UEBAAEBVItemStack@@H@Z
     */
    virtual class ItemStack const & getSlot(int) const;
    /**
     * @hash   -2035107404
     * @vftbl  9
     * @symbol ?setData@ElementConstructorContainerManagerModel@@UEAAXHH@Z
     */
    virtual void setData(int, int);
    /**
     * @hash   -1317059606
     * @vftbl  10
     * @symbol ?broadcastChanges@ElementConstructorContainerManagerModel@@UEAAXXZ
     */
    virtual void broadcastChanges();
    /**
     * @hash   1483827702
     * @vftbl  16
     * @symbol ?isValid@ElementConstructorContainerManagerModel@@UEAA_NM@Z
     */
    virtual bool isValid(float);
    /**
     * @hash   1216560903
     * @vftbl  17
     * @symbol ?_postInit@ElementConstructorContainerManagerModel@@MEAA?AVContainerScreenContext@@XZ
     */
    virtual class ContainerScreenContext _postInit();
    /**
     * @hash   -1073083818
     * @symbol ??0ElementConstructorContainerManagerModel@@QEAA@W4ContainerID@@AEAVPlayer@@AEBVBlockPos@@@Z
     */
    MCAPI ElementConstructorContainerManagerModel(enum ContainerID, class Player &, class BlockPos const &);

};