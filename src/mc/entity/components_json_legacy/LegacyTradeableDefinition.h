#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LegacyTradeableDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mDisplayName;
    ::ll::TypedStorage<8, 32, ::std::string> mTradeTablePath;
    ::ll::TypedStorage<1, 1, bool>           mUseNewTradeScreen;
    ::ll::TypedStorage<1, 1, bool>           mPersistTrades;
    ::ll::TypedStorage<1, 1, bool>           mConvertTradesEconomy;
    // NOLINTEND
};
