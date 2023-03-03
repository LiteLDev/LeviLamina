/**
 * @file  IsSpawnableDescription.hpp
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
 * @brief MC class IsSpawnableDescription.
 *
 */
class IsSpawnableDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ISSPAWNABLEDESCRIPTION
public:
    class IsSpawnableDescription& operator=(class IsSpawnableDescription const &) = delete;
    IsSpawnableDescription(class IsSpawnableDescription const &) = delete;
    IsSpawnableDescription() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~IsSpawnableDescription();
    /**
     * @vftbl  1
     * @symbol  ?getJsonName\@IsSpawnableDescription\@\@UEBAPEBDXZ
     */
    virtual char const * getJsonName() const;
    /**
     * @symbol  ?parse\@IsSpawnableDescription\@\@QEAAXAEBVValue\@Json\@\@\@Z
     */
    MCAPI void parse(class Json::Value const &);

};