#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
// clang-format on

class TradeTables {
public:
    // prevent constructor by default
    TradeTables& operator=(TradeTables const&);
    TradeTables(TradeTables const&);
    TradeTables();

public:
    // NOLINTBEGIN
    MCAPI struct TradeTable* fetchTable(std::string const& path);

    MCAPI void reload(class Level& level);

    MCAPI ~TradeTables();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _parseAndStoreTradeTable(
        class ItemRegistryRef      itemRegistry,
        class ResourcePackManager* resourceLoader,
        class Core::Path const&    tradeTablePath
    );

    // NOLINTEND
};
