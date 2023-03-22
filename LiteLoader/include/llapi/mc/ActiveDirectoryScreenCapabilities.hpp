/**
 * @file  ActiveDirectoryScreenCapabilities.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA


class ActiveDirectoryScreenCapabilities {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTIVEDIRECTORYSCREENCAPABILITIES
public:
    class ActiveDirectoryScreenCapabilities& operator=(class ActiveDirectoryScreenCapabilities const &) = delete;
    ActiveDirectoryScreenCapabilities(class ActiveDirectoryScreenCapabilities const &) = delete;
    ActiveDirectoryScreenCapabilities() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?isOfType\@?$TypedScreenCapabilities\@UActiveDirectoryScreenCapabilities\@\@\@\@UEBA_NV?$typeid_t\@VIScreenCapabilities\@\@\@\@\@Z
     */
    virtual bool isOfType(class typeid_t<class IScreenCapabilities>) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ACTIVEDIRECTORYSCREENCAPABILITIES
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ActiveDirectoryScreenCapabilities();
#endif

};
