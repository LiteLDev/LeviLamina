#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
// clang-format on

class TradeTables {

public:
    // prevent constructor by default
    TradeTables& operator=(TradeTables const&) = delete;
    TradeTables(TradeTables const&)            = delete;
    TradeTables()                              = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?fetchTable\@TradeTables\@\@QEAAPEAUTradeTable\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI struct TradeTable* fetchTable(std::string const&);
    /**
     * @symbol ?reload\@TradeTables\@\@QEAAXAEAVLevel\@\@\@Z
     */
    MCAPI void reload(class Level&);
    /**
     * @symbol ??1TradeTables\@\@QEAA\@XZ
     */
    MCAPI ~TradeTables();
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?_parseAndStoreTradeTable\@TradeTables\@\@AEAAXVItemRegistryRef\@\@PEAVResourcePackManager\@\@AEBVPath\@Core\@\@\@Z
     */
    MCAPI void _parseAndStoreTradeTable(class ItemRegistryRef, class ResourcePackManager*, class Core::Path const&);
    // NOLINTEND
};
