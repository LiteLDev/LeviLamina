#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/runtime/Result.h"
#include "mc/deps/scripting/script_engine/Closure.h"
#include "mc/deps/scripting/script_engine/Promise.h"
#include "mc/scripting/modules/minecraft_ui/ScriptTextFilteringError.h"

// auto generated forward declare list
// clang-format off
class ScriptServerNetworkHandlerReference;
class ServerNetworkHandler;
struct ScriptInvalidPathError;
namespace ScriptModuleMinecraft { class ScriptPlayer; }
namespace ScriptModuleMinecraft { struct ScriptInvalidActorError; }
namespace Scripting { class ScriptObjectFactory; }
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct EngineError; }
// clang-format on

struct ScriptDataDrivenUIBinding {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkedb43e;
    ::ll::UntypedStorage<4, 8>  mUnk817477;
    ::ll::UntypedStorage<8, 8>  mUnk558141;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptDataDrivenUIBinding& operator=(ScriptDataDrivenUIBinding const&);
    ScriptDataDrivenUIBinding(ScriptDataDrivenUIBinding const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptDataDrivenUIBinding();

    MCNAPI ::Scripting::Result<
        ::Scripting::Promise<
            ::std::variant<::std::string, ::std::vector<::ScriptModuleMinecraftServerUI::ScriptTextFilteringError>>>,
        ::ScriptModuleMinecraft::ScriptInvalidActorError,
        ::Scripting::EngineError>
    getFilteredText(
        ::Scripting::ScriptObjectFactory&                                           factory,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayer> scriptPlayer,
        ::std::string const&                                                        text,
        ::Bedrock::NotNullNonOwnerPtr<::ServerNetworkHandler>                       serverNetworkHandler
    );

    MCNAPI ::Scripting::Result<::std::optional<::std::string>, ::ScriptModuleMinecraft::ScriptInvalidActorError>
    getProperty(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayer> scriptPlayer,
        ::std::string const&                                                        dataStoreName,
        ::std::string const&                                                        property
    );

    MCNAPI ::Scripting::Result<
        ::std::optional<::std::string>,
        ::ScriptModuleMinecraft::ScriptInvalidActorError,
        ::ScriptInvalidPathError>
    getPropertyPath(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayer> scriptPlayer,
        ::std::string const&                                                        dataStoreName,
        ::std::string const&                                                        property,
        ::std::string const&                                                        path
    );

    MCNAPI ::Scripting::Result<void, ::ScriptModuleMinecraft::ScriptInvalidActorError, ::ScriptInvalidPathError>
    setClientWritable(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayer> scriptPlayer,
        ::std::string const&                                                        dataStoreName,
        ::std::string const&                                                        property,
        ::std::string const&                                                        path,
        bool                                                                        value
    );

    MCNAPI void setInstanceIdOverride(::std::optional<uint> instanceId);

    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError, ::ScriptModuleMinecraft::ScriptInvalidActorError>
    setProperty(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayer> scriptPlayer,
        ::std::string const&                                                        dataStoreName,
        ::std::string const&                                                        property,
        ::std::string const&                                                        data
    );

    MCNAPI ::Scripting::Result<void, ::ScriptModuleMinecraft::ScriptInvalidActorError, ::ScriptInvalidPathError>
    setPropertyPath(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayer> scriptPlayer,
        ::std::string const&                                                        dataStoreName,
        ::std::string const&                                                        property,
        ::std::string const&                                                        path,
        ::std::variant<double, bool, ::std::string> const&                          data
    );

    MCNAPI ::Scripting::Result<
        ::Scripting::Closure<void(::std::optional<::std::string>)>,
        ::ScriptModuleMinecraft::ScriptInvalidActorError,
        ::ScriptInvalidPathError>
    subscribe(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayer> scriptPlayer,
        ::std::string const&                                                        dataStoreName,
        ::std::string const&                                                        property,
        ::std::string const&                                                        path,
        ::Scripting::Closure<void(::std::optional<::std::string>)>                  closure
    );

    MCNAPI bool unsubscribe(::Scripting::Closure<void(::std::optional<::std::string>)> closure);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind(::ScriptServerNetworkHandlerReference* serverNetworkHandler);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};
