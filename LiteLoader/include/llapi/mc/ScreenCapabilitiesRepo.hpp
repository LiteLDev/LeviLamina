/**
 * @file  ScreenCapabilitiesRepo.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ScreenCapabilitiesRepo.
 *
 */
class ScreenCapabilitiesRepo {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCREENCAPABILITIESREPO
public:
    class ScreenCapabilitiesRepo& operator=(class ScreenCapabilitiesRepo const &) = delete;
    ScreenCapabilitiesRepo(class ScreenCapabilitiesRepo const &) = delete;
#endif

public:
    /**
     * @symbol  ??0ScreenCapabilitiesRepo\@\@QEAA\@XZ
     */
    MCAPI ScreenCapabilitiesRepo();
    /**
     * @symbol  ?get\@ScreenCapabilitiesRepo\@\@QEBA?AV?$unique_ptr\@VIScreenCapabilities\@\@U?$default_delete\@VIScreenCapabilities\@\@\@std\@\@\@std\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@\@Z
     */
    MCAPI std::unique_ptr<class IScreenCapabilities> get(std::string const &) const;

};