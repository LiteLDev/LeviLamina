/**
 * @file  StartScreenCapabilities.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA


class StartScreenCapabilities {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STARTSCREENCAPABILITIES
public:
    class StartScreenCapabilities& operator=(class StartScreenCapabilities const &) = delete;
    StartScreenCapabilities(class StartScreenCapabilities const &) = delete;
    StartScreenCapabilities() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?isOfType\@?$TypedScreenCapabilities\@UStartScreenCapabilities\@\@\@\@UEBA_NV?$typeid_t\@VIScreenCapabilities\@\@\@\@\@Z
     */
    virtual bool isOfType(class typeid_t<class IScreenCapabilities>) const;

};
