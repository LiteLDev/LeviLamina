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
    ::ll::UntypedStorage<1, 1> mUnk387a7f;
    ::ll::UntypedStorage<8, 32> mUnk93a477;
    ::ll::UntypedStorage<8, 32> mUnk136df8;
    ::ll::UntypedStorage<8, 32> mUnk4a65eb;
    ::ll::UntypedStorage<8, 32> mUnkb28730;
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
    // vIndex: 29
    virtual uint64 getTotalHardwareThreadsCount() const /*override*/;

    // vIndex: 28
    virtual uint64 getHighPerformanceThreadsCount() const /*override*/;

    // vIndex: 30
    virtual void initializeGraphicsDeviceTier() /*override*/;

    // vIndex: 240
    virtual ::Core::PathBuffer<::std::string> getPlatformTempPath() const /*override*/;

    // vIndex: 69
    virtual ::Core::PathBuffer<::std::string> copyImportFileToTempFolder(::Core::Path const& filePath) /*override*/;

    // vIndex: 175
    virtual uint64 calculateAvailableDiskFreeSpace(::Core::Path const& rootPath) /*override*/;

    // vIndex: 80
    virtual bool allowContentLogWriteToDisk() /*override*/;

    // vIndex: 178
    virtual bool devHotReloadRenderResources() const /*override*/;

    // vIndex: 82
    virtual void queueForMainThread_DEPRECATED(::std::function<void()> callback) /*override*/;

    // vIndex: 83
    virtual ::MPMCQueue<::std::function<void()>>& getMainThreadQueue() /*override*/;

    // vIndex: 209
    virtual bool canAppSelfTerminate() const /*override*/;

    // vIndex: 210
    virtual bool getPlatformTTSExists() const /*override*/;

    // vIndex: 211
    virtual bool getPlatformTTSEnabled() const /*override*/;

    // vIndex: 71
    virtual void registerExperimentsActiveCrashDump(::std::vector<::std::string> const& activeExperiments) const /*override*/;

    // vIndex: 228
    virtual bool is24HourTimeFormat() const /*override*/;

    // vIndex: 230
    virtual ::Core::PathBuffer<::std::string> _getCurrentStoragePath() const /*override*/;

    // vIndex: 231
    virtual ::Core::PathBuffer<::std::string> _getExternalStoragePath() const /*override*/;

    // vIndex: 232
    virtual ::Core::PathBuffer<::std::string> _getInternalStoragePath() const /*override*/;

    // vIndex: 233
    virtual ::Core::PathBuffer<::std::string> _getUserdataPath() const /*override*/;

    // vIndex: 49
    virtual ::Core::PathBuffer<::std::string> getPackagedShaderCachePath() /*override*/;

    // vIndex: 0
    virtual ~AppPlatformWindows() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI uint64 _findHighPerformanceThreadsCount() const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::string const& EXPERIMENTS_ACTIVE_KEY();
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
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForIAppPlatform();

    MCNAPI static void** $vftableForISecureStorageKeySystem();
    // NOLINTEND

};
