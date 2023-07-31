#pragma once

#include "mc/_HeaderOutputPredefine.h"

class AnimationScriptsDescription {

public:
    // prevent constructor by default
    AnimationScriptsDescription& operator=(AnimationScriptsDescription const&) = delete;
    AnimationScriptsDescription(AnimationScriptsDescription const&)            = delete;
    AnimationScriptsDescription()                                              = delete;

public:
    // NOLINTBEGIN
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
    // NOLINTEND
};
