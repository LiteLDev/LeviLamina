#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace PoolAliasBinding {

class PoolAliasLookup {
public:
    // prevent constructor by default
    PoolAliasLookup& operator=(PoolAliasLookup const&);
    PoolAliasLookup(PoolAliasLookup const&);
    PoolAliasLookup();

public:
    // NOLINTBEGIN
    // symbol:
    // ?lookup@PoolAliasLookup@PoolAliasBinding@@QEBAPEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV34@@Z
    MCAPI std::string const* lookup(std::string const&) const;

    // symbol: ??1PoolAliasLookup@PoolAliasBinding@@QEAA@XZ
    MCAPI ~PoolAliasLookup();

    // NOLINTEND
};

}; // namespace PoolAliasBinding
