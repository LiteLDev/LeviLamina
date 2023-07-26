#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BlockSourceListener {

public:
    // prevent constructor by default
    BlockSourceListener& operator=(BlockSourceListener const&) = delete;
    BlockSourceListener(BlockSourceListener const&)            = delete;
    BlockSourceListener()                                      = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1(); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?onSourceDestroyed\@BlockSourceListener\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    virtual void onSourceDestroyed(class BlockSource&); // NOLINT
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3(); // NOLINT
    /**
     * @vftbl 4
     * @symbol __unk_vfn_4
     */
    virtual void __unk_vfn_4(); // NOLINT
    /**
     * @vftbl 5
     * @symbol ?onBrightnessChanged\@BlockSourceListener\@\@UEAAXAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual void onBrightnessChanged(class BlockSource&, class BlockPos const&); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BLOCKSOURCELISTENER
    /**
     * @symbol ?onAreaChanged\@BlockSourceListener\@\@UEAAXAEAVBlockSource\@\@AEBVBlockPos\@\@1\@Z
     */
    MCVAPI void onAreaChanged(class BlockSource&, class BlockPos const&, class BlockPos const&); // NOLINT
    /**
     * @symbol
     * ?onBlockChanged\@BlockSourceListener\@\@UEAAXAEAVBlockSource\@\@AEBVBlockPos\@\@IAEBVBlock\@\@2HPEBUActorBlockSyncMessage\@\@W4BlockChangedEventTarget\@\@PEAVActor\@\@\@Z
     */
    MCVAPI void
    onBlockChanged(class BlockSource&, class BlockPos const&, unsigned int, class Block const&, class Block const&, int, struct ActorBlockSyncMessage const*, enum class BlockChangedEventTarget, class Actor*); // NOLINT
    /**
     * @symbol ?onBlockEntityChanged\@BlockSourceListener\@\@UEAAXAEAVBlockSource\@\@AEAVBlockActor\@\@\@Z
     */
    MCVAPI void onBlockEntityChanged(class BlockSource&, class BlockActor&); // NOLINT
    /**
     * @symbol ?onBlockEvent\@BlockSourceListener\@\@UEAAXAEAVBlockSource\@\@HHHHH\@Z
     */
    MCVAPI void onBlockEvent(class BlockSource&, int, int, int, int, int); // NOLINT
    /**
     * @symbol ?onEntityChanged\@BlockSourceListener\@\@UEAAXAEAVBlockSource\@\@AEAVActor\@\@\@Z
     */
    MCVAPI void onEntityChanged(class BlockSource&, class Actor&); // NOLINT
    /**
     * @symbol ?onSourceCreated\@BlockSourceListener\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    MCVAPI void onSourceCreated(class BlockSource&); // NOLINT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~BlockSourceListener(); // NOLINT
#endif
};
