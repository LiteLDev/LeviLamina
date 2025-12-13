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
    virtual ~IClient() /*override*/;

    virtual void send(::CodeBuilder::AgentMessage const&) = 0;

    virtual void send(::CodeBuilder::CommandMessage const&) = 0;

    virtual void send(::CodeBuilder::ErrorMessage const&) = 0;

    virtual void send(::CodeBuilder::EventMessage const&) = 0;

    virtual void send(::CodeBuilder::ChatMessage const&) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace CodeBuilder
