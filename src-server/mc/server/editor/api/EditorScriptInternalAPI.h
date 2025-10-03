#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/lifetime_registry/TypedObjectHandle.h"
#include "mc/deps/scripting/lifetime_registry/WeakTypedObjectHandle.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"
#include "mc/deps/scripting/script_engine/Closure.h"

// auto generated forward declare list
// clang-format off
namespace Editor::API { class EditorExtension; }
namespace Editor::API { class EditorExtensionContext; }
namespace Editor::API { struct EditorExtensionOptionalParameters; }
namespace Editor::ScriptModule { class ScriptInternalPlayerServiceContext; }
namespace ScriptModuleMinecraft { class ScriptPlayer; }
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct ContextConfig; }
// clang-format on

namespace Editor::API {

class EditorScriptInternalAPI {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnk26f8ed;
    ::ll::UntypedStorage<8, 16> mUnk6c34da;
    ::ll::UntypedStorage<8, 8>  mUnk3d92dd;
    // NOLINTEND

public:
    // prevent constructor by default
    EditorScriptInternalAPI& operator=(EditorScriptInternalAPI const&);
    EditorScriptInternalAPI(EditorScriptInternalAPI const&);
    EditorScriptInternalAPI();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Scripting::StrongTypedObjectHandle<::Editor::API::EditorExtension> _registerExtension(
        ::Scripting::ContextConfig const& contextConfig,
        ::std::string const&              extensionName,
        ::Scripting::Closure<void(::Scripting::TypedObjectHandle<::Editor::API::EditorExtensionContext>)>
            activationClosure,
        ::Scripting::Closure<void(::Scripting::TypedObjectHandle<::Editor::API::EditorExtensionContext>)>
                                                                          shutdownClosure,
        ::std::optional<::Editor::API::EditorExtensionOptionalParameters> options
    );

    MCNAPI ::Scripting::Result_deprecated<void> fireTelemetryEvent(
        ::ScriptModuleMinecraft::ScriptPlayer& scriptPlayer,
        ::std::string const&                   source,
        ::std::string const&                   eventName,
        ::std::string const&                   metadata
    );

    MCNAPI ::Scripting::Result_deprecated<
        ::Scripting::WeakTypedObjectHandle<::Editor::ScriptModule::ScriptInternalPlayerServiceContext>>
    getPlayerServiceContext(::ScriptModuleMinecraft::ScriptPlayer& scriptPlayer);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bindScript();
    // NOLINTEND
};

} // namespace Editor::API
