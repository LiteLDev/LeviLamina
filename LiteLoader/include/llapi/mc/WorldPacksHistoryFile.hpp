/**
 * @file  WorldPacksHistoryFile.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class WorldPacksHistoryFile.
 *
 */
class WorldPacksHistoryFile {

#define AFTER_EXTRA
// Add Member There
public:
enum class ParseResult;

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WORLDPACKSHISTORYFILE
public:
    class WorldPacksHistoryFile& operator=(class WorldPacksHistoryFile const &) = delete;
    WorldPacksHistoryFile(class WorldPacksHistoryFile const &) = delete;
#endif

public:
    /**
     * @hash   2118426916
     * @symbol ??0WorldPacksHistoryFile@@QEAA@XZ
     */
    MCAPI WorldPacksHistoryFile();
    /**
     * @hash   -574555762
     * @symbol ?getPacks@WorldPacksHistoryFile@@QEBAAEBV?$vector@VWorldPackHistory@@V?$allocator@VWorldPackHistory@@@std@@@std@@XZ
     */
    MCAPI std::vector<class WorldPackHistory> const & getPacks() const;
    /**
     * @hash   -498302018
     * @symbol ?initializeFromJson@WorldPacksHistoryFile@@QEAA?AW4ParseResult@1@AEBVValue@Json@@@Z
     */
    MCAPI enum WorldPacksHistoryFile::ParseResult initializeFromJson(class Json::Value const &);
    /**
     * @hash   459062212
     * @symbol ??1WorldPacksHistoryFile@@QEAA@XZ
     */
    MCAPI ~WorldPacksHistoryFile();

};