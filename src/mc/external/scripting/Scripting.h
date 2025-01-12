#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/LogLevel.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ArgumentDetails; }
namespace Scripting::Reflection { class IFunction; }
// clang-format on

namespace Scripting {
// functions
// NOLINTBEGIN
MCAPI uint GetDefaultArgCount(::std::vector<::Scripting::ArgumentDetails> const& details);

MCAPI uint GetInjectedArgCount(::Scripting::Reflection::IFunction* function);

MCAPI void LogMessage(::Scripting::LogLevel, char const*, uint, char const*, ...);

MCFOLD ::std::vector<::std::string> _versionSplit(::std::string const& str, char delim);

MCAPI void defaultLogFunction(void*, ::Scripting::LogLevel level, char const*, uint, char const* message);
// NOLINTEND

// static variables
// NOLINTBEGIN
MCAPI char const*& RED_COLOR_FORMAT();

MCAPI ::std::add_lvalue_reference_t<void (*)(void*, ::Scripting::LogLevel, char const*, uint, char const*)> logFn();

MCAPI void*& logUserData();
// NOLINTEND

} // namespace Scripting
