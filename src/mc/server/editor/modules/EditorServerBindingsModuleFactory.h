#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/binding_factory/scripting/GenericModuleBindingFactory.h"

// auto generated forward declare list
// clang-format off
namespace Editor { class ServiceProviderCollection; }
namespace Scripting { class ModuleBindingBuilder; }
namespace Scripting { struct ModuleBinding; }
namespace Scripting { struct ModuleDependency; }
namespace Scripting { struct Version; }
// clang-format on

namespace Editor::API {

class EditorServerBindingsModuleFactory : public ::Scripting::GenericModuleBindingFactory {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EditorServerBindingsModuleFactory() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Scripting::ModuleBinding _generateBindings(
        ::Editor::ServiceProviderCollection& managerServices,
        ::Scripting::ModuleBindingBuilder&   builder,
        bool                                 allowUntagged,
        ::std::vector<::std::string> const&  additionalTags
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ModuleDependency makeModuleDependencyFor(::Scripting::Version version);

    MCNAPI static ::Scripting::ModuleDependency makeModuleDependencyFor(::std::vector<::Scripting::Version> versions);
    // NOLINTEND
};

} // namespace Editor::API
