/**
 * @file  AnimationScriptsDescription.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "../../Json.hpp"

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
     * @hash   1716796940
     * @vftbl  0
     * @symbol  ?getJsonName\@AnimationScriptsDescription\@\@UEBAPEBDXZ
     */
    virtual char const * getJsonName() const;
    /**
     * @vftbl  1
     * @symbol  __unk_destructor_1
     */
    virtual ~AnimationScriptsDescription();
    /**
     * @hash   1509945463
     * @vftbl  2
     * @symbol  ?deserializeData\@AnimationScriptsDescription\@\@UEAAXUDeserializeDataParams\@\@\@Z
     */
    virtual void deserializeData(struct DeserializeDataParams);
    /**
     * @hash   923825329
     * @vftbl  3
     * @symbol  ?serializeData\@AnimationScriptsDescription\@\@UEBAXAEAVValue\@Json\@\@\@Z
     */
    virtual void serializeData(class Json::Value &) const;

};