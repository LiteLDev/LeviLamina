#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/SignTextSide.h"
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/Result.h"
#include "mc/scripting/modules/minecraft/BaseScriptBlockComponent.h"
#include "mc/world/item/components/ItemColor.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class BaseScriptBlockComponent; }
namespace ScriptModuleMinecraft { struct ScriptRawMessageInterface; }
namespace ScriptModuleMinecraft { struct ScriptRawTextInterface; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBlockSignComponent : public ::ScriptModuleMinecraft::BaseScriptBlockComponent {
public:
    // prevent constructor by default
    ScriptBlockSignComponent& operator=(ScriptBlockSignComponent const&) = delete;
    ScriptBlockSignComponent(ScriptBlockSignComponent const&)            = delete;
    ScriptBlockSignComponent()                                           = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // symbol: ??1ScriptBlockSignComponent@ScriptModuleMinecraft@@UEAA@XZ
    MCVAPI ~ScriptBlockSignComponent();

    // symbol:
    // ?getRawText@ScriptBlockSignComponent@ScriptModuleMinecraft@@QEBA?AV?$Result@V?$optional@UScriptRawTextInterface@ScriptModuleMinecraft@@@std@@@Scripting@@W4SignTextSide@@@Z
    MCAPI class Scripting::Result<std::optional<struct ScriptModuleMinecraft::ScriptRawTextInterface>>
        getRawText(::SignTextSide) const;

    // symbol:
    // ?getText@ScriptBlockSignComponent@ScriptModuleMinecraft@@QEBA?AV?$Result@V?$optional@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@Scripting@@W4SignTextSide@@@Z
    MCAPI class Scripting::Result<std::optional<std::string>> getText(::SignTextSide) const;

    // symbol:
    // ?getTextDyeColor@ScriptBlockSignComponent@ScriptModuleMinecraft@@QEBA?AV?$Result@V?$optional@W4ItemColor@@@std@@@Scripting@@W4SignTextSide@@@Z
    MCAPI class Scripting::Result<std::optional<::ItemColor>> getTextDyeColor(::SignTextSide) const;

    // symbol: ?getWaxed@ScriptBlockSignComponent@ScriptModuleMinecraft@@QEBA?AV?$Result@_N@Scripting@@XZ
    MCAPI class Scripting::Result<bool> getWaxed() const;

    // symbol:
    // ?setText@ScriptBlockSignComponent@ScriptModuleMinecraft@@QEAA?AV?$Result@X@Scripting@@AEBV?$variant@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UScriptRawMessageInterface@ScriptModuleMinecraft@@UScriptRawTextInterface@4@@std@@W4SignTextSide@@@Z
    MCAPI class Scripting::Result<void> setText(
        std::variant<
            std::string,
            struct ScriptModuleMinecraft::ScriptRawMessageInterface,
            struct ScriptModuleMinecraft::ScriptRawTextInterface> const&,
        ::SignTextSide
    );

    // symbol:
    // ?setTextDyeColor@ScriptBlockSignComponent@ScriptModuleMinecraft@@QEAA?AV?$Result@X@Scripting@@V?$optional@W4ItemColor@@@std@@W4SignTextSide@@@Z
    MCAPI class Scripting::Result<void> setTextDyeColor(std::optional<::ItemColor>, ::SignTextSide);

    // symbol: ?setWaxed@ScriptBlockSignComponent@ScriptModuleMinecraft@@QEAA?AV?$Result@X@Scripting@@XZ
    MCAPI class Scripting::Result<void> setWaxed();

    // symbol:
    // ?bind@ScriptBlockSignComponent@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@VScriptBlockSignComponent@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptBlockSignComponent> bind();

    // symbol: ?ComponentId@ScriptBlockSignComponent@ScriptModuleMinecraft@@2PEBDEB
    MCAPI static char const* ComponentId;

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
