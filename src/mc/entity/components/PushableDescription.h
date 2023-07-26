#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PushableDescription {

public:
    // prevent constructor by default
    PushableDescription& operator=(PushableDescription const&) = delete;
    PushableDescription(PushableDescription const&)            = delete;

public:
    /**
     * @vftbl 0
     * @symbol ?getJsonName\@PushableDescription\@\@UEBAPEBDXZ
     */
    virtual char const* getJsonName() const; // NOLINT
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1(); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?deserializeData\@PushableDescription\@\@UEAAXUDeserializeDataParams\@\@\@Z
     */
    virtual void deserializeData(struct DeserializeDataParams); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PUSHABLEDESCRIPTION
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~PushableDescription(); // NOLINT
#endif
    /**
     * @symbol ??0PushableDescription\@\@QEAA\@XZ
     */
    MCAPI PushableDescription(); // NOLINT
};
