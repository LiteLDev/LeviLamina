/**
 * @file  NavigationWalkDescription.hpp
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
 * @brief MC class NavigationWalkDescription.
 *
 */
class NavigationWalkDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NAVIGATIONWALKDESCRIPTION
public:
    class NavigationWalkDescription& operator=(class NavigationWalkDescription const &) = delete;
    NavigationWalkDescription(class NavigationWalkDescription const &) = delete;
    NavigationWalkDescription() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  ?getJsonName\@NavigationWalkDescription\@\@UEBAPEBDXZ
     */
    virtual char const * getJsonName() const;
    /**
     * @vftbl  1
     * @symbol  __unk_destructor_1
     */
    virtual ~NavigationWalkDescription();

};