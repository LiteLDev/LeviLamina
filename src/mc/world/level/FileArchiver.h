#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/ZipProgress.h"
#include "mc/deps/core/threading/IAsyncResult.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/world/level/FileArchiverOutcome.h"

// auto generated forward declare list
// clang-format off
class FilePickerSettings;
class IContentKeyProvider;
class ILevelListCache;
class IResourcePackRepository;
class Level;
class LevelData;
class LevelDbEnv;
class PackInstance;
class Scheduler;
namespace Core { class FilePathManager; }
namespace Core { class Path; }
// clang-format on

class FileArchiver : public ::Bedrock::EnableNonOwnerReferences {
public:
    // FileArchiver inner types declare
    // clang-format off
    struct CopyWorldResult;
    struct EduCloudImportInfo;
    struct ExportData;
    class IWorldConverter;
    struct ImportWorldsResult;
    class ProgressReporter;
    struct Result;
    // clang-format on

    // FileArchiver inner types define
    enum class State : int {
        Idle      = 0,
        Importing = 1,
        Exporting = 2,
    };

    enum class ExportType : int {
        Level               = 0,
        Template            = 1,
        Project             = 2,
        Playtest            = 3,
        PlayableEditorLevel = 4,
    };

    enum class ShowToast : int {
        Enabled  = 0,
        Disabled = 1,
    };

    struct Result {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4>  mUnkc94804;
        ::ll::UntypedStorage<8, 32> mUnkfe577c;
        ::ll::UntypedStorage<8, 32> mUnk16be28;
        ::ll::UntypedStorage<8, 32> mUnk10b96a;
        // NOLINTEND

    public:
        // prevent constructor by default
        Result& operator=(Result const&);
        Result(Result const&);
        Result();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~Result();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD void $dtor();
        // NOLINTEND
    };

    struct ExportData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 32>  mUnk38d4e0;
        ::ll::UntypedStorage<8, 8>   mUnkf19c1e;
        ::ll::UntypedStorage<8, 104> mUnk964e6e;
        ::ll::UntypedStorage<8, 16>  mUnkd7ebd0;
        ::ll::UntypedStorage<8, 8>   mUnk7c0645;
        // NOLINTEND

