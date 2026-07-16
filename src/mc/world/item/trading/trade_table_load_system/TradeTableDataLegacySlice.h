#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_21_30/item/trading/TradeTableData.h"

namespace TradeTableLoadSystem {

struct TradeTableDataLegacySlice {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::SharedTypes::v1_21_30::TradeTableData> mData;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI static ::SharedTypes::v1_21_30::TradeTableData
    upgrade(::TradeTableLoadSystem::TradeTableDataLegacySlice&& legacySlice);
#endif
    // NOLINTEND
};

} // namespace TradeTableLoadSystem
