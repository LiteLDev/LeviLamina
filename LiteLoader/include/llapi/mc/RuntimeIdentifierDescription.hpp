/**
 * @file  RuntimeIdentifierDescription.hpp
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
 * @brief MC class RuntimeIdentifierDescription.
 *
 */
class RuntimeIdentifierDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RUNTIMEIDENTIFIERDESCRIPTION
public:
    class RuntimeIdentifierDescription& operator=(class RuntimeIdentifierDescription const &) = delete;
    RuntimeIdentifierDescription(class RuntimeIdentifierDescription const &) = delete;
    RuntimeIdentifierDescription() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~RuntimeIdentifierDescription();
    /**
     * @vftbl  1
     * @symbol  ?getJsonName\@RuntimeIdentifierDescription\@\@UEBAPEBDXZ
     */
    virtual char const * getJsonName() const;
    /**
     * @symbol  ?parse\@RuntimeIdentifierDescription\@\@QEAAXAEBVValue\@Json\@\@\@Z
     */
    MCAPI void parse(class Json::Value const &);

};