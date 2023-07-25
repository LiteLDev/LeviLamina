#pragma once

#include "mc/_HeaderOutputPredefine.h"

class AnimationScriptsDescription {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ANIMATIONSCRIPTSDESCRIPTION
public:
    AnimationScriptsDescription& operator=(AnimationScriptsDescription const&) = delete;
    AnimationScriptsDescription(AnimationScriptsDescription const&)            = delete;
    AnimationScriptsDescription()                                              = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol ?getJsonName\@AnimationScriptsDescription\@\@UEBAPEBDXZ
     */
    virtual char const* getJsonName() const;
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl 2
     * @symbol ?deserializeData\@AnimationScriptsDescription\@\@UEAAXUDeserializeDataParams\@\@\@Z
     */
    virtual void deserializeData(struct DeserializeDataParams);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ANIMATIONSCRIPTSDESCRIPTION
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~AnimationScriptsDescription();
#endif
};
