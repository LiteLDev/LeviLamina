#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/binding_factory/scripting/GenericModuleBindingFactory.h"

// auto generated forward declare list
// clang-format off
namespace Editor { class ServiceProviderCollection; }
namespace Scripting { class ModuleBindingBuilder; }
namespace Scripting { struct ModuleBinding; }
// clang-format on

namespace Editor::API {

class EditorServerModuleFactory : public ::Scripting::GenericModuleBindingFactory {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EditorServerModuleFactory() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Scripting::ModuleBinding _generateBindings(
        ::Editor::ServiceProviderCollection& managerServices,
        ::Scripting::ModuleBindingBuilder&   builder,
        bool,
        ::std::vector<::std::string> const&
    );
    // NOLINTEND
};

} // namespace Editor::API
