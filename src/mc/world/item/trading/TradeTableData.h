#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct TradeTableData {
public:
    // prevent constructor by default
    TradeTableData& operator=(TradeTableData const&);
    TradeTableData(TradeTableData const&);

public:
    // NOLINTBEGIN
    MCAPI TradeTableData();

    MCAPI ~TradeTableData();

    MCAPI static struct TradeTableData parseJson(std::string const&, class ItemRegistryRef);

    // NOLINTEND
};
