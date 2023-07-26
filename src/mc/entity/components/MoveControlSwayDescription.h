#pragma once

#include "mc/_HeaderOutputPredefine.h"

class MoveControlSwayDescription {

public:
    // prevent constructor by default
    MoveControlSwayDescription& operator=(MoveControlSwayDescription const&) = delete;
    MoveControlSwayDescription(MoveControlSwayDescription const&)            = delete;
    MoveControlSwayDescription()                                             = delete;

public:
    /**
     * @vftbl 0
     * @symbol ?getJsonName\@MoveControlSwayDescription\@\@UEBAPEBDXZ
     */
    virtual char const* getJsonName() const; // NOLINT
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1(); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?deserializeData\@MoveControlSwayDescription\@\@UEAAXUDeserializeDataParams\@\@\@Z
     */
    virtual void deserializeData(struct DeserializeDataParams); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MOVECONTROLSWAYDESCRIPTION
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~MoveControlSwayDescription(); // NOLINT
#endif
};
