#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/codebuilder/EncryptionCipherMode.h"
#include "mc/codebuilder/IRequestHandler.h"
#include "mc/deps/code_builder/platform/WebviewObserver.h"
#include "mc/websockets/WSConnectionResult.h"

// auto generated forward declare list
// clang-format off
namespace Automation { class AutomationClient; }
namespace CodeBuilder { struct ChatSubscription; }
namespace CodeBuilder { struct CommandRequest; }
namespace CodeBuilder { struct EncryptionRequest; }
namespace CodeBuilder { struct ErrorMessage; }
// clang-format on

namespace Automation {

class AutomationSession : public ::WebviewObserver,
                          public ::CodeBuilder::IRequestHandler,
                          public ::std::enable_shared_from_this<::Automation::AutomationSession> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 1248> mUnk75b341;
    ::ll::UntypedStorage<8, 16>   mUnk9fe8d2;
    ::ll::UntypedStorage<8, 64>   mUnkf0f0de;
    ::ll::UntypedStorage<8, 64>   mUnk44d59e;
    ::ll::UntypedStorage<8, 64>   mUnkeb22c5;
    ::ll::UntypedStorage<8, 32>   mUnkc9dfaf;
    ::ll::UntypedStorage<8, 32>   mUnkacf3a2;
    ::ll::UntypedStorage<1, 1>    mUnk7dd1d3;
    ::ll::UntypedStorage<4, 4>    mUnkf3b921;
    ::ll::UntypedStorage<4, 4>    mUnk65741b;
    ::ll::UntypedStorage<1, 1>    mUnkb724a5;
    ::ll::UntypedStorage<8, 8>    mUnk8222ca;
    ::ll::UntypedStorage<8, 32>   mUnkde3238;
    ::ll::UntypedStorage<8, 64>   mUnk5c58a9;
    ::ll::UntypedStorage<8, 8>    mUnkc5c47e;
    ::ll::UntypedStorage<8, 24>   mUnk27d909;
    // NOLINTEND

public:
    // prevent constructor by default
    AutomationSession& operator=(AutomationSession const&);
    AutomationSession(AutomationSession const&);
    AutomationSession();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~AutomationSession() /*override*/ = default;

    virtual void onMessageRecieved(::std::string const&) /*override*/;

    virtual void agentCommand(::std::string const&, ::CodeBuilder::CommandRequest&&) /*override*/;

    virtual void command(::std::string const&, ::CodeBuilder::CommandRequest&&) /*override*/;

    virtual void chatSubscribe(::std::string const&, ::CodeBuilder::ChatSubscription&&) /*override*/;

    virtual void chatUnsubscribe(::std::string const&, ::std::string const&) /*override*/;

    virtual void chatUnsubscribeAll(::std::string const&) /*override*/;

    virtual void dataBlock(::std::string const&) /*override*/;

    virtual void dataItem(::std::string const&) /*override*/;

    virtual void dataMob(::std::string const&) /*override*/;

    virtual void dataTutorial(::std::string const&, ::std::string const&) /*override*/;

    virtual void dataFile(::std::string const&, bool const, ::std::string const&, ::std::string const&) /*override*/;

    virtual void dataFilePath(::std::string const&, ::std::string const&) /*override*/;

    virtual bool encryptConnection(::std::string const&, ::CodeBuilder::EncryptionRequest const&) /*override*/;

    virtual void subscribe(::std::string const&, ::std::string const&) /*override*/;

    virtual void unsubscribe(::std::string const&, ::std::string const&) /*override*/;

    virtual void error(::std::string const&, ::CodeBuilder::ErrorMessage const&) /*override*/;

    virtual bool tutorialCached(::std::string const&) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI explicit AutomationSession(::Automation::AutomationClient& owner);
#endif

    MCNAPI ::WSConnectionResult
    connect(::std::string const& serverUri, ::std::vector<::std::string> const& subProtocols);

    MCNAPI bool dhKeyExchange(
        ::std::string const&                requestId,
        ::std::string const&                publicKey,
        ::std::string const&                salt,
        ::CodeBuilder::EncryptionCipherMode cipherMode,
        ::std::string&
    );

#ifdef LL_PLAT_C
    MCNAPI void setLocalConnectionHandler(::std::function<void(::std::string const&)> sendHandler);
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(::Automation::AutomationClient& owner);
#endif
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Automation
