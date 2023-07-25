#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace edu { enum class Role; }
// clang-format on

class RoleChecker {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ROLECHECKER
public:
    RoleChecker& operator=(RoleChecker const&) = delete;
    RoleChecker(RoleChecker const&)            = delete;
#endif

public:
    /**
     * @symbol ??0RoleChecker\@\@QEAA\@XZ
     */
    MCAPI RoleChecker();
    /**
     * @symbol
     * ?checkRole\@RoleChecker\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$function\@$$A6AXW4Role\@edu\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@1\@Z\@3\@\@Z
     */
    MCAPI void
    checkRole(std::string const&, class std::function<void(enum class edu::Role, std::string const&, std::string const&)>);
    /**
     * @symbol ?lookupInProgress\@RoleChecker\@\@QEBA_NXZ
     */
    MCAPI bool lookupInProgress() const;
    /**
     * @symbol ??1RoleChecker\@\@QEAA\@XZ
     */
    MCAPI ~RoleChecker();
};
