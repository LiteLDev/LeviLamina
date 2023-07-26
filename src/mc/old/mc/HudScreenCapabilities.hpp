/**
 * @file  HudScreenCapabilities.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC structure HudScreenCapabilities.
 *
 */
struct HudScreenCapabilities {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HUDSCREENCAPABILITIES
public:
    struct HudScreenCapabilities& operator=(struct HudScreenCapabilities const &) = delete;
    HudScreenCapabilities(struct HudScreenCapabilities const &) = delete;
    HudScreenCapabilities() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~HudScreenCapabilities();
    /**
     * @vftbl  1
     * @symbol  ?isOfType\@?$TypedScreenCapabilities\@UHudScreenCapabilities\@\@\@\@UEBA_NV?$typeid_t\@VIScreenCapabilities\@\@\@\@\@Z
     */
    virtual bool isOfType(class typeid_t<class IScreenCapabilities>) const;

};