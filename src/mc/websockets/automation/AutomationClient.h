#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/codebuilder/IClient.h"
#include "mc/platform/UriListener.h"
#include "mc/world/level/LevelListener.h"

// auto generated forward declare list
// clang-format off
class ActivationUri;
class CommandOrigin;
class IMinecraftApp;
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

    // vIndex: 23
    virtual void onLevelDestruction(::std::string const&) /*override*/;

    // vIndex: 27
    virtual void playerListChanged() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit AutomationClient(::IMinecraftApp& minecraft);

    MCAPI void _forEachSession(::std::function<bool(::Automation::AutomationSession&)> const& callback);

    MCAPI void _removeSession(::Automation::AutomationSession const& session);

    MCAPI bool _tryAddCommand(::CodeBuilder::CommandRequest&& commandRequest);

    MCAPI ::std::shared_ptr<::Automation::AutomationSession> getDefaultSession();

    MCAPI ::std::shared_ptr<::CodeBuilder::GameContext> getGameContext() const;

    MCAPI ::std::shared_ptr<::Automation::AutomationSession> getSessionForCommand(::CommandOrigin const& origin);

    MCAPI bool isReadyForInGameCommands();

    MCAPI void setRequireEncryption(bool isEncryptionRequired);

    MCAPI void setServerRetryTime(float retryTime);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::IMinecraftApp& minecraft);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $onUri(::ActivationUri const& uri);

    MCAPI void $send(::CodeBuilder::AgentMessage const& message);

    MCAPI void $send(::CodeBuilder::CommandMessage const& message);

    MCAPI void $send(::CodeBuilder::ErrorMessage const& message);

    MCAPI void $send(::CodeBuilder::EventMessage const& message);

    MCAPI void $send(::CodeBuilder::ChatMessage const& message);

    MCAPI void $tick();

    MCAPI void $onLevelDestruction(::std::string const&);

    MCAPI void $playerListChanged();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftableForUriListener();

    MCAPI static void** $vftableForIClient();

    MCAPI static void** $vftableForLevelListener();
    // NOLINTEND
};

} // namespace Automation
