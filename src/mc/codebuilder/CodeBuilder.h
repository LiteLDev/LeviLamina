#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct MCRESULT;
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
// functions
// NOLINTBEGIN
MCNAPI ::MCRESULT deserialize(::Json::Value const& json, ::CodeBuilder::RequestHeader& result);

MCNAPI ::std::string serialize(::CodeBuilder::AgentMessage const& message);

MCNAPI ::std::string serialize(::CodeBuilder::ChatMessage const& message);

MCNAPI ::std::string serialize(::CodeBuilder::CommandMessage const& message);

MCNAPI ::std::string serialize(::CodeBuilder::DataMessage const& message);

MCNAPI ::std::string serialize(::CodeBuilder::EncryptionResult const& message);

MCNAPI ::std::string serialize(::CodeBuilder::ErrorMessage const& message);

MCNAPI ::std::string serialize(::CodeBuilder::EventMessage const& message);
// NOLINTEND

} // namespace CodeBuilder
