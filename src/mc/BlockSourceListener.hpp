/**
 * @file  BlockSourceListener.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BlockSourceListener.
 *
 */
class BlockSourceListener {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKSOURCELISTENER
public:
    class BlockSourceListener& operator=(class BlockSourceListener const &) = delete;
    BlockSourceListener(class BlockSourceListener const &) = delete;
    BlockSourceListener() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~BlockSourceListener();
    /**
     * @vftbl  1
     * @symbol  __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl  2
     * @symbol  ?onSourceDestroyed\@BlockSourceListener\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    virtual void onSourceDestroyed(class BlockSource &);
    /**
     * @vftbl  3
     * @symbol  __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol  __unk_vfn_4
     */
    virtual void __unk_vfn_4();
    /**
     * @vftbl  5
     * @symbol  ?onBrightnessChanged\@BlockSourceListener\@\@UEAAXAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual void onBrightnessChanged(class BlockSource &, class BlockPos const &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BLOCKSOURCELISTENER
    /**
     * @symbol  ?onAreaChanged\@BlockSourceListener\@\@UEAAXAEAVBlockSource\@\@AEBVBlockPos\@\@1\@Z
     */
    MCVAPI void onAreaChanged(class BlockSource &, class BlockPos const &, class BlockPos const &);
    /**
     * @symbol  ?onBlockChanged\@BlockSourceListener\@\@UEAAXAEAVBlockSource\@\@AEBVBlockPos\@\@IAEBVBlock\@\@2HPEBUActorBlockSyncMessage\@\@W4BlockChangedEventTarget\@\@PEAVActor\@\@\@Z
     */
    MCVAPI void onBlockChanged(class BlockSource &, class BlockPos const &, unsigned int, class Block const &, class Block const &, int, struct ActorBlockSyncMessage const *, enum class BlockChangedEventTarget, class Actor *);
    /**
     * @symbol  ?onBlockEntityChanged\@BlockSourceListener\@\@UEAAXAEAVBlockSource\@\@AEAVBlockActor\@\@\@Z
     */
    MCVAPI void onBlockEntityChanged(class BlockSource &, class BlockActor &);
    /**
     * @symbol  ?onBlockEvent\@BlockSourceListener\@\@UEAAXAEAVBlockSource\@\@HHHHH\@Z
     */
    MCVAPI void onBlockEvent(class BlockSource &, int, int, int, int, int);
    /**
     * @symbol  ?onEntityChanged\@BlockSourceListener\@\@UEAAXAEAVBlockSource\@\@AEAVActor\@\@\@Z
     */
    MCVAPI void onEntityChanged(class BlockSource &, class Actor &);
    /**
     * @symbol  ?onSourceCreated\@BlockSourceListener\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    MCVAPI void onSourceCreated(class BlockSource &);
#endif

};