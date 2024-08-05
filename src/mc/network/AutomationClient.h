#pragma once

#include "mc/_HeaderOutputPredefine.h"

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

class AutomationClient {
public:
    // prevent constructor by default
    AutomationClient& operator=(AutomationClient const&);
    AutomationClient(AutomationClient const&);
    AutomationClient();

public:
    // NOLINTBEGIN
    MCVAPI void onLevelDestruction(std::string const&);

    MCVAPI void onUri(class ActivationUri const& uri);

    MCVAPI void playerListChanged();

    MCVAPI void send(struct CodeBuilder::CommandMessage const& message);

    MCVAPI void send(struct CodeBuilder::ErrorMessage const& message);

    MCVAPI void send(struct CodeBuilder::ChatMessage const& message);

    MCVAPI void send(struct CodeBuilder::AgentMessage const& message);

    MCVAPI void send(struct CodeBuilder::EventMessage const& message);

    MCVAPI void tick();

    MCAPI explicit AutomationClient(class IMinecraftApp& minecraft);

    MCAPI std::shared_ptr<class Automation::AutomationSession> getDefaultSession();

    MCAPI std::shared_ptr<class CodeBuilder::GameContext> getGameContext() const;

    MCAPI std::shared_ptr<class Automation::AutomationSession> getSessionForCommand(class CommandOrigin const& origin);

    MCAPI bool isReadyForInGameCommands();

    MCAPI void setRequireEncryption(bool isEncryptionRequired);

    MCAPI void setServerRetryTime(float retryTime);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _forEachSession(std::function<bool(class Automation::AutomationSession&)> const& callback);

    MCAPI void _removeSession(class Automation::AutomationSession const& session);

    MCAPI bool _tryAddCommand(struct CodeBuilder::CommandRequest&&);

    // NOLINTEND
};

}; // namespace Automation
