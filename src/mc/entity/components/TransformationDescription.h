#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct TransformationDescription {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TRANSFORMATIONDESCRIPTION
public:
    TransformationDescription& operator=(TransformationDescription const&) = delete;
    TransformationDescription(TransformationDescription const&)            = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol ?getJsonName\@TransformationDescription\@\@UEBAPEBDXZ
     */
    virtual char const* getJsonName() const;
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl 2
     * @symbol ?deserializeData\@TransformationDescription\@\@UEAAXUDeserializeDataParams\@\@\@Z
     */
    virtual void deserializeData(struct DeserializeDataParams);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_TRANSFORMATIONDESCRIPTION
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~TransformationDescription();
#endif
    /**
     * @symbol ??0TransformationDescription\@\@QEAA\@XZ
     */
    MCAPI TransformationDescription();
};
