#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/CurrentCmdVersion.h"
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/EnumBindingBuilder.h"
#include "mc/external/scripting/ErrorBindingBuilder.h"
#include "mc/external/scripting/Promise.h"
#include "mc/external/scripting/Result.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft_ui/ScriptActionFormData.h"
#include "mc/scripting/modules/minecraft_ui/ScriptFormRejectReason.h"

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
namespace Scripting { class DependencyLocator; }
namespace Scripting { class ScriptObjectFactory; }
namespace Scripting { struct ContextConfig; }
namespace Scripting { struct Version; }
// clang-format on

namespace ScriptModuleMinecraftServerUI {
// NOLINTBEGIN
// symbol:
// ?bindScriptFormRejectReason@ScriptModuleMinecraftServerUI@@YA?AV?$EnumBindingBuilder@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4ScriptFormRejectReason@ScriptModuleMinecraftServerUI@@@Scripting@@XZ
MCAPI class Scripting::EnumBindingBuilder<std::string, ::ScriptModuleMinecraftServerUI::ScriptFormRejectReason>
bindScriptFormRejectReason();

// symbol:
// ?resolveRawMessageAsJson@ScriptModuleMinecraftServerUI@@YA?AV?$Result@VValue@Json@@$$V@Scripting@@AEAVPlayer@@W4CurrentCmdVersion@@AEBV?$variant@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UScriptRawMessageInterface@ScriptModuleMinecraft@@@std@@@Z
MCAPI class Scripting::Result<class Json::Value>
resolveRawMessageAsJson(class Player&, ::CurrentCmdVersion, std::variant<std::string, struct ScriptModuleMinecraft::ScriptRawMessageInterface> const&);
// NOLINTEND

}; // namespace ScriptModuleMinecraftServerUI
