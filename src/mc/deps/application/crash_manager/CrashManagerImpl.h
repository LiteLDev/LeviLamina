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
namespace Bedrock { class WorkerPoolHandleInterface; }
namespace Bedrock { struct CrashManagerConfig; }
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
        ::ll::UntypedStorage<8, 32> mUnkb55d17;
        ::ll::UntypedStorage<8, 16> mUnkd95fbb;
        // NOLINTEND

    public:
        // prevent constructor by default
        CrashProcessorInfo& operator=(CrashProcessorInfo const&);
        CrashProcessorInfo(CrashProcessorInfo const&);
        CrashProcessorInfo();
    };

    struct CrashedSessionInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 16> mUnka0307c;
        ::ll::UntypedStorage<8, 32> mUnkdf1862;
        ::ll::UntypedStorage<1, 1>  mUnkdad209;
        // NOLINTEND

    public:
        // prevent constructor by default
        CrashedSessionInfo& operator=(CrashedSessionInfo const&);
        CrashedSessionInfo(CrashedSessionInfo const&);
        CrashedSessionInfo();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk1a7365;
    ::ll::UntypedStorage<8, 32> mUnk4585f0;
    ::ll::UntypedStorage<8, 32> mUnk6e472b;
    ::ll::UntypedStorage<8, 32> mUnke1a459;
    ::ll::UntypedStorage<8, 16> mUnk28673f;
    ::ll::UntypedStorage<8, 80> mUnk3030e6;
    ::ll::UntypedStorage<8, 16> mUnk2e647e;
    ::ll::UntypedStorage<8, 16> mUnkc7a812;
    ::ll::UntypedStorage<8, 24> mUnkd5ee85;
    ::ll::UntypedStorage<8, 16> mUnk20226a;
    ::ll::UntypedStorage<8, 16> mUnk426087;
    ::ll::UntypedStorage<8, 8>  mUnk936f0f;
    ::ll::UntypedStorage<1, 1>  mUnkb940bb;
    ::ll::UntypedStorage<8, 16> mUnk265ed5;
    ::ll::UntypedStorage<1, 1>  mUnk6afa2c;
    ::ll::UntypedStorage<1, 1>  mUnkbbb515;
    // NOLINTEND

public:
    // prevent constructor by default
    CrashManagerImpl& operator=(CrashManagerImpl const&);
    CrashManagerImpl(CrashManagerImpl const&);
    CrashManagerImpl();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CrashManagerImpl() /*override*/ = default;

    virtual void initialize(::Bedrock::CrashManagerConfig const&) /*override*/;

    virtual void
        setCrashProcessorForFileType(::std::string_view, ::std::shared_ptr<::Bedrock::CrashFileProcessor>) /*override*/;

    virtual void setCrashTelemetryProcessor(::gsl::not_null<::Bedrock::CrashTelemetryProcessor*>) /*override*/;

    virtual void
    processCrashes(::std::shared_ptr<::Bedrock::WorkerPoolHandleInterface>, ::Scheduler&, bool) /*override*/;

    virtual void notifyCrashed() /*override*/;

    virtual void notifySystemError(uint, ::std::string const&) /*override*/;

    virtual void recordCrashedSession(::std::string_view, ::std::string_view, int64) /*override*/;

    virtual void stopProcessingCrashes() /*override*/;

    virtual bool isCrashProcessingActive() const /*override*/;

    virtual ::std::string const& getCrashDataRoot() const /*override*/;

    virtual ::std::string const& getCrashedSessionFileSuffix() const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Bedrock
