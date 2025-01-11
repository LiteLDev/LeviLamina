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

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 25
    virtual uint64 getTotalHardwareThreadsCount() const /*override*/;

    // vIndex: 24
    virtual uint64 getHighPerformanceThreadsCount() const /*override*/;

    // vIndex: 247
    virtual ::Core::PathBuffer<::std::string> getPlatformTempPath() const /*override*/;

    // vIndex: 65
    virtual ::Core::PathBuffer<::std::string> copyImportFileToTempFolder(::Core::Path const& filePath) /*override*/;

    // vIndex: 174
    virtual uint64 calculateAvailableDiskFreeSpace(::Core::Path const& rootPath) /*override*/;

    // vIndex: 76
    virtual bool allowContentLogWriteToDisk() /*override*/;

    // vIndex: 177
    virtual bool devHotReloadRenderResources() const /*override*/;

    // vIndex: 78
    virtual void queueForMainThread_DEPRECATED(::std::function<void()> callback) /*override*/;

    // vIndex: 79
    virtual ::MPMCQueue<::std::function<void()>>& getMainThreadQueue() /*override*/;

    // vIndex: 210
    virtual bool canAppSelfTerminate() const /*override*/;

    // vIndex: 211
    virtual bool getPlatformTTSExists() const /*override*/;

    // vIndex: 212
    virtual bool getPlatformTTSEnabled() const /*override*/;

    // vIndex: 67
    virtual void registerExperimentsActiveCrashDump(::std::vector<::std::string> const& activeExperiments) const
        /*override*/;

    // vIndex: 236
    virtual bool allowsExternalCommandExecution() const /*override*/;

    // vIndex: 237
    virtual ::Core::PathBuffer<::std::string> _getCurrentStoragePath() const /*override*/;

    // vIndex: 238
    virtual ::Core::PathBuffer<::std::string> _getExternalStoragePath() const /*override*/;

    // vIndex: 239
    virtual ::Core::PathBuffer<::std::string> _getInternalStoragePath() const /*override*/;

    // vIndex: 240
    virtual ::Core::PathBuffer<::std::string> _getUserdataPath() const /*override*/;

    // vIndex: 45
    virtual ::Core::PathBuffer<::std::string> getPackagedShaderCachePath() /*override*/;

    // vIndex: 0
    virtual ~AppPlatformWindows() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI AppPlatformWindows();

    MCAPI uint64 _findHighPerformanceThreadsCount() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static long callWerRegisterCustomMetadata(::std::string const& key, ::std::string const& data);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string const& EXPERIMENTS_ACTIVE_KEY();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
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

    MCFOLD bool $allowsExternalCommandExecution() const;

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
