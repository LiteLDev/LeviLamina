#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/WeakHandleFromThis.h"
#include "mc/deps/script_core/runtime/scripting/Result.h"
#include "mc/scripting/modules/minecraft_ui/ddui/ScriptDataDrivenScreenClosedReason.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::DDUI { class DataStoreSyncServer; }
namespace ScriptModuleMinecraft { struct ScriptInvalidActorError; }
namespace ScriptModuleMinecraftServerUI { class ScriptFormVisibilityError; }
namespace ScriptModuleMinecraftServerUI { class ScriptInvalidFormError; }
namespace ScriptModuleMinecraftServerUI { class ScriptPlayerLeftError; }
namespace Scripting { class DependencyLocator; }
namespace Scripting { class StrongObjectHandle; }
namespace Scripting { struct EngineError; }
// clang-format on

namespace ScriptModuleMinecraftServerUI {

class ScriptForm : public ::Scripting::WeakHandleFromThis<::ScriptModuleMinecraftServerUI::ScriptForm> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnka9a2c6;
    ::ll::UntypedStorage<8, 32> mUnkaf34d0;
    ::ll::UntypedStorage<8, 16> mUnkf09cb3;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptForm& operator=(ScriptForm const&);
    ScriptForm(ScriptForm const&);
    ScriptForm();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result<
        void,
        ::ScriptModuleMinecraft::ScriptInvalidActorError,
        ::ScriptModuleMinecraftServerUI::ScriptFormVisibilityError,
        ::Scripting::EngineError>
    close();

    MCNAPI ::Scripting::Result<uint, ::Scripting::EngineError> generateId(::Scripting::DependencyLocator& locator);

    MCNAPI ::nonstd::expected<
        ::std::reference_wrapper<::Bedrock::DDUI::DataStoreSyncServer>,
        ::ScriptModuleMinecraft::ScriptInvalidActorError>
    getPlayerDataStore(::std::string const& funcName);

    MCNAPI ::Scripting::Result<
        void,
        ::ScriptModuleMinecraft::ScriptInvalidActorError,
        ::ScriptModuleMinecraftServerUI::ScriptFormVisibilityError,
        ::Scripting::EngineError>
    show(
        ::std::optional<uint>                                                                      instanceId,
        ::std::function<void(::ScriptModuleMinecraftServerUI::ScriptDataDrivenScreenClosedReason)> resolve,
        ::std::function<void(::std::variant<
                             ::ScriptModuleMinecraftServerUI::ScriptPlayerLeftError,
                             ::ScriptModuleMinecraftServerUI::ScriptInvalidFormError,
                             ::Scripting::EngineError>)>                                           reject,
        ::Scripting::StrongObjectHandle                                                            owningFormHandle,
        ::Scripting::DependencyLocator&                                                            locator
    );
    // NOLINTEND
};

} // namespace ScriptModuleMinecraftServerUI
