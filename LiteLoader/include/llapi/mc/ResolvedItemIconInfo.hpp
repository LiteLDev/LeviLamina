/**
 * @file  ResolvedItemIconInfo.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC structure ResolvedItemIconInfo.
 *
 */
struct ResolvedItemIconInfo {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RESOLVEDITEMICONINFO
public:
    struct ResolvedItemIconInfo& operator=(struct ResolvedItemIconInfo const &) = delete;
    ResolvedItemIconInfo(struct ResolvedItemIconInfo const &) = delete;
#endif

public:
    /**
     * @hash   1078462494
     * @symbol  ??0ResolvedItemIconInfo\@\@QEAA\@XZ
     */
    MCAPI ResolvedItemIconInfo();
    /**
     * @hash   -982705492
     * @symbol  ??0ResolvedItemIconInfo\@\@QEAA\@IH\@Z
     */
    MCAPI ResolvedItemIconInfo(unsigned int, int);
    /**
     * @hash   1965526579
     * @symbol  ??0ResolvedItemIconInfo\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@MMMMGG\@Z
     */
    MCAPI ResolvedItemIconInfo(std::string const &, float, float, float, float, unsigned short, unsigned short);
    /**
     * @hash   1144606989
     * @symbol  ??0ResolvedItemIconInfo\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@HW4ItemIconInfoType\@\@\@Z
     */
    MCAPI ResolvedItemIconInfo(std::string const &, int, enum class ItemIconInfoType);
    /**
     * @hash   942705612
     * @symbol  ??1ResolvedItemIconInfo\@\@QEAA\@XZ
     */
    MCAPI ~ResolvedItemIconInfo();

};