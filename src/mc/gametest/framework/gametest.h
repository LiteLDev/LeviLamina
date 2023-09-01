#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/ArmorSlot.h"
#include "mc/enums/GameType.h"
#include "mc/enums/Mirror.h"
#include "mc/enums/Rotation.h"
#include "mc/external/scripting/EnumBindingBuilder.h"
#include "mc/external/scripting/ErrorBindingBuilder.h"
#include "mc/external/scripting/InterfaceBindingBuilder.h"
#include "mc/gametest/framework/GameTestErrorType.h"
#include "mc/scripting/modules/minecraft/ScriptFacing.h"
#include "mc/world/AutomaticID.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class EnableNonOwnerReferences; }
namespace ScriptModuleGameTest { class ScriptGameTestConnectivity; }
namespace gametest { class BaseGameTestBatchRunner; }
namespace gametest { class BaseGameTestFunction; }
namespace gametest { class BaseGameTestHelper; }
namespace gametest { class BaseGameTestInstance; }
namespace gametest { class GameTestBatch; }
namespace gametest { class GameTestSequence; }
namespace gametest { class GameTestTicker; }
namespace gametest { class IGameTestFunctionContext; }
namespace gametest { class IGameTestFunctionRunResult; }
namespace gametest { class IGameTestHelperProvider; }
namespace gametest { class IGameTestListener; }
namespace gametest { class IGameTestRuleHelper; }
namespace gametest { class MultipleTestTracker; }
namespace gametest { struct GameTestError; }
namespace gametest { struct GameTestErrorContext; }
namespace gametest { struct TestParameters; }
// clang-format on

namespace gametest {
// NOLINTBEGIN
// symbol:
// ?bindGameTestErrorType@gametest@@YA?AV?$EnumBindingBuilder@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4GameTestErrorType@gametest@@@Scripting@@XZ
MCAPI class Scripting::EnumBindingBuilder<std::string, ::gametest::GameTestErrorType> bindGameTestErrorType();
// NOLINTEND

}; // namespace gametest
