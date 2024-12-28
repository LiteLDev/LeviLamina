#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
class Scheduler;
namespace Bedrock { class CrashFileProcessor; }
namespace Bedrock { class CrashTelemetryProcessor; }
namespace Bedrock { class WorkerPoolHandleInterface; }
// clang-format on

namespace Bedrock {

class CrashManager : public ::Bedrock::EnableNonOwnerReferences, public ::Bedrock::ImplBase<::Bedrock::CrashManager> {
public:
    // prevent constructor by default
    CrashManager& operator=(CrashManager const&);
    CrashManager(CrashManager const&);
    CrashManager();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual void initialize(::std::string_view) = 0;

    // vIndex: 2
    virtual void setCrashProcessorForFileType(::std::string_view, ::std::shared_ptr<::Bedrock::CrashFileProcessor>) = 0;

    // vIndex: 3
    virtual void setCrashTelemetryProcessor(::gsl::not_null<::Bedrock::CrashTelemetryProcessor*>) = 0;

    // vIndex: 4
    virtual void processCrashes(::std::shared_ptr<::Bedrock::WorkerPoolHandleInterface>, ::Scheduler&, bool) = 0;

    // vIndex: 5
    virtual void notifyCrashed() = 0;

    // vIndex: 6
    virtual void notifyMemoryIssue(uint, ::std::string const&) = 0;

    // vIndex: 7
    virtual void recordCrashedSession(::std::string_view, ::std::string_view, int64) = 0;

    // vIndex: 8
    virtual void stopProcessingCrashes() = 0;

    // vIndex: 9
    virtual bool isCrashProcessingActive() const = 0;

    // vIndex: 10
    virtual ::std::string const& getCrashDataRoot() const = 0;

    // vIndex: 11
    virtual ::std::string const& getCrashedSessionFileSuffix() const = 0;

    // vIndex: 0
    virtual ~CrashManager() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Bedrock
