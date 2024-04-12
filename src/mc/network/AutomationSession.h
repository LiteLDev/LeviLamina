#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/codebuilder/EncryptionCipherMode.h"
#include "mc/common/wrapper/WSConnectionResult.h"
#include "mc/enums/CloseStatusCode.h"

// auto generated forward declare list
// clang-format off
class CommandOrigin;
class RakWebSocketDataFrame;
namespace Automation { class AutomationClient; }
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
    AutomationSession& operator=(AutomationSession const&);
    AutomationSession(AutomationSession const&);
    AutomationSession();

public:
    // NOLINTBEGIN
    // symbol:
    // ?agentCommand@AutomationSession@Automation@@EEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@$$QEAUCommandRequest@CodeBuilder@@@Z
    MCVAPI void agentCommand(std::string const& requestId, struct CodeBuilder::CommandRequest&& request);

    // symbol:
    // ?chatSubscribe@AutomationSession@Automation@@EEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@$$QEAUChatSubscription@CodeBuilder@@@Z
    MCVAPI void chatSubscribe(std::string const& requestId, struct CodeBuilder::ChatSubscription&& subscription);

    // symbol:
    // ?chatUnsubscribe@AutomationSession@Automation@@EEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z
    MCVAPI void chatUnsubscribe(std::string const&, std::string const& subscriptionId);

    // symbol:
    // ?chatUnsubscribeAll@AutomationSession@Automation@@EEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCVAPI void chatUnsubscribeAll(std::string const&);

    // symbol:
    // ?command@AutomationSession@Automation@@EEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@$$QEAUCommandRequest@CodeBuilder@@@Z
    MCVAPI void command(std::string const& requestId, struct CodeBuilder::CommandRequest&& request);

    // symbol:
    // ?dataBlock@AutomationSession@Automation@@EEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCVAPI void dataBlock(std::string const& requestId);

    // symbol:
    // ?dataItem@AutomationSession@Automation@@EEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCVAPI void dataItem(std::string const& requestId);

    // symbol:
    // ?dataMob@AutomationSession@Automation@@EEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCVAPI void dataMob(std::string const& requestId);

    // symbol:
    // ?encryptConnection@AutomationSession@Automation@@EEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBUEncryptionRequest@CodeBuilder@@@Z
    MCVAPI bool encryptConnection(std::string const& requestId, struct CodeBuilder::EncryptionRequest const& request);

    // symbol:
    // ?error@AutomationSession@Automation@@EEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBUErrorMessage@CodeBuilder@@@Z
    MCVAPI void error(std::string const&, struct CodeBuilder::ErrorMessage const& message);

    // symbol:
    // ?onMessageRecieved@AutomationSession@Automation@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCVAPI void onMessageRecieved(std::string const& message);

    // symbol:
    // ?subscribe@AutomationSession@Automation@@EEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z
    MCVAPI void subscribe(std::string const& requestId, std::string const& eventId);

    // symbol:
    // ?unsubscribe@AutomationSession@Automation@@EEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z
    MCVAPI void unsubscribe(std::string const& requestId, std::string const& eventId);

    // symbol: ??1AutomationSession@Automation@@UEAA@XZ
    MCVAPI ~AutomationSession();

    // symbol: ??0AutomationSession@Automation@@QEAA@AEAVAutomationClient@1@@Z
    MCAPI explicit AutomationSession(class Automation::AutomationClient& owner);

    // symbol:
    // ?connect@AutomationSession@Automation@@QEAA?AW4WSConnectionResult@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI ::WSConnectionResult connect(std::string const& serverUri);

    // symbol:
    // ?connect@AutomationSession@Automation@@QEAA?AW4WSConnectionResult@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@5@@Z
    MCAPI ::WSConnectionResult connect(std::string const& serverUri, std::vector<std::string> const& subProtocols);

    // symbol:
    // ?dhKeyExchange@AutomationSession@Automation@@QEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@00W4EncryptionCipherMode@CodeBuilder@@AEAV34@@Z
    MCAPI bool
    dhKeyExchange(std::string const& requestId, std::string const& publicKey, std::string const& salt, ::CodeBuilder::EncryptionCipherMode, std::string&);

    // symbol: ?disconnect@AutomationSession@Automation@@QEAAXXZ
    MCAPI void disconnect();

    // symbol: ?isConnecting@AutomationSession@Automation@@QEAA_NXZ
    MCAPI bool isConnecting();

    // symbol: ?isReady@AutomationSession@Automation@@QEAA_NXZ
    MCAPI bool isReady();

    // symbol:
    // ?receive@AutomationSession@Automation@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void receive(std::string const& payload);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_createCommandOrigin@AutomationSession@Automation@@AEAA?AV?$unique_ptr@VCommandOrigin@@U?$default_delete@VCommandOrigin@@@std@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@@Z
    MCAPI std::unique_ptr<class CommandOrigin> _createCommandOrigin(std::string const& requestId);

    // symbol:
    // ?_errorEncryptionRequired@AutomationSession@Automation@@AEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void _errorEncryptionRequired(std::string const& requestId);

    // symbol: ?_handleIncomingMessage@AutomationSession@Automation@@AEAAXAEBVRakWebSocketDataFrame@@@Z
    MCAPI void _handleIncomingMessage(class RakWebSocketDataFrame const& frame);

    // symbol: ?_handleMessage@AutomationSession@Automation@@AEAAXAEBUChatMessage@CodeBuilder@@@Z
    MCAPI void _handleMessage(struct CodeBuilder::ChatMessage const& message);

    // symbol:
    // ?_handleOnClose@AutomationSession@Automation@@AEAAXW4CloseStatusCode@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void _handleOnClose(::CloseStatusCode code, std::string const& reason);

    // symbol:
    // ?_handleOnConnected@AutomationSession@Automation@@AEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void _handleOnConnected(std::string const& activeSubProtocol);

    // symbol:
    // ?_send@AutomationSession@Automation@@AEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void _send(std::string const&);

    // symbol:
    // ?_sendUnencrypted@AutomationSession@Automation@@AEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void _sendUnencrypted(std::string const&);

    // symbol: ?_tryHandleMessage@AutomationSession@Automation@@AEAA_NAEBUErrorMessage@CodeBuilder@@@Z
    MCAPI bool _tryHandleMessage(struct CodeBuilder::ErrorMessage const& message);

    // NOLINTEND
};

}; // namespace Automation
