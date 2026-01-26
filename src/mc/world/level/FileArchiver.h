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
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/platform/threading/Mutex.h"
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
class LevelStorage;
class PackInstance;
class Scheduler;
class TaskGroup;
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
namespace Core { class FilePathManager; }
namespace Core { class Path; }
// clang-format on

class FileArchiver : public ::Bedrock::EnableNonOwnerReferences {
public:
    // FileArchiver inner types declare
    // clang-format off
    struct CopyWorldResult;
    struct EduCloudImportInfo;
    struct ImportWorldsResult;
    class ProgressReporter;
    struct Result;
    struct ExportData;
    class IWorldConverter;
    struct InterventionPublishers;
    // clang-format on

    // FileArchiver inner types define
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

    enum class State : int {
        Idle      = 0,
        Importing = 1,
        Exporting = 2,
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

        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD_C void $dtor();
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
        virtual ~ProgressReporter() /*override*/;

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
        ::ll::TypedStorage<4, 4, ::FileArchiver::ExportType>                     mExportType;
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

    class IWorldConverter {
    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ~IWorldConverter() = default;

        virtual void enqueueConvertImportingWorldTasks(
            ::std::shared_ptr<::FileArchiver::Result>&,
            ::Bedrock::NotNullNonOwnerPtr<::FileArchiver::ProgressReporter>,
            ::Bedrock::Threading::Async<void>&
        ) = 0;

        virtual bool shouldCopyWorldForConversion(::std::string const&) const = 0;

        virtual void enqueueConvertExportingWorldTasks(
            ::std::shared_ptr<::FileArchiver::ExportData>&,
            ::Bedrock::NotNullNonOwnerPtr<::FileArchiver::ProgressReporter>,
            ::Bedrock::Threading::Async<void>&,
            ::gsl::not_null<::std::shared_ptr<::FileArchiver::InterventionPublishers>>
        ) = 0;
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN

        // NOLINTEND
    };

    struct InterventionPublishers {
    public:
        // InterventionPublishers inner types define
        using BeginSignature = void(::FileArchiver::ExportType, ::std::string const&, ::Core::Path const&);

        using CleanupSignature = void(::FileArchiver::ExportType);

        using CopyCompleteSignature =
            void(::FileArchiver::ExportType, ::Core::PathBuffer<::Core::BasicStackString<char, 1024>> const&);

        using LevelDataFinalizeSignature = void(::FileArchiver::ExportType, ::LevelData&);

        using LevelDataMutationSignature = void(::FileArchiver::ExportType, ::LevelData&);

        using PreFileRemovalSignature =
            void(::FileArchiver::ExportType, ::Core::PathBuffer<::Core::BasicStackString<char, 1024>> const&);

        using PrePackageSignature =
            void(::FileArchiver::ExportType, ::Core::PathBuffer<::Core::BasicStackString<char, 1024>> const&);

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<
            8,
            128,
            ::Bedrock::PubSub::Publisher<
                void(::FileArchiver::ExportType, ::std::string const&, ::Core::Path const&),
                ::Bedrock::PubSub::ThreadModel::MultiThreaded,
                0>>
            mBegin;
        ::ll::TypedStorage<
            8,
            128,
            ::Bedrock::PubSub::Publisher<
                void(::FileArchiver::ExportType, ::Core::PathBuffer<::Core::BasicStackString<char, 1024>> const&),
                ::Bedrock::PubSub::ThreadModel::MultiThreaded,
                0>>
            mCopyComplete;
        ::ll::TypedStorage<
            8,
            128,
            ::Bedrock::PubSub::Publisher<
                void(::FileArchiver::ExportType, ::LevelData&),
                ::Bedrock::PubSub::ThreadModel::MultiThreaded,
                0>>
            mLevelDataMutation;
        ::ll::TypedStorage<
            8,
            128,
            ::Bedrock::PubSub::Publisher<
                void(::FileArchiver::ExportType, ::Core::PathBuffer<::Core::BasicStackString<char, 1024>> const&),
                ::Bedrock::PubSub::ThreadModel::MultiThreaded,
                0>>
            mPreFileRemoval;
        ::ll::TypedStorage<
            8,
            128,
            ::Bedrock::PubSub::Publisher<
                void(::FileArchiver::ExportType, ::LevelData&),
                ::Bedrock::PubSub::ThreadModel::MultiThreaded,
                0>>
            mLevelDataFinalize;
        ::ll::TypedStorage<
            8,
            128,
            ::Bedrock::PubSub::Publisher<
                void(::FileArchiver::ExportType, ::Core::PathBuffer<::Core::BasicStackString<char, 1024>> const&),
                ::Bedrock::PubSub::ThreadModel::MultiThreaded,
                0>>
            mPrePackage;
        ::ll::TypedStorage<
            8,
            128,
            ::Bedrock::PubSub::
                Publisher<void(::FileArchiver::ExportType), ::Bedrock::PubSub::ThreadModel::MultiThreaded, 0>>
            mCleanup;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI InterventionPublishers();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor();
        // NOLINTEND
    };

