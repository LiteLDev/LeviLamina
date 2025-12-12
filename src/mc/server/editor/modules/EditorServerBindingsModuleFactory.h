#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_factory/GenericModuleBindingFactory.h"

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
    // prevent constructor by default
    EditorServerBindingsModuleFactory();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EditorServerBindingsModuleFactory() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit EditorServerBindingsModuleFactory(::Editor::ServiceProviderCollection& managerServices);

    MCNAPI void _addVersions(::Editor::ServiceProviderCollection& managerServices);

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

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static char const*& ModuleName();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Editor::ServiceProviderCollection& managerServices);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::API
