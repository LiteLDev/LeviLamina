#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/logging/LogLevel.h"
#include "mc/editor/logging/LoggingService.h"

// auto generated forward declare list
// clang-format off
class HashedString;
class Player;
namespace Editor { class IEditorPlayer; }
namespace Editor { class LogMessage; }
// clang-format on

namespace Editor::Services {

class ServerLoggingService : public ::Editor::Services::LoggingService {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk41f73b;
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
    // vIndex: 4
    virtual ::std::string_view getServiceName() const /*override*/;

    // vIndex: 1
    virtual void
    log(::std::string&& msg, ::Player* player, ::Editor::LogLevel level, ::std::vector<::HashedString>&& areaTags
    ) /*override*/;

    // vIndex: 2
    virtual void flush() /*override*/;

    // vIndex: 3
    virtual ::std::vector<::Editor::LogMessage> const& getMessages() const /*override*/;

    // vIndex: 0
    virtual ~ServerLoggingService() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _dispatchLogMessagePayload(::Editor::LogMessage message, ::Editor::IEditorPlayer* editorPlayer);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static uint64 const& MAX_STORED_MESSAGE_COUNT();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::string_view $getServiceName() const;

    MCAPI void
    $log(::std::string&& msg, ::Player* player, ::Editor::LogLevel level, ::std::vector<::HashedString>&& areaTags);

    MCAPI void $flush();

    MCAPI ::std::vector<::Editor::LogMessage> const& $getMessages() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftableForLoggingServiceProvider();

    MCAPI static void** $vftableForIEditorService();
    // NOLINTEND
};

} // namespace Editor::Services
