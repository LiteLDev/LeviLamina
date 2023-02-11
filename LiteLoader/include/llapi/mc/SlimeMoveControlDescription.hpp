/**
 * @file  SlimeMoveControlDescription.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class SlimeMoveControlDescription.
 *
 */
class SlimeMoveControlDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SLIMEMOVECONTROLDESCRIPTION
public:
    class SlimeMoveControlDescription& operator=(class SlimeMoveControlDescription const &) = delete;
    SlimeMoveControlDescription(class SlimeMoveControlDescription const &) = delete;
    SlimeMoveControlDescription() = delete;
#endif

public:
    /**
     * @hash   -1857667204
     * @vftbl  0
     * @symbol  ?getJsonName\@SlimeMoveControlDescription\@\@UEBAPEBDXZ
     */
    virtual char const * getJsonName() const;
    /**
     * @vftbl  1
     * @symbol  __unk_destructor_1
     */
    virtual ~SlimeMoveControlDescription();
    /**
     * @hash   -320472969
     * @vftbl  2
     * @symbol  ?deserializeData\@SlimeMoveControlDescription\@\@UEAAXUDeserializeDataParams\@\@\@Z
     */
    virtual void deserializeData(struct DeserializeDataParams);
    /**
     * @hash   1401140833
     * @vftbl  3
     * @symbol  ?serializeData\@SlimeMoveControlDescription\@\@UEBAXAEAVValue\@Json\@\@\@Z
     */
    virtual void serializeData(class Json::Value &) const;

};