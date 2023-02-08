/**
 * @file  BlockEventListener.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BlockEventListener.
 *
 */
class BlockEventListener {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKEVENTLISTENER
public:
    class BlockEventListener& operator=(class BlockEventListener const &) = delete;
    BlockEventListener(class BlockEventListener const &) = delete;
    BlockEventListener() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BLOCKEVENTLISTENER
    /**
     * @hash   1645384127
     * @symbol  ?onBlockDestroyedByPlayer\@BlockEventListener\@\@UEAA?AW4EventResult\@\@AEAVPlayer\@\@AEBVBlock\@\@AEBVBlockPos\@\@\@Z
     */
    MCVAPI enum class EventResult onBlockDestroyedByPlayer(class Player &, class Block const &, class BlockPos const &);
    /**
     * @hash   -597932445
     * @symbol  ?onBlockDestructionStarted\@BlockEventListener\@\@UEAA?AW4EventResult\@\@AEAVPlayer\@\@AEBVBlockPos\@\@\@Z
     */
    MCVAPI enum class EventResult onBlockDestructionStarted(class Player &, class BlockPos const &);
    /**
     * @hash   -257020768
     * @symbol  ?onBlockDestructionStopped\@BlockEventListener\@\@UEAA?AW4EventResult\@\@AEAVPlayer\@\@AEBVBlockPos\@\@H\@Z
     */
    MCVAPI enum class EventResult onBlockDestructionStopped(class Player &, class BlockPos const &, int);
    /**
     * @hash   1341392161
     * @symbol  ?onBlockExploded\@BlockEventListener\@\@UEAA?AW4EventResult\@\@AEBVBlockPos\@\@AEBVBlock\@\@PEAVActor\@\@\@Z
     */
    MCVAPI enum class EventResult onBlockExploded(class BlockPos const &, class Block const &, class Actor *);
    /**
     * @hash   182843105
     * @symbol  ?onBlockInPosWillBeDestroyedByPlayer\@BlockEventListener\@\@UEAA?AW4EventResult\@\@AEAVPlayer\@\@AEBVBlockPos\@\@\@Z
     */
    MCVAPI enum class EventResult onBlockInPosWillBeDestroyedByPlayer(class Player &, class BlockPos const &);
    /**
     * @hash   -1354811857
     * @symbol  ?onBlockInteractedWith\@BlockEventListener\@\@UEAA?AW4EventResult\@\@AEAVPlayer\@\@AEBVBlockPos\@\@\@Z
     */
    MCVAPI enum class EventResult onBlockInteractedWith(class Player &, class BlockPos const &);
    /**
     * @hash   -1049810236
     * @symbol  ?onBlockModified\@BlockEventListener\@\@UEAA?AW4EventResult\@\@AEBVBlockPos\@\@AEBVBlock\@\@1\@Z
     */
    MCVAPI enum class EventResult onBlockModified(class BlockPos const &, class Block const &, class Block const &);
    /**
     * @hash   1500852966
     * @symbol  ?onBlockMovedByPiston\@BlockEventListener\@\@UEAA?AW4EventResult\@\@AEBVBlockPos\@\@0W4PistonState\@\@\@Z
     */
    MCVAPI enum class EventResult onBlockMovedByPiston(class BlockPos const &, class BlockPos const &, enum class PistonState);
    /**
     * @hash   825502557
     * @symbol  ?onBlockPlacedByPlayer\@BlockEventListener\@\@UEAA?AW4EventResult\@\@AEAVPlayer\@\@AEBVBlock\@\@AEBVBlockPos\@\@_N\@Z
     */
    MCVAPI enum class EventResult onBlockPlacedByPlayer(class Player &, class Block const &, class BlockPos const &, bool);
    /**
     * @hash   1242476738
     * @symbol  ?onEvent\@BlockEventListener\@\@UEAA?AW4EventResult\@\@AEBUBlockNotificationEvent\@\@\@Z
     */
    MCVAPI enum class EventResult onEvent(struct BlockNotificationEvent const &);
    /**
     * @hash   1296555213
     * @symbol  ?onUnknownBlockReceived\@BlockEventListener\@\@UEAA?AW4EventResult\@\@AEAVLevel\@\@AEBUNewBlockID\@\@G\@Z
     */
    MCVAPI enum class EventResult onUnknownBlockReceived(class Level &, struct NewBlockID const &, unsigned short);
#endif

};