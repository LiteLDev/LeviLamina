#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/enums/AnimationMode.h"
#include "mc/enums/Mirror.h"
#include "mc/enums/Rotation.h"
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/EnumBindingBuilder.h"
#include "mc/external/scripting/Result.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"
#include "mc/external/scripting/WeakTypedObjectHandle.h"
#include "mc/world/level/levelgen/structure/StructureRedstoneSaveMode.h"

// auto generated forward declare list
// clang-format off
class LevelStorage;
class StructureManager;
class StructureTemplate;
class Vec3;
namespace ScriptModuleMinecraft { class ScriptBlockPermutation; }
namespace ScriptModuleMinecraft { class ScriptStructureManager; }
namespace ScriptModuleMinecraft { struct ScriptInvalidStructureError; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct EngineError; }
namespace Scripting { struct InvalidArgumentError; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptStructureTemplate {
public:
    // prevent constructor by default
    ScriptStructureTemplate& operator=(ScriptStructureTemplate const&);
    ScriptStructureTemplate();

public:
    // NOLINTBEGIN
    // symbol: ??0ScriptStructureTemplate@ScriptModuleMinecraft@@QEAA@AEBV01@@Z
    MCAPI ScriptStructureTemplate(class ScriptModuleMinecraft::ScriptStructureTemplate const&);

    // symbol:
    // ??0ScriptStructureTemplate@ScriptModuleMinecraft@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$not_null@V?$NonOwnerPointer@VStructureManager@@@Bedrock@@@gsl@@VWeakLifetimeScope@Scripting@@V?$WeakTypedObjectHandle@VScriptStructureManager@ScriptModuleMinecraft@@@7@AEAVLevelStorage@@@Z
    MCAPI
    ScriptStructureTemplate(std::string const&, Bedrock::NotNullNonOwnerPtr<class StructureManager>, class Scripting::WeakLifetimeScope, class Scripting::WeakTypedObjectHandle<class ScriptModuleMinecraft::ScriptStructureManager>, class LevelStorage&);

    // symbol:
    // ?getBlockPermutation@ScriptStructureTemplate@ScriptModuleMinecraft@@QEBA?AV?$Result@V?$optional@V?$StrongTypedObjectHandle@VScriptBlockPermutation@ScriptModuleMinecraft@@@Scripting@@@std@@UScriptInvalidStructureError@ScriptModuleMinecraft@@UInvalidArgumentError@Scripting@@@Scripting@@AEBVVec3@@@Z
    MCAPI class Scripting::Result<
        std::optional<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlockPermutation>>,
        struct ScriptModuleMinecraft::ScriptInvalidStructureError,
        struct Scripting::InvalidArgumentError>
    getBlockPermutation(class Vec3 const&) const;

    // symbol:
    // ?getId@ScriptStructureTemplate@ScriptModuleMinecraft@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string const& getId() const;

    // symbol:
    // ?getSize@ScriptStructureTemplate@ScriptModuleMinecraft@@QEBA?AV?$Result@VVec3@@UScriptInvalidStructureError@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI class Scripting::Result<class Vec3, struct ScriptModuleMinecraft::ScriptInvalidStructureError>
    getSize() const;

    // symbol:
    // ?isWaterlogged@ScriptStructureTemplate@ScriptModuleMinecraft@@QEBA?AV?$Result@_NUScriptInvalidStructureError@ScriptModuleMinecraft@@UInvalidArgumentError@Scripting@@@Scripting@@AEBVVec3@@@Z
    MCAPI class Scripting::
        Result<bool, struct ScriptModuleMinecraft::ScriptInvalidStructureError, struct Scripting::InvalidArgumentError>
        isWaterlogged(class Vec3 const&) const;

    // symbol:
    // ?saveAs@ScriptStructureTemplate@ScriptModuleMinecraft@@QEAA?AV?$Result@V?$StrongTypedObjectHandle@VScriptStructureTemplate@ScriptModuleMinecraft@@@Scripting@@UScriptInvalidStructureError@ScriptModuleMinecraft@@UEngineError@2@UInvalidArgumentError@2@@Scripting@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4StructureRedstoneSaveMode@@@Z
    MCAPI class Scripting::Result<
        class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptStructureTemplate>,
        struct ScriptModuleMinecraft::ScriptInvalidStructureError,
        struct Scripting::EngineError,
        struct Scripting::InvalidArgumentError>
    saveAs(std::string const&, ::StructureRedstoneSaveMode);

    // symbol:
    // ?saveToWorld@ScriptStructureTemplate@ScriptModuleMinecraft@@QEAA?AV?$Result@XUScriptInvalidStructureError@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI class Scripting::Result<void, struct ScriptModuleMinecraft::ScriptInvalidStructureError> saveToWorld();

    // symbol:
    // ?setBlockPermutation@ScriptStructureTemplate@ScriptModuleMinecraft@@QEAA?AV?$Result@XUInvalidArgumentError@Scripting@@UScriptInvalidStructureError@ScriptModuleMinecraft@@@Scripting@@AEBVVec3@@V?$optional@V?$StrongTypedObjectHandle@VScriptBlockPermutation@ScriptModuleMinecraft@@@Scripting@@@std@@_N@Z
    MCAPI class Scripting::Result<
        void,
        struct Scripting::InvalidArgumentError,
        struct ScriptModuleMinecraft::ScriptInvalidStructureError>
    setBlockPermutation(
        class Vec3 const&,
        std::optional<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlockPermutation>>,
        bool
    );

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

    // private:
    // NOLINTBEGIN
    // symbol: ?_getStructureTemplate@ScriptStructureTemplate@ScriptModuleMinecraft@@AEBAPEAVStructureTemplate@@XZ
    MCAPI class StructureTemplate* _getStructureTemplate() const;

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
