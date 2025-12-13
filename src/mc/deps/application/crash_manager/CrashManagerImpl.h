#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/application/crash_manager/CrashManager.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/threading/Async.h"

// auto generated forward declare list
// clang-format off
class Scheduler;
namespace Bedrock { class CrashFileProcessor; }
namespace Bedrock { class CrashTelemetryProcessor; }
namespace Bedrock { class SessionInfo; }
namespace Bedrock { class WorkerPoolHandleInterface; }
// clang-format on

namespace Bedrock {

class CrashManagerImpl : public ::Bedrock::CrashManager {
public:
    // CrashManagerImpl inner types declare
    // clang-format off
    struct CrashProcessorInfo;
    struct CrashedSessionInfo;
    // clang-format on

    // CrashManagerImpl inner types define
    struct CrashProcessorInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 32> mUnk1c896b;
        ::ll::UntypedStorage<8, 16> mUnkd95fbb;
        // NOLINTEND

    public:
        // prevent constructor by default
        CrashProcessorInfo& operator=(CrashProcessorInfo const&);
        CrashProcessorInfo(CrashProcessorInfo const&);
        CrashProcessorInfo();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI_C ~CrashProcessorInfo();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI_C void $dtor();
        // NOLINTEND
    };

    struct CrashedSessionInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 16> mUnka0307c;
        ::ll::UntypedStorage<8, 32> mUnk4e6014;
        ::ll::UntypedStorage<1, 1>  mUnkdad209;
        // NOLINTEND

    public:
        // prevent constructor by default
        CrashedSessionInfo& operator=(CrashedSessionInfo const&);
        CrashedSessionInfo(CrashedSessionInfo const&);
        CrashedSessionInfo();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI_C ~CrashedSessionInfo();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI_C void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnka1db12;
    ::ll::UntypedStorage<8, 32> mUnkfcddda;
    ::ll::UntypedStorage<8, 32> mUnk37f93e;
    ::ll::UntypedStorage<8, 32> mUnk982d5f;
    ::ll::UntypedStorage<8, 16> mUnk28673f;
    ::ll::UntypedStorage<8, 80> mUnk3030e6;
    ::ll::UntypedStorage<8, 16> mUnk2e647e;
    ::ll::UntypedStorage<8, 16> mUnkc7a812;
    ::ll::UntypedStorage<8, 24> mUnk6e6722;
    ::ll::UntypedStorage<8, 16> mUnkb4372e;
    ::ll::UntypedStorage<8, 16> mUnk5ec727;
    ::ll::UntypedStorage<8, 8>  mUnk936f0f;
    ::ll::UntypedStorage<1, 1>  mUnkb940bb;
    ::ll::UntypedStorage<1, 1>  mUnk6afa2c;
    // NOLINTEND

public:
    // prevent constructor by default
    CrashManagerImpl& operator=(CrashManagerImpl const&);
    CrashManagerImpl(CrashManagerImpl const&);

public:
    // virtual functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    virtual ~CrashManagerImpl() /*override*/ = default;
#else // LL_PLAT_C
    virtual ~CrashManagerImpl() /*override*/;
#endif

    virtual void initialize(::std::string_view crashDirectoryName) /*override*/;

    virtual void setCrashProcessorForFileType(
        ::std::string_view                               fileExtension,
        ::std::shared_ptr<::Bedrock::CrashFileProcessor> processor
    ) /*override*/;

    virtual void
    setCrashTelemetryProcessor(::gsl::not_null<::Bedrock::CrashTelemetryProcessor*> processor) /*override*/;

    virtual void processCrashes(
        ::std::shared_ptr<::Bedrock::WorkerPoolHandleInterface> workerPool,
        ::Scheduler&                                            scheduler,
        bool                                                    isNetworkAvailable
    ) /*override*/;

    virtual void notifyCrashed() /*override*/;

    virtual void notifySystemError(uint errorCode, ::std::string const& errorMessage) /*override*/;

    virtual void recordCrashedSession(
        ::std::string_view sessionId,
        ::std::string_view serializedSession,
        int64              crashTime
    ) /*override*/;

    virtual void stopProcessingCrashes() /*override*/;

    virtual bool isCrashProcessingActive() const /*override*/;

    virtual ::std::string const& getCrashDataRoot() const /*override*/;

    virtual ::std::string const& getCrashedSessionFileSuffix() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C CrashManagerImpl();

    MCNAPI_C void _doNetworkUnavailableCleanup();

    MCNAPI_C ::std::shared_ptr<::Bedrock::SessionInfo> _findCrashedSessionInfo(::std::string_view sessionId) const;

    MCNAPI_C void _finishSendingTelemetry();

    MCNAPI_C void _notifyDoneWithSession(::std::string_view sessionId);

    MCNAPI_C void _preProcessSessions();

    MCNAPI_C void _processCrashesAsync(
        ::std::vector<::Core::PathBuffer<::std::string>> const&         paths,
        ::Bedrock::CrashFileProcessor*                                  processor,
        ::std::shared_ptr<::gsl::final_action<::std::function<void()>>> doneTask
    );

    MCNAPI_C void _processCrashesSync(
        ::std::vector<::Core::PathBuffer<::std::string>> const&         paths,
        ::Bedrock::CrashFileProcessor*                                  processor,
        ::std::shared_ptr<::gsl::final_action<::std::function<void()>>> doneTask
    );

    MCNAPI_C ::Bedrock::Threading::Async<bool>
    _processOneCrash(::Core::PathBuffer<::std::string> const& filePath, ::Bedrock::CrashFileProcessor* processor);

    MCNAPI_C void _queueTask(::std::string_view name, ::std::function<void()>&& task);

    MCNAPI_C void _resetProcessingState();

    MCNAPI_C void _scanCrashFiles();
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
#ifdef LL_PLAT_C
    MCNAPI void $initialize(::std::string_view crashDirectoryName);

    MCNAPI void $setCrashProcessorForFileType(
        ::std::string_view                               fileExtension,
        ::std::shared_ptr<::Bedrock::CrashFileProcessor> processor
    );

    MCNAPI void $setCrashTelemetryProcessor(::gsl::not_null<::Bedrock::CrashTelemetryProcessor*> processor);

    MCNAPI void $processCrashes(
        ::std::shared_ptr<::Bedrock::WorkerPoolHandleInterface> workerPool,
        ::Scheduler&                                            scheduler,
        bool                                                    isNetworkAvailable
    );

    MCNAPI void $notifyCrashed();

    MCNAPI void $notifySystemError(uint errorCode, ::std::string const& errorMessage);

    MCNAPI void
    $recordCrashedSession(::std::string_view sessionId, ::std::string_view serializedSession, int64 crashTime);

    MCNAPI void $stopProcessingCrashes();

    MCNAPI bool $isCrashProcessingActive() const;

    MCNAPI ::std::string const& $getCrashDataRoot() const;

    MCNAPI ::std::string const& $getCrashedSessionFileSuffix() const;
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForImplBase();

    MCNAPI static void** $vftableForEnableNonOwnerReferences();
    // NOLINTEND
};

} // namespace Bedrock
