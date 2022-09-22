/**
 * @file  FileArchiver.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Core.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
#include <future>

#undef BEFORE_EXTRA

/**
 * @brief MC class FileArchiver.
 *
 */
class FileArchiver {

#define AFTER_EXTRA
// Add Member There
public:
struct Result {
    Result() = delete;
    Result(Result const&) = delete;
    Result(Result const&&) = delete;
};

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FILEARCHIVER
public:
    class FileArchiver& operator=(class FileArchiver const &) = delete;
    FileArchiver(class FileArchiver const &) = delete;
    FileArchiver() = delete;
#endif

public:
    /**
     * @hash   -1229906755
     * @symbol ?archivePack@FileArchiver@@QEAA?AV?$future@UResult@FileArchiver@@@std@@AEBVPath@Core@@0V?$function@$$A6AXAEAUResult@FileArchiver@@@Z@3@@Z
     */
    MCAPI class std::future<struct FileArchiver::Result> archivePack(class Core::Path const &, class Core::Path const &, class std::function<void (struct FileArchiver::Result &)>);
    /**
     * @hash   -795143491
     * @symbol ?EXTENSION_ADDON@FileArchiver@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const EXTENSION_ADDON;
    /**
     * @hash   741690633
     * @symbol ?EXTENSION_RESOURCEPACK@FileArchiver@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const EXTENSION_RESOURCEPACK;
    /**
     * @hash   1857396591
     * @symbol ?EXTENSION_TEMPLATE@FileArchiver@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const EXTENSION_TEMPLATE;
    /**
     * @hash   1747023155
     * @symbol ?EXTENSION_VANILLA@FileArchiver@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const EXTENSION_VANILLA;
    /**
     * @hash   -1115843513
     * @symbol ?IMPORT_LOCK_FILE@FileArchiver@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const IMPORT_LOCK_FILE;

//private:
    /**
     * @hash   703178537
     * @symbol ?_printLevelResultMessage@FileArchiver@@AEAAXAEBUResult@1@@Z
     */
    MCAPI void _printLevelResultMessage(struct FileArchiver::Result const &);

private:

};