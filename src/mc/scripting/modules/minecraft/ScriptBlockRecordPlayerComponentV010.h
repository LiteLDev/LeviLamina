#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/Result.h"
#include "mc/scripting/modules/minecraft/BaseScriptBlockComponent.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class BaseScriptBlockComponent; }
namespace ScriptModuleMinecraft { class ScriptItemType; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBlockRecordPlayerComponentV010 : public ::ScriptModuleMinecraft::BaseScriptBlockComponent {
public:
    // prevent constructor by default
    ScriptBlockRecordPlayerComponentV010& operator=(ScriptBlockRecordPlayerComponentV010 const&);
    ScriptBlockRecordPlayerComponentV010(ScriptBlockRecordPlayerComponentV010 const&);
    ScriptBlockRecordPlayerComponentV010();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ScriptBlockRecordPlayerComponentV010@ScriptModuleMinecraft@@UEAA@XZ
    virtual ~ScriptBlockRecordPlayerComponentV010() = default;

    // symbol:
    // ?bind@ScriptBlockRecordPlayerComponentV010@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@VScriptBlockRecordPlayerComponentV010@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptBlockRecordPlayerComponentV010>
    bind();

    // symbol: ?ComponentId@ScriptBlockRecordPlayerComponentV010@ScriptModuleMinecraft@@2PEBDEB
    MCAPI static char const* ComponentId;

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol:
    // ?clearRecord@ScriptBlockRecordPlayerComponentV010@ScriptModuleMinecraft@@IEAA?AV?$Result@X$$V@Scripting@@XZ
    MCAPI class Scripting::Result<void> clearRecord();

    // symbol:
    // ?isPlaying@ScriptBlockRecordPlayerComponentV010@ScriptModuleMinecraft@@IEAA?AV?$Result@_N$$V@Scripting@@XZ
    MCAPI class Scripting::Result<bool> isPlaying();

    // symbol:
    // ?setRecord@ScriptBlockRecordPlayerComponentV010@ScriptModuleMinecraft@@IEAA?AV?$Result@X$$V@Scripting@@AEBVScriptItemType@2@@Z
    MCAPI class Scripting::Result<void> setRecord(class ScriptModuleMinecraft::ScriptItemType const& itemType);

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