    public:
        // prevent constructor by default
        ExportData& operator=(ExportData const&);
        ExportData(ExportData const&);

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ExportData();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor();
        // NOLINTEND
    };

    struct CopyWorldResult {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4>  mUnk778e6c;
        ::ll::UntypedStorage<8, 32> mUnkda9d25;
        ::ll::UntypedStorage<8, 32> mUnk682adb;
        // NOLINTEND

    public:
        // prevent constructor by default
        CopyWorldResult& operator=(CopyWorldResult const&);
        CopyWorldResult(CopyWorldResult const&);
        CopyWorldResult();
    };

    class ProgressReporter : public ::Core::ZipUtils::ZipProgress, public ::Bedrock::EnableNonOwnerReferences {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 80> mUnk8ebde1;
        ::ll::UntypedStorage<8, 32> mUnk779bef;
        ::ll::UntypedStorage<8, 32> mUnkf98d02;
        // NOLINTEND

    public:
        // prevent constructor by default
        ProgressReporter& operator=(ProgressReporter const&);
        ProgressReporter(ProgressReporter const&);
        ProgressReporter();

    public:
        // virtual functions
        // NOLINTBEGIN
        // vIndex: 0
        virtual ~ProgressReporter() /*override*/;

        // vIndex: 1
        virtual void clear() /*override*/;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI void setProgressMessage(::std::string const& message);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
        MCAPI void $clear();
        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCAPI static void** $vftableForZipProgress();

        MCAPI static void** $vftableForEnableNonOwnerReferences();
        // NOLINTEND
    };

    class IWorldConverter {
    public:
        // virtual functions
        // NOLINTBEGIN
        // vIndex: 0
        virtual ~IWorldConverter() = default;

        // vIndex: 1
        virtual void
        enqueueConvertImportingWorldTasks(::std::shared_ptr<::FileArchiver::Result>&, ::Bedrock::NotNullNonOwnerPtr<::FileArchiver::ProgressReporter>, ::std::shared_ptr<::Bedrock::Threading::IAsyncResult<void>>&) = 0;

        // vIndex: 2
        virtual bool shouldCopyWorldForConversion(::std::string const&) const = 0;

        // vIndex: 3
        virtual void
        enqueueConvertExportingWorldTasks(::std::shared_ptr<::FileArchiver::ExportData>&, ::Bedrock::NotNullNonOwnerPtr<::FileArchiver::ProgressReporter>, ::std::shared_ptr<::Bedrock::Threading::IAsyncResult<void>>&, ::std::function<void(::LevelData&)>) = 0;
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN

        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN

        // NOLINTEND
    };

    struct ImportWorldsResult {
    public:
        // ImportWorldsResult inner types declare
        // clang-format off
        struct ImportWorldResult;
        // clang-format on

        // ImportWorldsResult inner types define
        struct ImportWorldResult {
        public:
            // member variables
            // NOLINTBEGIN
            ::ll::UntypedStorage<4, 4>  mUnk8489b5;
            ::ll::UntypedStorage<8, 32> mUnkdc292c;
            // NOLINTEND

        public:
            // prevent constructor by default
            ImportWorldResult& operator=(ImportWorldResult const&);
            ImportWorldResult(ImportWorldResult const&);
            ImportWorldResult();
        };

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4>  mUnk856e52;
        ::ll::UntypedStorage<8, 24> mUnk9e1682;
        // NOLINTEND

    public:
        // prevent constructor by default
        ImportWorldsResult& operator=(ImportWorldsResult const&);
        ImportWorldsResult(ImportWorldsResult const&);
        ImportWorldsResult();
    };

    struct EduCloudImportInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<1, 1>  mUnk11f7fb;
        ::ll::UntypedStorage<1, 1>  mUnk2dde90;
        ::ll::UntypedStorage<8, 32> mUnk670419;
        ::ll::UntypedStorage<8, 32> mUnkaf07f1;
        ::ll::UntypedStorage<8, 32> mUnk1f8bcf;
        // NOLINTEND

    public:
        // prevent constructor by default
        EduCloudImportInfo& operator=(EduCloudImportInfo const&);
        EduCloudImportInfo(EduCloudImportInfo const&);
        EduCloudImportInfo();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~EduCloudImportInfo();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 192> mUnkacb27f;
    ::ll::UntypedStorage<8, 80>  mUnk36e402;
    ::ll::UntypedStorage<4, 4>   mUnkd2dee6;
    ::ll::UntypedStorage<8, 24>  mUnk84039e;
    ::ll::UntypedStorage<8, 64>  mUnk1b52cd;
    ::ll::UntypedStorage<8, 24>  mUnk9b83c6;
    ::ll::UntypedStorage<8, 8>   mUnka185f5;
    ::ll::UntypedStorage<8, 24>  mUnkd324f4;
    ::ll::UntypedStorage<8, 8>   mUnk30230b;
    ::ll::UntypedStorage<8, 8>   mUnk9ee584;
    ::ll::UntypedStorage<1, 1>   mUnk6bd6c8;
    ::ll::UntypedStorage<8, 24>  mUnk7a349c;
    ::ll::UntypedStorage<8, 24>  mUnk56effc;
    ::ll::UntypedStorage<8, 64>  mUnk4a5c45;
    // NOLINTEND

