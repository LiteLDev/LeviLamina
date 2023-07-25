#pragma once

#include "mc/_HeaderOutputPredefine.h"

class MobEffectChangeDescription {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOBEFFECTCHANGEDESCRIPTION
public:
    MobEffectChangeDescription& operator=(MobEffectChangeDescription const&) = delete;
    MobEffectChangeDescription(MobEffectChangeDescription const&)            = delete;
    MobEffectChangeDescription()                                             = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol ?getJsonName\@MobEffectChangeDescription\@\@UEBAPEBDXZ
     */
    virtual char const* getJsonName() const;
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl 2
     * @symbol ?deserializeData\@MobEffectChangeDescription\@\@UEAAXUDeserializeDataParams\@\@\@Z
     */
    virtual void deserializeData(struct DeserializeDataParams);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MOBEFFECTCHANGEDESCRIPTION
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~MobEffectChangeDescription();
#endif
};
