#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/application/AppPlatform.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/threading/MPMCQueue.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
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
    AppPlatformWindows();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 25
    virtual uint64 getTotalHardwareThreadsCount() const /*override*/;

    // vIndex: 24
    virtual uint64 getHighPerformanceThreadsCount() const /*override*/;

    // vIndex: 250
    virtual ::Core::PathBuffer<::std::string> getPlatformTempPath() const /*override*/;

    // vIndex: 67
    virtual ::Core::PathBuffer<::std::string> copyImportFileToTempFolder(::Core::Path const& filePath) /*override*/;

    // vIndex: 178
    virtual uint64 calculateAvailableDiskFreeSpace(::Core::Path const& rootPath) /*override*/;

    // vIndex: 78
    virtual bool allowContentLogWriteToDisk() /*override*/;

    // vIndex: 181
    virtual bool devHotReloadRenderResources() const /*override*/;

    // vIndex: 80
    virtual void queueForMainThread_DEPRECATED(::std::function<void()> callback) /*override*/;

    // vIndex: 81
    virtual ::MPMCQueue<::std::function<void()>>& getMainThreadQueue() /*override*/;

    // vIndex: 214
    virtual bool canAppSelfTerminate() const /*override*/;

    // vIndex: 215
    virtual bool getPlatformTTSExists() const /*override*/;

    // vIndex: 216
    virtual bool getPlatformTTSEnabled() const /*override*/;

    // vIndex: 69
    virtual void registerExperimentsActiveCrashDump(::std::vector<::std::string> const& activeExperiments) const
        /*override*/;

    // vIndex: 238
    virtual bool is24HourTimeFormat() const /*override*/;

    // vIndex: 240
    virtual ::Core::PathBuffer<::std::string> _getCurrentStoragePath() const /*override*/;

    // vIndex: 241
    virtual ::Core::PathBuffer<::std::string> _getExternalStoragePath() const /*override*/;

    // vIndex: 242
    virtual ::Core::PathBuffer<::std::string> _getInternalStoragePath() const /*override*/;

    // vIndex: 243
    virtual ::Core::PathBuffer<::std::string> _getUserdataPath() const /*override*/;

    // vIndex: 47
    virtual ::Core::PathBuffer<::std::string> getPackagedShaderCachePath() /*override*/;

    // vIndex: 0
    virtual ~AppPlatformWindows() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI uint64 _findHighPerformanceThreadsCount() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static long callWerRegisterCustomMetadata(::std::string const& data, ::std::string const& key);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string const& EXPERIMENTS_ACTIVE_KEY();
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

    MCAPI ::Core::PathBuffer<::std::string> $getPackagedShaderCachePath();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftableForIAppPlatform();

    MCAPI static void** $vftableForISecureStorageKeySystem();
    // NOLINTEND
};
