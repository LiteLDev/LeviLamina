/**
 * @file  FileArchiver.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "../../Bedrock.hpp"
#include "../../Core.hpp"

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
     * @symbol  ??0FileArchiver\@\@QEAA\@AEAVScheduler\@\@AEAVILevelListCache\@\@AEBV?$not_null\@V?$NonOwnerPointer\@VFilePathManager\@Core\@\@\@Bedrock\@\@\@gsl\@\@AEAVIResourcePackRepository\@\@_NV?$unique_ptr\@VIWorldConverter\@FileArchiver\@\@U?$default_delete\@VIWorldConverter\@FileArchiver\@\@\@std\@\@\@std\@\@V?$not_null\@V?$NonOwnerPointer\@$$CBVIContentKeyProvider\@\@\@Bedrock\@\@\@4\@V?$not_null\@V?$NonOwnerPointer\@VLevelDbEnv\@\@\@Bedrock\@\@\@4\@V?$function\@$$A6AXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z\@7\@\@Z
     */
    MCAPI FileArchiver(class Scheduler &, class ILevelListCache &, class gsl::not_null<class Bedrock::NonOwnerPointer<class Core::FilePathManager>> const &, class IResourcePackRepository &, bool, std::unique_ptr<class FileArchiver::IWorldConverter>, class gsl::not_null<class Bedrock::NonOwnerPointer<class IContentKeyProvider const>>, class gsl::not_null<class Bedrock::NonOwnerPointer<class LevelDbEnv>>, class std::function<void (std::string const &)>);
    /**
     * @symbol  ?exportPack\@FileArchiver\@\@QEAA?AV?$shared_ptr\@V?$IAsyncResult\@UResult\@FileArchiver\@\@\@Threading\@Bedrock\@\@\@std\@\@AEBVPath\@Core\@\@0\@Z
     */
    MCAPI class std::shared_ptr<class Bedrock::Threading::IAsyncResult<struct FileArchiver::Result>> exportPack(class Core::Path const &, class Core::Path const &);
    /**
     * @symbol  ?exportPack\@FileArchiver\@\@QEAAXAEBVPath\@Core\@\@0V?$function\@$$A6AXAEAUResult\@FileArchiver\@\@\@Z\@std\@\@\@Z
     */
    MCAPI void exportPack(class Core::Path const &, class Core::Path const &, class std::function<void (struct FileArchiver::Result &)>);
    /**
     * @symbol  ?setWorldConverter\@FileArchiver\@\@QEAAXV?$unique_ptr\@VIWorldConverter\@FileArchiver\@\@U?$default_delete\@VIWorldConverter\@FileArchiver\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void setWorldConverter(std::unique_ptr<class FileArchiver::IWorldConverter>);
    /**
     * @hash   1204889709
     * @symbol  ?EXTENSION_ADDON\@FileArchiver\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const EXTENSION_ADDON;
    /**
     * @symbol  ?EXTENSION_EDITOR_ADDON\@FileArchiver\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const EXTENSION_EDITOR_ADDON;
    /**
     * @hash   -1891760385
     * @symbol  ?EXTENSION_PROJECT\@FileArchiver\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const EXTENSION_PROJECT;
    /**
     * @hash   -1553243463
     * @symbol  ?EXTENSION_RESOURCEPACK\@FileArchiver\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const EXTENSION_RESOURCEPACK;
    /**
     * @hash   -437537505
     * @symbol  ?EXTENSION_TEMPLATE\@FileArchiver\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const EXTENSION_TEMPLATE;
    /**
     * @hash   -547910941
     * @symbol  ?EXTENSION_VANILLA\@FileArchiver\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const EXTENSION_VANILLA;
    /**
     * @hash   884189687
     * @symbol  ?IMPORT_LOCK_FILE\@FileArchiver\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const IMPORT_LOCK_FILE;

//private:
    /**
     * @hash   1421560633
     * @symbol  ?_printLevelResultMessage\@FileArchiver\@\@AEAAXAEBUResult\@1\@\@Z
     */
    MCAPI void _printLevelResultMessage(struct FileArchiver::Result const &);

private:

};