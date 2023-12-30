#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct FilterInputDefinition {
public:
    // prevent constructor by default
    FilterInputDefinition& operator=(FilterInputDefinition const&);
    FilterInputDefinition(FilterInputDefinition const&);
    FilterInputDefinition();

public:
    // NOLINTBEGIN
    // symbol:
    // ??0FilterInputDefinition@@QEAA@VFilterInput@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI FilterInputDefinition(class FilterInput f, std::string const& d);

    // symbol: ??1FilterInputDefinition@@QEAA@XZ
    MCAPI ~FilterInputDefinition();

    // NOLINTEND
};
