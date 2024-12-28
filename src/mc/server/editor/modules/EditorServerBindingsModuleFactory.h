#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_factory/GenericModuleBindingFactory.h"

// auto generated forward declare list
// clang-format off
namespace Editor { class ServiceProviderCollection; }
namespace Scripting { class ModuleBindingBuilder; }
namespace Scripting { struct ModuleBinding; }
namespace Scripting { struct ModuleDescriptor; }
namespace Scripting { struct Version; }
// clang-format on

namespace Editor::API {

class EditorServerBindingsModuleFactory : public ::Scripting::GenericModuleBindingFactory {
public:
    // prevent constructor by default
    EditorServerBindingsModuleFactory& operator=(EditorServerBindingsModuleFactory const&);
    EditorServerBindingsModuleFactory(EditorServerBindingsModuleFactory const&);
    EditorServerBindingsModuleFactory();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~EditorServerBindingsModuleFactory() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit EditorServerBindingsModuleFactory(::Editor::ServiceProviderCollection& managerServices);

    MCAPI ::Scripting::ModuleBinding _generateBindings(
        ::Editor::ServiceProviderCollection& managerServices,
        ::Scripting::ModuleBindingBuilder&   builder,
        bool                                 allowUntagged,
        ::std::vector<::std::string> const&  additionalTags
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ModuleDescriptor makeModuleDescriptorFor(::Scripting::Version version);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static char const*& ModuleName();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Editor::ServiceProviderCollection& managerServices);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::API
