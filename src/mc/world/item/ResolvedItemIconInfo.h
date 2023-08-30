#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/components/ItemIconInfoType.h"

struct ResolvedItemIconInfo {

public:
    // prevent constructor by default
    ResolvedItemIconInfo& operator=(ResolvedItemIconInfo const&) = delete;
    ResolvedItemIconInfo(ResolvedItemIconInfo const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0ResolvedItemIconInfo\@\@QEAA\@IH\@Z
     */
    MCAPI ResolvedItemIconInfo(uint32_t, int32_t);
    /**
     * @symbol
     * ??0ResolvedItemIconInfo\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@HW4ItemIconInfoType\@\@\@Z
     */
    MCAPI ResolvedItemIconInfo(std::string const&, int32_t, enum class ItemIconInfoType);
    /**
     * @symbol ??0ResolvedItemIconInfo\@\@QEAA\@XZ
     */
    MCAPI ResolvedItemIconInfo();
    /**
     * @symbol
     * ??0ResolvedItemIconInfo\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@MMMMGG\@Z
     */
    MCAPI ResolvedItemIconInfo(std::string const&, float, float, float, float, uint16_t, uint16_t);
    /**
     * @symbol ??1ResolvedItemIconInfo\@\@QEAA\@XZ
     */
    MCAPI ~ResolvedItemIconInfo();
    // NOLINTEND
};
