/**
 * @file  NavigationHoverDescription.hpp
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
 * @brief MC class NavigationHoverDescription.
 *
 */
class NavigationHoverDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NAVIGATIONHOVERDESCRIPTION
public:
    class NavigationHoverDescription& operator=(class NavigationHoverDescription const &) = delete;
    NavigationHoverDescription(class NavigationHoverDescription const &) = delete;
    NavigationHoverDescription() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  ?getJsonName\@NavigationHoverDescription\@\@UEBAPEBDXZ
     */
    virtual char const * getJsonName() const;
    /**
     * @vftbl  1
     * @symbol  __unk_destructor_1
     */
    virtual ~NavigationHoverDescription();

};