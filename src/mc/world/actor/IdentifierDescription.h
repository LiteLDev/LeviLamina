#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IdentifierDescription {

public:
    // prevent constructor by default
    IdentifierDescription& operator=(IdentifierDescription const&) = delete;
    IdentifierDescription(IdentifierDescription const&)            = delete;
    IdentifierDescription()                                        = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?getJsonName\@IdentifierDescription\@\@UEBAPEBDXZ
     */
    virtual char const* getJsonName() const; // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_IDENTIFIERDESCRIPTION
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~IdentifierDescription(); // NOLINT
#endif
};
