#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/lifetime_registry/WeakHandleFromThis.h"
#include "mc/deps/scripting/runtime/Result.h"
#include "mc/deps/scripting/script_engine/Promise.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptPlayer; }
namespace ScriptModuleMinecraft { struct ScriptInvalidActorError; }
namespace ScriptModuleMinecraftServerUIPrivateBindings { class ScriptDataDrivenScreenRejectError; }
namespace ScriptModuleMinecraftServerUIPrivateBindings { class ScriptDataDrivenScreenResponse; }
namespace Scripting { class DependencyLocator; }
namespace Scripting { class ScriptObjectFactory; }
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct EngineError; }
// clang-format on

namespace ScriptModuleMinecraftServerUIPrivateBindings {

class ScriptDataDrivenScreen
: public ::Scripting::WeakHandleFromThis<::ScriptModuleMinecraftServerUIPrivateBindings::ScriptDataDrivenScreen> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk4ae011;
    ::ll::UntypedStorage<8, 32> mUnkf0febb;
    ::ll::UntypedStorage<8, 16> mUnkfb4242;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptDataDrivenScreen& operator=(ScriptDataDrivenScreen const&);
    ScriptDataDrivenScreen(ScriptDataDrivenScreen const&);
    ScriptDataDrivenScreen();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptDataDrivenScreen(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayer> scriptPlayer,
        ::std::string                                                               screenId
    );

    MCNAPI ::Scripting::Result<void, ::ScriptModuleMinecraft::ScriptInvalidActorError, ::Scripting::EngineError>
    hideScreen();

    MCNAPI ::ScriptModuleMinecraftServerUIPrivateBindings::ScriptDataDrivenScreen&
    operator=(::ScriptModuleMinecraftServerUIPrivateBindings::ScriptDataDrivenScreen&&);

    MCNAPI ::Scripting::Result<
        ::Scripting::Promise<
            ::Scripting::StrongTypedObjectHandle<
                ::ScriptModuleMinecraftServerUIPrivateBindings::ScriptDataDrivenScreenResponse>,
            ::ScriptModuleMinecraftServerUIPrivateBindings::ScriptDataDrivenScreenRejectError>,
        ::ScriptModuleMinecraft::ScriptInvalidActorError,
        ::Scripting::EngineError>
    showScreen(::Scripting::DependencyLocator& locator, ::Scripting::ScriptObjectFactory& factory);

    MCNAPI ~ScriptDataDrivenScreen();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();

    MCNAPI static ::Scripting::Result<void, ::ScriptModuleMinecraft::ScriptInvalidActorError>
    closeAllScreens(::ScriptModuleMinecraft::ScriptPlayer& scriptPlayer);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayer> scriptPlayer,
        ::std::string                                                               screenId
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraftServerUIPrivateBindings
