#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
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

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_AUTOMATION_AUTOMATIONCLIENT
public:
    AutomationClient& operator=(AutomationClient const&) = delete;
    AutomationClient(AutomationClient const&)            = delete;
    AutomationClient()                                   = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_AUTOMATION_AUTOMATIONCLIENT
    /**
     * @symbol
     * ?onLevelDestruction\@AutomationClient\@Automation\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void onLevelDestruction(std::string const&);
    /**
     * @symbol ?onUri\@AutomationClient\@Automation\@\@UEAAXAEBVActivationUri\@\@\@Z
     */
    MCVAPI void onUri(class ActivationUri const&);
    /**
     * @symbol ?playerListChanged\@AutomationClient\@Automation\@\@UEAAXXZ
     */
    MCVAPI void playerListChanged();
    /**
     * @symbol ?send\@AutomationClient\@Automation\@\@UEAAXAEBUErrorMessage\@CodeBuilder\@\@\@Z
     */
    MCVAPI void send(struct CodeBuilder::ErrorMessage const&);
    /**
     * @symbol ?send\@AutomationClient\@Automation\@\@UEAAXAEBUCommandMessage\@CodeBuilder\@\@\@Z
     */
    MCVAPI void send(struct CodeBuilder::CommandMessage const&);
    /**
     * @symbol ?send\@AutomationClient\@Automation\@\@UEAAXAEBUChatMessage\@CodeBuilder\@\@\@Z
     */
    MCVAPI void send(struct CodeBuilder::ChatMessage const&);
    /**
     * @symbol ?send\@AutomationClient\@Automation\@\@UEAAXAEBUEventMessage\@CodeBuilder\@\@\@Z
     */
    MCVAPI void send(struct CodeBuilder::EventMessage const&);
    /**
     * @symbol ?send\@AutomationClient\@Automation\@\@UEAAXAEBUAgentMessage\@CodeBuilder\@\@\@Z
     */
    MCVAPI void send(struct CodeBuilder::AgentMessage const&);
    /**
     * @symbol ?tick\@AutomationClient\@Automation\@\@UEAAXXZ
     */
    MCVAPI void tick();
#endif
    /**
     * @symbol ??0AutomationClient\@Automation\@\@QEAA\@AEAVIMinecraftApp\@\@\@Z
     */
    MCAPI AutomationClient(class IMinecraftApp&);
    /**
     * @symbol
     * ?getDefaultSession\@AutomationClient\@Automation\@\@QEAA?AV?$shared_ptr\@VAutomationSession\@Automation\@\@\@std\@\@XZ
     */
    MCAPI class std::shared_ptr<class Automation::AutomationSession> getDefaultSession();
    /**
     * @symbol
     * ?getGameContext\@AutomationClient\@Automation\@\@QEBA?AV?$shared_ptr\@VGameContext\@CodeBuilder\@\@\@std\@\@XZ
     */
    MCAPI class std::shared_ptr<class CodeBuilder::GameContext> getGameContext() const;
    /**
     * @symbol
     * ?getSessionForCommand\@AutomationClient\@Automation\@\@QEAA?AV?$shared_ptr\@VAutomationSession\@Automation\@\@\@std\@\@AEBVCommandOrigin\@\@\@Z
     */
    MCAPI class std::shared_ptr<class Automation::AutomationSession> getSessionForCommand(class CommandOrigin const&);
    /**
     * @symbol ?isReadyForInGameCommands\@AutomationClient\@Automation\@\@QEAA_NXZ
     */
    MCAPI bool isReadyForInGameCommands();
    /**
     * @symbol ?setRequireEncryption\@AutomationClient\@Automation\@\@QEAAX_N\@Z
     */
    MCAPI void setRequireEncryption(bool);
    /**
     * @symbol ?setServerRetryTime\@AutomationClient\@Automation\@\@QEAAXM\@Z
     */
    MCAPI void setServerRetryTime(float);

    // private:
    /**
     * @symbol
     * ?_forEachSession\@AutomationClient\@Automation\@\@AEAAXAEBV?$function\@$$A6A_NAEAVAutomationSession\@Automation\@\@\@Z\@std\@\@\@Z
     */
    MCAPI void _forEachSession(class std::function<bool(class Automation::AutomationSession&)> const&);
    /**
     * @symbol ?_removeSession\@AutomationClient\@Automation\@\@AEAAXAEBVAutomationSession\@2\@\@Z
     */
    MCAPI void _removeSession(class Automation::AutomationSession const&);
    /**
     * @symbol ?_tryAddCommand\@AutomationClient\@Automation\@\@AEAA_N$$QEAUCommandRequest\@CodeBuilder\@\@\@Z
     */
    MCAPI bool _tryAddCommand(struct CodeBuilder::CommandRequest&&);

private:
};

}; // namespace Automation
