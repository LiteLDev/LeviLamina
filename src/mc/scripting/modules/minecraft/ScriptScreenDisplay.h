#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/HudElement.h"
#include "mc/enums/HudVisibility.h"
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/Result.h"

// auto generated forward declare list
// clang-format off
class Player;
namespace ScriptModuleMinecraft { struct ScriptRawMessageInterface; }
namespace ScriptModuleMinecraft { struct ScriptTitleDisplayOptions; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptScreenDisplay {
public:
    // prevent constructor by default
    ScriptScreenDisplay& operator=(ScriptScreenDisplay const&);
    ScriptScreenDisplay(ScriptScreenDisplay const&);
    ScriptScreenDisplay();

public:
    // NOLINTBEGIN
    // symbol:
    // ?getHiddenHudElements@ScriptScreenDisplay@ScriptModuleMinecraft@@QEAA?AV?$Result@V?$vector@W4HudElement@@V?$allocator@W4HudElement@@@std@@@std@@$$V@Scripting@@XZ
    MCAPI class Scripting::Result<std::vector<::HudElement>> getHiddenHudElements();

    // symbol:
    // ?hideAllExcept@ScriptScreenDisplay@ScriptModuleMinecraft@@QEAA?AV?$Result@X$$V@Scripting@@V?$optional@V?$vector@W4HudElement@@V?$allocator@W4HudElement@@@std@@@std@@@std@@@Z
    MCAPI class Scripting::Result<void> hideAllExcept(std::optional<std::vector<::HudElement>>);

    // symbol:
    // ?isForcedHidden@ScriptScreenDisplay@ScriptModuleMinecraft@@QEAA?AV?$Result@_N$$V@Scripting@@W4HudElement@@@Z
    MCAPI class Scripting::Result<bool> isForcedHidden(::HudElement);

    // symbol: ?resetHudElements@ScriptScreenDisplay@ScriptModuleMinecraft@@QEAA?AV?$Result@X$$V@Scripting@@XZ
    MCAPI class Scripting::Result<void> resetHudElements();

    // symbol:
    // ?setActionBar@ScriptScreenDisplay@ScriptModuleMinecraft@@QEBA?AV?$Result@X$$V@Scripting@@AEBV?$variant@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UScriptRawMessageInterface@ScriptModuleMinecraft@@V?$vector@V?$variant@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UScriptRawMessageInterface@ScriptModuleMinecraft@@@std@@V?$allocator@V?$variant@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UScriptRawMessageInterface@ScriptModuleMinecraft@@@std@@@2@@2@@std@@@Z
    MCAPI class Scripting::Result<void>
    setActionBar(std::variant<
                 std::string,
                 struct ScriptModuleMinecraft::ScriptRawMessageInterface,
                 std::vector<
                     std::variant<std::string, struct ScriptModuleMinecraft::ScriptRawMessageInterface>>> const&) const;

    // symbol:
    // ?setHudVisibility@ScriptScreenDisplay@ScriptModuleMinecraft@@QEAA?AV?$Result@X$$V@Scripting@@W4HudVisibility@@V?$optional@V?$vector@W4HudElement@@V?$allocator@W4HudElement@@@std@@@std@@@std@@@Z
    MCAPI class Scripting::Result<void> setHudVisibility(::HudVisibility, std::optional<std::vector<::HudElement>>);

    // symbol:
    // ?setTitle@ScriptScreenDisplay@ScriptModuleMinecraft@@QEBA?AV?$Result@X$$V@Scripting@@AEBV?$variant@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UScriptRawMessageInterface@ScriptModuleMinecraft@@V?$vector@V?$variant@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UScriptRawMessageInterface@ScriptModuleMinecraft@@@std@@V?$allocator@V?$variant@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UScriptRawMessageInterface@ScriptModuleMinecraft@@@std@@@2@@2@@std@@V?$optional@UScriptTitleDisplayOptions@ScriptModuleMinecraft@@@6@@Z
    MCAPI class Scripting::Result<void>
    setTitle(std::variant<std::string, struct ScriptModuleMinecraft::ScriptRawMessageInterface, std::vector<std::variant<std::string, struct ScriptModuleMinecraft::ScriptRawMessageInterface>>> const&, std::optional<struct ScriptModuleMinecraft::ScriptTitleDisplayOptions>)
        const;

    // symbol:
    // ?updateSubtitle@ScriptScreenDisplay@ScriptModuleMinecraft@@QEBA?AV?$Result@X$$V@Scripting@@AEBV?$variant@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UScriptRawMessageInterface@ScriptModuleMinecraft@@V?$vector@V?$variant@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UScriptRawMessageInterface@ScriptModuleMinecraft@@@std@@V?$allocator@V?$variant@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UScriptRawMessageInterface@ScriptModuleMinecraft@@@std@@@2@@2@@std@@@Z
    MCAPI class Scripting::Result<void>
    updateSubtitle(std::variant<
                   std::string,
                   struct ScriptModuleMinecraft::ScriptRawMessageInterface,
                   std::vector<
                       std::variant<std::string, struct ScriptModuleMinecraft::ScriptRawMessageInterface>>> const&)
        const;

    // symbol:
    // ?bind@ScriptScreenDisplay@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@UScriptScreenDisplay@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptScreenDisplay> bind();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_getJsonString@ScriptScreenDisplay@ScriptModuleMinecraft@@AEBA?AV?$Result@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@$$V@Scripting@@AEAVPlayer@@AEBV?$variant@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UScriptRawMessageInterface@ScriptModuleMinecraft@@V?$vector@V?$variant@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UScriptRawMessageInterface@ScriptModuleMinecraft@@@std@@V?$allocator@V?$variant@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UScriptRawMessageInterface@ScriptModuleMinecraft@@@std@@@2@@2@@std@@@Z
    MCAPI class Scripting::Result<std::string>
    _getJsonString(class Player&, std::variant<std::string, struct ScriptModuleMinecraft::ScriptRawMessageInterface, std::vector<std::variant<std::string, struct ScriptModuleMinecraft::ScriptRawMessageInterface>>> const&)
        const;

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
