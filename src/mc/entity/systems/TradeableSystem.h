#pragma once

#include "mc/_HeaderOutputPredefine.h"

class TradeableSystem {

public:
    // prevent constructor by default
    TradeableSystem& operator=(TradeableSystem const&) = delete;
    TradeableSystem(TradeableSystem const&)            = delete;
    TradeableSystem()                                  = delete;

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
     * @symbol ?tick\@TradeableSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry&); // NOLINT
};
