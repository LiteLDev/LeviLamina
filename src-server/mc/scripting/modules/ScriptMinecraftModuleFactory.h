#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_factory/GenericModuleBindingFactory.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class ModuleBindingBuilder; }
namespace Scripting { struct ModuleBinding; }
namespace Scripting { struct ModuleDependency; }
namespace Scripting { struct ModuleDescriptor; }
namespace Scripting { struct Version; }
namespace mce { class UUID; }
// clang-format on

class ScriptMinecraftModuleFactory : public ::Scripting::GenericModuleBindingFactory {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk2bf29c;
    ::ll::UntypedStorage<8, 16> mUnkebd543;
    ::ll::UntypedStorage<8, 16> mUnkcb6454;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptMinecraftModuleFactory& operator=(ScriptMinecraftModuleFactory const&);
    ScriptMinecraftModuleFactory(ScriptMinecraftModuleFactory const&);
    ScriptMinecraftModuleFactory();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptMinecraftModuleFactory() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _addVersions();

    MCNAPI ::Scripting::ModuleBinding _generateBindings(::Scripting::ModuleBindingBuilder& moduleBuilder, ::std::string const& versionPath);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::string getModuleName(::Scripting::Version version);

    MCNAPI static ::Scripting::ModuleDependency makeModuleDependencyFor(::std::vector<::Scripting::Version> versions);

    MCNAPI static ::Scripting::ModuleDescriptor makeModuleDescriptorFor(::Scripting::Version version);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static char const*& LegacyModuleName();

    MCNAPI static char const*& ModuleName();

    MCNAPI static ::mce::UUID const& ModuleUUID();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};
