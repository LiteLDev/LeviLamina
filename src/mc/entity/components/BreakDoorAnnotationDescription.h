#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BreakDoorAnnotationDescription {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BREAKDOORANNOTATIONDESCRIPTION
public:
    BreakDoorAnnotationDescription& operator=(BreakDoorAnnotationDescription const&) = delete;
    BreakDoorAnnotationDescription(BreakDoorAnnotationDescription const&)            = delete;
    BreakDoorAnnotationDescription()                                                 = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol ?getJsonName\@BreakDoorAnnotationDescription\@\@UEBAPEBDXZ
     */
    virtual char const* getJsonName() const;
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl 2
     * @symbol ?deserializeData\@BreakDoorAnnotationDescription\@\@UEAAXUDeserializeDataParams\@\@\@Z
     */
    virtual void deserializeData(struct DeserializeDataParams);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BREAKDOORANNOTATIONDESCRIPTION
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~BreakDoorAnnotationDescription();
#endif
};
