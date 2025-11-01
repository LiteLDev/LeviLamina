#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class IModuleBindingFactory; }
namespace Scripting { struct ModuleDescriptor; }
namespace Scripting { struct ModuleResolveResult; }
namespace Scripting { struct SupportedBindingModule; }
namespace Scripting { struct Version; }
namespace Scripting { struct VersionRequestKey; }
namespace Scripting { struct VersionRequestedBy; }
// clang-format on

namespace Scripting {

class DependencyResolver {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk96ed20;
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
    MCNAPI ::std::unordered_map<::Scripting::VersionRequestKey, ::std::vector<::Scripting::VersionRequestedBy>> _buildVersionRequestTable(::Scripting::ModuleDescriptor const& forModule, ::std::vector<::Scripting::ModuleDescriptor> const& unsortedDependencies) const;

    MCNAPI bool _isVersionMissing(::Scripting::IModuleBindingFactory const& moduleFactory, ::Scripting::Version const& version) const;

    MCNAPI bool _isVersionSupported(::Scripting::IModuleBindingFactory const& moduleFactory, ::Scripting::Version const& version) const;

    MCNAPI ::std::vector<::Scripting::ModuleDescriptor> _orderModulesByDependency(::std::vector<::Scripting::SupportedBindingModule>&& unorderedModules) const;

    MCNAPI ::Scripting::ModuleResolveResult _resolveDependencyRequests(::std::unordered_map<::Scripting::VersionRequestKey, ::std::vector<::Scripting::VersionRequestedBy>> const& versionRequestTable) const;
    // NOLINTEND

};

}
