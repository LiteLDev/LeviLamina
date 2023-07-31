#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/Description.h"

class TradeResupplyDescription : public ::Description {

public:
    // prevent constructor by default
    TradeResupplyDescription& operator=(TradeResupplyDescription const&) = delete;
    TradeResupplyDescription(TradeResupplyDescription const&)            = delete;
    TradeResupplyDescription()                                           = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol ?getJsonName\@TradeResupplyDescription\@\@UEBAPEBDXZ
     */
    virtual char const* getJsonName() const;
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_TRADERESUPPLYDESCRIPTION
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~TradeResupplyDescription();
#endif
    // NOLINTEND
};
