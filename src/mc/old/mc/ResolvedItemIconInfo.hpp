/**
 * @file  ResolvedItemIconInfo.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

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
     * @symbol  ??0ResolvedItemIconInfo\@\@QEAA\@XZ
     */
    MCAPI ResolvedItemIconInfo();
    /**
     * @symbol  ??0ResolvedItemIconInfo\@\@QEAA\@IH\@Z
     */
    MCAPI ResolvedItemIconInfo(unsigned int, int);
    /**
     * @symbol  ??0ResolvedItemIconInfo\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@MMMMGG\@Z
     */
    MCAPI ResolvedItemIconInfo(std::string const &, float, float, float, float, unsigned short, unsigned short);
    /**
     * @symbol  ??0ResolvedItemIconInfo\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@HW4ItemIconInfoType\@\@\@Z
     */
    MCAPI ResolvedItemIconInfo(std::string const &, int, enum class ItemIconInfoType);
    /**
     * @symbol  ??1ResolvedItemIconInfo\@\@QEAA\@XZ
     */
    MCAPI ~ResolvedItemIconInfo();

};