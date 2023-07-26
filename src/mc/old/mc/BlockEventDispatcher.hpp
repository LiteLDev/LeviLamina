/**
 * @file  BlockEventDispatcher.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BlockEventDispatcher.
 *
 */
class BlockEventDispatcher {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKEVENTDISPATCHER
public:
    class BlockEventDispatcher& operator=(class BlockEventDispatcher const &) = delete;
    BlockEventDispatcher(class BlockEventDispatcher const &) = delete;
    BlockEventDispatcher() = delete;
#endif

public:
    /**
     * @symbol  ?dispatchEvent\@BlockEventDispatcher\@\@QEAAXAEBVBlockPos\@\@IAEBVBlock\@\@1PEAVActor\@\@\@Z
     */
    MCAPI void dispatchEvent(class BlockPos const &, unsigned int, class Block const &, class Block const &, class Actor *);
    /**
     * @symbol  ?registerListener\@BlockEventDispatcher\@\@QEAA?AVBlockEventDispatcherToken\@\@AEBVVec3\@\@MV?$function\@$$A6AXAEBVBlockPos\@\@IAEBVBlock\@\@PEAVActor\@\@\@Z\@std\@\@\@Z
     */
    MCAPI class BlockEventDispatcherToken registerListener(class Vec3 const &, float, class std::function<void (class BlockPos const &, unsigned int, class Block const &, class Actor *)>);
    /**
     * @symbol  ?removeListener\@BlockEventDispatcher\@\@QEAAXH\@Z
     */
    MCAPI void removeListener(int);
    /**
     * @symbol  ?updatePosition\@BlockEventDispatcher\@\@QEAAXHAEBVVec3\@\@\@Z
     */
    MCAPI void updatePosition(int, class Vec3 const &);

};