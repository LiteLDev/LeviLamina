#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/script_core/binding_factory/scripting/GenericModuleBindingFactory.h"

// auto generated forward declare list
// clang-format off
class Scheduler;
class ScriptPackConfigurationManager;
class ServerLevel;
namespace ScriptModuleMinecraftNet { class ScriptNativeWebSocketFactory; }
// clang-format on

class ScriptMinecraftNetModuleFactory : public ::Scripting::GenericModuleBindingFactory {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk7f2275;
    ::ll::UntypedStorage<8, 24> mUnkc9f7d9;
    ::ll::UntypedStorage<8, 8>  mUnk4fb1f9;
    ::ll::UntypedStorage<8, 16> mUnk167a04;
    ::ll::UntypedStorage<8, 16> mUnkc2b23c;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptMinecraftNetModuleFactory& operator=(ScriptMinecraftNetModuleFactory const&);
    ScriptMinecraftNetModuleFactory(ScriptMinecraftNetModuleFactory const&);
    ScriptMinecraftNetModuleFactory();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptMinecraftNetModuleFactory() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptMinecraftNetModuleFactory(
        ::Bedrock::NonOwnerPointer<::Scheduler>                                     serverScheduler,
        ::Bedrock::NonOwnerPointer<::ScriptPackConfigurationManager>                packConfigManager,
        ::ServerLevel*                                                              level,
        ::std::shared_ptr<::ScriptModuleMinecraftNet::ScriptNativeWebSocketFactory> webSocketFactory
    );
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
};
