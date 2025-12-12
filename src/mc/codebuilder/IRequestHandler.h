#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace CodeBuilder { struct ChatSubscription; }
namespace CodeBuilder { struct CommandRequest; }
namespace CodeBuilder { struct EncryptionRequest; }
namespace CodeBuilder { struct ErrorMessage; }
// clang-format on

namespace CodeBuilder {

class IRequestHandler {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void agentCommand(::std::string const&, ::CodeBuilder::CommandRequest&&) = 0;

    virtual void command(::std::string const&, ::CodeBuilder::CommandRequest&&) = 0;

    virtual void chatSubscribe(::std::string const&, ::CodeBuilder::ChatSubscription&&) = 0;

    virtual void chatUnsubscribe(::std::string const&, ::std::string const&) = 0;

    virtual void chatUnsubscribeAll(::std::string const&) = 0;

    virtual void dataBlock(::std::string const&) = 0;

    virtual void dataItem(::std::string const&) = 0;

    virtual void dataMob(::std::string const&) = 0;

    virtual void dataTutorial(::std::string const&, ::std::string const&) = 0;

    virtual void dataFile(::std::string const&, bool const, ::std::string const&, ::std::string const&) = 0;

    virtual void dataFilePath(::std::string const&, ::std::string const&) = 0;

    virtual bool encryptConnection(::std::string const&, ::CodeBuilder::EncryptionRequest const&) = 0;

    virtual void subscribe(::std::string const&, ::std::string const&) = 0;

    virtual void unsubscribe(::std::string const&, ::std::string const&) = 0;

    virtual void error(::std::string const&, ::CodeBuilder::ErrorMessage const&) = 0;

    virtual bool tutorialCached(::std::string const&) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace CodeBuilder
