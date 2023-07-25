#pragma once

#include "mc/_HeaderOutputPredefine.h"

class GlideMoveControlDescription {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GLIDEMOVECONTROLDESCRIPTION
public:
    GlideMoveControlDescription& operator=(GlideMoveControlDescription const&) = delete;
    GlideMoveControlDescription(GlideMoveControlDescription const&)            = delete;
    GlideMoveControlDescription()                                              = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol ?getJsonName\@GlideMoveControlDescription\@\@UEBAPEBDXZ
     */
    virtual char const* getJsonName() const;
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl 2
     * @symbol ?deserializeData\@GlideMoveControlDescription\@\@UEAAXUDeserializeDataParams\@\@\@Z
     */
    virtual void deserializeData(struct DeserializeDataParams);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_GLIDEMOVECONTROLDESCRIPTION
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~GlideMoveControlDescription();
#endif
};
