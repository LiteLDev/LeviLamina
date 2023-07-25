#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace ScriptModuleMinecraft { class ScriptActor; }
namespace ScriptModuleMinecraft { class ScriptScoreboardIdentity; }
namespace ScriptModuleMinecraft { enum class ScriptDisplayObjectiveSlotId; }
namespace ScriptModuleMinecraft { enum class ScriptEventSource; }
namespace ScriptModuleMinecraft { enum class ScriptFacing; }
namespace ScriptModuleMinecraft { enum class ScriptTimeOfDay; }
namespace ScriptModuleMinecraft { struct ScriptRawMessageInterface; }
namespace Scripting { struct Error; }
namespace Scripting { template<typename T0, typename T1> class EnumBindingBuilder; }
namespace Scripting { template<typename T0> class ClassBindingBuilder; }
namespace Scripting { template<typename T0> class StrongTypedObjectHandle; }
// clang-format on

namespace ScriptModuleMinecraft {
/**
 * @symbol ?SetUpScriptAssertHandler\@ScriptModuleMinecraft\@\@YAXXZ
 */
MCAPI void SetUpScriptAssertHandler();
/**
 * @symbol ?_buildSignalId\@ScriptModuleMinecraft\@\@YA_KPEBD000\@Z
 */
MCAPI unsigned __int64 _buildSignalId(char const*, char const*, char const*, char const*);
/**
 * @symbol
 * ?_handleDefinePropertyError\@ScriptModuleMinecraft\@\@YA?AUError\@Scripting\@\@W4DynamicPropertyDefinePropertyError\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
 */
MCAPI struct Scripting::Error
_handleDefinePropertyError(enum class DynamicPropertyDefinePropertyError, std::string const&);
/**
 * @symbol ?bindBlockLocation\@ScriptModuleMinecraft\@\@YA?AV?$ClassBindingBuilder\@VBlockPos\@\@\@Scripting\@\@XZ
 */
MCAPI class Scripting::ClassBindingBuilder<class BlockPos> bindBlockLocation();
/**
 * @symbol
 * ?bindFacingEnumV010\@ScriptModuleMinecraft\@\@YA?AV?$EnumBindingBuilder\@W4ScriptFacing\@ScriptModuleMinecraft\@\@W412\@\@Scripting\@\@XZ
 */
MCAPI class Scripting::
    EnumBindingBuilder<enum class ScriptModuleMinecraft::ScriptFacing, enum class ScriptModuleMinecraft::ScriptFacing>
    bindFacingEnumV010();
/**
 * @symbol
 * ?bindFacingEnumV1\@ScriptModuleMinecraft\@\@YA?AV?$EnumBindingBuilder\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4ScriptFacing\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
 */
MCAPI class Scripting::EnumBindingBuilder<std::string, enum class ScriptModuleMinecraft::ScriptFacing>
bindFacingEnumV1();
/**
 * @symbol
 * ?bindItemLockMode\@ScriptModuleMinecraft\@\@YA?AV?$EnumBindingBuilder\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4ItemLockMode\@\@\@Scripting\@\@XZ
 */
MCAPI class Scripting::EnumBindingBuilder<std::string, enum class ItemLockMode> bindItemLockMode();
/**
 * @symbol
 * ?bindScriptDisplayObjectiveSlotId\@ScriptModuleMinecraft\@\@YA?AV?$EnumBindingBuilder\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4ScriptDisplayObjectiveSlotId\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
 */
MCAPI class Scripting::EnumBindingBuilder<std::string, enum class ScriptModuleMinecraft::ScriptDisplayObjectiveSlotId>
bindScriptDisplayObjectiveSlotId();
/**
 * @symbol
 * ?bindScriptEventSource\@ScriptModuleMinecraft\@\@YA?AV?$EnumBindingBuilder\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4ScriptEventSource\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
 */
MCAPI class Scripting::EnumBindingBuilder<std::string, enum class ScriptModuleMinecraft::ScriptEventSource>
bindScriptEventSource();
/**
 * @symbol
 * ?bindTimeOfDay\@ScriptModuleMinecraft\@\@YA?AV?$EnumBindingBuilder\@W4ScriptTimeOfDay\@ScriptModuleMinecraft\@\@W412\@\@Scripting\@\@XZ
 */
MCAPI class Scripting::EnumBindingBuilder<
    enum class ScriptModuleMinecraft::ScriptTimeOfDay,
    enum class ScriptModuleMinecraft::ScriptTimeOfDay>
bindTimeOfDay();
/**
 * @symbol
 * ?getScriptScoreboardParticipantName\@ScriptModuleMinecraft\@\@YA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV?$variant\@V?$StrongTypedObjectHandle\@VScriptScoreboardIdentity\@ScriptModuleMinecraft\@\@\@Scripting\@\@V?$StrongTypedObjectHandle\@VScriptActor\@ScriptModuleMinecraft\@\@\@2\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@3\@\@Z
 */
MCAPI std::string
      getScriptScoreboardParticipantName(class std::variant<
                                   class Scripting::StrongTypedObjectHandle<
                                       class ScriptModuleMinecraft::ScriptScoreboardIdentity>,
                                   class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptActor>,
                                   std::string> const&);
/**
 * @symbol
 * ?rawMessageOrStringToJson\@ScriptModuleMinecraft\@\@YA?AVValue\@Json\@\@AEBV?$variant\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@UScriptRawMessageInterface\@ScriptModuleMinecraft\@\@\@std\@\@\@Z
 */
MCAPI class Json::Value
rawMessageOrStringToJson(class std::
                             variant<std::string, struct ScriptModuleMinecraft::ScriptRawMessageInterface> const&);

}; // namespace ScriptModuleMinecraft
