/**
 * @file  TradeTables.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "Core.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class TradeTables.
 *
 */
class TradeTables {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TRADETABLES
public:
    class TradeTables& operator=(class TradeTables const &) = delete;
    TradeTables(class TradeTables const &) = delete;
    TradeTables() = delete;
#endif

public:
    /**
     * @symbol  ?fetchTable\@TradeTables\@\@QEAAPEAUTradeTable\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI struct TradeTable * fetchTable(std::string const &);
    /**
     * @symbol  ?reload\@TradeTables\@\@QEAAXAEAVLevel\@\@\@Z
     */
    MCAPI void reload(class Level &);
    /**
     * @symbol  ??1TradeTables\@\@QEAA\@XZ
     */
    MCAPI ~TradeTables();

//private:
    /**
     * @symbol  ?_parseAndStoreTradeTable\@TradeTables\@\@AEAAXVItemRegistryRef\@\@PEAVResourcePackManager\@\@AEBVPath\@Core\@\@\@Z
     */
    MCAPI void _parseAndStoreTradeTable(class ItemRegistryRef, class ResourcePackManager *, class Core::Path const &);

private:

};