public:
    // prevent constructor by default
    FileArchiver& operator=(FileArchiver const&);
    FileArchiver(FileArchiver const&);
    FileArchiver();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~FileArchiver() /*override*/;

    // vIndex: 1
    virtual ::std::shared_ptr<::FilePickerSettings> generateFilePickerSettings(
        ::std::vector<::FileArchiver::ExportType> const& types,
        ::std::string const&                             worldId
    ) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI FileArchiver(
        ::Scheduler&                                                    scheduler,
        ::ILevelListCache&                                              levelListCache,
        ::Bedrock::NotNullNonOwnerPtr<::Core::FilePathManager> const&   pathManager,
        ::Bedrock::NotNullNonOwnerPtr<::IResourcePackRepository> const& resourcePackRepository,
        bool                                                            isEditorModeEnabled,
        ::std::unique_ptr<::FileArchiver::IWorldConverter>              worldConverter,
        ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const>      keyProvider,
        ::Bedrock::NotNullNonOwnerPtr<::LevelDbEnv>                     levelDbEnv,
        ::std::function<void(::std::string const&)>                     displayMessageFunction
    );

    MCAPI void _clearArchiverState();

    MCAPI void
    _copyPackToTemp(::PackInstance const& packInstance, ::Core::Path const& tempPath, ::FileArchiver::Result& result);

    MCAPI ::std::shared_ptr<::Bedrock::Threading::IAsyncResult<::FileArchiver::Result>> _enqueueExportWorldTasks(
        ::Core::Path const&                                         outputFilePath,
        ::std::string const&                                        worldId,
        bool                                                        isBundle,
        ::FileArchiver::ExportType                                  exportType,
        ::FileArchiver::ShowToast                                   showToast,
        ::std::shared_ptr<::Bedrock::Threading::IAsyncResult<void>> preTaskHandle,
        ::std::function<void(::FileArchiver::Result&)>              cleanupTask,
        ::std::function<void(::LevelData&)>                         convertPreExportCallback
    );

    MCAPI void _exportLevelFiles(
        ::Core::Path const&                           outputFilePath,
        bool                                          isBundle,
        ::std::shared_ptr<::FileArchiver::ExportData> exportData
    );

    MCAPI void _printLevelResultMessage(::FileArchiver::Result const& result);

    MCAPI void _printLevelStartMessage();

    MCAPI ::FileArchiverOutcome _processWorldForTemplate(::std::shared_ptr<::FileArchiver::ExportData> const& exportData
    );

    MCAPI void _revertPremiumUpgradePacks(::Core::Path const& filePath);

    MCAPI ::FileArchiver::Result _tryBeginExportLevel(
        ::std::string const&      levelId,
        ::Core::Path const&       exportFilePath,
        ::FileArchiver::ShowToast showToast
    );

    MCAPI bool _validatePremiumUpgradePacks(::Core::Path const& filePath);

    MCAPI ::std::string copyLevel(::std::string const& worldId);

    MCAPI ::std::shared_ptr<::Bedrock::Threading::IAsyncResult<::FileArchiver::Result>> exportCurrentEditorLevel(
        ::Level*                            level,
        ::Core::Path const&                 exportFilePath,
        ::std::function<void(::LevelData&)> preExportConvertedCallback,
        ::FileArchiver::ExportType          exportType,
        ::FileArchiver::ShowToast           toast
    );

    MCAPI ::std::shared_ptr<::Bedrock::Threading::IAsyncResult<::FileArchiver::Result>> exportCurrentLevel(
        ::Level*                   level,
        bool                       isBundle,
        ::FileArchiver::ExportType exportType,
        ::Core::Path const&        exportFilePath
    );

    MCAPI void exportCurrentLevel(
        ::Level*                                       level,
        bool                                           isBundle,
        ::FileArchiver::ExportType                     exportType,
        ::Core::Path const&                            exportFilePath,
        ::std::function<void(::FileArchiver::Result&)> exportCallback
    );

    MCAPI ::std::shared_ptr<::Bedrock::Threading::IAsyncResult<::FileArchiver::Result>>
    exportPack(::Core::Path const& path, ::Core::Path const& exportFilePath);

    MCAPI void exportPack(
        ::Core::Path const&                            path,
        ::Core::Path const&                            exportFilePath,
        ::std::function<void(::FileArchiver::Result&)> exportCallback
    );

    MCAPI ::FileArchiver::State getCurrentState();

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::FileArchiver::ProgressReporter> getProgressReporter();

    MCAPI void setWorldConverter(::std::unique_ptr<::FileArchiver::IWorldConverter> worldConverter);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string const& EXTENSION_ADDON();

    MCAPI static ::std::string const& EXTENSION_EDITOR_ADDON();

    MCAPI static ::std::string const& EXTENSION_PROJECT();

    MCAPI static ::std::string const& EXTENSION_RESOURCEPACK();

    MCAPI static ::std::string const& EXTENSION_TEMPLATE();

    MCAPI static ::std::string const& EXTENSION_VANILLA();

    MCAPI static ::std::string const& IMPORT_LOCK_FILE();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Scheduler&                                                    scheduler,
        ::ILevelListCache&                                              levelListCache,
        ::Bedrock::NotNullNonOwnerPtr<::Core::FilePathManager> const&   pathManager,
        ::Bedrock::NotNullNonOwnerPtr<::IResourcePackRepository> const& resourcePackRepository,
        bool                                                            isEditorModeEnabled,
        ::std::unique_ptr<::FileArchiver::IWorldConverter>              worldConverter,
        ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const>      keyProvider,
        ::Bedrock::NotNullNonOwnerPtr<::LevelDbEnv>                     levelDbEnv,
        ::std::function<void(::std::string const&)>                     displayMessageFunction
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::shared_ptr<::FilePickerSettings> $generateFilePickerSettings(
        ::std::vector<::FileArchiver::ExportType> const& types,
        ::std::string const&                             worldId
    ) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
