/**
 * @file  DynamicJumpControlDescription.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class DynamicJumpControlDescription.
 *
 */
class DynamicJumpControlDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DYNAMICJUMPCONTROLDESCRIPTION
public:
    class DynamicJumpControlDescription& operator=(class DynamicJumpControlDescription const &) = delete;
    DynamicJumpControlDescription(class DynamicJumpControlDescription const &) = delete;
    DynamicJumpControlDescription() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  ?getJsonName\@DynamicJumpControlDescription\@\@UEBAPEBDXZ
     */
    virtual char const * getJsonName() const;
    /**
     * @vftbl  1
     * @symbol  __unk_destructor_1
     */
    virtual ~DynamicJumpControlDescription();
    /**
     * @vftbl  2
     * @symbol  ?deserializeData\@DynamicJumpControlDescription\@\@UEAAXUDeserializeDataParams\@\@\@Z
     */
    virtual void deserializeData(struct DeserializeDataParams);
    /**
     * @vftbl  3
     * @symbol  ?serializeData\@DynamicJumpControlDescription\@\@UEBAXAEAVValue\@Json\@\@\@Z
     */
    virtual void serializeData(class Json::Value &) const;

};