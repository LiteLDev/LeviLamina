#pragma once

#include "mc/_HeaderOutputPredefine.h"

class DwellerDescription {

public:
    // prevent constructor by default
    DwellerDescription& operator=(DwellerDescription const&) = delete;
    DwellerDescription(DwellerDescription const&)            = delete;
    DwellerDescription()                                     = delete;

public:
    /**
     * @vftbl 0
     * @symbol ?getJsonName\@DwellerDescription\@\@UEBAPEBDXZ
     */
    virtual char const* getJsonName() const; // NOLINT
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1(); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?deserializeData\@DwellerDescription\@\@UEAAXUDeserializeDataParams\@\@\@Z
     */
    virtual void deserializeData(struct DeserializeDataParams); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_DWELLERDESCRIPTION
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~DwellerDescription(); // NOLINT
#endif
};
