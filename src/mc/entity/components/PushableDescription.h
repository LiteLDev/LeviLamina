#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PushableDescription {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PUSHABLEDESCRIPTION
public:
    PushableDescription& operator=(PushableDescription const&) = delete;
    PushableDescription(PushableDescription const&)            = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol ?getJsonName\@PushableDescription\@\@UEBAPEBDXZ
     */
    virtual char const* getJsonName() const;
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl 2
     * @symbol ?deserializeData\@PushableDescription\@\@UEAAXUDeserializeDataParams\@\@\@Z
     */
    virtual void deserializeData(struct DeserializeDataParams);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PUSHABLEDESCRIPTION
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~PushableDescription();
#endif
    /**
     * @symbol ??0PushableDescription\@\@QEAA\@XZ
     */
    MCAPI PushableDescription();
};
