#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct JumpControlDescription {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_JUMPCONTROLDESCRIPTION
public:
    JumpControlDescription& operator=(JumpControlDescription const&) = delete;
    JumpControlDescription(JumpControlDescription const&)            = delete;
    JumpControlDescription()                                         = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol ?getJsonName\@JumpControlDescription\@\@UEBAPEBDXZ
     */
    virtual char const* getJsonName() const;
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl 2
     * @symbol ?deserializeData\@JumpControlDescription\@\@UEAAXUDeserializeDataParams\@\@\@Z
     */
    virtual void deserializeData(struct DeserializeDataParams);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_JUMPCONTROLDESCRIPTION
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~JumpControlDescription();
#endif
};
