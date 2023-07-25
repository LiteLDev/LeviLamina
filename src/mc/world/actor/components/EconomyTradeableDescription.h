#pragma once

#include "mc/_HeaderOutputPredefine.h"

class EconomyTradeableDescription {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ECONOMYTRADEABLEDESCRIPTION
public:
    EconomyTradeableDescription& operator=(EconomyTradeableDescription const&) = delete;
    EconomyTradeableDescription(EconomyTradeableDescription const&)            = delete;
    EconomyTradeableDescription()                                              = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol ?getJsonName\@EconomyTradeableDescription\@\@UEBAPEBDXZ
     */
    virtual char const* getJsonName() const;
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl 2
     * @symbol ?deserializeData\@EconomyTradeableDescription\@\@UEAAXUDeserializeDataParams\@\@\@Z
     */
    virtual void deserializeData(struct DeserializeDataParams);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ECONOMYTRADEABLEDESCRIPTION
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~EconomyTradeableDescription();
#endif
};
