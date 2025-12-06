#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/file/ZipProgress.h"
#include "mc/deps/core/string/BasicStackString.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/UniqueOwnerPointer.h"
#include "mc/platform/threading/Mutex.h"
#include "mc/world/level/FileArchiverOutcome.h"

// auto generated forward declare list
// clang-format off
class Level;
class LevelData;
class LevelStorage;
class PackInstance;
class Scheduler;
class TaskGroup;
struct FilePickerSettings;
struct IContentKeyProvider;
struct ILevelListCache;
struct IResourcePackRepository;
struct LevelDbEnv;
namespace Core { class Path; }
namespace Core { struct FilePathManager; }
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
        PlayableEditorLevel = 3,
        PackagedLevel       = 4,
    };

    enum class ShowToast : int {
        Enabled  = 0,
        Disabled = 1,
    };

    struct Result {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, ::FileArchiverOutcome>              outcome;
        ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>> fileName;
        ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>> levelId;
        ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>> originalLevelId;
        // NOLINTEND

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
        ::ll::TypedStorage<8, 32, ::std::string>                                 mLevelId;
        ::ll::TypedStorage<8, 8, uint64>                                         mTotalFileCount;
        ::ll::TypedStorage<8, 104, ::FileArchiver::Result>                       mResult;
        ::ll::TypedStorage<8, 16, ::Bedrock::UniqueOwnerPointer<::LevelStorage>> mLevelStorage;
        ::ll::TypedStorage<8, 8, ::LevelData*>                                   mLevelData;
        // NOLINTEND

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
        ::ll::TypedStorage<4, 4, ::FileArchiverOutcome>              outcome;
        ::ll::TypedStorage<8, 32, ::std::string>                     copiedLevelId;
        ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>> copiedLevelPath;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~CopyWorldResult();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD void $dtor();
        // NOLINTEND
    };

    class ProgressReporter : public ::Core::ZipUtils::ZipProgress, public ::Bedrock::EnableNonOwnerReferences {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 80, ::Bedrock::Threading::Mutex> mProgressLock;
        ::ll::TypedStorage<8, 32, ::std::string>               mProgressTitle;
        ::ll::TypedStorage<8, 32, ::std::string>               mProgressMessage;
        // NOLINTEND

    public:
        // virtual functions
        // NOLINTBEGIN
        // vIndex: 0
        virtual ~ProgressReporter() /*override*/;

        // vIndex: 1
        virtual void clear() /*override*/;
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
        MCNAPI static void** $vftableForZipProgress();

        MCNAPI static void** $vftableForEnableNonOwnerReferences();
        // NOLINTEND
    };

    class IWorldConverter {
    public:
        // IWorldConverter inner types define
        using PreExportConvertedCallback = ::std::function<void(::LevelData&)>;

        using InTaskFilePathCallBack =
            ::std::function<void(::Core::PathBuffer<::Core::BasicStackString<char, 1024>> const&)>;

    public:
        // virtual functions
        // NOLINTBEGIN
        // vIndex: 0
        virtual ~IWorldConverter() = default;

        // vIndex: 1
        virtual void enqueueConvertImportingWorldTasks(
            ::std::shared_ptr<::FileArchiver::Result>&,
            ::Bedrock::NotNullNonOwnerPtr<::FileArchiver::ProgressReporter>,
            ::Bedrock::Threading::Async<void>&
        ) = 0;

        // vIndex: 2
        virtual bool shouldCopyWorldForConversion(::std::string const&) const = 0;

        // vIndex: 3
        virtual void enqueueConvertExportingWorldTasks(
            ::std::shared_ptr<::FileArchiver::ExportData>&,
            ::Bedrock::NotNullNonOwnerPtr<::FileArchiver::ProgressReporter>,
            ::Bedrock::Threading::Async<void>&,
            ::std::function<void(::LevelData&)>,
            ::std::vector<::std::function<void(::Core::PathBuffer<::Core::BasicStackString<char, 1024>> const&)>>
        ) = 0;
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN

        // NOLINTEND
    };

    using OperationCallback = ::std::function<void(::FileArchiver::Result&)>;

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
            ::ll::TypedStorage<4, 4, ::FileArchiverOutcome>              outcome;
            ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>> path;
            // NOLINTEND
        };

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, ::FileArchiverOutcome>                                                 outcome;
        ::ll::TypedStorage<8, 24, ::std::vector<::FileArchiver::ImportWorldsResult::ImportWorldResult>> worlds;
        // NOLINTEND
    };

    struct EduCloudImportInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, bool>           isCloudImport;
        ::ll::TypedStorage<1, 1, bool>           allowMultiplayer;
        ::ll::TypedStorage<8, 32, ::std::string> educationOid;
        ::ll::TypedStorage<8, 32, ::std::string> cTag;
        ::ll::TypedStorage<8, 32, ::std::string> name;
        // NOLINTEND

    public:
        // prevent constructor by default
        EduCloudImportInfo(EduCloudImportInfo const&);
        EduCloudImportInfo();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ::FileArchiver::EduCloudImportInfo& operator=(::FileArchiver::EduCloudImportInfo const&);

        MCAPI ::FileArchiver::EduCloudImportInfo& operator=(::FileArchiver::EduCloudImportInfo&&);

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
    ::ll::TypedStorage<8, 192, ::FileArchiver::ProgressReporter>                          mProgress;
    ::ll::TypedStorage<8, 80, ::Bedrock::Threading::Mutex>                                mStateLock;
    ::ll::TypedStorage<4, 4, ::FileArchiver::State>                                       mCurrentState;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::Core::FilePathManager>>     mFilePathManager;
    ::ll::TypedStorage<8, 64, ::std::function<void(::std::string const&)>>                mDisplayMessageCallback;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IResourcePackRepository>>   mResourcePackRepository;
    ::ll::TypedStorage<8, 8, ::ILevelListCache&>                                          mLevelListCache;
    ::ll::TypedStorage<8, 24, ::std::vector<::Core::PathBuffer<::std::string>>>           mSuccessfullyFiledArchives;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::TaskGroup>>                              mIOTaskGroup;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::FileArchiver::IWorldConverter>>          mWorldConverter;
    ::ll::TypedStorage<1, 1, bool>                                                        mIsEditorModeEnabled;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const>> mKeyProvider;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::LevelDbEnv>>                mLevelDbEnv;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::FileArchiver::EduCloudImportInfo>>
        mEduCloudImportInfo;
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
    virtual ::std::shared_ptr<::FilePickerSettings>
    generateFilePickerSettings(::std::vector<::FileArchiver::ExportType> const& types, ::std::string const&) const;
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

    MCAPI ::Bedrock::Threading::Async<::FileArchiver::Result> _enqueueExportWorldTasks(
        ::Core::Path const&                            outputFilePath,
        ::std::string const&                           worldId,
        bool                                           isBundle,
        ::FileArchiver::ExportType                     exportType,
        ::FileArchiver::ShowToast                      showToast,
        ::Bedrock::Threading::Async<void>              preTaskHandle,
        ::std::function<void(::FileArchiver::Result&)> cleanupTask,
        ::std::function<void(::LevelData&)>            convertPreExportCallback,
        ::std::vector<::std::function<void(::Core::PathBuffer<::Core::BasicStackString<char, 1024>> const&)>>
            pathCallbacks
    );

    MCAPI void _exportLevelFiles(
        ::Core::Path const&                           outputFilePath,
        bool                                          isBundle,
        ::std::shared_ptr<::FileArchiver::ExportData> exportData
    );

    MCAPI bool _importLegacyWorld(::Core::Path const& archivedWorldFile, ::FileArchiver::Result& currentResult);

    MCAPI bool _importWorld(
        ::Core::Path const&     archivedWorldFile,
        ::FileArchiver::Result& currentResult,
        ::std::string const&    importLevelId
    );

    MCAPI void _printLevelResultMessage(::FileArchiver::Result const& result);

    MCAPI void _printLevelStartMessage();

    MCAPI void _printMessage(::std::string const& message);

    MCAPI ::FileArchiverOutcome
    _processWorldForTemplate(::std::shared_ptr<::FileArchiver::ExportData> const& exportData);

    MCAPI void _revertPremiumUpgradePacks(::Core::Path const& filePath);

    MCAPI void _sanitizeWorld(::Core::Path const& newWorldPath);

    MCAPI ::FileArchiver::Result _tryBeginExportLevel(
        ::std::string const&      levelId,
        ::Core::Path const&       exportFilePath,
        ::FileArchiver::ShowToast showToast
    );

    MCAPI bool _validatePremiumUpgradePacks(::Core::Path const& filePath);

    MCAPI ::std::string copyLevel(::std::string const& worldId);

    MCAPI ::Bedrock::Threading::Async<::FileArchiver::CopyWorldResult> copyLevelAsync(::std::string const& worldId);

    MCAPI ::Bedrock::Threading::Async<::FileArchiver::Result> exportCurrentEditorLevel(
        ::Level*                            level,
        ::Core::Path const&                 exportFilePath,
        ::std::function<void(::LevelData&)> preExportConvertedCallback,
        ::std::vector<::std::function<void(::Core::PathBuffer<::Core::BasicStackString<char, 1024>> const&)>>
                                   pathCallbacks,
        ::FileArchiver::ExportType exportType,
        ::FileArchiver::ShowToast  toast
    );

    MCAPI ::Bedrock::Threading::Async<::FileArchiver::Result> exportCurrentLevel(
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

    MCAPI ::Bedrock::Threading::Async<::FileArchiver::Result> exportLevel(
        ::std::string const&       worldId,
        bool                       isBundle,
        ::FileArchiver::ExportType exportType,
        ::FileArchiver::ShowToast  showToast,
        ::Core::Path const&        exportFilePath
    );

    MCAPI void exportLevel(
        ::std::string const&                           worldId,
        bool                                           isBundle,
        ::FileArchiver::ExportType                     exportType,
        ::Core::Path const&                            exportFilePath,
        ::std::function<void(::FileArchiver::Result&)> exportCallback,
        ::FileArchiver::ShowToast                      showToast
    );

    MCAPI ::Bedrock::Threading::Async<::FileArchiver::Result>
    exportPack(::Core::Path const& path, ::Core::Path const& exportFilePath);

    MCAPI void exportPack(
        ::Core::Path const&                            path,
        ::Core::Path const&                            exportFilePath,
        ::std::function<void(::FileArchiver::Result&)> exportCallback
    );

    MCAPI ::FileArchiver::State getCurrentState();

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::FileArchiver::ProgressReporter> getProgressReporter();

    MCAPI ::Bedrock::Threading::Async<::FileArchiver::Result> importLevel(
        ::Core::Path const&  archivedWorldFile,
        bool                 suppressStartMessage,
        bool                 suppressEndMessage,
        ::std::string const& levelId
    );

    MCAPI void importLevel(
        ::Core::Path const&                            archivedWorldFile,
        ::std::function<void(::FileArchiver::Result&)> importCallback,
        bool                                           suppressStartMessage,
        bool                                           suppressEndMessage,
        ::std::string const&                           levelId
    );
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
    MCAPI ::std::shared_ptr<::FilePickerSettings>
    $generateFilePickerSettings(::std::vector<::FileArchiver::ExportType> const& types, ::std::string const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
