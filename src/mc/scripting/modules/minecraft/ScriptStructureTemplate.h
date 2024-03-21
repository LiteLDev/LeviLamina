#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/enums/AnimationMode.h"
#include "mc/enums/Mirror.h"
#include "mc/enums/Rotation.h"
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/EnumBindingBuilder.h"
#include "mc/world/level/levelgen/structure/StructureRedstoneSaveMode.h"

// auto generated forward declare list
// clang-format off
class StructureManager;
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptStructureTemplate {
public:
    // prevent constructor by default
    ScriptStructureTemplate& operator=(ScriptStructureTemplate const&);
    ScriptStructureTemplate(ScriptStructureTemplate const&);
    ScriptStructureTemplate();

public:
    // NOLINTBEGIN
    // symbol: ??0ScriptStructureTemplate@ScriptModuleMinecraft@@QEAA@$$QEAV01@@Z
    MCAPI ScriptStructureTemplate(class ScriptModuleMinecraft::ScriptStructureTemplate&&);

    // symbol:
    // ??0ScriptStructureTemplate@ScriptModuleMinecraft@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$not_null@V?$NonOwnerPointer@VStructureManager@@@Bedrock@@@gsl@@@Z
    MCAPI ScriptStructureTemplate(std::string const&, Bedrock::NotNullNonOwnerPtr<class StructureManager>);

    // symbol:
    // ?getId@ScriptStructureTemplate@ScriptModuleMinecraft@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string const& getId() const;

    // symbol: ??4ScriptStructureTemplate@ScriptModuleMinecraft@@QEAAAEAV01@$$QEAV01@@Z
    MCAPI class ScriptModuleMinecraft::ScriptStructureTemplate&
    operator=(class ScriptModuleMinecraft::ScriptStructureTemplate&&);

    // symbol: ??1ScriptStructureTemplate@ScriptModuleMinecraft@@QEAA@XZ
    MCAPI ~ScriptStructureTemplate();

    // symbol:
    // ?bind@ScriptStructureTemplate@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@VScriptStructureTemplate@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptStructureTemplate> bind();

    // symbol:
    // ?bindAnimationModeEnum@ScriptStructureTemplate@ScriptModuleMinecraft@@SA?AV?$EnumBindingBuilder@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4AnimationMode@@@Scripting@@XZ
    MCAPI static class Scripting::EnumBindingBuilder<std::string, ::AnimationMode> bindAnimationModeEnum();

    // symbol:
    // ?bindMirrorEnum@ScriptStructureTemplate@ScriptModuleMinecraft@@SA?AV?$EnumBindingBuilder@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Mirror@@@Scripting@@XZ
    MCAPI static class Scripting::EnumBindingBuilder<std::string, ::Mirror> bindMirrorEnum();

    // symbol:
    // ?bindRotationEnum@ScriptStructureTemplate@ScriptModuleMinecraft@@SA?AV?$EnumBindingBuilder@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Rotation@@@Scripting@@XZ
    MCAPI static class Scripting::EnumBindingBuilder<std::string, ::Rotation> bindRotationEnum();

    // symbol:
    // ?bindStructureSaveModeEnum@ScriptStructureTemplate@ScriptModuleMinecraft@@SA?AV?$EnumBindingBuilder@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4StructureRedstoneSaveMode@@@Scripting@@XZ
    MCAPI static class Scripting::EnumBindingBuilder<std::string, ::StructureRedstoneSaveMode>
    bindStructureSaveModeEnum();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
