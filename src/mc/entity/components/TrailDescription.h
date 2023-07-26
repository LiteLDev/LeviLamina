#pragma once

#include "mc/_HeaderOutputPredefine.h"

class TrailDescription {

public:
    // prevent constructor by default
    TrailDescription& operator=(TrailDescription const&) = delete;
    TrailDescription(TrailDescription const&)            = delete;

public:
    /**
     * @vftbl 0
     * @symbol ?getJsonName\@TrailDescription\@\@UEBAPEBDXZ
     */
    virtual char const* getJsonName() const; // NOLINT
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1(); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?deserializeData\@TrailDescription\@\@UEAAXUDeserializeDataParams\@\@\@Z
     */
    virtual void deserializeData(struct DeserializeDataParams); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_TRAILDESCRIPTION
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~TrailDescription(); // NOLINT
#endif
    /**
     * @symbol ??0TrailDescription\@\@QEAA\@XZ
     */
    MCAPI TrailDescription(); // NOLINT
};
