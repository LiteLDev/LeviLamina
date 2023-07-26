#pragma once

#include "mc/_HeaderOutputPredefine.h"

class MobEffectChangeDescription {

public:
    // prevent constructor by default
    MobEffectChangeDescription& operator=(MobEffectChangeDescription const&) = delete;
    MobEffectChangeDescription(MobEffectChangeDescription const&)            = delete;
    MobEffectChangeDescription()                                             = delete;

public:
    /**
     * @vftbl 0
     * @symbol ?getJsonName\@MobEffectChangeDescription\@\@UEBAPEBDXZ
     */
    virtual char const* getJsonName() const; // NOLINT
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1(); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?deserializeData\@MobEffectChangeDescription\@\@UEAAXUDeserializeDataParams\@\@\@Z
     */
    virtual void deserializeData(struct DeserializeDataParams); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MOBEFFECTCHANGEDESCRIPTION
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~MobEffectChangeDescription(); // NOLINT
#endif
};
