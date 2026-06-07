#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_factory/GenericModuleBindingFactory.h"

// auto generated forward declare list
// clang-format off
class ScriptServerNetworkHandlerReference;
namespace Scripting { class ModuleBindingBuilder; }
namespace Scripting { struct ModuleBinding; }
namespace Scripting { struct ModuleDescriptor; }
namespace mce { class UUID; }
// clang-format on

class ScriptMinecraftServerUIPrivateBindingsModuleFactory : public ::Scripting::GenericModuleBindingFactory {
public:
    // prevent constructor by default
    ScriptMinecraftServerUIPrivateBindingsModuleFactory();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ScriptMinecraftServerUIPrivateBindingsModuleFactory(
        ::ScriptServerNetworkHandlerReference* serverNetworkHandlerReference
    );

    MCNAPI void _addVersions(::ScriptServerNetworkHandlerReference* serverNetworkHandlerReference);

    MCNAPI ::Scripting::ModuleBinding _generateBindings(
        ::Scripting::ModuleBindingBuilder&     moduleBuilder,
        ::ScriptServerNetworkHandlerReference* serverNetworkHandlerReference
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ModuleDescriptor makeModuleDescriptorFor();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static char const*& ModuleName();

    MCNAPI static ::mce::UUID const& ModuleUUID();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptServerNetworkHandlerReference* serverNetworkHandlerReference);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
