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
    MCAPI explicit TradeTableDataLoader(class ItemRegistryRef);

    MCAPI class Puv::LoadResult<struct TradeTableData> load(std::string const&) const;

    MCAPI ~TradeTableDataLoader();

    // NOLINTEND
};
