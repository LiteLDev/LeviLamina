/**
 * @file  LevelContainerManagerModel.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "../../ContainerManagerModel.hpp"

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
     * @symbol  __unk_destructor_0
     */
    virtual ~LevelContainerManagerModel();
    /**
     * @hash   -1634415562
     * @vftbl  6
     * @symbol  ?getItemCopies\@LevelContainerManagerModel\@\@UEBA?AV?$vector\@VItemStack\@\@V?$allocator\@VItemStack\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::vector<class ItemStack> getItemCopies() const;
    /**
     * @hash   871656745
     * @vftbl  7
     * @symbol  ?setSlot\@LevelContainerManagerModel\@\@UEAAXHAEBVItemStack\@\@_N\@Z
     */
    virtual void setSlot(int, class ItemStack const &, bool);
    /**
     * @hash   -1505646990
     * @vftbl  8
     * @symbol  ?getSlot\@LevelContainerManagerModel\@\@UEBAAEBVItemStack\@\@H\@Z
     */
    virtual class ItemStack const & getSlot(int) const;
    /**
     * @hash   -1178535398
     * @vftbl  9
     * @symbol  ?setData\@LevelContainerManagerModel\@\@UEAAXHH\@Z
     */
    virtual void setData(int, int);
    /**
     * @hash   1850432672
     * @vftbl  10
     * @symbol  ?broadcastChanges\@LevelContainerManagerModel\@\@UEAAXXZ
     */
    virtual void broadcastChanges();
    /**
     * @hash   639893712
     * @vftbl  16
     * @symbol  ?isValid\@LevelContainerManagerModel\@\@UEAA_NM\@Z
     */
    virtual bool isValid(float);
    /**
     * @hash   1053966461
     * @vftbl  17
     * @symbol  ?_postInit\@LevelContainerManagerModel\@\@MEAA?AVContainerScreenContext\@\@XZ
     */
    virtual class ContainerScreenContext _postInit();
    /**
     * @hash   -1756905790
     * @symbol  ??0LevelContainerManagerModel\@\@QEAA\@W4ContainerID\@\@AEAVPlayer\@\@UActorUniqueID\@\@\@Z
     */
    MCAPI LevelContainerManagerModel(enum class ContainerID, class Player &, struct ActorUniqueID);
    /**
     * @hash   -1726773503
     * @symbol  ??0LevelContainerManagerModel\@\@QEAA\@W4ContainerID\@\@AEAVPlayer\@\@AEBVBlockPos\@\@W4BlockActorType\@\@\@Z
     */
    MCAPI LevelContainerManagerModel(enum class ContainerID, class Player &, class BlockPos const &, enum class BlockActorType);
    /**
     * @hash   -206595722
     * @symbol  ?getBlockPos\@LevelContainerManagerModel\@\@QEBAAEBVBlockPos\@\@XZ
     */
    MCAPI class BlockPos const & getBlockPos() const;
    /**
     * @hash   -5085302
     * @symbol  ?getEntityUniqueID\@LevelContainerManagerModel\@\@QEBA?AUActorUniqueID\@\@XZ
     */
    MCAPI struct ActorUniqueID getEntityUniqueID() const;

//protected:
    /**
     * @hash   -683180503
     * @symbol  ?_getBlockEntity\@LevelContainerManagerModel\@\@IEAAPEAVBlockActor\@\@XZ
     */
    MCAPI class BlockActor * _getBlockEntity();
    /**
     * @hash   -1626896393
     * @symbol  ?_getRawContainer\@LevelContainerManagerModel\@\@IEAAPEAVContainer\@\@XZ
     */
    MCAPI class Container * _getRawContainer();

protected:

};