/**
 * @file  EDUWorldsScreenCapabilities.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC structure EDUWorldsScreenCapabilities.
 *
 */
struct EDUWorldsScreenCapabilities {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EDUWORLDSSCREENCAPABILITIES
public:
    struct EDUWorldsScreenCapabilities& operator=(struct EDUWorldsScreenCapabilities const &) = delete;
    EDUWorldsScreenCapabilities(struct EDUWorldsScreenCapabilities const &) = delete;
    EDUWorldsScreenCapabilities() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~EDUWorldsScreenCapabilities();
    /**
     * @vftbl  1
     * @symbol  ?isOfType\@?$TypedScreenCapabilities\@UEDUWorldsScreenCapabilities\@\@\@\@UEBA_NV?$typeid_t\@VIScreenCapabilities\@\@\@\@\@Z
     */
    virtual bool isOfType(class typeid_t<class IScreenCapabilities>) const;

};