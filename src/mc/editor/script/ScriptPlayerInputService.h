#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/input/Modifier.h"
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/external/scripting/lifetime_registry/WeakHandleFromThis.h"
#include "mc/external/scripting/runtime/Result.h"

// auto generated forward declare list
// clang-format off
namespace Editor::Input { struct BindingInfo; }
namespace Editor::Services { class ServerPlayerInputServiceProvider; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptPlayerInputService
: public ::Scripting::WeakHandleFromThis<::Editor::ScriptModule::ScriptPlayerInputService> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkdc75c9;
    ::ll::UntypedStorage<8, 8>  mUnk117cab;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPlayerInputService& operator=(ScriptPlayerInputService const&);
    ScriptPlayerInputService(ScriptPlayerInputService const&);
    ScriptPlayerInputService();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptPlayerInputService(
        ::Editor::Services::ServerPlayerInputServiceProvider* playerInputService,
        ::Scripting::WeakLifetimeScope const&                 scope
    );

    MCAPI ::Scripting::Result<void> focusViewport();

    MCAPI ::Scripting::Result<void> registerKeyBinding(
        ::std::string const&                contextId,
        ::std::string const&                bindingId,
        int                                 key,
        ::Editor::Input::Modifier           modifier,
        ::Editor::Input::BindingInfo const& info
    );

    MCAPI ::Scripting::Result<void>
    unregisterKeyBinding(::std::string const& contextId, ::std::string const& bindingId);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilder<::Editor::ScriptModule::ScriptPlayerInputService> bindScript();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Editor::Services::ServerPlayerInputServiceProvider* playerInputService,
        ::Scripting::WeakLifetimeScope const&                 scope
    );
    // NOLINTEND
};

} // namespace Editor::ScriptModule
