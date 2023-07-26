#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace CodeBuilder { enum class EncryptionCipherMode; }
namespace CodeBuilder { enum class RequestPurpose; }
namespace CodeBuilder { enum class ResponsePurpose; }
namespace CodeBuilder { struct AgentMessage; }
namespace CodeBuilder { struct ChatMessage; }
namespace CodeBuilder { struct CommandMessage; }
namespace CodeBuilder { struct DataMessage; }
namespace CodeBuilder { struct EncryptionResult; }
namespace CodeBuilder { struct ErrorMessage; }
namespace CodeBuilder { struct EventMessage; }
namespace CodeBuilder { struct RequestHeader; }
namespace Json { class Value; }
// clang-format on

namespace CodeBuilder {
/**
 * @symbol ?deserialize\@CodeBuilder\@\@YA?AUMCRESULT\@\@AEBVValue\@Json\@\@AEAURequestHeader\@1\@\@Z
 */
MCAPI struct MCRESULT deserialize(class Json::Value const&, struct CodeBuilder::RequestHeader&); // NOLINT
/**
 * @symbol
 * ?fromString\@CodeBuilder\@\@YA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAW4RequestPurpose\@1\@\@Z
 */
MCAPI bool fromString(std::string const&, enum class CodeBuilder::RequestPurpose&); // NOLINT
/**
 * @symbol
 * ?fromString\@CodeBuilder\@\@YA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAW4EncryptionCipherMode\@1\@\@Z
 */
MCAPI bool fromString(std::string const&, enum class CodeBuilder::EncryptionCipherMode&); // NOLINT
/**
 * @symbol
 * ?serialize\@CodeBuilder\@\@YA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBUChatMessage\@1\@\@Z
 */
MCAPI std::string serialize(struct CodeBuilder::ChatMessage const&); // NOLINT
/**
 * @symbol
 * ?serialize\@CodeBuilder\@\@YA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBUCommandMessage\@1\@\@Z
 */
MCAPI std::string serialize(struct CodeBuilder::CommandMessage const&); // NOLINT
/**
 * @symbol
 * ?serialize\@CodeBuilder\@\@YA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBUEncryptionResult\@1\@\@Z
 */
MCAPI std::string serialize(struct CodeBuilder::EncryptionResult const&); // NOLINT
/**
 * @symbol
 * ?serialize\@CodeBuilder\@\@YA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBUChatMessage\@1\@AEBV23\@\@Z
 */
MCAPI std::string serialize(struct CodeBuilder::ChatMessage const&, std::string const&); // NOLINT
/**
 * @symbol
 * ?serialize\@CodeBuilder\@\@YA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBUErrorMessage\@1\@\@Z
 */
MCAPI std::string serialize(struct CodeBuilder::ErrorMessage const&); // NOLINT
/**
 * @symbol
 * ?serialize\@CodeBuilder\@\@YA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBUDataMessage\@1\@\@Z
 */
MCAPI std::string serialize(struct CodeBuilder::DataMessage const&); // NOLINT
/**
 * @symbol
 * ?serialize\@CodeBuilder\@\@YA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBUEventMessage\@1\@\@Z
 */
MCAPI std::string serialize(struct CodeBuilder::EventMessage const&); // NOLINT
/**
 * @symbol
 * ?serialize\@CodeBuilder\@\@YA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBUAgentMessage\@1\@\@Z
 */
MCAPI std::string serialize(struct CodeBuilder::AgentMessage const&); // NOLINT
/**
 * @symbol
 * ?toString\@CodeBuilder\@\@YA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4ResponsePurpose\@1\@\@Z
 */
MCAPI std::string toString(enum class CodeBuilder::ResponsePurpose); // NOLINT

}; // namespace CodeBuilder
