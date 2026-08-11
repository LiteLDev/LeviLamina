#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ModuleResolveResult; }
namespace Scripting { struct VersionRequestKey; }
namespace Scripting { struct VersionRequestedBy; }
// clang-format on

namespace Scripting {

class DependencyResolver {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnke3be7c;
    ::ll::UntypedStorage<4, 4> mUnkcb02eb;
    // NOLINTEND

public:
    // prevent constructor by default
    DependencyResolver& operator=(DependencyResolver const&);
    DependencyResolver(DependencyResolver const&);
    DependencyResolver();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Scripting::ModuleResolveResult _resolveDependencyRequests(
        ::std::unordered_map<::Scripting::VersionRequestKey, ::std::vector<::Scripting::VersionRequestedBy>> const&
            versionRequestTable
    ) const;
    // NOLINTEND
};

} // namespace Scripting
