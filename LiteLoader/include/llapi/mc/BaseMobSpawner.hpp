/**
 * @file  MC/BaseMobSpawner.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @symbol __unk_destructor_0
     */
    virtual ~BaseMobSpawner();
    /**
     * @hash   -1168781591
     * @vftbl  1
     * @symbol ?tick@BaseMobSpawner@@UEAAXAEAVBlockSource@@@Z
     */
    virtual void tick(class BlockSource &);
    /**
     * @hash   -56824218
     * @vftbl  2
     * @symbol ?load@BaseMobSpawner@@UEAAXAEBVCompoundTag@@@Z
     */
    virtual void load(class CompoundTag const &);
    /**
     * @hash   -1244678254
     * @vftbl  3
     * @symbol ?save@BaseMobSpawner@@UEAAXAEAVCompoundTag@@@Z
     */
    virtual void save(class CompoundTag &);
    /**
     * @hash   826487639
     * @vftbl  4
     * @symbol ?getPos@DefaultMobSpawner@@UEAAAEBVBlockPos@@XZ
     */
    virtual class BlockPos const & getPos() = 0;
    /**
     * @hash   532240146
     * @symbol ??0BaseMobSpawner@@QEAA@UActorDefinitionIdentifier@@@Z
     */
    MCAPI BaseMobSpawner(struct ActorDefinitionIdentifier);
    /**
     * @hash   1485734051
     * @symbol ?removeDisplayEntity@BaseMobSpawner@@QEAAXXZ
     */
    MCAPI void removeDisplayEntity();
    /**
     * @hash   2098057826
     * @symbol ?setEntityId@BaseMobSpawner@@QEAAXUActorDefinitionIdentifier@@@Z
     */
    MCAPI void setEntityId(struct ActorDefinitionIdentifier);

//protected:
    /**
     * @hash   -1352135866
     * @symbol ?_delay@BaseMobSpawner@@IEAAXAEAVBlockSource@@@Z
     */
    MCAPI void _delay(class BlockSource &);

protected:

};