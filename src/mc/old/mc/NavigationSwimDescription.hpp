/**
 * @file  NavigationSwimDescription.hpp
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
 * @brief MC class NavigationSwimDescription.
 *
 */
class NavigationSwimDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NAVIGATIONSWIMDESCRIPTION
public:
    class NavigationSwimDescription& operator=(class NavigationSwimDescription const &) = delete;
    NavigationSwimDescription(class NavigationSwimDescription const &) = delete;
    NavigationSwimDescription() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  ?getJsonName\@NavigationSwimDescription\@\@UEBAPEBDXZ
     */
    virtual char const * getJsonName() const;
    /**
     * @vftbl  1
     * @symbol  __unk_destructor_1
     */
    virtual ~NavigationSwimDescription();
    /**
     * @vftbl  3
     * @symbol  ?serializeData\@NavigationSwimDescription\@\@UEBAXAEAVValue\@Json\@\@\@Z
     */
    virtual void serializeData(class Json::Value &) const;

};