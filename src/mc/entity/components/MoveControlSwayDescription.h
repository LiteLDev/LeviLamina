#pragma once

#include "mc/_HeaderOutputPredefine.h"

class MoveControlSwayDescription {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOVECONTROLSWAYDESCRIPTION
public:
    MoveControlSwayDescription& operator=(MoveControlSwayDescription const&) = delete;
    MoveControlSwayDescription(MoveControlSwayDescription const&)            = delete;
    MoveControlSwayDescription()                                             = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol ?getJsonName\@MoveControlSwayDescription\@\@UEBAPEBDXZ
     */
    virtual char const* getJsonName() const;
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl 2
     * @symbol ?deserializeData\@MoveControlSwayDescription\@\@UEAAXUDeserializeDataParams\@\@\@Z
     */
    virtual void deserializeData(struct DeserializeDataParams);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MOVECONTROLSWAYDESCRIPTION
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~MoveControlSwayDescription();
#endif
};
