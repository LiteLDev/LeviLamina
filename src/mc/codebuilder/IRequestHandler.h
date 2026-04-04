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
    virtual void agentCommand(::std::string const& requestId, ::CodeBuilder::CommandRequest&& request) = 0;

    virtual void command(::std::string const& requestId, ::CodeBuilder::CommandRequest&& request) = 0;

    virtual void chatSubscribe(::std::string const& requestId, ::CodeBuilder::ChatSubscription&& subscription) = 0;

    virtual void chatUnsubscribe(::std::string const&, ::std::string const&) = 0;

    virtual void chatUnsubscribeAll(::std::string const&) = 0;

    virtual void dataBlock(::std::string const& requestId) = 0;

    virtual void dataItem(::std::string const& requestId) = 0;

    virtual void dataMob(::std::string const& requestId) = 0;

    virtual void dataTutorial(::std::string const& requestId, ::std::string const& tutorialPath) = 0;

    virtual void dataFile(
        ::std::string const& requestId,
        bool const           isRead,
        ::std::string const& filePath,
        ::std::string const& fileContents
    ) = 0;

    virtual void dataFilePath(::std::string const& requestId, ::std::string const& filePath) = 0;

    virtual bool encryptConnection(::std::string const& requestId, ::CodeBuilder::EncryptionRequest const& request) = 0;

    virtual void subscribe(::std::string const& requestId, ::std::string const& eventId) = 0;

    virtual void unsubscribe(::std::string const& requestId, ::std::string const& eventId) = 0;

    virtual void error(::std::string const&, ::CodeBuilder::ErrorMessage const&) = 0;

    virtual bool tutorialCached(::std::string const& tutorialPath) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace CodeBuilder
