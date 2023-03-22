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


class EDUWorldsScreenCapabilities {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EDUWORLDSSCREENCAPABILITIES
public:
    class EDUWorldsScreenCapabilities& operator=(class EDUWorldsScreenCapabilities const &) = delete;
    EDUWorldsScreenCapabilities(class EDUWorldsScreenCapabilities const &) = delete;
    EDUWorldsScreenCapabilities() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?isOfType\@?$TypedScreenCapabilities\@UEDUWorldsScreenCapabilities\@\@\@\@UEBA_NV?$typeid_t\@VIScreenCapabilities\@\@\@\@\@Z
     */
    virtual bool isOfType(class typeid_t<class IScreenCapabilities>) const;

};
