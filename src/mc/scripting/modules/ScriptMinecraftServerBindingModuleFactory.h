#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/deps/scripting/binding_factory/GenericModuleBindingFactory.h"

// auto generated forward declare list
// clang-format off
class ServerLevel;
namespace ScriptModuleMinecraft { class IComponentFactory; }
namespace ScriptModuleMinecraft { class IScriptItemCustomComponentRegistry; }
namespace ScriptModuleMinecraft { class ScriptBlockCustomComponentsRegistry; }
namespace Scripting { class ModuleBindingBuilder; }
namespace Scripting { struct ContextConfig; }
namespace Scripting { struct ModuleBinding; }
namespace Scripting { struct ModuleDependency; }
namespace Scripting { struct ModuleDescriptor; }
namespace Scripting { struct Version; }
namespace mce { class UUID; }
// clang-format on

class ScriptMinecraftServerBindingModuleFactory : public ::Scripting::GenericModuleBindingFactory {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnkb4ef81;
    ::ll::UntypedStorage<8, 8>  mUnk52d2a7;
    ::ll::UntypedStorage<8, 16> mUnk6c2f68;
    ::ll::UntypedStorage<8, 16> mUnk7524c9;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptMinecraftServerBindingModuleFactory& operator=(ScriptMinecraftServerBindingModuleFactory const&);
    ScriptMinecraftServerBindingModuleFactory(ScriptMinecraftServerBindingModuleFactory const&);
    ScriptMinecraftServerBindingModuleFactory();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptMinecraftServerBindingModuleFactory() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptMinecraftServerBindingModuleFactory(
        ::ServerLevel*                                                                level,
        ::WeakRef<::ScriptModuleMinecraft::IScriptItemCustomComponentRegistry const>  itemCustomComponentRegistry,
        ::WeakRef<::ScriptModuleMinecraft::ScriptBlockCustomComponentsRegistry const> blockCustomComponentRegistry,
        bool                                                                          importRestricted
    );

    MCNAPI void _addVersions();

    MCNAPI ::Scripting::ModuleBinding _generateBindings(
        ::Scripting::ModuleBindingBuilder&                 moduleBuilder,
        ::std::optional<::Scripting::ContextConfig> const& contextConfig,
        bool                                               allowUntagged,
        ::std::vector<::std::string> const&                additionalTags
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::unordered_map<::std::string, ::std::unique_ptr<::ScriptModuleMinecraft::IComponentFactory>>&
    getActorComponentFactories();

    MCNAPI static ::Scripting::ModuleDependency makeModuleDependencyFor(::Scripting::Version version);

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
    MCNAPI void* $ctor(
        ::ServerLevel*                                                                level,
        ::WeakRef<::ScriptModuleMinecraft::IScriptItemCustomComponentRegistry const>  itemCustomComponentRegistry,
        ::WeakRef<::ScriptModuleMinecraft::ScriptBlockCustomComponentsRegistry const> blockCustomComponentRegistry,
        bool                                                                          importRestricted
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
