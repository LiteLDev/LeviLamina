#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakHandleFromThis.h"
#include "mc/deps/script_core/runtime/scripting/Result.h"
#include "mc/deps/script_core/script_engine/scripting/Closure.h"
#include "mc/deps/script_core/script_engine/scripting/Promise.h"
#include "mc/scripting/modules/minecraft_ui/ddui/ScriptDataDrivenScreenClosedReason.h"

// auto generated forward declare list
// clang-format off
class IGameplayUserManagerConnector;
class ServerPlayer;
namespace ScriptModuleMinecraft { class ScriptPlayer; }
namespace ScriptModuleMinecraft { struct ScriptInvalidActorError; }
namespace ScriptModuleMinecraftServerUI { class ScriptFormVisibilityError; }
namespace ScriptModuleMinecraftServerUI { class ScriptInvalidFormError; }
namespace ScriptModuleMinecraftServerUI { class ScriptInvalidFormModificationError; }
namespace ScriptModuleMinecraftServerUI { class ScriptObservableString; }
namespace ScriptModuleMinecraftServerUI { class ScriptObservableUIRawMessage; }
namespace ScriptModuleMinecraftServerUI { class ScriptPlayerLeftError; }
namespace ScriptModuleMinecraftServerUI { class ScriptUIRawMessage; }
namespace ScriptModuleMinecraftServerUI { struct CustomFormButtonData; }
namespace ScriptModuleMinecraftServerUI { struct ScriptButtonOptions; }
namespace ScriptModuleMinecraftServerUI { struct ScriptCustomFormOptions; }
namespace ScriptModuleMinecraftServerUI { struct ScriptTextOptions; }
namespace Scripting { class DependencyLocator; }
namespace Scripting { class ScriptObjectFactory; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct EngineError; }
// clang-format on

namespace ScriptModuleMinecraftServerUI {

class ScriptCustomForm : public ::Scripting::WeakHandleFromThis<::ScriptModuleMinecraftServerUI::ScriptCustomForm> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>   mUnk79d155;
    ::ll::UntypedStorage<8, 32>  mUnka5eaf1;
    ::ll::UntypedStorage<8, 48>  mUnk61cee3;
    ::ll::UntypedStorage<8, 216> mUnkbf8dda;
    ::ll::UntypedStorage<8, 24>  mUnkd6950a;
    ::ll::UntypedStorage<1, 1>   mUnk656f06;
    ::ll::UntypedStorage<8, 16>  mUnk15455b;
    ::ll::UntypedStorage<8, 712> mUnk292132;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptCustomForm& operator=(ScriptCustomForm const&);
    ScriptCustomForm(ScriptCustomForm const&);
    ScriptCustomForm();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptCustomForm(
        ::IGameplayUserManagerConnector&                                            userManagerConnector,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayer> scriptPlayer,
        ::ServerPlayer&                                                             serverPlayer,
        ::std::variant<
            ::std::string,
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftServerUI::ScriptObservableString>,
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftServerUI::ScriptObservableUIRawMessage>,
            ::ScriptModuleMinecraftServerUI::ScriptUIRawMessage>                  title,
        ::std::optional<::ScriptModuleMinecraftServerUI::ScriptCustomFormOptions> options,
        ::Scripting::WeakLifetimeScope                                            scope
    );

    MCNAPI ::ScriptModuleMinecraftServerUI::CustomFormButtonData _createCustomFormButtonData(
        ::Scripting::WeakLifetimeScope& scope,
        ::std::variant<
            ::std::string,
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftServerUI::ScriptObservableString>,
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftServerUI::ScriptObservableUIRawMessage>,
            ::ScriptModuleMinecraftServerUI::ScriptUIRawMessage>&             label,
        ::Scripting::Closure<void()>&                                         onClick,
        ::std::optional<::ScriptModuleMinecraftServerUI::ScriptButtonOptions> options
    );

    MCNAPI ::Scripting::Result<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftServerUI::ScriptCustomForm>,
        ::ScriptModuleMinecraftServerUI::ScriptInvalidFormModificationError>
    header(
        ::std::variant<
            ::std::string,
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftServerUI::ScriptObservableString>,
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftServerUI::ScriptObservableUIRawMessage>,
            ::ScriptModuleMinecraftServerUI::ScriptUIRawMessage>            text,
        ::std::optional<::ScriptModuleMinecraftServerUI::ScriptTextOptions> options
    );

    MCNAPI ::Scripting::Result<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftServerUI::ScriptCustomForm>,
        ::ScriptModuleMinecraftServerUI::ScriptInvalidFormModificationError>
    label(
        ::std::variant<
            ::std::string,
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftServerUI::ScriptObservableString>,
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftServerUI::ScriptObservableUIRawMessage>,
            ::ScriptModuleMinecraftServerUI::ScriptUIRawMessage>            text,
        ::std::optional<::ScriptModuleMinecraftServerUI::ScriptTextOptions> options
    );

    MCNAPI ::Scripting::Result<
        ::Scripting::Promise<
            ::ScriptModuleMinecraftServerUI::ScriptDataDrivenScreenClosedReason,
            ::ScriptModuleMinecraftServerUI::ScriptPlayerLeftError,
            ::ScriptModuleMinecraftServerUI::ScriptInvalidFormError,
            ::Scripting::EngineError>,
        ::ScriptModuleMinecraft::ScriptInvalidActorError,
        ::ScriptModuleMinecraftServerUI::ScriptFormVisibilityError,
        ::Scripting::EngineError>
    show(
        ::Scripting::DependencyLocator&   locator,
        ::Scripting::ScriptObjectFactory& factory,
        ::Scripting::WeakLifetimeScope&   scope
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind(::IGameplayUserManagerConnector& userManagerConnector);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static char const* const& FORM_ID();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::IGameplayUserManagerConnector&                                            userManagerConnector,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayer> scriptPlayer,
        ::ServerPlayer&                                                             serverPlayer,
        ::std::variant<
            ::std::string,
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftServerUI::ScriptObservableString>,
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftServerUI::ScriptObservableUIRawMessage>,
            ::ScriptModuleMinecraftServerUI::ScriptUIRawMessage>                  title,
        ::std::optional<::ScriptModuleMinecraftServerUI::ScriptCustomFormOptions> options,
        ::Scripting::WeakLifetimeScope                                            scope
    );
    // NOLINTEND
};

} // namespace ScriptModuleMinecraftServerUI
