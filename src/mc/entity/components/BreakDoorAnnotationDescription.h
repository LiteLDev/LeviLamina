#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BreakDoorAnnotationDescription {

public:
    // prevent constructor by default
    BreakDoorAnnotationDescription& operator=(BreakDoorAnnotationDescription const&) = delete;
    BreakDoorAnnotationDescription(BreakDoorAnnotationDescription const&)            = delete;
    BreakDoorAnnotationDescription()                                                 = delete;

public:
    /**
     * @vftbl 0
     * @symbol ?getJsonName\@BreakDoorAnnotationDescription\@\@UEBAPEBDXZ
     */
    virtual char const* getJsonName() const; // NOLINT
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1(); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?deserializeData\@BreakDoorAnnotationDescription\@\@UEAAXUDeserializeDataParams\@\@\@Z
     */
    virtual void deserializeData(struct DeserializeDataParams); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BREAKDOORANNOTATIONDESCRIPTION
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~BreakDoorAnnotationDescription(); // NOLINT
#endif
};
