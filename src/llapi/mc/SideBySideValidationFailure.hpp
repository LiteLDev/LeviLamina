/**
 * @file  SideBySideValidationFailure.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC structure SideBySideValidationFailure.
 *
 */
struct SideBySideValidationFailure {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SIDEBYSIDEVALIDATIONFAILURE
public:
    struct SideBySideValidationFailure& operator=(struct SideBySideValidationFailure const &) = delete;
    SideBySideValidationFailure(struct SideBySideValidationFailure const &) = delete;
    SideBySideValidationFailure() = delete;
#endif

public:
    /**
     * @symbol  ?generateMessage\@SideBySideValidationFailure\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_N00AEBV23\@AEBVVec3\@\@\@Z
     */
    MCAPI std::string generateMessage(bool, bool, bool, std::string const &, class Vec3 const &) const;
    /**
     * @symbol  ??1SideBySideValidationFailure\@\@QEAA\@XZ
     */
    MCAPI ~SideBySideValidationFailure();
    /**
     * @symbol  ?toString\@SideBySideValidationFailure\@\@SA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4FailureReason\@1\@\@Z
     */
    MCAPI static std::string toString(enum class SideBySideValidationFailure::FailureReason);

};