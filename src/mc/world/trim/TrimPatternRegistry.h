#pragma once

#include "mc/_HeaderOutputPredefine.h"

class TrimPatternRegistry {
public:
    // prevent constructor by default
    TrimPatternRegistry& operator=(TrimPatternRegistry const&);
    TrimPatternRegistry(TrimPatternRegistry const&);
    TrimPatternRegistry();

public:
    // NOLINTBEGIN
    // symbol:
    // ?getAllEntries@TrimPatternRegistry@@QEBA?AV?$vector@UTrimPattern@@V?$allocator@UTrimPattern@@@std@@@std@@XZ
    MCAPI std::vector<struct TrimPattern> getAllEntries() const;

    // symbol: ?initializeServer@TrimPatternRegistry@@QEAAXVItemRegistryRef@@@Z
    MCAPI void initializeServer(class ItemRegistryRef);

    // NOLINTEND
};
