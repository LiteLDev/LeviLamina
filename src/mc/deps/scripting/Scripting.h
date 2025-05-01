#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/LogLevel.h"

// auto generated forward declare list
// clang-format off
namespace Scripting::Reflection { class IFunction; }
// clang-format on

namespace Scripting {
// functions
// NOLINTBEGIN
MCNAPI uint GetInjectedArgCount(::Scripting::Reflection::IFunction* function);

MCNAPI ::std::vector<::std::string> _versionSplit(::std::string const& str, char delim);

MCNAPI void defaultLogFunction(void*, ::Scripting::LogLevel level, char const*, uint, char const* message);
// NOLINTEND

// static variables
// NOLINTBEGIN
MCAPI ::std::add_lvalue_reference_t<void (*)(void*, ::Scripting::LogLevel, char const*, uint, char const*)> logFn();

MCAPI void*& logUserData();
// NOLINTEND

} // namespace Scripting