    using OperationCallback = ::std::function<void(::FileArchiver::Result&)>;

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
    virtual ~FileArchiver() /*override*/;

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
        ::Core::Path const&                                                        outputFilePath,
        ::std::string const&                                                       worldId,
        bool                                                                       isBundle,
        ::FileArchiver::ExportType                                                 exportType,
        ::FileArchiver::ShowToast                                                  showToast,
        ::Bedrock::Threading::Async<void>                                          preTaskHandle,
        ::gsl::not_null<::std::shared_ptr<::FileArchiver::InterventionPublishers>> interventionPublishers,
        ::std::function<void(::FileArchiver::Result&)>                             cleanupTask
    );

    MCAPI void _exportLevelFiles(
        ::Core::Path const&                           outputFilePath,
        bool                                          isBundle,
        ::std::shared_ptr<::FileArchiver::ExportData> exportData
    );

    MCAPI_C bool _importLegacyWorld(::Core::Path const& archivedWorldFile, ::FileArchiver::Result& currentResult);

    MCAPI_C bool _importWorld(
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

    MCAPI_C void _sanitizeWorld(::Core::Path const& newWorldPath);

    MCAPI ::FileArchiver::Result _tryBeginExportLevel(
        ::std::string const&      levelId,
        ::Core::Path const&       exportFilePath,
        ::FileArchiver::ShowToast showToast
    );

    MCAPI bool _validatePremiumUpgradePacks(::Core::Path const& filePath);

    MCAPI ::std::string copyLevel(::std::string const& worldId);

    MCAPI_C ::Bedrock::Threading::Async<::FileArchiver::CopyWorldResult> copyLevelAsync(::std::string const& worldId);

    MCAPI ::Bedrock::Threading::Async<::FileArchiver::Result> exportCurrentEditorLevel(
        ::Level*                                                                   level,
        ::Core::Path const&                                                        exportFilePath,
        ::gsl::not_null<::std::shared_ptr<::FileArchiver::InterventionPublishers>> interventionPublishers,
        ::FileArchiver::ExportType                                                 exportType,
        ::FileArchiver::ShowToast                                                  toast
    );

    MCAPI ::Bedrock::Threading::Async<::FileArchiver::Result> exportCurrentLevel(
        ::Level*                                                                   level,
        bool                                                                       isBundle,
        ::FileArchiver::ExportType                                                 exportType,
        ::Core::Path const&                                                        exportFilePath,
        ::gsl::not_null<::std::shared_ptr<::FileArchiver::InterventionPublishers>> interventionPublishers
    );

    MCAPI void exportCurrentLevel(
        ::Level*                                                                   level,
        bool                                                                       isBundle,
        ::FileArchiver::ExportType                                                 exportType,
        ::Core::Path const&                                                        exportFilePath,
        ::std::function<void(::FileArchiver::Result&)>                             exportCallback,
        ::gsl::not_null<::std::shared_ptr<::FileArchiver::InterventionPublishers>> interventionPublishers
    );

    MCAPI_C ::Bedrock::Threading::Async<::FileArchiver::Result> exportLevel(
        ::std::string const&                                                       worldId,
        bool                                                                       isBundle,
        ::FileArchiver::ExportType                                                 exportType,
        ::FileArchiver::ShowToast                                                  showToast,
        ::Core::Path const&                                                        exportFilePath,
        ::gsl::not_null<::std::shared_ptr<::FileArchiver::InterventionPublishers>> interventionPublishers
    );

    MCAPI_C void exportLevel(
        ::std::string const&                                                       worldId,
        bool                                                                       isBundle,
        ::FileArchiver::ExportType                                                 exportType,
        ::Core::Path const&                                                        exportFilePath,
        ::std::function<void(::FileArchiver::Result&)>                             exportCallback,
        ::FileArchiver::ShowToast                                                  showToast,
        ::gsl::not_null<::std::shared_ptr<::FileArchiver::InterventionPublishers>> interventionPublishers
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

    MCAPI_C ::Bedrock::Threading::Async<::FileArchiver::Result> importLevel(
        ::Core::Path const&  archivedWorldFile,
        bool                 suppressStartMessage,
        bool                 suppressEndMessage,
        ::std::string const& levelId
    );

    MCAPI_C void importLevel(
        ::Core::Path const&                            archivedWorldFile,
        ::std::function<void(::FileArchiver::Result&)> importCallback,
        bool                                           suppressStartMessage,
        bool                                           suppressEndMessage,
        ::std::string const&                           levelId
    );

    MCAPI_S void setWorldConverter(::std::unique_ptr<::FileArchiver::IWorldConverter> worldConverter);
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
