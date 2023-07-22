/**
 * @file  DefaultScreenCapabilities.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC structure DefaultScreenCapabilities.
 *
 */
struct DefaultScreenCapabilities {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DEFAULTSCREENCAPABILITIES
public:
    struct DefaultScreenCapabilities& operator=(struct DefaultScreenCapabilities const &) = delete;
    DefaultScreenCapabilities(struct DefaultScreenCapabilities const &) = delete;
    DefaultScreenCapabilities() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~DefaultScreenCapabilities();
    /**
     * @vftbl  1
     * @symbol  ?isOfType\@?$TypedScreenCapabilities\@UDefaultScreenCapabilities\@\@\@\@UEBA_NV?$typeid_t\@VIScreenCapabilities\@\@\@\@\@Z
     */
    virtual bool isOfType(class typeid_t<class IScreenCapabilities>) const;

};