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
    MCAPI explicit TradeTableDataLoader(class ItemRegistryRef itemRegistry);

    MCAPI class Puv::LoadResult<struct TradeTableData> load(std::string const& input) const;

    MCAPI ~TradeTableDataLoader();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    // NOLINTEND
};
