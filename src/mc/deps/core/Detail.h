#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/CallStack.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class AssertLevel; }
// clang-format on

namespace Bedrock::Detail {
// functions
// NOLINTBEGIN
MCNAPI ::Bedrock::CallStack::Context
createContext(::Bedrock::AssertLevel assertLevel, ::std::string value, ::Bedrock::CallStack::Frame frame);
// NOLINTEND

} // namespace Bedrock::Detail
