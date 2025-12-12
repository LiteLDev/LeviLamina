#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/application/crash_manager/CrashFileProcessor.h"
#include "mc/deps/core/file/PathBuffer.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class CrashManagerImpl; }
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
    virtual ::std::shared_ptr<::Bedrock::SessionInfo> findCrashedSessionInfo(::std::string_view sessionId) const
        /*override*/;

    virtual void
    notifyCrashUploadStatus(::Bedrock::CrashFileProcessor::CrashHandler::StatusUpdate const& status) /*override*/;

    virtual void notifyDoneWithSession(::std::string_view sessionId) /*override*/;

    virtual ~CrashHandlerImpl() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C CrashHandlerImpl(::Bedrock::CrashManagerImpl& manager, ::Core::PathBuffer<::std::string> const& filePath);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(::Bedrock::CrashManagerImpl& manager, ::Core::PathBuffer<::std::string> const& filePath);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ::std::shared_ptr<::Bedrock::SessionInfo> $findCrashedSessionInfo(::std::string_view sessionId) const;

    MCNAPI void $notifyCrashUploadStatus(::Bedrock::CrashFileProcessor::CrashHandler::StatusUpdate const& status);

    MCNAPI void $notifyDoneWithSession(::std::string_view sessionId);
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Bedrock
