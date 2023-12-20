#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/LoadResult.h"

class TradeTableDataLoader {
public:
    // prevent constructor by default
    TradeTableDataLoader& operator=(TradeTableDataLoader const&);
    TradeTableDataLoader(TradeTableDataLoader const&);
    TradeTableDataLoader();

public:
    // NOLINTBEGIN
    // symbol: ??0TradeTableDataLoader@@QEAA@VItemRegistryRef@@@Z
    MCAPI explicit TradeTableDataLoader(class ItemRegistryRef);

    // symbol:
    // ?load@TradeTableDataLoader@@QEBA?AV?$LoadResult@UTradeTableData@@@Puv@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI class Puv::LoadResult<struct TradeTableData> load(std::string const&) const;

    // symbol: ??1TradeTableDataLoader@@QEAA@XZ
    MCAPI ~TradeTableDataLoader();

    // NOLINTEND
};
