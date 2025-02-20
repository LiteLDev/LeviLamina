#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Level;
class ResourcePackManager;
struct TradeTable;
namespace Core { class Path; }
// clang-format on

class TradeTables {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk1d798d;
    // NOLINTEND

public:
    // prevent constructor by default
    TradeTables& operator=(TradeTables const&);
    TradeTables(TradeTables const&);
    TradeTables();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _parseAndStoreTradeTable(
        ::Level&               level,
        ::ResourcePackManager* resourceLoader,
        ::Core::Path const&    tradeTablePath,
        bool                   usingUpcomingCreatorFeaturesExperiment
    );

    MCAPI ::TradeTable* fetchTable(::std::string const& path);

    MCAPI void reload(::Level& level, bool usingUpcomingCreatorFeaturesExperiment);

    MCAPI ~TradeTables();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
