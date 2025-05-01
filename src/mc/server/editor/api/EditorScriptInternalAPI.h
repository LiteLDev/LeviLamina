#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/lifetime_registry/TypedObjectHandle.h"
#include "mc/deps/scripting/lifetime_registry/WeakTypedObjectHandle.h"
#include "mc/deps/scripting/runtime/Result.h"
#include "mc/deps/scripting/script_engine/Closure.h"

// auto generated forward declare list
// clang-format off
class Vec3;
namespace Editor::API { class EditorExtension; }
namespace Editor::API { class EditorExtensionContext; }
namespace Editor::API { struct EditorExtensionOptionalParameters; }
namespace Editor::ScriptModule { class ScriptInternalPlayerServiceContext; }
namespace ScriptModuleMinecraft { class ScriptPlayer; }
namespace ScriptModuleMinecraft { class ScriptRGBA; }
namespace Scripting { struct ContextConfig; }
namespace Scripting { struct Error; }
// clang-format on

namespace Editor::API {

class EditorScriptInternalAPI {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnk26f8ed;
    ::ll::UntypedStorage<8, 16> mUnk6c34da;
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

    MCNAPI ::Scripting::Result<void, ::Scripting::Error> fireTelemetryEvent(
        ::ScriptModuleMinecraft::ScriptPlayer& scriptPlayer,
        ::std::string const&                   source,
        ::std::string const&                   eventName,
        ::std::string const&                   metadata
    );

    MCNAPI ::Scripting::Result<::ScriptModuleMinecraft::ScriptRGBA, ::Scripting::Error>
    getMapColorUnsafe(::ScriptModuleMinecraft::ScriptPlayer& scriptPlayer, ::Vec3 const& coordinate);

    MCNAPI ::Scripting::Result<
        ::Scripting::WeakTypedObjectHandle<::Editor::ScriptModule::ScriptInternalPlayerServiceContext>,
        ::Scripting::Error>
    getPlayerServiceContext(::ScriptModuleMinecraft::ScriptPlayer& scriptPlayer);

    MCNAPI ::Editor::API::EditorScriptInternalAPI& operator=(::Editor::API::EditorScriptInternalAPI&&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBindingBuilder<::Editor::API::EditorScriptInternalAPI> bindScript();
    // NOLINTEND
};

} // namespace Editor::API
