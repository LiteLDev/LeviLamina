/**
 * @file  IsSummonableDescription.hpp
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
 * @brief MC class IsSummonableDescription.
 *
 */
class IsSummonableDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ISSUMMONABLEDESCRIPTION
public:
    class IsSummonableDescription& operator=(class IsSummonableDescription const &) = delete;
    IsSummonableDescription(class IsSummonableDescription const &) = delete;
    IsSummonableDescription() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~IsSummonableDescription();
    /**
     * @vftbl  1
     * @symbol  ?getJsonName\@IsSummonableDescription\@\@UEBAPEBDXZ
     */
    virtual char const * getJsonName() const;
    /**
     * @symbol  ?parse\@IsSummonableDescription\@\@QEAAXAEBVValue\@Json\@\@\@Z
     */
    MCAPI void parse(class Json::Value const &);

};