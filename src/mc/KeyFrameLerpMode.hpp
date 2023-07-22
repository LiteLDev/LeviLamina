/**
 * @file  KeyFrameLerpMode.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class KeyFrameLerpMode.
 *
 */
class KeyFrameLerpMode {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_KEYFRAMELERPMODE
public:
    KeyFrameLerpMode(class KeyFrameLerpMode const &) = delete;
    KeyFrameLerpMode() = delete;
#endif

public:
    /**
     * @symbol  ?getPrecomputedCubicCoeffs\@KeyFrameLerpMode\@\@QEBAAEBU?$mat\@$03$03M$0A\@\@glm\@\@XZ
     */
    MCAPI struct glm::mat<4, 4, float, 0> const & getPrecomputedCubicCoeffs() const;
    /**
     * @symbol  ??4KeyFrameLerpMode\@\@QEAAAEAV0\@AEBV0\@\@Z
     */
    MCAPI class KeyFrameLerpMode & operator=(class KeyFrameLerpMode const &);
    /**
     * @symbol  ?setLerpStyle\@KeyFrameLerpMode\@\@QEAAXW4KeyFrameLerpStyle\@\@\@Z
     */
    MCAPI void setLerpStyle(enum class KeyFrameLerpStyle);

};