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

    MCAPI static struct TradeTableData parseJson(std::string const& input, class ItemRegistryRef itemRegistry);

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
