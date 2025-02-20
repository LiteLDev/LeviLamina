#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/codebuilder/IRequestHandler.h"
#include "mc/platform/WebviewObserver.h"
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

class AutomationSession : public ::std::enable_shared_from_this<::Automation::AutomationSession>,
                          public ::WebviewObserver,
                          public ::CodeBuilder::IRequestHandler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 1248> mUnk75b341;
    ::ll::UntypedStorage<8, 16>   mUnk121c38;
    ::ll::UntypedStorage<8, 64>   mUnke5b334;
    ::ll::UntypedStorage<8, 64>   mUnk75cfe4;
    ::ll::UntypedStorage<8, 64>   mUnke9a807;
    ::ll::UntypedStorage<8, 32>   mUnkc9dfaf;
    ::ll::UntypedStorage<8, 32>   mUnkc258f4;
    ::ll::UntypedStorage<1, 1>    mUnk7dd1d3;
    ::ll::UntypedStorage<4, 4>    mUnkf3b921;
    ::ll::UntypedStorage<4, 4>    mUnk65741b;
    ::ll::UntypedStorage<1, 1>    mUnkb724a5;
    ::ll::UntypedStorage<8, 8>    mUnk965284;
    ::ll::UntypedStorage<8, 32>   mUnk7347c6;
    ::ll::UntypedStorage<8, 64>   mUnk2747d5;
    ::ll::UntypedStorage<8, 8>    mUnkc5c47e;
    ::ll::UntypedStorage<1, 1>    mUnk27d909;
    // NOLINTEND

public:
    // prevent constructor by default
    AutomationSession& operator=(AutomationSession const&);
    AutomationSession(AutomationSession const&);
    AutomationSession();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~AutomationSession() /*override*/;

    // vIndex: 10
    virtual void onMessageRecieved(::std::string const& message) /*override*/;

    // vIndex: 0
    virtual void agentCommand(::std::string const& requestId, ::CodeBuilder::CommandRequest&& request) /*override*/;

    // vIndex: 1
    virtual void command(::std::string const& requestId, ::CodeBuilder::CommandRequest&& request) /*override*/;

    // vIndex: 2
    virtual void
    chatSubscribe(::std::string const& requestId, ::CodeBuilder::ChatSubscription&& subscription) /*override*/;

    // vIndex: 3
    virtual void chatUnsubscribe(::std::string const&, ::std::string const& subscriptionId) /*override*/;

    // vIndex: 4
    virtual void chatUnsubscribeAll(::std::string const&) /*override*/;

    // vIndex: 5
    virtual void dataBlock(::std::string const& requestId) /*override*/;

    // vIndex: 6
    virtual void dataItem(::std::string const& requestId) /*override*/;

    // vIndex: 7
    virtual void dataMob(::std::string const& requestId) /*override*/;

    // vIndex: 8
    virtual void dataTutorial(::std::string const& requestId, ::std::string const& tutorialPath) /*override*/;

    // vIndex: 9
    virtual bool
    encryptConnection(::std::string const& requestId, ::CodeBuilder::EncryptionRequest const& request) /*override*/;

    // vIndex: 10
    virtual void subscribe(::std::string const& requestId, ::std::string const& eventId) /*override*/;

    // vIndex: 11
    virtual void unsubscribe(::std::string const& requestId, ::std::string const& eventId) /*override*/;

    // vIndex: 12
    virtual void error(::std::string const&, ::CodeBuilder::ErrorMessage const& message) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit AutomationSession(::Automation::AutomationClient& owner);

    MCAPI ::std::unique_ptr<::CommandOrigin> _createCommandOrigin(::std::string const& requestId);

    MCAPI void _errorEncryptionRequired(::std::string const& requestId);

    MCAPI void _handleIncomingMessage(::RakWebSocketDataFrame const& frame);

    MCAPI void _handleMessage(::CodeBuilder::ChatMessage const& message);

    MCAPI void _handleOnClose(::CloseStatusCode code, ::std::string const& reason);

    MCAPI void _handleOnConnected(::std::string const& activeSubProtocol);

    MCAPI void _send(::std::string const& messageBody);

    MCAPI void _sendUnencrypted(::std::string const& messageBody);

    MCAPI ::WSConnectionResult connect(::std::string const& serverUri);

    MCAPI ::WSConnectionResult
    connect(::std::string const& serverUri, ::std::vector<::std::string> const& subProtocols);

    MCAPI bool isSubscribedtoEvent(::std::string const& eventName);

    MCAPI void receive(::std::string const& payload);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Automation::AutomationClient& owner);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $onMessageRecieved(::std::string const& message);

    MCAPI void $agentCommand(::std::string const& requestId, ::CodeBuilder::CommandRequest&& request);

    MCAPI void $command(::std::string const& requestId, ::CodeBuilder::CommandRequest&& request);

    MCAPI void $chatSubscribe(::std::string const& requestId, ::CodeBuilder::ChatSubscription&& subscription);

    MCAPI void $chatUnsubscribe(::std::string const&, ::std::string const& subscriptionId);

    MCAPI void $chatUnsubscribeAll(::std::string const&);

    MCAPI void $dataBlock(::std::string const& requestId);

    MCAPI void $dataItem(::std::string const& requestId);

    MCAPI void $dataMob(::std::string const& requestId);

    MCAPI void $dataTutorial(::std::string const& requestId, ::std::string const& tutorialPath);

    MCAPI bool $encryptConnection(::std::string const& requestId, ::CodeBuilder::EncryptionRequest const& request);

    MCAPI void $subscribe(::std::string const& requestId, ::std::string const& eventId);

    MCAPI void $unsubscribe(::std::string const& requestId, ::std::string const& eventId);

    MCAPI void $error(::std::string const&, ::CodeBuilder::ErrorMessage const& message);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftableForWebviewObserver();

    MCAPI static void** $vftableForIRequestHandler();
    // NOLINTEND
};

} // namespace Automation
