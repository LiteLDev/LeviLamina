/**
 * @file  BlockSelectionBoxProcessor.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "Util.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class BlockSelectionBoxProcessor.
 *
 */
class BlockSelectionBoxProcessor {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKSELECTIONBOXPROCESSOR
public:
    class BlockSelectionBoxProcessor& operator=(class BlockSelectionBoxProcessor const &) = delete;
    BlockSelectionBoxProcessor(class BlockSelectionBoxProcessor const &) = delete;
    BlockSelectionBoxProcessor() = delete;
#endif

public:
    /**
     * @symbol  ?_tryBake\@BlockSelectionBoxProcessor\@\@SAXPEBUBlockRotationComponent\@\@PEAUBlockSelectionBoxComponent\@\@\@Z
     */
    MCAPI static void _tryBake(struct BlockRotationComponent const *, struct BlockSelectionBoxComponent *);
    /**
     * @symbol  ?getProcessor\@BlockSelectionBoxProcessor\@\@SA?AV?$unique_ptr\@VEntityComponentProcessor\@Util\@\@U?$default_delete\@VEntityComponentProcessor\@Util\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI static std::unique_ptr<class Util::EntityComponentProcessor> getProcessor();

};