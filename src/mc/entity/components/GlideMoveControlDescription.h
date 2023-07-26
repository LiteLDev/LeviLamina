#pragma once

#include "mc/_HeaderOutputPredefine.h"

class GlideMoveControlDescription {

public:
    // prevent constructor by default
    GlideMoveControlDescription& operator=(GlideMoveControlDescription const&) = delete;
    GlideMoveControlDescription(GlideMoveControlDescription const&)            = delete;
    GlideMoveControlDescription()                                              = delete;

public:
    /**
     * @vftbl 0
     * @symbol ?getJsonName\@GlideMoveControlDescription\@\@UEBAPEBDXZ
     */
    virtual char const* getJsonName() const; // NOLINT
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1(); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?deserializeData\@GlideMoveControlDescription\@\@UEAAXUDeserializeDataParams\@\@\@Z
     */
    virtual void deserializeData(struct DeserializeDataParams); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_GLIDEMOVECONTROLDESCRIPTION
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~GlideMoveControlDescription(); // NOLINT
#endif
};
