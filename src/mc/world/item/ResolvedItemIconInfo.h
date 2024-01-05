#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/components/ItemIconInfoType.h"

struct ResolvedItemIconInfo {
public:
    // prevent constructor by default
    ResolvedItemIconInfo& operator=(ResolvedItemIconInfo const&);
    ResolvedItemIconInfo(ResolvedItemIconInfo const&);

public:
    // NOLINTBEGIN
    // symbol: ??0ResolvedItemIconInfo@@QEAA@XZ
    MCAPI ResolvedItemIconInfo();

    // symbol: ??0ResolvedItemIconInfo@@QEAA@IH@Z
    MCAPI ResolvedItemIconInfo(uint, int frame);

    // symbol:
    // ??0ResolvedItemIconInfo@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HW4ItemIconInfoType@@@Z
    MCAPI ResolvedItemIconInfo(std::string const& name, int frame, ::ItemIconInfoType type);

    // symbol: ??0ResolvedItemIconInfo@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@MMMMGG@Z
    MCAPI ResolvedItemIconInfo(std::string const& name, float u0, float u1, float v0, float v1, ushort, ushort);

    // symbol: ??1ResolvedItemIconInfo@@QEAA@XZ
    MCAPI ~ResolvedItemIconInfo();

    // NOLINTEND
};
