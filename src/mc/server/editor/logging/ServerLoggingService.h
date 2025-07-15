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
    // vIndex: 4
    virtual ::std::string_view getServiceName() const /*override*/;

    // vIndex: 1
    virtual void
    log(::std::string&&                 msg,
        ::Player*                       player,
        ::Editor::LogLevel              level,
        ::std::vector<::HashedString>&& areaTags) /*override*/;

    // vIndex: 2
    virtual void flush() /*override*/;

    // vIndex: 3
    virtual ::std::vector<::Editor::LogMessage> const& getMessages() const /*override*/;

    // vIndex: 0
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

    MCNAPI void
    $log(::std::string&& msg, ::Player* player, ::Editor::LogLevel level, ::std::vector<::HashedString>&& areaTags);

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
