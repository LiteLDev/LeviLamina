#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct TransformationDescription {

public:
    // prevent constructor by default
    TransformationDescription& operator=(TransformationDescription const&) = delete;
    TransformationDescription(TransformationDescription const&)            = delete;

public:
    /**
     * @vftbl 0
     * @symbol ?getJsonName\@TransformationDescription\@\@UEBAPEBDXZ
     */
    virtual char const* getJsonName() const; // NOLINT
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1(); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?deserializeData\@TransformationDescription\@\@UEAAXUDeserializeDataParams\@\@\@Z
     */
    virtual void deserializeData(struct DeserializeDataParams); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_TRANSFORMATIONDESCRIPTION
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~TransformationDescription(); // NOLINT
#endif
    /**
     * @symbol ??0TransformationDescription\@\@QEAA\@XZ
     */
    MCAPI TransformationDescription(); // NOLINT
};
