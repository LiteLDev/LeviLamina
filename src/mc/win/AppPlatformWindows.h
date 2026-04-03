#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/application/AppPlatform.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/threading/MPMCQueue.h"

// auto generated forward declare list
// clang-format off
class PDFWriter;
namespace Core { class Path; }
// clang-format on

class AppPlatformWindows : public ::AppPlatform {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>   mUnk387a7f;
    ::ll::UntypedStorage<8, 32>  mUnk71bd4f;
    ::ll::UntypedStorage<8, 32>  mUnke74ecd;
    ::ll::UntypedStorage<8, 32>  mUnkf97c15;
    ::ll::UntypedStorage<8, 32>  mUnk9bd5b3;
    ::ll::UntypedStorage<8, 32>  mUnka8bdb8;
    ::ll::UntypedStorage<8, 616> mUnkfe07cc;
    // NOLINTEND

public:
    // prevent constructor by default
    AppPlatformWindows& operator=(AppPlatformWindows const&);
    AppPlatformWindows(AppPlatformWindows const&);
    AppPlatformWindows();

public:
    // virtual functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    virtual ::std::string getSystemLocale() const /*override*/;

    virtual void collectGraphicsHardwareDetails() /*override*/;

    virtual bool supportsMSAA() const /*override*/;

#endif
    virtual uint64 getTotalHardwareThreadsCount() const /*override*/;

    virtual uint64 getHighPerformanceThreadsCount() const /*override*/;

    virtual void initializeGraphicsDeviceTier() /*override*/;

    virtual ::Core::PathBuffer<::std::string> getPlatformTempPath() const /*override*/;

    virtual ::Core::PathBuffer<::std::string> copyImportFileToTempFolder(::Core::Path const& filePath) /*override*/;

    virtual uint64 calculateAvailableDiskFreeSpace(::Core::Path const& rootPath) /*override*/;

    virtual bool allowContentLogWriteToDisk() /*override*/;

    virtual bool devHotReloadRenderResources() const /*override*/;

    virtual void queueForMainThread_DEPRECATED(::std::function<void()> callback) /*override*/;

    virtual ::MPMCQueue<::std::function<void()>>& getMainThreadQueue() /*override*/;

#ifdef LL_PLAT_C
    virtual bool supportsAlbumExport() const /*override*/;

    virtual bool supportsPDFExport() const /*override*/;

    virtual ::std::shared_ptr<::PDFWriter> createPlatformPDFWriter() /*override*/;

    virtual bool isTablet() const /*override*/;

    virtual double getTimeSFromProcessStart() const /*override*/;

#endif
    virtual bool canAppSelfTerminate() const /*override*/;

    virtual bool getPlatformTTSExists() const /*override*/;

    virtual bool getPlatformTTSEnabled() const /*override*/;

    virtual void registerExperimentsActiveCrashDump(::std::vector<::std::string> const& activeExperiments) const
        /*override*/;

#ifdef LL_PLAT_C
    virtual void showXboxLiveUserSettings() /*override*/;

#endif
    virtual bool is24HourTimeFormat() const /*override*/;

    virtual ::Core::PathBuffer<::std::string> _getCurrentStoragePath() const /*override*/;

    virtual ::Core::PathBuffer<::std::string> _getExternalStoragePath() const /*override*/;

    virtual ::Core::PathBuffer<::std::string> _getInternalStoragePath() const /*override*/;

    virtual ::Core::PathBuffer<::std::string> _getUserdataPath() const /*override*/;

    virtual ::Core::PathBuffer<::std::string> _getSharedDataPath() const /*override*/;

    virtual ::Core::PathBuffer<::std::string> getPackagedShaderCachePath() /*override*/;

    virtual ~AppPlatformWindows() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI uint64 _findHighPerformanceThreadsCount() const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string const& EXPERIMENTS_ACTIVE_KEY();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI_C void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI uint64 $getTotalHardwareThreadsCount() const;

    MCAPI uint64 $getHighPerformanceThreadsCount() const;

    MCAPI void $initializeGraphicsDeviceTier();

    MCAPI ::Core::PathBuffer<::std::string> $getPlatformTempPath() const;

    MCFOLD ::Core::PathBuffer<::std::string> $copyImportFileToTempFolder(::Core::Path const& filePath);

    MCAPI uint64 $calculateAvailableDiskFreeSpace(::Core::Path const& rootPath);

    MCFOLD bool $allowContentLogWriteToDisk();

    MCFOLD bool $devHotReloadRenderResources() const;

    MCAPI void $queueForMainThread_DEPRECATED(::std::function<void()> callback);

    MCAPI ::MPMCQueue<::std::function<void()>>& $getMainThreadQueue();

    MCFOLD bool $canAppSelfTerminate() const;

    MCFOLD bool $getPlatformTTSExists() const;

    MCAPI bool $getPlatformTTSEnabled() const;

    MCAPI void $registerExperimentsActiveCrashDump(::std::vector<::std::string> const& activeExperiments) const;

    MCAPI bool $is24HourTimeFormat() const;

    MCFOLD ::Core::PathBuffer<::std::string> $_getCurrentStoragePath() const;

    MCFOLD ::Core::PathBuffer<::std::string> $_getExternalStoragePath() const;

    MCAPI ::Core::PathBuffer<::std::string> $_getInternalStoragePath() const;

    MCAPI ::Core::PathBuffer<::std::string> $_getUserdataPath() const;

    MCAPI ::Core::PathBuffer<::std::string> $_getSharedDataPath() const;

    MCAPI ::Core::PathBuffer<::std::string> $getPackagedShaderCachePath();

#ifdef LL_PLAT_C
    MCAPI ::std::string $getSystemLocale() const;

    MCFOLD void $collectGraphicsHardwareDetails();

    MCFOLD bool $supportsMSAA() const;

    MCFOLD bool $supportsAlbumExport() const;

    MCFOLD bool $supportsPDFExport() const;

    MCFOLD ::std::shared_ptr<::PDFWriter> $createPlatformPDFWriter();

    MCFOLD bool $isTablet() const;

    MCAPI double $getTimeSFromProcessStart() const;

    MCAPI void $showXboxLiveUserSettings();
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForIAppPlatform();

    MCNAPI static void** $vftableForISecureStorageKeySystem();
    // NOLINTEND
};
