#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/Result.h"
#include "mc/scripting/modules/minecraft/BaseScriptBlockComponent.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class BaseScriptBlockComponent; }
namespace ScriptModuleMinecraft { class ScriptComponentTypeEnumBuilder; }
namespace ScriptModuleMinecraft { class ScriptItemType; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBlockRecordPlayerComponent : public ::ScriptModuleMinecraft::BaseScriptBlockComponent {
public:
    // prevent constructor by default
    ScriptBlockRecordPlayerComponent& operator=(ScriptBlockRecordPlayerComponent const&);
    ScriptBlockRecordPlayerComponent(ScriptBlockRecordPlayerComponent const&);
    ScriptBlockRecordPlayerComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ScriptBlockRecordPlayerComponent@ScriptModuleMinecraft@@UEAA@XZ
    virtual ~ScriptBlockRecordPlayerComponent() = default;

    // symbol:
    // ?bind@ScriptBlockRecordPlayerComponent@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@VScriptBlockRecordPlayerComponent@ScriptModuleMinecraft@@@Scripting@@AEAVScriptComponentTypeEnumBuilder@2@@Z
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptBlockRecordPlayerComponent>
    bind(class ScriptModuleMinecraft::ScriptComponentTypeEnumBuilder&);

    // symbol: ?ComponentId@ScriptBlockRecordPlayerComponent@ScriptModuleMinecraft@@2PEBDEB
    MCAPI static char const* ComponentId;

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?clearRecord@ScriptBlockRecordPlayerComponent@ScriptModuleMinecraft@@IEAA?AV?$Result@X$$V@Scripting@@XZ
    MCAPI class Scripting::Result<void> clearRecord();

    // symbol: ?isPlaying@ScriptBlockRecordPlayerComponent@ScriptModuleMinecraft@@IEAA?AV?$Result@_N$$V@Scripting@@XZ
    MCAPI class Scripting::Result<bool> isPlaying();

    // symbol:
    // ?setRecord@ScriptBlockRecordPlayerComponent@ScriptModuleMinecraft@@IEAA?AV?$Result@X$$V@Scripting@@AEBV?$variant@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VScriptItemType@ScriptModuleMinecraft@@@std@@@Z
    MCAPI class Scripting::Result<void>
    setRecord(std::variant<std::string, class ScriptModuleMinecraft::ScriptItemType> const&);

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
