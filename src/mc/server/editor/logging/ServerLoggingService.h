#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/LogChannel.h"
#include "mc/editor/logging/LogLevel.h"
#include "mc/editor/logging/LoggingService.h"

// auto generated forward declare list
// clang-format off
class HashedString;
class Player;
namespace Editor { class IEditorPlayer; }
namespace Editor { class LogMessage; }
namespace Editor { struct LogContent; }
// clang-format on

namespace Editor::Services {

class ServerLoggingService : public ::Editor::Services::LoggingService {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk7b780e;
    ::ll::UntypedStorage<8, 24> mUnkbc876c;
    // NOLINTEND

public:
    // prevent constructor by default
    ServerLoggingService& operator=(ServerLoggingService const&);
    ServerLoggingService(ServerLoggingService const&);
    ServerLoggingService();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::string_view getServiceName() const /*override*/;

    virtual void
    log(::Editor::LogContent            content,
        ::Player*                       player,
        ::Editor::LogLevel              level,
        ::std::vector<::HashedString>&& areaTags,
        ::Editor::LogChannel            logChannelMask) /*override*/;

    virtual void flush() /*override*/;

    virtual ::std::vector<::Editor::LogMessage> const& getMessages() const /*override*/;

    virtual ~ServerLoggingService() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _dispatchLogMessagePayload(::Editor::LogMessage message, ::Editor::IEditorPlayer* editorPlayer);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::std::string_view $getServiceName() const;

    MCNAPI void $log(
        ::Editor::LogContent            content,
        ::Player*                       player,
        ::Editor::LogLevel              level,
        ::std::vector<::HashedString>&& areaTags,
        ::Editor::LogChannel            logChannelMask
    );

    MCNAPI void $flush();

    MCNAPI ::std::vector<::Editor::LogMessage> const& $getMessages() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForLoggingServiceProvider();

    MCNAPI static void** $vftableForIEditorService();
    // NOLINTEND
};

} // namespace Editor::Services
