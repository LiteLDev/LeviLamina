#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace edu { enum class Role; }
// clang-format on

class RoleChecker {

public:
    // prevent constructor by default
    RoleChecker& operator=(RoleChecker const&) = delete;
    RoleChecker(RoleChecker const&)            = delete;

public:
    /**
     * @symbol ??0RoleChecker\@\@QEAA\@XZ
     */
    MCAPI RoleChecker(); // NOLINT
    /**
     * @symbol
     * ?checkRole\@RoleChecker\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$function\@$$A6AXW4Role\@edu\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@1\@Z\@3\@\@Z
     */
    MCAPI void
    checkRole(std::string const&, class std::function<void(enum class edu::Role, std::string const&, std::string const&)>); // NOLINT
    /**
     * @symbol ?lookupInProgress\@RoleChecker\@\@QEBA_NXZ
     */
    MCAPI bool lookupInProgress() const; // NOLINT
    /**
     * @symbol ??1RoleChecker\@\@QEAA\@XZ
     */
    MCAPI ~RoleChecker(); // NOLINT
};
