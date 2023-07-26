#pragma once

#include "mc/_HeaderOutputPredefine.h"

class DynamicJumpControlDescription {

public:
    // prevent constructor by default
    DynamicJumpControlDescription& operator=(DynamicJumpControlDescription const&) = delete;
    DynamicJumpControlDescription(DynamicJumpControlDescription const&)            = delete;
    DynamicJumpControlDescription()                                                = delete;

public:
    /**
     * @vftbl 0
     * @symbol ?getJsonName\@DynamicJumpControlDescription\@\@UEBAPEBDXZ
     */
    virtual char const* getJsonName() const; // NOLINT
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1(); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?deserializeData\@DynamicJumpControlDescription\@\@UEAAXUDeserializeDataParams\@\@\@Z
     */
    virtual void deserializeData(struct DeserializeDataParams); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_DYNAMICJUMPCONTROLDESCRIPTION
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~DynamicJumpControlDescription(); // NOLINT
#endif
};
