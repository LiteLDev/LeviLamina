#pragma once

#include "mc/_HeaderOutputPredefine.h"

class AnimationScriptsDescription {

public:
    // prevent constructor by default
    AnimationScriptsDescription& operator=(AnimationScriptsDescription const&) = delete;
    AnimationScriptsDescription(AnimationScriptsDescription const&)            = delete;
    AnimationScriptsDescription()                                              = delete;

public:
    /**
     * @vftbl 0
     * @symbol ?getJsonName\@AnimationScriptsDescription\@\@UEBAPEBDXZ
     */
    virtual char const* getJsonName() const; // NOLINT
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1(); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?deserializeData\@AnimationScriptsDescription\@\@UEAAXUDeserializeDataParams\@\@\@Z
     */
    virtual void deserializeData(struct DeserializeDataParams); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ANIMATIONSCRIPTSDESCRIPTION
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~AnimationScriptsDescription(); // NOLINT
#endif
};
