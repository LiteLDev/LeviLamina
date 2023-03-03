/**
 * @file  BlockCollisionBoxProcessor.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Util.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class BlockCollisionBoxProcessor.
 *
 */
class BlockCollisionBoxProcessor {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKCOLLISIONBOXPROCESSOR
public:
    class BlockCollisionBoxProcessor& operator=(class BlockCollisionBoxProcessor const &) = delete;
    BlockCollisionBoxProcessor(class BlockCollisionBoxProcessor const &) = delete;
    BlockCollisionBoxProcessor() = delete;
#endif

public:
    /**
     * @symbol  ?_tryBake\@BlockCollisionBoxProcessor\@\@SAXPEBUBlockRotationComponent\@\@PEAUBlockCollisionBoxComponent\@\@\@Z
     */
    MCAPI static void _tryBake(struct BlockRotationComponent const *, struct BlockCollisionBoxComponent *);
    /**
     * @symbol  ?getProcessor\@BlockCollisionBoxProcessor\@\@SA?AV?$unique_ptr\@VEntityComponentProcessor\@Util\@\@U?$default_delete\@VEntityComponentProcessor\@Util\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI static std::unique_ptr<class Util::EntityComponentProcessor> getProcessor();

};