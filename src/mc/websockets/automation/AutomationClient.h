#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/codebuilder/IClient.h"
#include "mc/platform/UriListener.h"
#include "mc/world/level/LevelListener.h"

// auto generated forward declare list
// clang-format off
class ActivationUri;
namespace Automation { class AutomationSession; }
namespace CodeBuilder { class GameContext; }
namespace CodeBuilder { struct AgentMessage; }
namespace CodeBuilder { struct ChatMessage; }
namespace CodeBuilder { struct CommandMessage; }
namespace CodeBuilder { struct CommandRequest; }
namespace CodeBuilder { struct ErrorMessage; }
namespace CodeBuilder { struct EventMessage; }
// clang-format on

namespace Automation {

class AutomationClient : public ::CodeBuilder::IClient, public ::UriListener, public ::LevelListener {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkd8f49d;
    ::ll::UntypedStorage<8, 8>  mUnk133ab6;
    ::ll::UntypedStorage<8, 8>  mUnk9e65e2;
    ::ll::UntypedStorage<4, 4>  mUnkde21bd;
    ::ll::UntypedStorage<1, 1>  mUnkc2550d;
    ::ll::UntypedStorage<1, 1>  mUnkda283b;
    ::ll::UntypedStorage<4, 4>  mUnk94c7c4;
    ::ll::UntypedStorage<1, 1>  mUnk60f2b9;
    ::ll::UntypedStorage<8, 24> mUnkcee0c9;
    ::ll::UntypedStorage<8, 16> mUnk731e86;
    ::ll::UntypedStorage<8, 64> mUnk66f7fc;
    ::ll::UntypedStorage<8, 80> mUnk53c64c;
    ::ll::UntypedStorage<8, 16> mUnk3a88e5;
    // NOLINTEND

public:
    // prevent constructor by default
    AutomationClient& operator=(AutomationClient const&);
    AutomationClient(AutomationClient const&);
    AutomationClient();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~AutomationClient() /*override*/;

    // vIndex: 1
    virtual void onUri(::ActivationUri const& uri) /*override*/;

    // vIndex: 5
    virtual void send(::CodeBuilder::AgentMessage const& message) /*override*/;

    // vIndex: 4
    virtual void send(::CodeBuilder::CommandMessage const& message) /*override*/;

    // vIndex: 3
    virtual void send(::CodeBuilder::ErrorMessage const& message) /*override*/;

    // vIndex: 2
    virtual void send(::CodeBuilder::EventMessage const& message) /*override*/;

    // vIndex: 1
    virtual void send(::CodeBuilder::ChatMessage const& message) /*override*/;

    // vIndex: 2
    virtual void tick() /*override*/;

    // vIndex: 24
    virtual void onLevelDestruction(::std::string const&) /*override*/;

    // vIndex: 28
    virtual void playerListChanged() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _forEachSession(::std::function<bool(::Automation::AutomationSession&)> const& callback);

    MCNAPI void _removeSession(::Automation::AutomationSession const& session);

    MCNAPI bool _tryAddCommand(::CodeBuilder::CommandRequest&& commandRequest);

    MCNAPI ::std::shared_ptr<::Automation::AutomationSession> getDefaultSession();

    MCNAPI ::std::shared_ptr<::CodeBuilder::GameContext> getGameContext() const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onUri(::ActivationUri const& uri);

    MCNAPI void $send(::CodeBuilder::AgentMessage const& message);

    MCNAPI void $send(::CodeBuilder::CommandMessage const& message);

    MCNAPI void $send(::CodeBuilder::ErrorMessage const& message);

    MCNAPI void $send(::CodeBuilder::EventMessage const& message);

    MCNAPI void $send(::CodeBuilder::ChatMessage const& message);

    MCNAPI void $tick();

    MCNAPI void $onLevelDestruction(::std::string const&);

    MCNAPI void $playerListChanged();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForUriListener();

    MCNAPI static void** $vftableForIClient();

    MCNAPI static void** $vftableForLevelListener();
    // NOLINTEND
};

} // namespace Automation
