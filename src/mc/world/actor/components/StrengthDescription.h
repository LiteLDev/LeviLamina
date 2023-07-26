#pragma once

#include "mc/_HeaderOutputPredefine.h"

class StrengthDescription {

public:
    // prevent constructor by default
    StrengthDescription& operator=(StrengthDescription const&) = delete;
    StrengthDescription(StrengthDescription const&)            = delete;
    StrengthDescription()                                      = delete;

public:
    /**
     * @vftbl 0
     * @symbol ?getJsonName\@StrengthDescription\@\@UEBAPEBDXZ
     */
    virtual char const* getJsonName() const; // NOLINT
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1(); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?deserializeData\@StrengthDescription\@\@UEAAXUDeserializeDataParams\@\@\@Z
     */
    virtual void deserializeData(struct DeserializeDataParams); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_STRENGTHDESCRIPTION
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~StrengthDescription(); // NOLINT
#endif
};
