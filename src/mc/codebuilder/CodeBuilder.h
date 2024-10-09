#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/codebuilder/GameContext.h"
#include "mc/codebuilder/RequestPurpose.h"
#include "mc/codebuilder/ResponsePurpose.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/network/packet/AgentActionType.h"

// auto generated forward declare list
// clang-format off
namespace Automation { class AutomationClient; }
namespace Bedrock { class EnableNonOwnerReferences; }
namespace CodeBuilder { class GameContext; }
namespace CodeBuilder { class IClient; }
namespace CodeBuilder { class IManager; }
namespace CodeBuilder { class IMessenger; }
namespace CodeBuilder { class IRequestHandler; }
namespace CodeBuilder { struct AgentMessage; }
namespace CodeBuilder { struct ChatMessage; }
namespace CodeBuilder { struct ChatSubscription; }
namespace CodeBuilder { struct CommandMessage; }
namespace CodeBuilder { struct CommandRequest; }
namespace CodeBuilder { struct DataMessage; }
namespace CodeBuilder { struct EncryptionResult; }
namespace CodeBuilder { struct ErrorMessage; }
namespace CodeBuilder { struct EventMessage; }
namespace CodeBuilder { struct RequestHeader; }
namespace Json { class Value; }
namespace Util::CodeBuilder { struct Event; }
// clang-format on

namespace CodeBuilder {
// NOLINTBEGIN
MCAPI struct MCRESULT deserialize(class Json::Value const& json, struct CodeBuilder::RequestHeader& result);

MCAPI bool fromString(std::string const& messagePurpose, ::CodeBuilder::RequestPurpose& outPurpose);

MCAPI std::string serialize(struct CodeBuilder::AgentMessage const& message);

MCAPI std::string serialize(struct CodeBuilder::ChatMessage const& message);

MCAPI std::string serialize(struct CodeBuilder::CommandMessage const& message);

MCAPI std::string serialize(struct CodeBuilder::DataMessage const& message);

MCAPI std::string serialize(struct CodeBuilder::EncryptionResult const& message);

MCAPI std::string serialize(struct CodeBuilder::ErrorMessage const& message);

MCAPI std::string serialize(struct CodeBuilder::EventMessage const& message);

MCAPI std::string serialize(struct CodeBuilder::ChatMessage const& message, std::string const& requestId);

MCAPI std::string toString(::CodeBuilder::ResponsePurpose purpose);
// NOLINTEND

}; // namespace CodeBuilder
