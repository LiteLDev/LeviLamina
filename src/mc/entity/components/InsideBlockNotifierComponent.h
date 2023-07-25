#pragma once

#include "mc/_HeaderOutputPredefine.h"

class InsideBlockNotifierComponent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INSIDEBLOCKNOTIFIERCOMPONENT
public:
    InsideBlockNotifierComponent& operator=(InsideBlockNotifierComponent const&) = delete;
    InsideBlockNotifierComponent(InsideBlockNotifierComponent const&)            = delete;
    InsideBlockNotifierComponent()                                               = delete;
#endif

public:
    /**
     * @symbol
     * ?getBlockList\@InsideBlockNotifierComponent\@\@QEBAAEBV?$vector\@VInsideBlockEventMap\@\@V?$allocator\@VInsideBlockEventMap\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<class InsideBlockEventMap> const& getBlockList() const;
    /**
     * @symbol ?isTrackedBlock\@InsideBlockNotifierComponent\@\@QEBA_NAEBVBlock\@\@\@Z
     */
    MCAPI bool isTrackedBlock(class Block const&) const;
    /**
     * @symbol ?resetBlocksInsideState\@InsideBlockNotifierComponent\@\@QEAAXXZ
     */
    MCAPI void resetBlocksInsideState();
    /**
     * @symbol ?setInsideBlock\@InsideBlockNotifierComponent\@\@QEAAXAEBVBlock\@\@_N\@Z
     */
    MCAPI void setInsideBlock(class Block const&, bool);
};
