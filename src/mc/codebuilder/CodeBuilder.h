#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/codebuilder/GameContext.h"
#include "mc/codebuilder/RequestPurpose.h"
#include "mc/codebuilder/ResponsePurpose.h"
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/enums/AgentActionType.h"

// auto generated forward declare list
// clang-format off
namespace Automation { class AutomationClient; }
namespace Bedrock { class EnableNonOwnerReferences; }
namespace CodeBuilder { class GameContext; }
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
// clang-format on

namespace CodeBuilder {
// NOLINTBEGIN
// symbol: ?deserialize@CodeBuilder@@YA?AUMCRESULT@@AEBVValue@Json@@AEAURequestHeader@1@@Z
MCAPI struct MCRESULT deserialize(class Json::Value const& json, struct CodeBuilder::RequestHeader& result);

// symbol:
// ?fromString@CodeBuilder@@YA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAW4RequestPurpose@1@@Z
MCAPI bool fromString(std::string const&, ::CodeBuilder::RequestPurpose&);

// symbol:
// ?serialize@CodeBuilder@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBUAgentMessage@1@@Z
MCAPI std::string serialize(struct CodeBuilder::AgentMessage const&);

// symbol:
// ?serialize@CodeBuilder@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBUChatMessage@1@@Z
MCAPI std::string serialize(struct CodeBuilder::ChatMessage const&);

// symbol:
// ?serialize@CodeBuilder@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBUCommandMessage@1@@Z
MCAPI std::string serialize(struct CodeBuilder::CommandMessage const&);

// symbol:
// ?serialize@CodeBuilder@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBUDataMessage@1@@Z
MCAPI std::string serialize(struct CodeBuilder::DataMessage const&);

// symbol:
// ?serialize@CodeBuilder@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBUEncryptionResult@1@@Z
MCAPI std::string serialize(struct CodeBuilder::EncryptionResult const&);

// symbol:
// ?serialize@CodeBuilder@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBUErrorMessage@1@@Z
MCAPI std::string serialize(struct CodeBuilder::ErrorMessage const&);

// symbol:
// ?serialize@CodeBuilder@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBUEventMessage@1@@Z
MCAPI std::string serialize(struct CodeBuilder::EventMessage const&);

// symbol:
// ?serialize@CodeBuilder@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBUChatMessage@1@AEBV23@@Z
MCAPI std::string serialize(struct CodeBuilder::ChatMessage const& message, std::string const& requestId);

// symbol:
// ?toString@CodeBuilder@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4ResponsePurpose@1@@Z
MCAPI std::string toString(::CodeBuilder::ResponsePurpose);
// NOLINTEND

}; // namespace CodeBuilder
