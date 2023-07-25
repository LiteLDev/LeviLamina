#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IdentifierDescription {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_IDENTIFIERDESCRIPTION
public:
    IdentifierDescription& operator=(IdentifierDescription const&) = delete;
    IdentifierDescription(IdentifierDescription const&)            = delete;
    IdentifierDescription()                                        = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getJsonName\@IdentifierDescription\@\@UEBAPEBDXZ
     */
    virtual char const* getJsonName() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_IDENTIFIERDESCRIPTION
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~IdentifierDescription();
#endif
};
