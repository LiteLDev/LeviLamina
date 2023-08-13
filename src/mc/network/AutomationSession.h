#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class CommandOrigin;
class RakWebSocketDataFrame;
enum class CloseStatusCode;
enum class WSConnectionResult;
namespace Automation { class AutomationClient; }
namespace CodeBuilder { class GameContext; }
namespace CodeBuilder { enum class EncryptionCipherMode; }
namespace CodeBuilder { struct ChatMessage; }
namespace CodeBuilder { struct ChatSubscription; }
namespace CodeBuilder { struct CommandRequest; }
namespace CodeBuilder { struct EncryptionRequest; }
namespace CodeBuilder { struct ErrorMessage; }
// clang-format on

namespace Automation {

class AutomationSession {

public:
    // prevent constructor by default
    AutomationSession& operator=(AutomationSession const&) = delete;
    AutomationSession(AutomationSession const&)            = delete;
    AutomationSession()                                    = delete;

public:
    // NOLINTBEGIN
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_AUTOMATION_AUTOMATIONSESSION
    /**
     * @symbol
     * ?agentCommand\@AutomationSession\@Automation\@\@EEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@$$QEAUCommandRequest\@CodeBuilder\@\@\@Z
     */
    MCVAPI void agentCommand(std::string const&, struct CodeBuilder::CommandRequest&&);
    /**
     * @symbol
     * ?chatSubscribe\@AutomationSession\@Automation\@\@EEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@$$QEAUChatSubscription\@CodeBuilder\@\@\@Z
     */
    MCVAPI void chatSubscribe(std::string const&, struct CodeBuilder::ChatSubscription&&);
    /**
     * @symbol
     * ?chatUnsubscribe\@AutomationSession\@Automation\@\@EEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0\@Z
     */
    MCVAPI void chatUnsubscribe(std::string const&, std::string const&);
    /**
     * @symbol
     * ?chatUnsubscribeAll\@AutomationSession\@Automation\@\@EEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void chatUnsubscribeAll(std::string const&);
    /**
     * @symbol
     * ?command\@AutomationSession\@Automation\@\@EEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@$$QEAUCommandRequest\@CodeBuilder\@\@\@Z
     */
    MCVAPI void command(std::string const&, struct CodeBuilder::CommandRequest&&);
    /**
     * @symbol
     * ?dataBlock\@AutomationSession\@Automation\@\@EEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void dataBlock(std::string const&);
    /**
     * @symbol
     * ?dataItem\@AutomationSession\@Automation\@\@EEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void dataItem(std::string const&);
    /**
     * @symbol
     * ?dataMob\@AutomationSession\@Automation\@\@EEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void dataMob(std::string const&);
    /**
     * @symbol
     * ?encryptConnection\@AutomationSession\@Automation\@\@EEAA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBUEncryptionRequest\@CodeBuilder\@\@\@Z
     */
    MCVAPI bool encryptConnection(std::string const&, struct CodeBuilder::EncryptionRequest const&);
    /**
     * @symbol
     * ?error\@AutomationSession\@Automation\@\@EEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBUErrorMessage\@CodeBuilder\@\@\@Z
     */
    MCVAPI void error(std::string const&, struct CodeBuilder::ErrorMessage const&);
    /**
     * @symbol
     * ?onMessageRecieved\@AutomationSession\@Automation\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void onMessageRecieved(std::string const&);
    /**
     * @symbol
     * ?subscribe\@AutomationSession\@Automation\@\@EEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0\@Z
     */
    MCVAPI void subscribe(std::string const&, std::string const&);
    /**
     * @symbol
     * ?unsubscribe\@AutomationSession\@Automation\@\@EEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0\@Z
     */
    MCVAPI void unsubscribe(std::string const&, std::string const&);
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~AutomationSession();
#endif
    /**
     * @symbol ??0AutomationSession\@Automation\@\@QEAA\@AEAVAutomationClient\@1\@\@Z
     */
    MCAPI AutomationSession(class Automation::AutomationClient&);
    /**
     * @symbol
     * ?connect\@AutomationSession\@Automation\@\@QEAA?AW4WSConnectionResult\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI enum class WSConnectionResult connect(std::string const&);
    /**
     * @symbol
     * ?connect\@AutomationSession\@Automation\@\@QEAA?AW4WSConnectionResult\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@5\@\@Z
     */
    MCAPI enum class WSConnectionResult connect(std::string const&, std::vector<std::string> const&);
    /**
     * @symbol
     * ?dhKeyExchange\@AutomationSession\@Automation\@\@QEAA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@00W4EncryptionCipherMode\@CodeBuilder\@\@AEAV34\@\@Z
     */
    MCAPI bool
    dhKeyExchange(std::string const&, std::string const&, std::string const&, enum class CodeBuilder::EncryptionCipherMode, std::string&);
    /**
     * @symbol ?disconnect\@AutomationSession\@Automation\@\@QEAAXXZ
     */
    MCAPI void disconnect();
    /**
     * @symbol
     * ?getGameContext\@AutomationSession\@Automation\@\@QEBA?AV?$shared_ptr\@VGameContext\@CodeBuilder\@\@\@std\@\@XZ
     */
    MCAPI std::shared_ptr<class CodeBuilder::GameContext> getGameContext() const;
    /**
     * @symbol ?isConnecting\@AutomationSession\@Automation\@\@QEAA_NXZ
     */
    MCAPI bool isConnecting();
    /**
     * @symbol ?isReady\@AutomationSession\@Automation\@\@QEAA_NXZ
     */
    MCAPI bool isReady();
    /**
     * @symbol
     * ?receive\@AutomationSession\@Automation\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void receive(std::string const&);
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?_createCommandOrigin\@AutomationSession\@Automation\@\@AEAA?AV?$unique_ptr\@VCommandOrigin\@\@U?$default_delete\@VCommandOrigin\@\@\@std\@\@\@std\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@4\@\@Z
     */
    MCAPI std::unique_ptr<class CommandOrigin> _createCommandOrigin(std::string const&);
    /**
     * @symbol
     * ?_errorEncryptionRequired\@AutomationSession\@Automation\@\@AEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void _errorEncryptionRequired(std::string const&);
    /**
     * @symbol ?_handleIncomingMessage\@AutomationSession\@Automation\@\@AEAAXAEBVRakWebSocketDataFrame\@\@\@Z
     */
    MCAPI void _handleIncomingMessage(class RakWebSocketDataFrame const&);
    /**
     * @symbol ?_handleMessage\@AutomationSession\@Automation\@\@AEAAXAEBUChatMessage\@CodeBuilder\@\@\@Z
     */
    MCAPI void _handleMessage(struct CodeBuilder::ChatMessage const&);
    /**
     * @symbol
     * ?_handleOnClose\@AutomationSession\@Automation\@\@AEAAXW4CloseStatusCode\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void _handleOnClose(enum class CloseStatusCode, std::string const&);
    /**
     * @symbol
     * ?_handleOnConnected\@AutomationSession\@Automation\@\@AEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void _handleOnConnected(std::string const&);
    /**
     * @symbol
     * ?_send\@AutomationSession\@Automation\@\@AEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void _send(std::string const&);
    /**
     * @symbol
     * ?_sendUnencrypted\@AutomationSession\@Automation\@\@AEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void _sendUnencrypted(std::string const&);
    /**
     * @symbol ?_tryHandleMessage\@AutomationSession\@Automation\@\@AEAA_NAEBUErrorMessage\@CodeBuilder\@\@\@Z
     */
    MCAPI bool _tryHandleMessage(struct CodeBuilder::ErrorMessage const&);
    // NOLINTEND
};

}; // namespace Automation
