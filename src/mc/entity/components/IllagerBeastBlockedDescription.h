#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IllagerBeastBlockedDescription {

public:
    // prevent constructor by default
    IllagerBeastBlockedDescription& operator=(IllagerBeastBlockedDescription const&) = delete;
    IllagerBeastBlockedDescription(IllagerBeastBlockedDescription const&)            = delete;
    IllagerBeastBlockedDescription()                                                 = delete;

public:
    /**
     * @vftbl 0
     * @symbol ?getJsonName\@IllagerBeastBlockedDescription\@\@UEBAPEBDXZ
     */
    virtual char const* getJsonName() const; // NOLINT
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1(); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?deserializeData\@IllagerBeastBlockedDescription\@\@UEAAXUDeserializeDataParams\@\@\@Z
     */
    virtual void deserializeData(struct DeserializeDataParams); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ILLAGERBEASTBLOCKEDDESCRIPTION
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~IllagerBeastBlockedDescription(); // NOLINT
#endif
};
