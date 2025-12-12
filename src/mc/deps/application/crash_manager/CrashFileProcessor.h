#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/threading/Async.h"

// auto generated forward declare list
// clang-format off
class Scheduler;
namespace Bedrock { class SessionInfo; }
namespace Bedrock { class WorkerPoolHandleInterface; }
// clang-format on

namespace Bedrock {

class CrashFileProcessor {
public:
    // CrashFileProcessor inner types declare
    // clang-format off
    class CrashHandler;
    // clang-format on

    // CrashFileProcessor inner types define
    enum class ProcessMode : int {
        Synchronous  = 0,
        Asynchronous = 1,
    };

    class CrashHandler {
    public:
        // CrashHandler inner types declare
        // clang-format off
        struct StatusUpdate;
        // clang-format on

        // CrashHandler inner types define
        struct StatusUpdate {
        public:
            // member variables
            // NOLINTBEGIN
            ::ll::UntypedStorage<8, 32> mUnka2470e;
            ::ll::UntypedStorage<8, 32> mUnk51b44b;
            ::ll::UntypedStorage<8, 32> mUnk7d057f;
            // NOLINTEND

        public:
            // prevent constructor by default
            StatusUpdate& operator=(StatusUpdate const&);
            StatusUpdate(StatusUpdate const&);
            StatusUpdate();
        };

    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ~CrashHandler() = default;

        virtual ::std::shared_ptr<::Bedrock::SessionInfo> findCrashedSessionInfo(::std::string_view) const = 0;

        virtual void notifyCrashUploadStatus(::Bedrock::CrashFileProcessor::CrashHandler::StatusUpdate const&) = 0;

        virtual void notifyDoneWithSession(::std::string_view) = 0;
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN

        // NOLINTEND
    };

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CrashFileProcessor() = default;

    virtual bool getSessionIDFromFile(::std::string&, ::Core::PathBuffer<::std::string> const&) const = 0;

    virtual ::Bedrock::CrashFileProcessor::ProcessMode
    beginCrashProcessing(uint64, ::std::shared_ptr<::Bedrock::WorkerPoolHandleInterface>, ::Scheduler&) = 0;

    virtual ::Bedrock::Threading::Async<bool> processCrash(
        ::gsl::not_null<::std::shared_ptr<::Bedrock::CrashFileProcessor::CrashHandler>> const&,
        ::Core::PathBuffer<::std::string> const&
    ) = 0;

    virtual void doneCrashProcessing() = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Bedrock
