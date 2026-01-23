#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/runtime/Result.h"
#include "mc/deps/scripting/script_engine/Closure.h"

// auto generated forward declare list
// clang-format off
struct ScriptInvalidPathError;
namespace ScriptModuleMinecraft { class ScriptPlayer; }
namespace ScriptModuleMinecraft { struct ScriptInvalidActorError; }
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct EngineError; }
// clang-format on

struct ScriptDataDrivenUIBinding {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkff3a52;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptDataDrivenUIBinding& operator=(ScriptDataDrivenUIBinding const&);
    ScriptDataDrivenUIBinding(ScriptDataDrivenUIBinding const&);
    ScriptDataDrivenUIBinding();

public:
    // member functions
    // NOLINTBEGIN
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

    MCNAPI ::ScriptDataDrivenUIBinding& operator=(::ScriptDataDrivenUIBinding&&);

    MCNAPI ::Scripting::Result<void, ::ScriptModuleMinecraft::ScriptInvalidActorError, ::ScriptInvalidPathError>
    setClientWritable(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayer> scriptPlayer,
        ::std::string const&                                                        dataStoreName,
        ::std::string const&                                                        property,
        ::std::string const&                                                        path,
        bool                                                                        value
    );

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
        ::ScriptModuleMinecraft::ScriptInvalidActorError>
    subscribe(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayer> scriptPlayer,
        ::std::string const&                                                        dataStoreName,
        ::std::string const&                                                        property,
        ::Scripting::Closure<void(::std::optional<::std::string>)>                  closure
    );

    MCNAPI ::Scripting::Result<
        ::Scripting::Closure<void(::std::optional<::std::string>)>,
        ::ScriptModuleMinecraft::ScriptInvalidActorError,
        ::ScriptInvalidPathError>
    subscribePath(
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
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND
};
