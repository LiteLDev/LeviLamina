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
    // virtual functions
    // NOLINTBEGIN
    virtual void initialize(::std::string_view) = 0;

    virtual void setCrashProcessorForFileType(::std::string_view, ::std::shared_ptr<::Bedrock::CrashFileProcessor>) = 0;

    virtual void setCrashTelemetryProcessor(::gsl::not_null<::Bedrock::CrashTelemetryProcessor*>) = 0;

    virtual void processCrashes(::std::shared_ptr<::Bedrock::WorkerPoolHandleInterface>, ::Scheduler&, bool) = 0;

    virtual void notifyCrashed() = 0;

    virtual void notifySystemError(uint, ::std::string const&) = 0;

    virtual void recordCrashedSession(::std::string_view, ::std::string_view, int64) = 0;

    virtual void stopProcessingCrashes() = 0;

    virtual bool isCrashProcessingActive() const = 0;

    virtual ::std::string const& getCrashDataRoot() const = 0;

    virtual ::std::string const& getCrashedSessionFileSuffix() const = 0;

#ifdef LL_PLAT_S
    virtual ~CrashManager() /*override*/ = default;
#else // LL_PLAT_C
    virtual ~CrashManager() /*override*/;
#endif

    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI_C static ::std::add_lvalue_reference_t<char const[]> DEFAULT_CRASH_DIRECTORY_NAME();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Bedrock
