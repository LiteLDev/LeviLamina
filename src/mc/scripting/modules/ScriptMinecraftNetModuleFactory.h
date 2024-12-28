#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/external/scripting/binding_factory/GenericModuleBindingFactory.h"

// auto generated forward declare list
// clang-format off
class Scheduler;
class ServerLevel;
namespace Scripting { class ModuleBindingBuilder; }
namespace Scripting { struct ContextConfig; }
namespace Scripting { struct ModuleBinding; }
namespace mce { class UUID; }
// clang-format on

class ScriptMinecraftNetModuleFactory : public ::Scripting::GenericModuleBindingFactory {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk7f2275;
    ::ll::UntypedStorage<8, 8>  mUnk4fb1f9;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptMinecraftNetModuleFactory& operator=(ScriptMinecraftNetModuleFactory const&);
    ScriptMinecraftNetModuleFactory(ScriptMinecraftNetModuleFactory const&);
    ScriptMinecraftNetModuleFactory();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptMinecraftNetModuleFactory() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI
    ScriptMinecraftNetModuleFactory(::Bedrock::NonOwnerPointer<::Scheduler> serverScheduler, ::ServerLevel* level);

    MCAPI ::Scripting::ModuleBinding _generateBindings(
        ::Scripting::ModuleBindingBuilder&          moduleBuilder,
        ::std::optional<::Scripting::ContextConfig> contextConfig,
        bool                                        allowUntagged,
        ::std::vector<::std::string> const&         allowedTags
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::string getModuleUUIDAsString();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static char const*& ModuleName();

    MCAPI static ::mce::UUID const& ModuleUUID();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Bedrock::NonOwnerPointer<::Scheduler> serverScheduler, ::ServerLevel* level);
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
