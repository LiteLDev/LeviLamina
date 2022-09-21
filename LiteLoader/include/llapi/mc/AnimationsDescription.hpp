/**
 * @file  MC/AnimationsDescription.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class AnimationsDescription.
 *
 */
class AnimationsDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ANIMATIONSDESCRIPTION
public:
    class AnimationsDescription& operator=(class AnimationsDescription const &) = delete;
    AnimationsDescription(class AnimationsDescription const &) = delete;
#endif

public:
    /**
     * @hash   -1149886281
     * @vftbl  0
     * @symbol ?getJsonName@AnimationsDescription@@UEBAPEBDXZ
     */
    virtual char const * getJsonName() const;
    /**
     * @vftbl  1
     * @symbol __unk_destructor_1
     */
    virtual ~AnimationsDescription();
    /**
     * @hash   2081798268
     * @vftbl  2
     * @symbol ?deserializeData@AnimationsDescription@@UEAAXUDeserializeDataParams@@@Z
     */
    virtual void deserializeData(struct DeserializeDataParams);
    /**
     * @hash   -1624058026
     * @vftbl  3
     * @symbol ?serializeData@AnimationsDescription@@UEBAXAEAVValue@Json@@@Z
     */
    virtual void serializeData(class Json::Value &) const;
    /**
     * @hash   -1645439351
     * @symbol ??0AnimationsDescription@@QEAA@XZ
     */
    MCAPI AnimationsDescription();

};