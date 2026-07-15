#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/binding_factory/scripting/GenericModuleBindingFactory.h"

// auto generated forward declare list
// clang-format off
class ServerLevel;
namespace Scripting { struct ModuleDependency; }
namespace Scripting { struct ModuleDescriptor; }
namespace Scripting { struct Version; }
namespace mce { class UUID; }
// clang-format on

class ScriptMinecraftModuleFactory : public ::Scripting::GenericModuleBindingFactory {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk2bf29c;
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
    virtual ~ScriptMinecraftModuleFactory() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ScriptMinecraftModuleFactory(::ServerLevel* level);

    MCNAPI void _addVersions();
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
    MCNAPI static char const*& ModuleName();

    MCNAPI static ::mce::UUID const& ModuleUUID();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ServerLevel* level);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
