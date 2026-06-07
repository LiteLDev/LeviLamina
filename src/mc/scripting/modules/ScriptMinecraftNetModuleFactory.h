#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/scripting/binding_factory/GenericModuleBindingFactory.h"

// auto generated forward declare list
// clang-format off
class Scheduler;
class ScriptPackConfigurationManager;
class ServerLevel;
namespace ScriptModuleMinecraftNet { class ScriptNativeWebSocketFactory; }
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
    ::ll::UntypedStorage<8, 24> mUnkc9f7d9;
    ::ll::UntypedStorage<8, 8>  mUnk4fb1f9;
    ::ll::UntypedStorage<8, 16> mUnk167a04;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptMinecraftNetModuleFactory& operator=(ScriptMinecraftNetModuleFactory const&);
    ScriptMinecraftNetModuleFactory(ScriptMinecraftNetModuleFactory const&);
    ScriptMinecraftNetModuleFactory();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptMinecraftNetModuleFactory(
        ::Bedrock::NonOwnerPointer<::Scheduler>                                     serverScheduler,
        ::Bedrock::NonOwnerPointer<::ScriptPackConfigurationManager>                packConfigManager,
        ::ServerLevel*                                                              level,
        ::std::shared_ptr<::ScriptModuleMinecraftNet::ScriptNativeWebSocketFactory> webSocketFactory
    );

    MCNAPI void _addVersions();

    MCNAPI ::Scripting::ModuleBinding _generateBindings(
        ::Scripting::ModuleBindingBuilder&          moduleBuilder,
        ::std::optional<::Scripting::ContextConfig> contextConfig,
        bool                                        allowUntagged,
        ::std::vector<::std::string> const&         allowedTags
    );
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
        ::Bedrock::NonOwnerPointer<::Scheduler>                                     serverScheduler,
        ::Bedrock::NonOwnerPointer<::ScriptPackConfigurationManager>                packConfigManager,
        ::ServerLevel*                                                              level,
        ::std::shared_ptr<::ScriptModuleMinecraftNet::ScriptNativeWebSocketFactory> webSocketFactory
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
