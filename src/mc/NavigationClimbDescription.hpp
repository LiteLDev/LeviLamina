/**
 * @file  NavigationClimbDescription.hpp
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
 * @brief MC class NavigationClimbDescription.
 *
 */
class NavigationClimbDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NAVIGATIONCLIMBDESCRIPTION
public:
    class NavigationClimbDescription& operator=(class NavigationClimbDescription const &) = delete;
    NavigationClimbDescription(class NavigationClimbDescription const &) = delete;
    NavigationClimbDescription() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  ?getJsonName\@NavigationClimbDescription\@\@UEBAPEBDXZ
     */
    virtual char const * getJsonName() const;
    /**
     * @vftbl  1
     * @symbol  __unk_destructor_1
     */
    virtual ~NavigationClimbDescription();

};