#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/application/crash_manager/CrashFileProcessor.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class SessionInfo; }
// clang-format on

namespace Bedrock {

class CrashHandlerImpl : public ::Bedrock::CrashFileProcessor::CrashHandler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>   mUnk3b4d5e;
    ::ll::UntypedStorage<8, 216> mUnkdcd511;
    ::ll::UntypedStorage<8, 8>   mUnk622432;
    // NOLINTEND

public:
    // prevent constructor by default
    CrashHandlerImpl& operator=(CrashHandlerImpl const&);
    CrashHandlerImpl(CrashHandlerImpl const&);
    CrashHandlerImpl();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::std::shared_ptr<::Bedrock::SessionInfo> findCrashedSessionInfo(::std::string_view) const /*override*/;

    // vIndex: 2
    virtual void notifyCrashUploadStatus(::Bedrock::CrashFileProcessor::CrashHandler::StatusUpdate const&) /*override*/;

    // vIndex: 3
    virtual void notifyDoneWithSession(::std::string_view) /*override*/;

    // vIndex: 0
    virtual ~CrashHandlerImpl() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Bedrock
