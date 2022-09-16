/**
 * @file  LevelContainerManagerModel.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
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
 * @brief MC class LevelContainerManagerModel.
 *
 */
class LevelContainerManagerModel : public ContainerManagerModel {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEVELCONTAINERMANAGERMODEL
public:
    class LevelContainerManagerModel& operator=(class LevelContainerManagerModel const &) = delete;
    LevelContainerManagerModel(class LevelContainerManagerModel const &) = delete;
    LevelContainerManagerModel() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   226403011
     */
    virtual ~LevelContainerManagerModel();
    /**
     * @vftbl  6
     * @symbol ?getItemCopies@LevelContainerManagerModel@@UEBA?AV?$vector@VItemStack@@V?$allocator@VItemStack@@@std@@@std@@XZ
     * @hash   -990299546
     */
    virtual std::vector<class ItemStack> getItemCopies() const;
    /**
     * @vftbl  7
     * @symbol ?setSlot@LevelContainerManagerModel@@UEAAXHAEBVItemStack@@_N@Z
     * @hash   1515711257
     */
    virtual void setSlot(int, class ItemStack const &, bool);
    /**
     * @vftbl  8
     * @symbol ?getSlot@LevelContainerManagerModel@@UEBAAEBVItemStack@@H@Z
     * @hash   -861546350
     */
    virtual class ItemStack const & getSlot(int) const;
    /**
     * @vftbl  9
     * @symbol ?setData@LevelContainerManagerModel@@UEAAXHH@Z
     * @hash   -1270422374
     */
    virtual void setData(int, int);
    /**
     * @vftbl  10
     * @symbol ?broadcastChanges@LevelContainerManagerModel@@UEAAXXZ
     * @hash   -1800357104
     */
    virtual void broadcastChanges();
    /**
     * @vftbl  16
     * @symbol ?isValid@LevelContainerManagerModel@@UEAA_NM@Z
     * @hash   1283978976
     */
    virtual bool isValid(float);
    /**
     * @vftbl  17
     * @symbol ?_postInit@LevelContainerManagerModel@@MEAA?AVContainerScreenContext@@XZ
     * @hash   1698159357
     */
    virtual class ContainerScreenContext _postInit();
    /**
     * @symbol ??0LevelContainerManagerModel@@QEAA@W4ContainerID@@AEAVPlayer@@UActorUniqueID@@@Z
     * @hash   -1112712894
     */
    MCAPI LevelContainerManagerModel(enum ContainerID, class Player &, struct ActorUniqueID);
    /**
     * @symbol ??0LevelContainerManagerModel@@QEAA@W4ContainerID@@AEAVPlayer@@AEBVBlockPos@@W4BlockActorType@@@Z
     * @hash   -1082580607
     */
    MCAPI LevelContainerManagerModel(enum ContainerID, class Player &, class BlockPos const &, enum BlockActorType);
    /**
     * @symbol ?getBlockPos@LevelContainerManagerModel@@QEBAAEBVBlockPos@@XZ
     * @hash   2100628390
     */
    MCAPI class BlockPos const & getBlockPos() const;
    /**
     * @symbol ?getEntityUniqueID@LevelContainerManagerModel@@QEBA?AUActorUniqueID@@XZ
     * @hash   639030714
     */
    MCAPI struct ActorUniqueID getEntityUniqueID() const;

//protected:
    /**
     * @symbol ?_getBlockEntity@LevelContainerManagerModel@@IEAAPEAVBlockActor@@XZ
     * @hash   -38987607
     */
    MCAPI class BlockActor * _getBlockEntity();
    /**
     * @symbol ?_getRawContainer@LevelContainerManagerModel@@IEAAPEAVContainer@@XZ
     * @hash   -982703497
     */
    MCAPI class Container * _getRawContainer();

protected:

};