#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/edu_cloud_proxy/Operation.h"

// auto generated forward declare list
// clang-format off
namespace CodeBuilder { struct ChatSubscription; }
namespace CodeBuilder { struct CommandRequest; }
namespace CodeBuilder { struct EncryptionRequest; }
namespace CodeBuilder { struct ErrorMessage; }
namespace EduCloudProxy { struct CloudProject; }
// clang-format on

namespace CodeBuilder {

class IRequestHandler {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual void agentCommand(::std::string const&, ::CodeBuilder::CommandRequest&&) = 0;

    // vIndex: 1
    virtual void command(::std::string const&, ::CodeBuilder::CommandRequest&&) = 0;

    // vIndex: 2
    virtual void chatSubscribe(::std::string const&, ::CodeBuilder::ChatSubscription&&) = 0;

    // vIndex: 3
    virtual void chatUnsubscribe(::std::string const&, ::std::string const&) = 0;

    // vIndex: 4
    virtual void chatUnsubscribeAll(::std::string const&) = 0;

    // vIndex: 5
    virtual void dataBlock(::std::string const&) = 0;

    // vIndex: 6
    virtual void dataItem(::std::string const&) = 0;

    // vIndex: 7
    virtual void dataMob(::std::string const&) = 0;

    // vIndex: 8
    virtual void cloudRequest(
        ::std::string const&,
        ::EduCloudProxy::Operation const,
        ::std::string const&,
        ::std::vector<::std::string> const,
        ::EduCloudProxy::CloudProject const
    ) = 0;

    // vIndex: 9
    virtual void dataTutorial(::std::string const&, ::std::string const&) = 0;

    // vIndex: 10
    virtual void dataFile(::std::string const&, bool const, ::std::string const&, ::std::string const&) = 0;

    // vIndex: 11
    virtual void dataFilePath(::std::string const&, ::std::string const&) = 0;

    // vIndex: 12
    virtual bool encryptConnection(::std::string const&, ::CodeBuilder::EncryptionRequest const&) = 0;

    // vIndex: 13
    virtual void subscribe(::std::string const&, ::std::string const&) = 0;

    // vIndex: 14
    virtual void unsubscribe(::std::string const&, ::std::string const&) = 0;

    // vIndex: 15
    virtual void error(::std::string const&, ::CodeBuilder::ErrorMessage const&) = 0;

    // vIndex: 16
    virtual bool tutorialCached(::std::string const&) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace CodeBuilder
