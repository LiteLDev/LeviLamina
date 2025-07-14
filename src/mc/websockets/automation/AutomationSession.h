#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/codebuilder/IRequestHandler.h"
#include "mc/common/edu_cloud_proxy/Operation.h"
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
namespace EduCloudProxy { struct CloudProject; }
// clang-format on

namespace Automation {

class AutomationSession : public ::WebviewObserver,
                          public ::CodeBuilder::IRequestHandler,
                          public ::std::enable_shared_from_this<::Automation::AutomationSession> {
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
    ::ll::UntypedStorage<8, 8>    mUnk27d909;
    ::ll::UntypedStorage<8, 8>    mUnkf24bcf;
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

    // vIndex: 9
    virtual void dataTutorial(::std::string const& requestId, ::std::string const& tutorialPath) /*override*/;

    // vIndex: 10
    virtual void dataFile(
        ::std::string const& requestId,
        bool const           isRead,
        ::std::string const& filePath,
        ::std::string const& fileContents
    ) /*override*/;

    // vIndex: 8
    virtual void cloudRequest(
        ::std::string const&               requestId,
        ::EduCloudProxy::Operation const   operation,
        ::std::string const&               id,
        ::std::vector<::std::string> const idList,
        ::EduCloudProxy::CloudProject      project
    ) /*override*/;

    // vIndex: 11
    virtual bool
    encryptConnection(::std::string const& requestId, ::CodeBuilder::EncryptionRequest const& request) /*override*/;

    // vIndex: 12
    virtual void subscribe(::std::string const& requestId, ::std::string const& eventId) /*override*/;

    // vIndex: 13
    virtual void unsubscribe(::std::string const& requestId, ::std::string const& eventId) /*override*/;

    // vIndex: 14
    virtual void error(::std::string const&, ::CodeBuilder::ErrorMessage const& message) /*override*/;

    // vIndex: 15
    virtual bool tutorialCached(::std::string const& tutorialPath) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit AutomationSession(::Automation::AutomationClient& owner);

    MCNAPI ::std::unique_ptr<::CommandOrigin> _createCommandOrigin(::std::string const& requestId);

    MCNAPI void _errorEncryptionRequired(::std::string const& requestId);

    MCNAPI void _handleIncomingMessage(::RakWebSocketDataFrame const& frame);

    MCNAPI void _handleMessage(::CodeBuilder::ChatMessage const& message);

    MCNAPI void _handleOnClose(::CloseStatusCode code, ::std::string const& reason);

    MCNAPI void _handleOnConnected(::std::string const& activeSubProtocol);

    MCNAPI void _send(::std::string const& messageBody);

    MCNAPI void _sendUnencrypted(::std::string const& messageBody);

    MCNAPI ::WSConnectionResult connect(::std::string const& serverUri);

    MCNAPI ::WSConnectionResult
    connect(::std::string const& serverUri, ::std::vector<::std::string> const& subProtocols);

    MCNAPI bool isSubscribedtoEvent(::std::string const& eventName);

    MCNAPI void receive(::std::string const& payload);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Automation::AutomationClient& owner);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onMessageRecieved(::std::string const& message);

    MCNAPI void $agentCommand(::std::string const& requestId, ::CodeBuilder::CommandRequest&& request);

    MCNAPI void $command(::std::string const& requestId, ::CodeBuilder::CommandRequest&& request);

    MCNAPI void $chatSubscribe(::std::string const& requestId, ::CodeBuilder::ChatSubscription&& subscription);

    MCNAPI void $chatUnsubscribe(::std::string const&, ::std::string const& subscriptionId);

    MCNAPI void $chatUnsubscribeAll(::std::string const&);

    MCNAPI void $dataBlock(::std::string const& requestId);

    MCNAPI void $dataItem(::std::string const& requestId);

    MCNAPI void $dataMob(::std::string const& requestId);

    MCNAPI void $dataTutorial(::std::string const& requestId, ::std::string const& tutorialPath);

    MCNAPI void $dataFile(
        ::std::string const& requestId,
        bool const           isRead,
        ::std::string const& filePath,
        ::std::string const& fileContents
    );

    MCNAPI void $cloudRequest(
        ::std::string const&               requestId,
        ::EduCloudProxy::Operation const   operation,
        ::std::string const&               id,
        ::std::vector<::std::string> const idList,
        ::EduCloudProxy::CloudProject      project
    );

    MCNAPI bool $encryptConnection(::std::string const& requestId, ::CodeBuilder::EncryptionRequest const& request);

    MCNAPI void $subscribe(::std::string const& requestId, ::std::string const& eventId);

    MCNAPI void $unsubscribe(::std::string const& requestId, ::std::string const& eventId);

    MCNAPI void $error(::std::string const&, ::CodeBuilder::ErrorMessage const& message);

    MCNAPI bool $tutorialCached(::std::string const& tutorialPath);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForWebviewObserver();

    MCNAPI static void** $vftableForIRequestHandler();
    // NOLINTEND
};

} // namespace Automation
