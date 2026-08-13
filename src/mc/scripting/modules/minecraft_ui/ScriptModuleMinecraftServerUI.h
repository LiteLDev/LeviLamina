#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/runtime/scripting/Result.h"
#include "mc/server/commands/CurrentCmdVersion.h"

// auto generated forward declare list
// clang-format off
class Player;
namespace Json { class Value; }
namespace ScriptModuleMinecraft { struct ScriptRawMessageError; }
namespace ScriptModuleMinecraft { struct ScriptRawMessageInterface; }
namespace ScriptModuleMinecraftServerUI { class ScriptObservableCallback; }
namespace ScriptModuleMinecraftServerUI { class ScriptObservableDataStoreBinding; }
namespace ScriptModuleMinecraftServerUI { class ScriptObservableString; }
namespace ScriptModuleMinecraftServerUI { class ScriptObservableUIRawMessage; }
namespace ScriptModuleMinecraftServerUI { class ScriptUIRawMessage; }
namespace ScriptModuleMinecraftServerUI { struct ButtonBinding; }
namespace ScriptModuleMinecraftServerUI { struct CustomFormButtonData; }
namespace Scripting { struct EnumBinding; }
namespace Scripting { struct InterfaceBinding; }
namespace cereal { class DynamicValue; }
// clang-format on

namespace ScriptModuleMinecraftServerUI {
// functions
// NOLINTBEGIN
MCNAPI ::Scripting::InterfaceBinding bindDropdownItemData();

MCNAPI ::Scripting::EnumBinding bindScriptDataDrivenScreenClosedReason();

MCNAPI ::Scripting::EnumBinding bindScriptFormRejectReason();

MCNAPI ::Scripting::EnumBinding bindScriptFormVisibilityErrorReason();

MCNAPI ::Scripting::EnumBinding bindTextFilteringEnums();

MCNAPI ::Scripting::Result<::Json::Value, ::ScriptModuleMinecraft::ScriptRawMessageError> resolveRawMessageAsJson(
    ::Player&                                                                                player,
    ::CurrentCmdVersion                                                                      commandVersion,
    ::std::variant<::std::string, ::ScriptModuleMinecraft::ScriptRawMessageInterface> const& text
);

MCNAPI ::cereal::DynamicValue toObject(::ScriptModuleMinecraftServerUI::ButtonBinding const& binding);

MCNAPI ::cereal::DynamicValue toObject(
    ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftServerUI::ScriptObservableCallback> const& binding
);

MCNAPI ::cereal::DynamicValue toObject(
    ::std::variant<
        ::std::string,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftServerUI::ScriptObservableString>,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftServerUI::ScriptObservableUIRawMessage>,
        ::ScriptModuleMinecraftServerUI::ScriptUIRawMessage> const& binding
);

MCNAPI ::cereal::DynamicValue toObject(::ScriptModuleMinecraftServerUI::CustomFormButtonData const& data);

MCNAPI void tryBind(
    ::ScriptModuleMinecraftServerUI::ScriptObservableDataStoreBinding& binding,
    ::std::string const&                                               property,
    ::std::string const&                                               path,
    ::ScriptModuleMinecraftServerUI::CustomFormButtonData&             data
);

MCNAPI void tryBind(
    ::ScriptModuleMinecraftServerUI::ScriptObservableDataStoreBinding& binding,
    ::std::string const&                                               property,
    ::std::string const&                                               path,
    ::ScriptModuleMinecraftServerUI::ButtonBinding const&              value
);

MCNAPI void tryBind(
    ::ScriptModuleMinecraftServerUI::ScriptObservableDataStoreBinding&                                     binding,
    ::std::string const&                                                                                   property,
    ::std::string const&                                                                                   path,
    ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftServerUI::ScriptObservableCallback> const& value
);

MCNAPI void tryBind(
    ::ScriptModuleMinecraftServerUI::ScriptObservableDataStoreBinding& binding,
    ::std::string const&                                               property,
    ::std::string const&                                               path,
    ::std::variant<
        ::std::string,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftServerUI::ScriptObservableString>,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftServerUI::ScriptObservableUIRawMessage>,
        ::ScriptModuleMinecraftServerUI::ScriptUIRawMessage> const& value
);
// NOLINTEND

} // namespace ScriptModuleMinecraftServerUI
