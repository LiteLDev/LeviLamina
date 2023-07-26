/**
 * @file  InsideBlockNotifierComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class InsideBlockNotifierComponent.
 *
 */
class InsideBlockNotifierComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INSIDEBLOCKNOTIFIERCOMPONENT
public:
    class InsideBlockNotifierComponent& operator=(class InsideBlockNotifierComponent const &) = delete;
    InsideBlockNotifierComponent(class InsideBlockNotifierComponent const &) = delete;
    InsideBlockNotifierComponent() = delete;
#endif

public:
    /**
     * @symbol  ?getBlockList\@InsideBlockNotifierComponent\@\@QEBAAEBV?$vector\@VInsideBlockEventMap\@\@V?$allocator\@VInsideBlockEventMap\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<class InsideBlockEventMap> const & getBlockList() const;
    /**
     * @symbol  ?isTrackedBlock\@InsideBlockNotifierComponent\@\@QEBA_NAEBVBlock\@\@\@Z
     */
    MCAPI bool isTrackedBlock(class Block const &) const;
    /**
     * @symbol  ?resetBlocksInsideState\@InsideBlockNotifierComponent\@\@QEAAXXZ
     */
    MCAPI void resetBlocksInsideState();
    /**
     * @symbol  ?setInsideBlock\@InsideBlockNotifierComponent\@\@QEAAXAEBVBlock\@\@_N\@Z
     */
    MCAPI void setInsideBlock(class Block const &, bool);

};