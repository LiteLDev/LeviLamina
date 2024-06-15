#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct TradeTableData {
public:
    // prevent constructor by default
    TradeTableData& operator=(TradeTableData const&);
    TradeTableData(TradeTableData const&);

public:
    // NOLINTBEGIN
    // symbol: ??0TradeTableData@@QEAA@XZ
    MCAPI TradeTableData();

    // symbol: ??1TradeTableData@@QEAA@XZ
    MCAPI ~TradeTableData();

    // symbol:
    // ?parseJson@TradeTableData@@SA?AU1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VItemRegistryRef@@@Z
    MCAPI static struct TradeTableData parseJson(std::string const&, class ItemRegistryRef);

    // NOLINTEND
};
