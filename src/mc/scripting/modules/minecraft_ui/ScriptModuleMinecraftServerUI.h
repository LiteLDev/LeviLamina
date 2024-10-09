#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/external/scripting/binding_type/EnumBindingBuilder.h"
#include "mc/external/scripting/binding_type/ErrorBindingBuilder.h"
#include "mc/external/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/external/scripting/runtime/Result.h"
#include "mc/external/scripting/script_engine/Promise.h"
#include "mc/scripting/modules/minecraft_ui/ScriptActionFormData.h"
#include "mc/scripting/modules/minecraft_ui/ScriptFormRejectReason.h"
#include "mc/server/commands/CurrentCmdVersion.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace ScriptModuleMinecraft { class ScriptPlayer; }
namespace ScriptModuleMinecraft { struct ScriptRawMessageInterface; }
namespace ScriptModuleMinecraftServerUI { class BaseScriptFormResponse; }
namespace ScriptModuleMinecraftServerUI { class IControl; }
namespace ScriptModuleMinecraftServerUI { class ScriptActionFormData; }
namespace ScriptModuleMinecraftServerUI { class ScriptActionFormResponse; }
namespace ScriptModuleMinecraftServerUI { class ScriptFormRejectError; }
namespace ScriptModuleMinecraftServerUI { class ScriptMessageFormData; }
namespace ScriptModuleMinecraftServerUI { class ScriptMessageFormResponse; }
namespace ScriptModuleMinecraftServerUI { class ScriptModalFormData; }
namespace ScriptModuleMinecraftServerUI { class ScriptModalFormResponse; }
namespace ScriptModuleMinecraftServerUI { class ScriptUIManager; }
namespace Scripting { class DependencyLocator; }
namespace Scripting { class ScriptObjectFactory; }
namespace Scripting { struct ContextConfig; }
namespace Scripting { struct Version; }
// clang-format on

namespace ScriptModuleMinecraftServerUI {
// NOLINTBEGIN
MCAPI class Scripting::EnumBindingBuilder<std::string, ::ScriptModuleMinecraftServerUI::ScriptFormRejectReason>
bindScriptFormRejectReason();

MCAPI class Scripting::Result<class Json::Value> resolveRawMessageAsJson(
    class Player&                                                                             player,
    ::CurrentCmdVersion                                                                       commandVersion,
    std::variant<std::string, struct ScriptModuleMinecraft::ScriptRawMessageInterface> const& text
);
// NOLINTEND

}; // namespace ScriptModuleMinecraftServerUI
