#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IllagerBeastBlockedDescription {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ILLAGERBEASTBLOCKEDDESCRIPTION
public:
    IllagerBeastBlockedDescription& operator=(IllagerBeastBlockedDescription const&) = delete;
    IllagerBeastBlockedDescription(IllagerBeastBlockedDescription const&)            = delete;
    IllagerBeastBlockedDescription()                                                 = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol ?getJsonName\@IllagerBeastBlockedDescription\@\@UEBAPEBDXZ
     */
    virtual char const* getJsonName() const;
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl 2
     * @symbol ?deserializeData\@IllagerBeastBlockedDescription\@\@UEAAXUDeserializeDataParams\@\@\@Z
     */
    virtual void deserializeData(struct DeserializeDataParams);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ILLAGERBEASTBLOCKEDDESCRIPTION
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~IllagerBeastBlockedDescription();
#endif
};
