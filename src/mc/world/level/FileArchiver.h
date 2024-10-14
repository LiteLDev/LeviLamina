#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/IAsyncResult.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

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
    struct EduCloudImportInfo;
    class IWorldConverter;
    class ProgressReporter;
    struct Result;
    // clang-format on

    // FileArchiver inner types define
    struct EduCloudImportInfo {
    public:
        // prevent constructor by default
        EduCloudImportInfo& operator=(EduCloudImportInfo const&);
        EduCloudImportInfo(EduCloudImportInfo const&);
        EduCloudImportInfo();

    public:
        // NOLINTBEGIN
        MCAPI ~EduCloudImportInfo();

        // NOLINTEND

        // thunks
    public:
        // NOLINTBEGIN
        MCAPI void dtor$();

        // NOLINTEND
    };

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
        MCVAPI void clear();

        MCVAPI ~ProgressReporter();

        // NOLINTEND

        // thunks
    public:
        // NOLINTBEGIN
        MCAPI static void** $vftableForBedrockEnableNonOwnerReferences();

        MCAPI static void** $vftableForCoreZipUtilsZipProgress();

        MCAPI void dtor$();

        MCAPI void clear$();

        // NOLINTEND
    };

    struct Result {
    public:
        // prevent constructor by default
        Result& operator=(Result const&);
        Result(Result const&);

    public:
        // NOLINTBEGIN
        MCAPI Result();

        MCAPI ~Result();

        // NOLINTEND

        // thunks
    public:
        // NOLINTBEGIN
        template <class... Args>
        auto* ctor$(Args... args) {
            return std::construct_at(this, std::forward<Args>(args)...);
        }

        MCAPI void dtor$();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    FileArchiver& operator=(FileArchiver const&);
    FileArchiver(FileArchiver const&);
    FileArchiver();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~FileArchiver() = default;

    MCAPI FileArchiver(
        class Scheduler&                                                  scheduler,
        class ILevelListCache&                                            levelListCache,
        Bedrock::NotNullNonOwnerPtr<class Core::FilePathManager> const&   pathManager,
        Bedrock::NotNullNonOwnerPtr<class IResourcePackRepository> const& resourcePackRepository,
        bool                                                              isEditorModeEnabled,
        std::unique_ptr<class FileArchiver::IWorldConverter>              worldConverter,
        Bedrock::NotNullNonOwnerPtr<class IContentKeyProvider const>      keyProvider,
        Bedrock::NotNullNonOwnerPtr<class LevelDbEnv>                     levelDbEnv,
        std::function<void(std::string const&)>                           displayMessageFunction
    );

    MCAPI std::shared_ptr<class Bedrock::Threading::IAsyncResult<struct FileArchiver::Result>>
          exportPack(class Core::Path const& path, class Core::Path const& exportFilePath);

    MCAPI void exportPack(
        class Core::Path const&                           path,
        class Core::Path const&                           exportFilePath,
        std::function<void(struct FileArchiver::Result&)> exportCallback
    );

    MCAPI void setWorldConverter(std::unique_ptr<class FileArchiver::IWorldConverter>);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _printLevelResultMessage(struct FileArchiver::Result const& result);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI static std::string const& EXTENSION_ADDON();

    MCAPI static std::string const& EXTENSION_EDITOR_ADDON();

    MCAPI static std::string const& EXTENSION_PROJECT();

    MCAPI static std::string const& EXTENSION_RESOURCEPACK();

    MCAPI static std::string const& EXTENSION_TEMPLATE();

    MCAPI static std::string const& EXTENSION_VANILLA();

    MCAPI static std::string const& IMPORT_LOCK_FILE();

    // NOLINTEND
};
