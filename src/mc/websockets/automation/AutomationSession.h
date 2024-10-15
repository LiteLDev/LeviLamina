#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/codebuilder/EncryptionCipherMode.h"
#include "mc/websockets/CloseStatusCode.h"
#include "mc/websockets/WSConnectionResult.h"

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
    MCVAPI void agentCommand(std::string const& requestId, struct CodeBuilder::CommandRequest&& request);

    MCVAPI void chatSubscribe(std::string const& requestId, struct CodeBuilder::ChatSubscription&& subscription);

    MCVAPI void chatUnsubscribe(std::string const&, std::string const& subscriptionId);

    MCVAPI void chatUnsubscribeAll(std::string const&);

    MCVAPI void command(std::string const& requestId, struct CodeBuilder::CommandRequest&& request);

    MCVAPI void dataBlock(std::string const& requestId);

    MCVAPI void dataItem(std::string const& requestId);

    MCVAPI void dataMob(std::string const& requestId);

    MCVAPI bool encryptConnection(std::string const& requestId, struct CodeBuilder::EncryptionRequest const& request);

    MCVAPI void error(std::string const&, struct CodeBuilder::ErrorMessage const& message);

    MCVAPI void onMessageRecieved(std::string const& message);

    MCVAPI void subscribe(std::string const& requestId, std::string const& eventId);

    MCVAPI void unsubscribe(std::string const& requestId, std::string const& eventId);

    MCVAPI ~AutomationSession();

    MCAPI explicit AutomationSession(class Automation::AutomationClient& owner);

    MCAPI ::WSConnectionResult connect(std::string const& serverUri);

    MCAPI ::WSConnectionResult connect(std::string const& serverUri, std::vector<std::string> const& subProtocols);

    MCAPI bool
    dhKeyExchange(std::string const& requestId, std::string const& publicKey, std::string const& salt, ::CodeBuilder::EncryptionCipherMode cipherMode, std::string&);

    MCAPI void disconnect();

    MCAPI bool isConnecting();

    MCAPI bool isReady();

    MCAPI void receive(std::string const& payload);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI std::unique_ptr<class CommandOrigin> _createCommandOrigin(std::string const& requestId);

    MCAPI void _errorEncryptionRequired(std::string const& requestId);

    MCAPI void _handleIncomingMessage(class RakWebSocketDataFrame const& frame);

    MCAPI void _handleMessage(struct CodeBuilder::ChatMessage const& message);

    MCAPI void _handleOnClose(::CloseStatusCode code, std::string const& reason);

    MCAPI void _handleOnConnected(std::string const& activeSubProtocol);

    MCAPI void _send(std::string const& messageBody);

    MCAPI void _sendUnencrypted(std::string const& messageBody);

    MCAPI bool _tryHandleMessage(struct CodeBuilder::ErrorMessage const& message);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftableForCodeBuilderIRequestHandler();

    MCAPI static void** $vftableForWebviewObserver();

    MCAPI void* ctor$(class Automation::AutomationClient& owner);

    MCAPI void dtor$();

    MCAPI void agentCommand$(std::string const& requestId, struct CodeBuilder::CommandRequest&& request);

    MCAPI void chatSubscribe$(std::string const& requestId, struct CodeBuilder::ChatSubscription&& subscription);

    MCAPI void chatUnsubscribe$(std::string const&, std::string const& subscriptionId);

    MCAPI void chatUnsubscribeAll$(std::string const&);

    MCAPI void command$(std::string const& requestId, struct CodeBuilder::CommandRequest&& request);

    MCAPI void dataBlock$(std::string const& requestId);

    MCAPI void dataItem$(std::string const& requestId);

    MCAPI void dataMob$(std::string const& requestId);

    MCAPI bool encryptConnection$(std::string const& requestId, struct CodeBuilder::EncryptionRequest const& request);

    MCAPI void error$(std::string const&, struct CodeBuilder::ErrorMessage const& message);

    MCAPI void onMessageRecieved$(std::string const& message);

    MCAPI void subscribe$(std::string const& requestId, std::string const& eventId);

    MCAPI void unsubscribe$(std::string const& requestId, std::string const& eventId);

    // NOLINTEND
};

}; // namespace Automation
