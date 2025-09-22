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
    CrashManagerImpl();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CrashManagerImpl() /*override*/ = default;

    // vIndex: 1
    virtual void initialize(::std::string_view) /*override*/;

    // vIndex: 2
    virtual void
        setCrashProcessorForFileType(::std::string_view, ::std::shared_ptr<::Bedrock::CrashFileProcessor>) /*override*/;

    // vIndex: 3
    virtual void setCrashTelemetryProcessor(::gsl::not_null<::Bedrock::CrashTelemetryProcessor*>) /*override*/;

    // vIndex: 4
    virtual void
    processCrashes(::std::shared_ptr<::Bedrock::WorkerPoolHandleInterface>, ::Scheduler&, bool) /*override*/;

    // vIndex: 5
    virtual void notifyCrashed() /*override*/;

    // vIndex: 6
    virtual void notifySystemError(uint, ::std::string const&) /*override*/;

    // vIndex: 7
    virtual void recordCrashedSession(::std::string_view, ::std::string_view, int64) /*override*/;

    // vIndex: 8
    virtual void stopProcessingCrashes() /*override*/;

    // vIndex: 9
    virtual bool isCrashProcessingActive() const /*override*/;

    // vIndex: 10
    virtual ::std::string const& getCrashDataRoot() const /*override*/;

    // vIndex: 11
    virtual ::std::string const& getCrashedSessionFileSuffix() const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Bedrock
