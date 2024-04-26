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
namespace Scripting { struct ArgumentOutOfBoundsError; }
namespace Scripting { struct Error; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptNpcComponent : public ::ScriptModuleMinecraft::ScriptActorComponent {
public:
    // prevent constructor by default
    ScriptNpcComponent& operator=(ScriptNpcComponent const&);
    ScriptNpcComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ScriptNpcComponent@ScriptModuleMinecraft@@UEAA@XZ
    virtual ~ScriptNpcComponent() = default;

    // vIndex: 1, symbol: ?_isValid@ScriptNpcComponent@ScriptModuleMinecraft@@MEBA_NXZ
    virtual bool _isValid() const;

    // symbol: ??0ScriptNpcComponent@ScriptModuleMinecraft@@QEAA@AEBV01@@Z
    MCAPI ScriptNpcComponent(class ScriptModuleMinecraft::ScriptNpcComponent const&);

    // symbol:
    // ?getDefaultScene@ScriptNpcComponent@ScriptModuleMinecraft@@QEBA?AV?$Result@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@$$V@Scripting@@XZ
    MCAPI class Scripting::Result<std::string> getDefaultScene() const;

    // symbol:
    // ?getName@ScriptNpcComponent@ScriptModuleMinecraft@@QEBA?AV?$Result@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@$$V@Scripting@@XZ
    MCAPI class Scripting::Result<std::string> getName() const;

    // symbol: ?getSkinIndex@ScriptNpcComponent@ScriptModuleMinecraft@@QEBA?AV?$Result@H$$V@Scripting@@XZ
    MCAPI class Scripting::Result<int> getSkinIndex() const;

    // symbol:
    // ?setDefaultScene@ScriptNpcComponent@ScriptModuleMinecraft@@QEAA?AV?$Result@X$$V@Scripting@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI class Scripting::Result<void> setDefaultScene(std::string);

    // symbol:
    // ?setName@ScriptNpcComponent@ScriptModuleMinecraft@@QEAA?AV?$Result@X$$V@Scripting@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI class Scripting::Result<void> setName(std::string);

    // symbol:
    // ?setSkinIndex@ScriptNpcComponent@ScriptModuleMinecraft@@QEAA?AV?$Result@XUError@Scripting@@UArgumentOutOfBoundsError@2@@Scripting@@H@Z
    MCAPI class Scripting::Result<void, struct Scripting::Error, struct Scripting::ArgumentOutOfBoundsError>
    setSkinIndex(int);

    // symbol:
    // ?bind@ScriptNpcComponent@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@VScriptNpcComponent@ScriptModuleMinecraft@@@Scripting@@AEAVScriptComponentTypeEnumBuilder@2@@Z
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptNpcComponent>
    bind(class ScriptModuleMinecraft::ScriptComponentTypeEnumBuilder&);

    // symbol: ?ComponentId@ScriptNpcComponent@ScriptModuleMinecraft@@2PEBDEB
    MCAPI static char const* ComponentId;

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
