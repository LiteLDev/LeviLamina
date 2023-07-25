#pragma once

#include "mc/_HeaderOutputPredefine.h"

class DynamicJumpControlDescription {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DYNAMICJUMPCONTROLDESCRIPTION
public:
    DynamicJumpControlDescription& operator=(DynamicJumpControlDescription const&) = delete;
    DynamicJumpControlDescription(DynamicJumpControlDescription const&)            = delete;
    DynamicJumpControlDescription()                                                = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol ?getJsonName\@DynamicJumpControlDescription\@\@UEBAPEBDXZ
     */
    virtual char const* getJsonName() const;
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl 2
     * @symbol ?deserializeData\@DynamicJumpControlDescription\@\@UEAAXUDeserializeDataParams\@\@\@Z
     */
    virtual void deserializeData(struct DeserializeDataParams);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_DYNAMICJUMPCONTROLDESCRIPTION
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~DynamicJumpControlDescription();
#endif
};
