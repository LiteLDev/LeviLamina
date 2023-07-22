/**
 * @file  CodeScreenCapabilities.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC structure CodeScreenCapabilities.
 *
 */
struct CodeScreenCapabilities {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CODESCREENCAPABILITIES
public:
    struct CodeScreenCapabilities& operator=(struct CodeScreenCapabilities const &) = delete;
    CodeScreenCapabilities(struct CodeScreenCapabilities const &) = delete;
    CodeScreenCapabilities() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~CodeScreenCapabilities();
    /**
     * @vftbl  1
     * @symbol  ?isOfType\@?$TypedScreenCapabilities\@UCodeScreenCapabilities\@\@\@\@UEBA_NV?$typeid_t\@VIScreenCapabilities\@\@\@\@\@Z
     */
    virtual bool isOfType(class typeid_t<class IScreenCapabilities>) const;

};