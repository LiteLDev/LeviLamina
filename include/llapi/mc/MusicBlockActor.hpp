/**
 * @file  MusicBlockActor.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "BlockActor.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class MusicBlockActor.
 *
 */
class MusicBlockActor : public BlockActor {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MUSICBLOCKACTOR
public:
    class MusicBlockActor& operator=(class MusicBlockActor const &) = delete;
    MusicBlockActor(class MusicBlockActor const &) = delete;
    MusicBlockActor() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~MusicBlockActor();
    /**
     * @vftbl  1
     * @symbol  ?load\@MusicBlockActor\@\@UEAAXAEAVLevel\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    virtual void load(class Level &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @vftbl  2
     * @symbol  ?save\@MusicBlockActor\@\@UEBA_NAEAVCompoundTag\@\@\@Z
     */
    virtual bool save(class CompoundTag &) const;
    /**
     * @vftbl  12
     * @symbol  __unk_vfn_12
     */
    virtual void __unk_vfn_12();
    /**
     * @vftbl  18
     * @symbol  __unk_vfn_18
     */
    virtual void __unk_vfn_18();
    /**
     * @vftbl  31
     * @symbol  __unk_vfn_31
     */
    virtual void __unk_vfn_31();
    /**
     * @vftbl  32
     * @symbol  __unk_vfn_32
     */
    virtual void __unk_vfn_32();
    /**
     * @vftbl  33
     * @symbol  __unk_vfn_33
     */
    virtual void __unk_vfn_33();
    /**
     * @vftbl  34
     * @symbol  __unk_vfn_34
     */
    virtual void __unk_vfn_34();
    /**
     * @vftbl  35
     * @symbol  __unk_vfn_35
     */
    virtual void __unk_vfn_35();
    /**
     * @vftbl  36
     * @symbol  __unk_vfn_36
     */
    virtual void __unk_vfn_36();
    /**
     * @symbol  ??0MusicBlockActor\@\@QEAA\@AEBVBlockPos\@\@\@Z
     */
    MCAPI MusicBlockActor(class BlockPos const &);
    /**
     * @symbol  ?playNote\@MusicBlockActor\@\@QEAAXAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI void playNote(class BlockSource &, class BlockPos const &);
    /**
     * @symbol  ?tune\@MusicBlockActor\@\@QEAAXXZ
     */
    MCAPI void tune();
    /**
     * @symbol  ?getInstrumentIndex\@MusicBlockActor\@\@SA?AV?$optional\@H\@std\@\@AEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI static class std::optional<int> getInstrumentIndex(class BlockSource &, class BlockPos const &);

//private:
    /**
     * @symbol  ?_getInstrumentIndexForBlock\@MusicBlockActor\@\@CAHAEBVBlockLegacy\@\@\@Z
     */
    MCAPI static int _getInstrumentIndexForBlock(class BlockLegacy const &);

private:

};