#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/Result.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"
#include "mc/world/level/levelgen/structure/StructureRedstoneSaveMode.h"

// auto generated forward declare list
// clang-format off
class ServerLevel;
class StructureTemplate;
class Vec3;
namespace ScriptModuleMinecraft { class ScriptDimension; }
namespace ScriptModuleMinecraft { class ScriptSimpleBlockVolume; }
namespace ScriptModuleMinecraft { class ScriptStructureTemplate; }
namespace ScriptModuleMinecraft { struct ScriptInvalidStructureError; }
namespace ScriptModuleMinecraft { struct ScriptStructureCreateOptions; }
namespace ScriptModuleMinecraft { struct ScriptStructurePlaceOptions; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ArgumentOutOfBoundsError; }
namespace Scripting { struct EngineError; }
namespace Scripting { struct InvalidArgumentError; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptStructureManager {
public:
    // prevent constructor by default
    ScriptStructureManager& operator=(ScriptStructureManager const&);
    ScriptStructureManager();

public:
    // NOLINTBEGIN
    // symbol: ??0ScriptStructureManager@ScriptModuleMinecraft@@QEAA@$$QEAV01@@Z
    MCAPI ScriptStructureManager(class ScriptModuleMinecraft::ScriptStructureManager&&);

    // symbol: ??0ScriptStructureManager@ScriptModuleMinecraft@@QEAA@AEBV01@@Z
    MCAPI ScriptStructureManager(class ScriptModuleMinecraft::ScriptStructureManager const&);

    // symbol:
    // ??0ScriptStructureManager@ScriptModuleMinecraft@@QEAA@AEBVWeakLifetimeScope@Scripting@@V?$not_null@PEAVServerLevel@@@gsl@@@Z
    MCAPI ScriptStructureManager(class Scripting::WeakLifetimeScope const&, gsl::not_null<class ServerLevel*>);

    // symbol:
    // ?createEmptyStructure@ScriptStructureManager@ScriptModuleMinecraft@@QEAA?AV?$Result@V?$StrongTypedObjectHandle@VScriptStructureTemplate@ScriptModuleMinecraft@@@Scripting@@UInvalidArgumentError@2@UEngineError@2@@Scripting@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVVec3@@W4StructureRedstoneSaveMode@@@Z
    MCAPI class Scripting::Result<
        class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptStructureTemplate>,
        struct Scripting::InvalidArgumentError,
        struct Scripting::EngineError>
    createEmptyStructure(std::string const&, class Vec3 const&, ::StructureRedstoneSaveMode);

    // symbol:
    // ?createStructureFromWorld@ScriptStructureManager@ScriptModuleMinecraft@@QEAA?AV?$Result@V?$StrongTypedObjectHandle@VScriptStructureTemplate@ScriptModuleMinecraft@@@Scripting@@UInvalidArgumentError@2@@Scripting@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$StrongTypedObjectHandle@VScriptDimension@ScriptModuleMinecraft@@@4@AEBVScriptSimpleBlockVolume@2@AEBV?$optional@UScriptStructureCreateOptions@ScriptModuleMinecraft@@@6@@Z
    MCAPI class Scripting::Result<
        class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptStructureTemplate>,
        struct Scripting::InvalidArgumentError>
    createStructureFromWorld(std::string const&, class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptDimension> const&, class ScriptModuleMinecraft::ScriptSimpleBlockVolume const&, std::optional<struct ScriptModuleMinecraft::ScriptStructureCreateOptions> const&);

    // symbol:
    // ?deleteStructure@ScriptStructureManager@ScriptModuleMinecraft@@QEAA?AV?$Result@_NUInvalidArgumentError@Scripting@@@Scripting@@AEBV?$variant@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$StrongTypedObjectHandle@VScriptStructureTemplate@ScriptModuleMinecraft@@@Scripting@@@std@@@Z
    MCAPI class Scripting::Result<bool, struct Scripting::InvalidArgumentError>
    deleteStructure(std::variant<
                    std::string,
                    class Scripting::StrongTypedObjectHandle<
                        class ScriptModuleMinecraft::ScriptStructureTemplate>> const&);

    // symbol:
    // ?getIds@ScriptStructureManager@ScriptModuleMinecraft@@QEBA?AV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@XZ
    MCAPI std::vector<std::string> getIds() const;

    // symbol:
    // ?getOrCreateScriptStructure@ScriptStructureManager@ScriptModuleMinecraft@@QEAA?AV?$StrongTypedObjectHandle@VScriptStructureTemplate@ScriptModuleMinecraft@@@Scripting@@AEAVStructureTemplate@@@Z
    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptStructureTemplate>
    getOrCreateScriptStructure(class StructureTemplate&);

    // symbol:
    // ?getStructure@ScriptStructureManager@ScriptModuleMinecraft@@QEAA?AV?$optional@V?$StrongTypedObjectHandle@VScriptStructureTemplate@ScriptModuleMinecraft@@@Scripting@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@@Z
    MCAPI std::optional<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptStructureTemplate>>
          getStructure(std::string const&);

    // symbol: ??4ScriptStructureManager@ScriptModuleMinecraft@@QEAAAEAV01@$$QEAV01@@Z
    MCAPI class ScriptModuleMinecraft::ScriptStructureManager&
    operator=(class ScriptModuleMinecraft::ScriptStructureManager&&);

    // symbol:
    // ?placeStructure@ScriptStructureManager@ScriptModuleMinecraft@@QEAA?AV?$Result@XUScriptInvalidStructureError@ScriptModuleMinecraft@@UInvalidArgumentError@Scripting@@UArgumentOutOfBoundsError@4@@Scripting@@AEAV?$variant@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$StrongTypedObjectHandle@VScriptStructureTemplate@ScriptModuleMinecraft@@@Scripting@@@std@@AEBV?$StrongTypedObjectHandle@VScriptDimension@ScriptModuleMinecraft@@@4@AEBVVec3@@AEBV?$optional@UScriptStructurePlaceOptions@ScriptModuleMinecraft@@@6@@Z
    MCAPI class Scripting::
        Result<
            void,
            struct ScriptModuleMinecraft::ScriptInvalidStructureError,
            struct Scripting::InvalidArgumentError,
            struct Scripting::ArgumentOutOfBoundsError>
        placeStructure(std::variant<std::string, class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptStructureTemplate>>&, class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptDimension> const&, class Vec3 const&, std::optional<struct ScriptModuleMinecraft::ScriptStructurePlaceOptions> const&);

    // symbol:
    // ?validateIdentifier@ScriptStructureManager@ScriptModuleMinecraft@@QEBA?AV?$optional@UInvalidArgumentError@Scripting@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@@Z
    MCAPI std::optional<struct Scripting::InvalidArgumentError> validateIdentifier(std::string const&) const;

    // symbol:
    // ?bind@ScriptStructureManager@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@VScriptStructureManager@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptStructureManager> bind();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_getStructure@ScriptStructureManager@ScriptModuleMinecraft@@AEBAPEBVStructureTemplate@@AEBV?$variant@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$StrongTypedObjectHandle@VScriptStructureTemplate@ScriptModuleMinecraft@@@Scripting@@@std@@@Z
    MCAPI class StructureTemplate const*
    _getStructure(std::variant<
                  std::string,
                  class Scripting::StrongTypedObjectHandle<
                      class ScriptModuleMinecraft::ScriptStructureTemplate>> const&) const;

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
