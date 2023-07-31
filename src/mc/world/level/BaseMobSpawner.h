#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BaseMobSpawner {

public:
    // prevent constructor by default
    BaseMobSpawner& operator=(BaseMobSpawner const&) = delete;
    BaseMobSpawner(BaseMobSpawner const&)            = delete;
    BaseMobSpawner()                                 = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?tick\@BaseMobSpawner\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    virtual void tick(class BlockSource&);
    /**
     * @vftbl 2
     * @symbol ?load\@BaseMobSpawner\@\@UEAAXAEBVCompoundTag\@\@\@Z
     */
    virtual void load(class CompoundTag const&);
    /**
     * @vftbl 3
     * @symbol ?save\@BaseMobSpawner\@\@UEAAXAEAVCompoundTag\@\@\@Z
     */
    virtual void save(class CompoundTag&);
    /**
     * @vftbl 4
     * @symbol ?getPos\@DefaultMobSpawner\@\@UEAAAEBVBlockPos\@\@XZ
     */
    virtual class BlockPos const& getPos() = 0;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BASEMOBSPAWNER
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~BaseMobSpawner();
#endif
    /**
     * @symbol ??0BaseMobSpawner\@\@QEAA\@UActorDefinitionIdentifier\@\@\@Z
     */
    MCAPI BaseMobSpawner(struct ActorDefinitionIdentifier);
    /**
     * @symbol ?removeDisplayEntity\@BaseMobSpawner\@\@QEAAXXZ
     */
    MCAPI void removeDisplayEntity();
    /**
     * @symbol ?setEntityId\@BaseMobSpawner\@\@QEAAXUActorDefinitionIdentifier\@\@\@Z
     */
    MCAPI void setEntityId(struct ActorDefinitionIdentifier);
    /**
     * @symbol
     * ?setNextSpawnData\@BaseMobSpawner\@\@QEAAXV?$unique_ptr\@VSpawnData\@\@U?$default_delete\@VSpawnData\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void setNextSpawnData(std::unique_ptr<class SpawnData>);
    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    /**
     * @symbol ?_delay\@BaseMobSpawner\@\@IEAAXAEAVBlockSource\@\@\@Z
     */
    MCAPI void _delay(class BlockSource&);
    // NOLINTEND
};
