#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ResolvedItemIconInfo {

public:
    // prevent constructor by default
    ResolvedItemIconInfo& operator=(ResolvedItemIconInfo const&) = delete;
    ResolvedItemIconInfo(ResolvedItemIconInfo const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol
     * ??0ResolvedItemIconInfo\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@HW4ItemIconInfoType\@\@\@Z
     */
    MCAPI ResolvedItemIconInfo(std::string const&, int, enum class ItemIconInfoType);
    /**
     * @symbol
     * ??0ResolvedItemIconInfo\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@MMMMGG\@Z
     */
    MCAPI ResolvedItemIconInfo(std::string const&, float, float, float, float, unsigned short, unsigned short);
    /**
     * @symbol ??0ResolvedItemIconInfo\@\@QEAA\@IH\@Z
     */
    MCAPI ResolvedItemIconInfo(unsigned int, int);
    /**
     * @symbol ??0ResolvedItemIconInfo\@\@QEAA\@XZ
     */
    MCAPI ResolvedItemIconInfo();
    /**
     * @symbol ??1ResolvedItemIconInfo\@\@QEAA\@XZ
     */
    MCAPI ~ResolvedItemIconInfo();
    // NOLINTEND
};
