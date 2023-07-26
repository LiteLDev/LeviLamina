#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/actor/BlockActor.h"

class BeehiveBlockActor : public ::BlockActor {
public:
    // BeehiveBlockActor inner types declare
    // clang-format off
    struct Occupant;
    // clang-format on

    // BeehiveBlockActor inner types define
    struct Occupant {

    public:
        // prevent constructor by default
        Occupant& operator=(Occupant const&) = delete;
        Occupant(Occupant const&)            = delete;
        Occupant()                           = delete;

    public:
        /**
         * @symbol ??0Occupant\@BeehiveBlockActor\@\@QEAA\@UActorDefinitionIdentifier\@\@VCompoundTag\@\@I\@Z
         */
        MCAPI Occupant(struct ActorDefinitionIdentifier, class CompoundTag, unsigned int); // NOLINT
    };

public:
    // prevent constructor by default
    BeehiveBlockActor& operator=(BeehiveBlockActor const&) = delete;
    BeehiveBlockActor(BeehiveBlockActor const&)            = delete;
    BeehiveBlockActor()                                    = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?load\@BeehiveBlockActor\@\@UEAAXAEAVLevel\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    virtual void load(class Level&, class CompoundTag const&, class DataLoadHelper&); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?save\@BeehiveBlockActor\@\@UEBA_NAEAVCompoundTag\@\@\@Z
     */
    virtual bool save(class CompoundTag&) const; // NOLINT
    /**
     * @vftbl 7
     * @symbol ?tick\@BeehiveBlockActor\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    virtual void tick(class BlockSource&); // NOLINT
    /**
     * @vftbl 12
     * @symbol __unk_vfn_12
     */
    virtual void __unk_vfn_12(); // NOLINT
    /**
     * @vftbl 18
     * @symbol __unk_vfn_18
     */
    virtual void __unk_vfn_18(); // NOLINT
    /**
     * @vftbl 30
     * @symbol __unk_vfn_30
     */
    virtual void __unk_vfn_30(); // NOLINT
    /**
     * @vftbl 31
     * @symbol __unk_vfn_31
     */
    virtual void __unk_vfn_31(); // NOLINT
    /**
     * @vftbl 32
     * @symbol __unk_vfn_32
     */
    virtual void __unk_vfn_32(); // NOLINT
    /**
     * @vftbl 33
     * @symbol __unk_vfn_33
     */
    virtual void __unk_vfn_33(); // NOLINT
    /**
     * @vftbl 34
     * @symbol __unk_vfn_34
     */
    virtual void __unk_vfn_34(); // NOLINT
    /**
     * @vftbl 35
     * @symbol __unk_vfn_35
     */
    virtual void __unk_vfn_35(); // NOLINT
    /**
     * @vftbl 36
     * @symbol __unk_vfn_36
     */
    virtual void __unk_vfn_36(); // NOLINT
    /**
     * @vftbl 39
     * @symbol __unk_vfn_39
     */
    virtual void __unk_vfn_39(); // NOLINT
    /**
     * @symbol ?disableBeeSpawn\@BeehiveBlockActor\@\@QEAAXXZ
     */
    MCAPI void disableBeeSpawn(); // NOLINT
    /**
     * @symbol ?evictAll\@BeehiveBlockActor\@\@QEAAXAEAVBlockSource\@\@_N\@Z
     */
    MCAPI void evictAll(class BlockSource&, bool); // NOLINT
    /**
     * @symbol ?saveUserData\@BeehiveBlockActor\@\@QEBAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void saveUserData(class CompoundTag&) const; // NOLINT
    /**
     * @symbol ?tryAdmit\@BeehiveBlockActor\@\@QEAA_NAEAVActor\@\@\@Z
     */
    MCAPI bool tryAdmit(class Actor&); // NOLINT
    /**
     * @symbol ?MAX_OCCUPANCY\@BeehiveBlockActor\@\@2IB
     */
    MCAPI static unsigned int const MAX_OCCUPANCY; // NOLINT

    // private:
    /**
     * @symbol ?_revive\@BeehiveBlockActor\@\@AEAAPEAVActor\@\@AEAVBlockSource\@\@AEBUOccupant\@1\@E\@Z
     */
    MCAPI class Actor* _revive(class BlockSource&, struct BeehiveBlockActor::Occupant const&, unsigned char); // NOLINT
    /**
     * @symbol ?_tickOccupant\@BeehiveBlockActor\@\@AEAA_NAEAVBlockSource\@\@AEAUOccupant\@1\@\@Z
     */
    MCAPI bool _tickOccupant(class BlockSource&, struct BeehiveBlockActor::Occupant&); // NOLINT
    /**
     * @symbol ?_trySpawnBees\@BeehiveBlockActor\@\@AEAAXAEAVBlockSource\@\@\@Z
     */
    MCAPI void _trySpawnBees(class BlockSource&); // NOLINT

private:
};
