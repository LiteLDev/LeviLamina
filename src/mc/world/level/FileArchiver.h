#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/EnableNonOwnerReferences.h"
#include "mc/deps/core/common/bedrock/IAsyncResult.h"
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class EnableNonOwnerReferences; }
namespace Core { class FilePathManager; }
namespace Core { class Path; }
// clang-format on

class FileArchiver : public ::Bedrock::EnableNonOwnerReferences {
public:
    // FileArchiver inner types declare
    // clang-format off
    class IWorldConverter;
    class ProgressReporter;
    struct Result;
    // clang-format on

    // FileArchiver inner types define
    class IWorldConverter {
    public:
        // prevent constructor by default
        IWorldConverter& operator=(IWorldConverter const&);
        IWorldConverter(IWorldConverter const&);
        IWorldConverter();
    };

    class ProgressReporter {
    public:
        // prevent constructor by default
        ProgressReporter& operator=(ProgressReporter const&);
        ProgressReporter(ProgressReporter const&);
        ProgressReporter();

    public:
        // NOLINTBEGIN
        // symbol: ?clear@ProgressReporter@FileArchiver@@UEAAXXZ
        MCVAPI void clear();

        // symbol: ??1ProgressReporter@FileArchiver@@UEAA@XZ
        MCVAPI ~ProgressReporter();

        // NOLINTEND
    };

    struct Result {
    public:
        // prevent constructor by default
        Result& operator=(Result const&);
        Result(Result const&);
        Result();

    public:
        // NOLINTBEGIN
        // symbol: ??1Result@FileArchiver@@QEAA@XZ
        MCAPI ~Result();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    FileArchiver& operator=(FileArchiver const&);
    FileArchiver(FileArchiver const&);
    FileArchiver();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1FileArchiver@@UEAA@XZ
    virtual ~FileArchiver() = default;

    // symbol:
    // ??0FileArchiver@@QEAA@AEAVScheduler@@AEAVILevelListCache@@AEBV?$not_null@V?$NonOwnerPointer@VFilePathManager@Core@@@Bedrock@@@gsl@@AEBV?$not_null@V?$NonOwnerPointer@VIResourcePackRepository@@@Bedrock@@@4@_NV?$unique_ptr@VIWorldConverter@FileArchiver@@U?$default_delete@VIWorldConverter@FileArchiver@@@std@@@std@@V?$not_null@V?$NonOwnerPointer@$$CBVIContentKeyProvider@@@Bedrock@@@4@V?$not_null@V?$NonOwnerPointer@VLevelDbEnv@@@Bedrock@@@4@V?$function@$$A6AXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z@7@@Z
    MCAPI FileArchiver(
        class Scheduler&                                                  scheduler,
        class ILevelListCache&                                            levelListCache,
        Bedrock::NotNullNonOwnerPtr<class Core::FilePathManager> const&   pathManager,
        Bedrock::NotNullNonOwnerPtr<class IResourcePackRepository> const& resourcePackRepository,
        bool,
        std::unique_ptr<class FileArchiver::IWorldConverter>,
        Bedrock::NotNullNonOwnerPtr<class IContentKeyProvider const> keyProvider,
        Bedrock::NotNullNonOwnerPtr<class LevelDbEnv>                levelDbEnv,
        std::function<void(std::string const&)>                      displayMessageFunction
    );

    // symbol:
    // ?exportPack@FileArchiver@@QEAA?AV?$shared_ptr@V?$IAsyncResult@UResult@FileArchiver@@@Threading@Bedrock@@@std@@AEBVPath@Core@@0@Z
    MCAPI std::shared_ptr<class Bedrock::Threading::IAsyncResult<struct FileArchiver::Result>>
          exportPack(class Core::Path const& path, class Core::Path const& exportFilePath);

    // symbol: ?exportPack@FileArchiver@@QEAAXAEBVPath@Core@@0V?$function@$$A6AXAEAUResult@FileArchiver@@@Z@std@@@Z
    MCAPI void exportPack(
        class Core::Path const&                           path,
        class Core::Path const&                           exportFilePath,
        std::function<void(struct FileArchiver::Result&)> exportCallback
    );

    // symbol:
    // ?setWorldConverter@FileArchiver@@QEAAXV?$unique_ptr@VIWorldConverter@FileArchiver@@U?$default_delete@VIWorldConverter@FileArchiver@@@std@@@std@@@Z
    MCAPI void setWorldConverter(std::unique_ptr<class FileArchiver::IWorldConverter>);

    // symbol: ?EXTENSION_ADDON@FileArchiver@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const EXTENSION_ADDON;

    // symbol: ?EXTENSION_EDITOR_ADDON@FileArchiver@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const EXTENSION_EDITOR_ADDON;

    // symbol: ?EXTENSION_PROJECT@FileArchiver@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const EXTENSION_PROJECT;

    // symbol: ?EXTENSION_RESOURCEPACK@FileArchiver@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const EXTENSION_RESOURCEPACK;

    // symbol: ?EXTENSION_TEMPLATE@FileArchiver@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const EXTENSION_TEMPLATE;

    // symbol: ?EXTENSION_VANILLA@FileArchiver@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const EXTENSION_VANILLA;

    // symbol: ?IMPORT_LOCK_FILE@FileArchiver@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const IMPORT_LOCK_FILE;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_printLevelResultMessage@FileArchiver@@AEAAXAEBUResult@1@@Z
    MCAPI void _printLevelResultMessage(struct FileArchiver::Result const& result);

    // NOLINTEND
};
