#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/reflection/Privilege.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ArgumentDetails; }
namespace Scripting { struct ModuleDependency; }
namespace Scripting { struct ModuleDescriptor; }
namespace Scripting { struct VersionRequestKey; }
namespace Scripting { struct VersionRequestedBy; }
namespace Scripting::Reflection { class IFunction; }
// clang-format on

namespace Scripting {
// functions
// NOLINTBEGIN
MCNAPI uint GetDefaultArgCount(::std::vector<::Scripting::ArgumentDetails> const& details);

MCNAPI uint GetInjectedArgCount(::Scripting::Reflection::IFunction* function);

MCNAPI char const* GetPrivilegeFriendlyNameForError(::Scripting::Privilege p);

MCNAPI ::std::vector<::std::string> _versionSplit(::std::string const& str, char delim);

MCNAPI void removeAllSatisfiedDependencySets(
    ::std::vector<::std::pair<::Scripting::ModuleDescriptor, ::Scripting::ModuleDependency>>& unsatisfiedDependencySets,
    ::std::unordered_map<::Scripting::VersionRequestKey, ::std::vector<::Scripting::VersionRequestedBy>> const&
        versionRequestTable
);
// NOLINTEND

} // namespace Scripting
