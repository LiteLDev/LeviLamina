/**
 * @file  BaseMobSpawner.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BaseMobSpawner.
 *
 */
class BaseMobSpawner {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BASEMOBSPAWNER
public:
    class BaseMobSpawner& operator=(class BaseMobSpawner const &) = delete;
    BaseMobSpawner(class BaseMobSpawner const &) = delete;
    BaseMobSpawner() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~BaseMobSpawner();
    /**
     * @hash   -289812551
     * @vftbl  1
     * @symbol  ?tick\@BaseMobSpawner\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    virtual void tick(class BlockSource &);
    /**
     * @hash   822098694
     * @vftbl  2
     * @symbol  ?load\@BaseMobSpawner\@\@UEAAXAEBVCompoundTag\@\@\@Z
     */
    virtual void load(class CompoundTag const &);
    /**
     * @hash   -365786094
     * @vftbl  3
     * @symbol  ?save\@BaseMobSpawner\@\@UEAAXAEAVCompoundTag\@\@\@Z
     */
    virtual void save(class CompoundTag &);
    /**
     * @hash   826487639
     * @vftbl  4
     * @symbol  ?getPos\@DefaultMobSpawner\@\@UEAAAEBVBlockPos\@\@XZ
     */
    virtual class BlockPos const & getPos() = 0;
    /**
     * @hash   1411070802
     * @symbol  ??0BaseMobSpawner\@\@QEAA\@UActorDefinitionIdentifier\@\@\@Z
     */
    MCAPI BaseMobSpawner(struct ActorDefinitionIdentifier);
    /**
     * @hash   -1930341085
     * @symbol  ?removeDisplayEntity\@BaseMobSpawner\@\@QEAAXXZ
     */
    MCAPI void removeDisplayEntity();
    /**
     * @hash   -1318048062
     * @symbol  ?setEntityId\@BaseMobSpawner\@\@QEAAXUActorDefinitionIdentifier\@\@\@Z
     */
    MCAPI void setEntityId(struct ActorDefinitionIdentifier);
    /**
     * @hash   50865966
     * @symbol  ?setNextSpawnData\@BaseMobSpawner\@\@QEAAXV?$unique_ptr\@VSpawnData\@\@U?$default_delete\@VSpawnData\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void setNextSpawnData(std::unique_ptr<class SpawnData>);

//protected:
    /**
     * @hash   -473212954
     * @symbol  ?_delay\@BaseMobSpawner\@\@IEAAXAEAVBlockSource\@\@\@Z
     */
    MCAPI void _delay(class BlockSource &);

protected:

};