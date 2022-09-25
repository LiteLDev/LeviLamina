/**
 * @file  LevelContainerModel.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ContainerModel.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class LevelContainerModel.
 *
 */
class LevelContainerModel : public ContainerModel {

#define AFTER_EXTRA
// Add Member There
public:
    inline Actor* getEntity()
    {
        return _getEntity();
    }
#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEVELCONTAINERMODEL
public:
    class LevelContainerModel& operator=(class LevelContainerModel const &) = delete;
    LevelContainerModel(class LevelContainerModel const &) = delete;
    LevelContainerModel() = delete;
#endif

public:
    /**
     * @hash   -812774104
     * @vftbl  0
     * @symbol ?containerContentChanged@LevelContainerModel@@UEAAXH@Z
     */
    virtual void containerContentChanged(int);
    /**
     * @vftbl  1
     * @symbol __unk_destructor_1
     */
    virtual ~LevelContainerModel();
    /**
     * @hash   33551947
     * @vftbl  2
     * @symbol ?postInit@LevelContainerModel@@UEAAXXZ
     */
    virtual void postInit();
    /**
     * @hash   1647592969
     * @vftbl  3
     * @symbol ?releaseResources@LevelContainerModel@@UEAAXXZ
     */
    virtual void releaseResources();
    /**
     * @vftbl  6
     * @symbol __unk_vfn_6
     */
    virtual void __unk_vfn_6();
    /**
     * @hash   -1098465863
     * @vftbl  7
     * @symbol ?getContainerWeakRef@LevelContainerModel@@UEBA?AVContainerWeakRef@@XZ
     */
    virtual class ContainerWeakRef getContainerWeakRef() const;
    /**
     * @vftbl  12
     * @symbol __unk_vfn_12
     */
    virtual void __unk_vfn_12();
    /**
     * @hash   -717448769
     * @vftbl  14
     * @symbol ?isValid@LevelContainerModel@@UEAA_NXZ
     */
    virtual bool isValid();
    /**
     * @vftbl  15
     * @symbol __unk_vfn_15
     */
    virtual void __unk_vfn_15();
    /**
     * @vftbl  16
     * @symbol __unk_vfn_16
     */
    virtual void __unk_vfn_16();
    /**
     * @vftbl  19
     * @symbol __unk_vfn_19
     */
    virtual void __unk_vfn_19();
    /**
     * @hash   -1285684109
     * @vftbl  20
     * @symbol ?_getContainer@LevelContainerModel@@EEBAPEAVContainer@@XZ
     */
    virtual class Container * _getContainer() const;
    /**
     * @hash   -1691824443
     * @vftbl  21
     * @symbol ?_getContainerOffset@LevelContainerModel@@MEBAHXZ
     */
    virtual int _getContainerOffset() const;
    /**
     * @hash   -645548024
     * @vftbl  22
     * @symbol ?_onItemChanged@LevelContainerModel@@MEAAXHAEBVItemStack@@0@Z
     */
    virtual void _onItemChanged(int, class ItemStack const &, class ItemStack const &);
    /**
     * @hash   1970628248
     * @symbol ??0LevelContainerModel@@QEAA@W4ContainerEnumName@@HAEAVPlayer@@W4BlockActorType@@AEBVBlockPos@@W4ContainerCategory@@@Z
     */
    MCAPI LevelContainerModel(enum ContainerEnumName, int, class Player &, enum BlockActorType, class BlockPos const &, enum ContainerCategory);
    /**
     * @hash   65172263
     * @symbol ??0LevelContainerModel@@QEAA@W4ContainerEnumName@@HAEAVPlayer@@UActorUniqueID@@W4ContainerCategory@@@Z
     */
    MCAPI LevelContainerModel(enum ContainerEnumName, int, class Player &, struct ActorUniqueID, enum ContainerCategory);
    /**
     * @hash   -185528077
     * @symbol ?getContainerHelper@LevelContainerModel@@SAPEAVContainer@@AEAVPlayer@@AEBUActorUniqueID@@@Z
     */
    MCAPI static class Container * getContainerHelper(class Player &, struct ActorUniqueID const &);
    /**
     * @hash   2017547272
     * @symbol ?getContainerHelper@LevelContainerModel@@SAPEAVContainer@@AEAVPlayer@@W4BlockActorType@@AEBVBlockPos@@@Z
     */
    MCAPI static class Container * getContainerHelper(class Player &, enum BlockActorType, class BlockPos const &);

//private:
    /**
     * @hash   920644658
     * @symbol ?_getEntity@LevelContainerModel@@AEBAPEAVActor@@XZ
     */
    MCAPI class Actor * _getEntity() const;
    /**
     * @hash   1565443285
     * @symbol ?_refreshSlot@LevelContainerModel@@AEAAXH@Z
     */
    MCAPI void _refreshSlot(int);

private:

};