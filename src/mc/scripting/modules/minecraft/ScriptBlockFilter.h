#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/InterfaceBindingBuilder.h"
#include "mc/external/scripting/Result.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
class Block;
namespace ScriptModuleMinecraft { class ScriptBlockPermutation; }
namespace Scripting { struct Error; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBlockFilter {
public:
    // prevent constructor by default
    ScriptBlockFilter();

public:
    // NOLINTBEGIN
    // symbol: ??0ScriptBlockFilter@ScriptModuleMinecraft@@QEAA@$$QEAV01@@Z
    MCAPI ScriptBlockFilter(class ScriptModuleMinecraft::ScriptBlockFilter&&);

    // symbol: ??0ScriptBlockFilter@ScriptModuleMinecraft@@QEAA@AEBV01@@Z
    MCAPI ScriptBlockFilter(class ScriptModuleMinecraft::ScriptBlockFilter const&);

    // symbol:
    // ?getExcludePermutations@ScriptBlockFilter@ScriptModuleMinecraft@@QEBA?AV?$Result@V?$optional@V?$vector@V?$StrongTypedObjectHandle@VScriptBlockPermutation@ScriptModuleMinecraft@@@Scripting@@V?$allocator@V?$StrongTypedObjectHandle@VScriptBlockPermutation@ScriptModuleMinecraft@@@Scripting@@@std@@@std@@@std@@$$V@Scripting@@XZ
    MCAPI class Scripting::Result<std::optional<
        std::vector<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlockPermutation>>>>
    getExcludePermutations() const;

    // symbol:
    // ?getExcludeTags@ScriptBlockFilter@ScriptModuleMinecraft@@QEBA?AV?$Result@V?$optional@V?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@std@@$$V@Scripting@@XZ
    MCAPI class Scripting::Result<std::optional<std::vector<std::string>>> getExcludeTags() const;

    // symbol:
    // ?getExcludeTypes@ScriptBlockFilter@ScriptModuleMinecraft@@QEBA?AV?$Result@V?$optional@V?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@std@@$$V@Scripting@@XZ
    MCAPI class Scripting::Result<std::optional<std::vector<std::string>>> getExcludeTypes() const;

    // symbol:
    // ?getIncludePermutations@ScriptBlockFilter@ScriptModuleMinecraft@@QEBA?AV?$Result@V?$optional@V?$vector@V?$StrongTypedObjectHandle@VScriptBlockPermutation@ScriptModuleMinecraft@@@Scripting@@V?$allocator@V?$StrongTypedObjectHandle@VScriptBlockPermutation@ScriptModuleMinecraft@@@Scripting@@@std@@@std@@@std@@$$V@Scripting@@XZ
    MCAPI class Scripting::Result<std::optional<
        std::vector<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlockPermutation>>>>
    getIncludePermutations() const;

    // symbol:
    // ?getIncludeTags@ScriptBlockFilter@ScriptModuleMinecraft@@QEBA?AV?$Result@V?$optional@V?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@std@@$$V@Scripting@@XZ
    MCAPI class Scripting::Result<std::optional<std::vector<std::string>>> getIncludeTags() const;

    // symbol:
    // ?getIncludeTypes@ScriptBlockFilter@ScriptModuleMinecraft@@QEBA?AV?$Result@V?$optional@V?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@std@@$$V@Scripting@@XZ
    MCAPI class Scripting::Result<std::optional<std::vector<std::string>>> getIncludeTypes() const;

    // symbol: ?isValid@ScriptBlockFilter@ScriptModuleMinecraft@@QEBA_NAEAUError@Scripting@@@Z
    MCAPI bool isValid(struct Scripting::Error&) const;

    // symbol: ??RScriptBlockFilter@ScriptModuleMinecraft@@QEBA_NAEBVBlock@@@Z
    MCAPI bool operator()(class Block const&) const;

    // symbol: ??4ScriptBlockFilter@ScriptModuleMinecraft@@QEAAAEAV01@$$QEAV01@@Z
    MCAPI class ScriptModuleMinecraft::ScriptBlockFilter& operator=(class ScriptModuleMinecraft::ScriptBlockFilter&&);

    // symbol: ??4ScriptBlockFilter@ScriptModuleMinecraft@@QEAAAEAV01@AEBV01@@Z
    MCAPI class ScriptModuleMinecraft::ScriptBlockFilter&
    operator=(class ScriptModuleMinecraft::ScriptBlockFilter const&);

    // symbol:
    // ?setExcludePermutations@ScriptBlockFilter@ScriptModuleMinecraft@@QEAA?AV?$Result@X$$V@Scripting@@AEBV?$optional@V?$vector@V?$StrongTypedObjectHandle@VScriptBlockPermutation@ScriptModuleMinecraft@@@Scripting@@V?$allocator@V?$StrongTypedObjectHandle@VScriptBlockPermutation@ScriptModuleMinecraft@@@Scripting@@@std@@@std@@@std@@@Z
    MCAPI class Scripting::Result<void>
    setExcludePermutations(std::optional<std::vector<class Scripting::StrongTypedObjectHandle<
                               class ScriptModuleMinecraft::ScriptBlockPermutation>>> const&);

    // symbol:
    // ?setExcludeTags@ScriptBlockFilter@ScriptModuleMinecraft@@QEAA?AV?$Result@X$$V@Scripting@@V?$optional@V?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@std@@@Z
    MCAPI class Scripting::Result<void> setExcludeTags(std::optional<std::vector<std::string>>);

    // symbol:
    // ?setExcludeTypes@ScriptBlockFilter@ScriptModuleMinecraft@@QEAA?AV?$Result@X$$V@Scripting@@V?$optional@V?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@std@@@Z
    MCAPI class Scripting::Result<void> setExcludeTypes(std::optional<std::vector<std::string>>);

    // symbol:
    // ?setIncludePermutations@ScriptBlockFilter@ScriptModuleMinecraft@@QEAA?AV?$Result@X$$V@Scripting@@AEBV?$optional@V?$vector@V?$StrongTypedObjectHandle@VScriptBlockPermutation@ScriptModuleMinecraft@@@Scripting@@V?$allocator@V?$StrongTypedObjectHandle@VScriptBlockPermutation@ScriptModuleMinecraft@@@Scripting@@@std@@@std@@@std@@@Z
    MCAPI class Scripting::Result<void>
    setIncludePermutations(std::optional<std::vector<class Scripting::StrongTypedObjectHandle<
                               class ScriptModuleMinecraft::ScriptBlockPermutation>>> const&);

    // symbol:
    // ?setIncludeTags@ScriptBlockFilter@ScriptModuleMinecraft@@QEAA?AV?$Result@X$$V@Scripting@@V?$optional@V?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@std@@@Z
    MCAPI class Scripting::Result<void> setIncludeTags(std::optional<std::vector<std::string>>);

    // symbol:
    // ?setIncludeTypes@ScriptBlockFilter@ScriptModuleMinecraft@@QEAA?AV?$Result@X$$V@Scripting@@V?$optional@V?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@std@@@Z
    MCAPI class Scripting::Result<void> setIncludeTypes(std::optional<std::vector<std::string>>);

    // symbol: ??1ScriptBlockFilter@ScriptModuleMinecraft@@QEAA@XZ
    MCAPI ~ScriptBlockFilter();

    // symbol:
    // ?bind@ScriptBlockFilter@ScriptModuleMinecraft@@SA?AV?$InterfaceBindingBuilder@VScriptBlockFilter@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::InterfaceBindingBuilder<class ScriptModuleMinecraft::ScriptBlockFilter> bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
