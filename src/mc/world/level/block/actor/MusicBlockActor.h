#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/actor/BlockActor.h"

class MusicBlockActor : public ::BlockActor {

public:
    // prevent constructor by default
    MusicBlockActor& operator=(MusicBlockActor const&) = delete;
    MusicBlockActor(MusicBlockActor const&)            = delete;
    MusicBlockActor()                                  = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?load\@MusicBlockActor\@\@UEAAXAEAVLevel\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    virtual void load(class Level&, class CompoundTag const&, class DataLoadHelper&); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?save\@MusicBlockActor\@\@UEBA_NAEAVCompoundTag\@\@\@Z
     */
    virtual bool save(class CompoundTag&) const; // NOLINT
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
     * @symbol ??0MusicBlockActor\@\@QEAA\@AEBVBlockPos\@\@\@Z
     */
    MCAPI MusicBlockActor(class BlockPos const&); // NOLINT
    /**
     * @symbol ?playNote\@MusicBlockActor\@\@QEAAXAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI void playNote(class BlockSource&, class BlockPos const&); // NOLINT
    /**
     * @symbol ?tune\@MusicBlockActor\@\@QEAAXXZ
     */
    MCAPI void tune(); // NOLINT
    /**
     * @symbol ?getInstrumentIndex\@MusicBlockActor\@\@SA?AV?$optional\@H\@std\@\@AEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI static class std::optional<int> getInstrumentIndex(class BlockSource&, class BlockPos const&); // NOLINT

    // private:
    /**
     * @symbol ?_getInstrumentIndexForBlock\@MusicBlockActor\@\@CAHAEBVBlockLegacy\@\@\@Z
     */
    MCAPI static int _getInstrumentIndexForBlock(class BlockLegacy const&); // NOLINT

private:
};
