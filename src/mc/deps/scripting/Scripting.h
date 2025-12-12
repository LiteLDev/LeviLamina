#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ModuleDescriptor; }
namespace Scripting::Reflection { class IFunction; }
// clang-format on

namespace Scripting {
// functions
// NOLINTBEGIN
MCNAPI uint GetInjectedArgCount(::Scripting::Reflection::IFunction* function);

MCNAPI ::std::vector<::std::string> _versionSplit(::std::string const& str, char delim);

MCNAPI ::std::vector<::Scripting::ModuleDescriptor>
sortDependencies(::std::vector<::Scripting::ModuleDescriptor> const& unsortedDependencies);
// NOLINTEND

} // namespace Scripting
