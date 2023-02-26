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

/**
 * @brief MC structure ActiveDirectoryScreenCapabilities.
 *
 */
struct ActiveDirectoryScreenCapabilities {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTIVEDIRECTORYSCREENCAPABILITIES
public:
    struct ActiveDirectoryScreenCapabilities& operator=(struct ActiveDirectoryScreenCapabilities const &) = delete;
    ActiveDirectoryScreenCapabilities(struct ActiveDirectoryScreenCapabilities const &) = delete;
    ActiveDirectoryScreenCapabilities() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~ActiveDirectoryScreenCapabilities();
    /**
     * @vftbl  1
     * @symbol  ?isOfType\@?$TypedScreenCapabilities\@UActiveDirectoryScreenCapabilities\@\@\@\@UEBA_NV?$typeid_t\@VIScreenCapabilities\@\@\@\@\@Z
     */
    virtual bool isOfType(class typeid_t<class IScreenCapabilities>) const;

};