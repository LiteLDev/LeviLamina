#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
namespace CodeBuilder { struct AgentMessage; }
namespace CodeBuilder { struct ChatMessage; }
namespace CodeBuilder { struct CommandMessage; }
namespace CodeBuilder { struct ErrorMessage; }
namespace CodeBuilder { struct EventMessage; }
// clang-format on

namespace CodeBuilder {

class IClient : public ::Bedrock::EnableNonOwnerReferences {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IClient() /*override*/;

    // vIndex: 5
    virtual void send(::CodeBuilder::AgentMessage const&) = 0;

    // vIndex: 4
    virtual void send(::CodeBuilder::CommandMessage const&) = 0;

    // vIndex: 3
    virtual void send(::CodeBuilder::ErrorMessage const&) = 0;

    // vIndex: 2
    virtual void send(::CodeBuilder::EventMessage const&) = 0;

    // vIndex: 1
    virtual void send(::CodeBuilder::ChatMessage const&) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace CodeBuilder
