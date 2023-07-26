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
    AutomationClient& operator=(AutomationClient const&) = delete;
    AutomationClient(AutomationClient const&)            = delete;
    AutomationClient()                                   = delete;

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_AUTOMATION_AUTOMATIONCLIENT
    /**
     * @symbol
     * ?onLevelDestruction\@AutomationClient\@Automation\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void onLevelDestruction(std::string const&); // NOLINT
    /**
     * @symbol ?onUri\@AutomationClient\@Automation\@\@UEAAXAEBVActivationUri\@\@\@Z
     */
    MCVAPI void onUri(class ActivationUri const&); // NOLINT
    /**
     * @symbol ?playerListChanged\@AutomationClient\@Automation\@\@UEAAXXZ
     */
    MCVAPI void playerListChanged(); // NOLINT
    /**
     * @symbol ?send\@AutomationClient\@Automation\@\@UEAAXAEBUErrorMessage\@CodeBuilder\@\@\@Z
     */
    MCVAPI void send(struct CodeBuilder::ErrorMessage const&); // NOLINT
    /**
     * @symbol ?send\@AutomationClient\@Automation\@\@UEAAXAEBUCommandMessage\@CodeBuilder\@\@\@Z
     */
    MCVAPI void send(struct CodeBuilder::CommandMessage const&); // NOLINT
    /**
     * @symbol ?send\@AutomationClient\@Automation\@\@UEAAXAEBUChatMessage\@CodeBuilder\@\@\@Z
     */
    MCVAPI void send(struct CodeBuilder::ChatMessage const&); // NOLINT
    /**
     * @symbol ?send\@AutomationClient\@Automation\@\@UEAAXAEBUEventMessage\@CodeBuilder\@\@\@Z
     */
    MCVAPI void send(struct CodeBuilder::EventMessage const&); // NOLINT
    /**
     * @symbol ?send\@AutomationClient\@Automation\@\@UEAAXAEBUAgentMessage\@CodeBuilder\@\@\@Z
     */
    MCVAPI void send(struct CodeBuilder::AgentMessage const&); // NOLINT
    /**
     * @symbol ?tick\@AutomationClient\@Automation\@\@UEAAXXZ
     */
    MCVAPI void tick(); // NOLINT
#endif
    /**
     * @symbol ??0AutomationClient\@Automation\@\@QEAA\@AEAVIMinecraftApp\@\@\@Z
     */
    MCAPI AutomationClient(class IMinecraftApp&); // NOLINT
    /**
     * @symbol
     * ?getDefaultSession\@AutomationClient\@Automation\@\@QEAA?AV?$shared_ptr\@VAutomationSession\@Automation\@\@\@std\@\@XZ
     */
    MCAPI class std::shared_ptr<class Automation::AutomationSession> getDefaultSession(); // NOLINT
    /**
     * @symbol
     * ?getGameContext\@AutomationClient\@Automation\@\@QEBA?AV?$shared_ptr\@VGameContext\@CodeBuilder\@\@\@std\@\@XZ
     */
    MCAPI class std::shared_ptr<class CodeBuilder::GameContext> getGameContext() const; // NOLINT
    /**
     * @symbol
     * ?getSessionForCommand\@AutomationClient\@Automation\@\@QEAA?AV?$shared_ptr\@VAutomationSession\@Automation\@\@\@std\@\@AEBVCommandOrigin\@\@\@Z
     */
    MCAPI class std::shared_ptr<class Automation::AutomationSession>
    getSessionForCommand(class CommandOrigin const&); // NOLINT
    /**
     * @symbol ?isReadyForInGameCommands\@AutomationClient\@Automation\@\@QEAA_NXZ
     */
    MCAPI bool isReadyForInGameCommands(); // NOLINT
    /**
     * @symbol ?setRequireEncryption\@AutomationClient\@Automation\@\@QEAAX_N\@Z
     */
    MCAPI void setRequireEncryption(bool); // NOLINT
    /**
     * @symbol ?setServerRetryTime\@AutomationClient\@Automation\@\@QEAAXM\@Z
     */
    MCAPI void setServerRetryTime(float); // NOLINT

    // private:
    /**
     * @symbol
     * ?_forEachSession\@AutomationClient\@Automation\@\@AEAAXAEBV?$function\@$$A6A_NAEAVAutomationSession\@Automation\@\@\@Z\@std\@\@\@Z
     */
    MCAPI void _forEachSession(class std::function<bool(class Automation::AutomationSession&)> const&); // NOLINT
    /**
     * @symbol ?_removeSession\@AutomationClient\@Automation\@\@AEAAXAEBVAutomationSession\@2\@\@Z
     */
    MCAPI void _removeSession(class Automation::AutomationSession const&); // NOLINT
    /**
     * @symbol ?_tryAddCommand\@AutomationClient\@Automation\@\@AEAA_N$$QEAUCommandRequest\@CodeBuilder\@\@\@Z
     */
    MCAPI bool _tryAddCommand(struct CodeBuilder::CommandRequest&&); // NOLINT

private:
};

}; // namespace Automation
