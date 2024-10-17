#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/external/scripting/binding_type/EnumBindingBuilder.h"
#include "mc/external/scripting/binding_type/InterfaceBindingBuilder.h"
#include "mc/external/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/external/scripting/lifetime_registry/TypedObjectHandle.h"
#include "mc/external/scripting/lifetime_registry/WeakTypedObjectHandle.h"
#include "mc/external/scripting/runtime/Result.h"
#include "mc/external/scripting/script_engine/Closure.h"
#include "mc/external/scripting/script_engine/Future.h"
#include "mc/external/scripting/script_engine/Promise.h"
#include "mc/scripting/modules/minecraft/ScriptFacing.h"
#include "mc/scripting/modules/minecraft/block/ScriptFluidType.h"
#include "mc/server/sim/LookDuration.h"
#include "mc/world/level/GameType.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleGameTest { class BaseScriptGameTestFunction; }
namespace ScriptModuleGameTest { class ScriptGameTestConnectivity; }
namespace ScriptModuleGameTest { class ScriptGameTestDebug; }
namespace ScriptModuleGameTest { class ScriptGameTestHelper; }
namespace ScriptModuleGameTest { class ScriptGameTestRegistrationBuilder; }
namespace ScriptModuleGameTest { class ScriptGameTestSequence; }
namespace ScriptModuleGameTest { class ScriptSculkSpreader; }
namespace ScriptModuleGameTest { class ScriptSimulatedPlayer; }
namespace ScriptModuleGameTest { struct ScriptMoveToOptions; }
namespace ScriptModuleGameTest { struct ScriptNavigationResult; }
namespace ScriptModuleMinecraft { class ScriptActor; }
namespace ScriptModuleMinecraft { class ScriptBlock; }
namespace ScriptModuleMinecraft { class ScriptBlockPermutation; }
namespace ScriptModuleMinecraft { class ScriptBlockType; }
namespace ScriptModuleMinecraft { class ScriptDimension; }
namespace ScriptModuleMinecraft { class ScriptItemStack; }
namespace ScriptModuleMinecraft { class ScriptItemType; }
namespace ScriptModuleMinecraft { class ScriptPlayer; }
namespace Scripting { class ScriptObjectFactory; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct Error; }
namespace Scripting { struct Version; }
namespace gametest { class BaseGameTestFunction; }
namespace gametest { class BaseGameTestHelper; }
namespace gametest { class IGameTestFunctionContext; }
namespace gametest { class IGameTestFunctionRunResult; }
namespace gametest { struct GameTestError; }
// clang-format on

namespace ScriptModuleGameTest {
// NOLINTBEGIN
MCAPI class Scripting::EnumBindingBuilder<std::string, ::sim::LookDuration> bindLookDurationEnumV1();
// NOLINTEND

}; // namespace ScriptModuleGameTest
