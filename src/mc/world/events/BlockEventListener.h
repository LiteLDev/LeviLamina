#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BlockEventListener {

public:
    // prevent constructor by default
    BlockEventListener& operator=(BlockEventListener const&) = delete;
    BlockEventListener(BlockEventListener const&)            = delete;
    BlockEventListener()                                     = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol
     * ?onBlockPlacedByPlayer\@BlockEventListener\@\@UEAA?AW4EventResult\@\@AEAVPlayer\@\@AEBVBlock\@\@AEBVBlockPos\@\@_N\@Z
     */
    virtual enum class EventResult
    onBlockPlacedByPlayer(class Player&, class Block const&, class BlockPos const&, bool);
    /**
     * @vftbl 2
     * @symbol
     * ?onBlockDestroyedByPlayer\@BlockEventListener\@\@UEAA?AW4EventResult\@\@AEAVPlayer\@\@AEBVBlock\@\@AEBVBlockPos\@\@\@Z
     */
    virtual enum class EventResult onBlockDestroyedByPlayer(class Player&, class Block const&, class BlockPos const&);
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl 4
     * @symbol __unk_vfn_4
     */
    virtual void __unk_vfn_4();
    /**
     * @vftbl 5
     * @symbol __unk_vfn_5
     */
    virtual void __unk_vfn_5();
    /**
     * @vftbl 6
     * @symbol
     * ?onBlockDestructionStarted\@BlockEventListener\@\@UEAA?AW4EventResult\@\@AEAVPlayer\@\@AEBVBlockPos\@\@E\@Z
     */
    virtual enum class EventResult onBlockDestructionStarted(class Player&, class BlockPos const&, unsigned char);
    /**
     * @vftbl 7
     * @symbol __unk_vfn_7
     */
    virtual void __unk_vfn_7();
    /**
     * @vftbl 8
     * @symbol
     * ?onBlockExploded\@BlockEventListener\@\@UEAA?AW4EventResult\@\@AEAVDimension\@\@AEBVBlockPos\@\@AEBVBlock\@\@PEAVActor\@\@\@Z
     */
    virtual enum class EventResult
    onBlockExploded(class Dimension&, class BlockPos const&, class Block const&, class Actor*);
    /**
     * @vftbl 9
     * @symbol __unk_vfn_9
     */
    virtual void __unk_vfn_9();
    /**
     * @vftbl 10
     * @symbol __unk_vfn_10
     */
    virtual void __unk_vfn_10();
    /**
     * @vftbl 11
     * @symbol ?onEvent\@BlockEventListener\@\@UEAA?AW4EventResult\@\@AEBUBlockNotificationEvent\@\@\@Z
     */
    virtual enum class EventResult onEvent(struct BlockNotificationEvent const&);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BLOCKEVENTLISTENER
    /**
     * @symbol
     * ?onBlockDestructionStopped\@BlockEventListener\@\@UEAA?AW4EventResult\@\@AEAVPlayer\@\@AEBVBlockPos\@\@H\@Z
     */
    MCVAPI enum class EventResult onBlockDestructionStopped(class Player&, class BlockPos const&, int);
    /**
     * @symbol
     * ?onBlockInPosWillBeDestroyedByPlayer\@BlockEventListener\@\@UEAA?AW4EventResult\@\@AEAVPlayer\@\@AEBVBlockPos\@\@\@Z
     */
    MCVAPI enum class EventResult onBlockInPosWillBeDestroyedByPlayer(class Player&, class BlockPos const&);
    /**
     * @symbol ?onBlockInteractedWith\@BlockEventListener\@\@UEAA?AW4EventResult\@\@AEAVPlayer\@\@AEBVBlockPos\@\@\@Z
     */
    MCVAPI enum class EventResult onBlockInteractedWith(class Player&, class BlockPos const&);
    /**
     * @symbol ?onBlockModified\@BlockEventListener\@\@UEAA?AW4EventResult\@\@AEBVBlockPos\@\@AEBVBlock\@\@1\@Z
     */
    MCVAPI enum class EventResult onBlockModified(class BlockPos const&, class Block const&, class Block const&);
    /**
     * @symbol ?onBlockMovedByPiston\@BlockEventListener\@\@UEAA?AW4EventResult\@\@AEBVBlockPos\@\@0W4PistonState\@\@\@Z
     */
    MCVAPI enum class EventResult
    onBlockMovedByPiston(class BlockPos const&, class BlockPos const&, enum class PistonState);
    /**
     * @symbol ?onUnknownBlockReceived\@BlockEventListener\@\@UEAA?AW4EventResult\@\@AEAVLevel\@\@AEBUNewBlockID\@\@G\@Z
     */
    MCVAPI enum class EventResult onUnknownBlockReceived(class Level&, struct NewBlockID const&, unsigned short);
#endif
    // NOLINTEND
};
