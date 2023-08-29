#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
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
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct Version; }
// clang-format on

namespace ScriptModuleMinecraftServerUI {
// NOLINTBEGIN
/**
 * @symbol
 * ?bindScriptFormRejectReason\@ScriptModuleMinecraftServerUI\@\@YA?AV?$EnumBindingBuilder\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4ScriptFormRejectReason\@ScriptModuleMinecraftServerUI\@\@\@Scripting\@\@XZ
 */
MCAPI class Scripting::EnumBindingBuilder<std::string, enum class ScriptModuleMinecraftServerUI::ScriptFormRejectReason>
bindScriptFormRejectReason();
// NOLINTEND

}; // namespace ScriptModuleMinecraftServerUI
