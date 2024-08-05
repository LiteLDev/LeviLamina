#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class IModuleBindingFactory; }
namespace Scripting { struct ModuleDescriptor; }
namespace Scripting { struct ModuleResolveResult; }
namespace Scripting { struct SupportedBindingModule; }
namespace Scripting { struct UUID; }
namespace Scripting { struct Version; }
namespace Scripting { struct VersionRequestKey; }
namespace Scripting { struct VersionRequestedBy; }
// clang-format on

namespace Scripting {

class DependencyResolver {
public:
    // prevent constructor by default
    DependencyResolver& operator=(DependencyResolver const&);
    DependencyResolver(DependencyResolver const&);
    DependencyResolver();

    // private:
    // NOLINTBEGIN
    MCAPI std::unordered_map<struct Scripting::VersionRequestKey, std::vector<struct Scripting::VersionRequestedBy>>
          _buildVersionRequestTable(
              struct Scripting::ModuleDescriptor const&,
              std::vector<struct Scripting::ModuleDescriptor> const& dependencies
          ) const;

    MCAPI class Scripting::IModuleBindingFactory* _getModuleBindingFactory(struct Scripting::UUID const& uuid) const;

    MCAPI bool _isVersionMissing(class Scripting::IModuleBindingFactory const&, struct Scripting::Version const&) const;

    MCAPI std::vector<struct Scripting::SupportedBindingModule>
          _orderModulesByDependency(std::vector<struct Scripting::SupportedBindingModule>&&) const;

    MCAPI struct Scripting::ModuleResolveResult
    _resolveDependencyRequests(std::unordered_map<
                               struct Scripting::VersionRequestKey,
                               std::vector<struct Scripting::VersionRequestedBy>> const&) const;

    // NOLINTEND
};

}; // namespace Scripting
