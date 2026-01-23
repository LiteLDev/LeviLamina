#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/social/MultiplayerServiceIdentifier.h"
#include "mc/deps/application/AppPlatform.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/threading/MPMCQueue.h"

// auto generated forward declare list
// clang-format off
class PDFWriter;
namespace Core { class Path; }
namespace Social { struct MultiplayerService; }
// clang-format on

class AppPlatformWindows : public ::AppPlatform {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>   mUnk387a7f;
    ::ll::UntypedStorage<8, 32>  mUnk93a477;
    ::ll::UntypedStorage<8, 32>  mUnk136df8;
    ::ll::UntypedStorage<8, 32>  mUnk4a65eb;
    ::ll::UntypedStorage<8, 32>  mUnkb28730;
    ::ll::UntypedStorage<8, 616> mUnkfe07cc;
    // NOLINTEND

public:
    // prevent constructor by default
    AppPlatformWindows& operator=(AppPlatformWindows const&);
    AppPlatformWindows(AppPlatformWindows const&);

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

    virtual ::std::vector<::std::shared_ptr<::Social::MultiplayerService>> getMultiplayerServiceListToRegister() const
        /*override*/;

    virtual ::std::vector<::Social::MultiplayerServiceIdentifier>
    getBroadcastingMultiplayerServiceIds(bool xblBroadcast, bool platformBroadcast) const /*override*/;

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

    virtual ::Core::PathBuffer<::std::string> getPackagedShaderCachePath() /*override*/;

    virtual ~AppPlatformWindows() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C AppPlatformWindows();

    MCNAPI uint64 _findHighPerformanceThreadsCount() const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::string const& EXPERIMENTS_ACTIVE_KEY();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI uint64 $getTotalHardwareThreadsCount() const;

    MCNAPI uint64 $getHighPerformanceThreadsCount() const;

    MCNAPI void $initializeGraphicsDeviceTier();

    MCNAPI ::Core::PathBuffer<::std::string> $getPlatformTempPath() const;

    MCNAPI ::Core::PathBuffer<::std::string> $copyImportFileToTempFolder(::Core::Path const& filePath);

    MCNAPI uint64 $calculateAvailableDiskFreeSpace(::Core::Path const& rootPath);

    MCNAPI bool $allowContentLogWriteToDisk();

    MCNAPI bool $devHotReloadRenderResources() const;

    MCNAPI void $queueForMainThread_DEPRECATED(::std::function<void()> callback);

    MCNAPI ::MPMCQueue<::std::function<void()>>& $getMainThreadQueue();

    MCNAPI bool $canAppSelfTerminate() const;

    MCNAPI bool $getPlatformTTSExists() const;

    MCNAPI bool $getPlatformTTSEnabled() const;

    MCNAPI void $registerExperimentsActiveCrashDump(::std::vector<::std::string> const& activeExperiments) const;

    MCNAPI bool $is24HourTimeFormat() const;

    MCNAPI ::Core::PathBuffer<::std::string> $_getCurrentStoragePath() const;

    MCNAPI ::Core::PathBuffer<::std::string> $_getExternalStoragePath() const;

    MCNAPI ::Core::PathBuffer<::std::string> $_getInternalStoragePath() const;

    MCNAPI ::Core::PathBuffer<::std::string> $_getUserdataPath() const;

    MCNAPI ::Core::PathBuffer<::std::string> $getPackagedShaderCachePath();

#ifdef LL_PLAT_C
    MCNAPI ::std::string $getSystemLocale() const;

    MCNAPI void $collectGraphicsHardwareDetails();

    MCNAPI bool $supportsMSAA() const;

    MCNAPI bool $supportsAlbumExport() const;

    MCNAPI bool $supportsPDFExport() const;

    MCNAPI ::std::shared_ptr<::PDFWriter> $createPlatformPDFWriter();

    MCNAPI ::std::vector<::std::shared_ptr<::Social::MultiplayerService>> $getMultiplayerServiceListToRegister() const;

    MCNAPI ::std::vector<::Social::MultiplayerServiceIdentifier>
    $getBroadcastingMultiplayerServiceIds(bool xblBroadcast, bool platformBroadcast) const;

    MCNAPI bool $isTablet() const;

    MCNAPI double $getTimeSFromProcessStart() const;

    MCNAPI void $showXboxLiveUserSettings();
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForIAppPlatform();

    MCNAPI static void** $vftableForISecureStorageKeySystem();
    // NOLINTEND
};
