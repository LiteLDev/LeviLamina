#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/Result.h"
#include "mc/scripting/modules/minecraft/ScriptActorComponent.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptActorComponent; }
namespace ScriptModuleMinecraft { class ScriptComponentTypeEnumBuilder; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptTypeFamilyComponent : public ::ScriptModuleMinecraft::ScriptActorComponent {
public:
    // prevent constructor by default
    ScriptTypeFamilyComponent& operator=(ScriptTypeFamilyComponent const&);
    ScriptTypeFamilyComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ScriptTypeFamilyComponent@ScriptModuleMinecraft@@UEAA@XZ
    virtual ~ScriptTypeFamilyComponent() = default;

    // vIndex: 1, symbol: ?_isValid@ScriptTypeFamilyComponent@ScriptModuleMinecraft@@MEBA_NXZ
    virtual bool _isValid() const;

    // symbol: ??0ScriptTypeFamilyComponent@ScriptModuleMinecraft@@QEAA@AEBV01@@Z
    MCAPI ScriptTypeFamilyComponent(class ScriptModuleMinecraft::ScriptTypeFamilyComponent const&);

    // symbol:
    // ?getTypeFamilies@ScriptTypeFamilyComponent@ScriptModuleMinecraft@@QEBA?AV?$Result@V?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@$$V@Scripting@@XZ
    MCAPI class Scripting::Result<std::vector<std::string>> getTypeFamilies() const;

    // symbol:
    // ?hasTypeFamily@ScriptTypeFamilyComponent@ScriptModuleMinecraft@@QEBA?AV?$Result@_N$$V@Scripting@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI class Scripting::Result<bool> hasTypeFamily(std::string const&) const;

    // symbol:
    // ?bind@ScriptTypeFamilyComponent@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@VScriptTypeFamilyComponent@ScriptModuleMinecraft@@@Scripting@@AEAVScriptComponentTypeEnumBuilder@2@@Z
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptTypeFamilyComponent>
    bind(class ScriptModuleMinecraft::ScriptComponentTypeEnumBuilder&);

    // symbol: ?ComponentId@ScriptTypeFamilyComponent@ScriptModuleMinecraft@@2PEBDEB
    MCAPI static char const* ComponentId;

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
