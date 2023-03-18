/**
 * @file  AnimationScriptsDescription.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class AnimationScriptsDescription.
 *
 */
class AnimationScriptsDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ANIMATIONSCRIPTSDESCRIPTION
public:
    class AnimationScriptsDescription& operator=(class AnimationScriptsDescription const &) = delete;
    AnimationScriptsDescription(class AnimationScriptsDescription const &) = delete;
    AnimationScriptsDescription() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol ?getJsonName\@AnimationScriptsDescription\@\@UEBAPEBDXZ
     */
    virtual char const * getJsonName() const;
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
