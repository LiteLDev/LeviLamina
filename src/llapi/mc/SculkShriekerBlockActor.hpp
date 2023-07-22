/**
 * @file  SculkShriekerBlockActor.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "BlockActor.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class SculkShriekerBlockActor.
 *
 */
class SculkShriekerBlockActor : public BlockActor {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCULKSHRIEKERBLOCKACTOR
public:
    class SculkShriekerBlockActor& operator=(class SculkShriekerBlockActor const &) = delete;
    SculkShriekerBlockActor(class SculkShriekerBlockActor const &) = delete;
    SculkShriekerBlockActor() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~SculkShriekerBlockActor();
    /**
     * @vftbl  1
     * @symbol  ?load\@SculkShriekerBlockActor\@\@UEAAXAEAVLevel\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    virtual void load(class Level &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @vftbl  2
     * @symbol  ?save\@SculkShriekerBlockActor\@\@UEBA_NAEAVCompoundTag\@\@\@Z
     */
    virtual bool save(class CompoundTag &) const;
    /**
     * @vftbl  7
     * @symbol  ?tick\@SculkShriekerBlockActor\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    virtual void tick(class BlockSource &);
    /**
     * @vftbl  12
     * @symbol  __unk_vfn_12
     */
    virtual void __unk_vfn_12();
    /**
     * @vftbl  13
     * @symbol  ?onRemoved\@SculkShriekerBlockActor\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    virtual void onRemoved(class BlockSource &);
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
     * @symbol  ??0SculkShriekerBlockActor\@\@QEAA\@AEBVBlockPos\@\@\@Z
     */
    MCAPI SculkShriekerBlockActor(class BlockPos const &);
    /**
     * @symbol  ?tryRespond\@SculkShriekerBlockActor\@\@QEAAXAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI void tryRespond(class BlockSource &, class BlockPos const &);
    /**
     * @symbol  ?tryShriek\@SculkShriekerBlockActor\@\@QEAA_NAEAVBlockSource\@\@VBlockPos\@\@AEAVPlayer\@\@\@Z
     */
    MCAPI bool tryShriek(class BlockSource &, class BlockPos, class Player &);
    /**
     * @symbol  ?tryGet\@SculkShriekerBlockActor\@\@SAPEAV1\@AEAVBlockSource\@\@VBlockPos\@\@\@Z
     */
    MCAPI static class SculkShriekerBlockActor * tryGet(class BlockSource &, class BlockPos);
    /**
     * @symbol  ?tryGetPlayerInHierarchy\@SculkShriekerBlockActor\@\@SAPEAVPlayer\@\@PEAVActor\@\@\@Z
     */
    MCAPI static class Player * tryGetPlayerInHierarchy(class Actor *);

//private:
    /**
     * @symbol  ?_canRespond\@SculkShriekerBlockActor\@\@CA_NAEBVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI static bool _canRespond(class BlockSource const &, class BlockPos const &);

private:

};