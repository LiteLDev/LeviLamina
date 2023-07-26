#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BaseMobSpawner {

public:
    // prevent constructor by default
    BaseMobSpawner& operator=(BaseMobSpawner const&) = delete;
    BaseMobSpawner(BaseMobSpawner const&)            = delete;
    BaseMobSpawner()                                 = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?tick\@BaseMobSpawner\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    virtual void tick(class BlockSource&); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?load\@BaseMobSpawner\@\@UEAAXAEBVCompoundTag\@\@\@Z
     */
    virtual void load(class CompoundTag const&); // NOLINT
    /**
     * @vftbl 3
     * @symbol ?save\@BaseMobSpawner\@\@UEAAXAEAVCompoundTag\@\@\@Z
     */
    virtual void save(class CompoundTag&); // NOLINT
    /**
     * @vftbl 4
     * @symbol ?getPos\@DefaultMobSpawner\@\@UEAAAEBVBlockPos\@\@XZ
     */
    virtual class BlockPos const& getPos() = 0; // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BASEMOBSPAWNER
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~BaseMobSpawner(); // NOLINT
#endif
    /**
     * @symbol ??0BaseMobSpawner\@\@QEAA\@UActorDefinitionIdentifier\@\@\@Z
     */
    MCAPI BaseMobSpawner(struct ActorDefinitionIdentifier); // NOLINT
    /**
     * @symbol ?removeDisplayEntity\@BaseMobSpawner\@\@QEAAXXZ
     */
    MCAPI void removeDisplayEntity(); // NOLINT
    /**
     * @symbol ?setEntityId\@BaseMobSpawner\@\@QEAAXUActorDefinitionIdentifier\@\@\@Z
     */
    MCAPI void setEntityId(struct ActorDefinitionIdentifier); // NOLINT
    /**
     * @symbol
     * ?setNextSpawnData\@BaseMobSpawner\@\@QEAAXV?$unique_ptr\@VSpawnData\@\@U?$default_delete\@VSpawnData\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void setNextSpawnData(std::unique_ptr<class SpawnData>); // NOLINT

    // protected:
    /**
     * @symbol ?_delay\@BaseMobSpawner\@\@IEAAXAEAVBlockSource\@\@\@Z
     */
    MCAPI void _delay(class BlockSource&); // NOLINT

protected:
};
