/**
 * @file  IdentifierDescription.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class IdentifierDescription.
 *
 */
class IdentifierDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_IDENTIFIERDESCRIPTION
public:
    class IdentifierDescription& operator=(class IdentifierDescription const &) = delete;
    IdentifierDescription(class IdentifierDescription const &) = delete;
    IdentifierDescription() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~IdentifierDescription();
    /**
     * @vftbl  1
     * @symbol  ?getJsonName\@IdentifierDescription\@\@UEBAPEBDXZ
     */
    virtual char const * getJsonName() const;

};