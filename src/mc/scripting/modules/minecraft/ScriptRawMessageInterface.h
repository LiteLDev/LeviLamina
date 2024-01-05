#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/CurrentCmdVersion.h"
#include "mc/external/scripting/InterfaceBindingBuilder.h"
#include "mc/external/scripting/Result.h"

// auto generated forward declare list
// clang-format off
class Actor;
namespace Json { class Value; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptRawMessageInterface {
public:
    // prevent constructor by default
    ScriptRawMessageInterface();

public:
    // NOLINTBEGIN
    // symbol: ??0ScriptRawMessageInterface@ScriptModuleMinecraft@@QEAA@AEBU01@@Z
    MCAPI ScriptRawMessageInterface(struct ScriptModuleMinecraft::ScriptRawMessageInterface const& other);

    // symbol: ?buildJsonObject@ScriptRawMessageInterface@ScriptModuleMinecraft@@QEBAXAEAVValue@Json@@@Z
    MCAPI void buildJsonObject(class Json::Value& val) const;

    // symbol: ??4ScriptRawMessageInterface@ScriptModuleMinecraft@@QEAAAEAU01@$$QEAU01@@Z
    MCAPI struct ScriptModuleMinecraft::ScriptRawMessageInterface&
    operator=(struct ScriptModuleMinecraft::ScriptRawMessageInterface&& other);

    // symbol: ??4ScriptRawMessageInterface@ScriptModuleMinecraft@@QEAAAEAU01@AEBU01@@Z
    MCAPI struct ScriptModuleMinecraft::ScriptRawMessageInterface&
    operator=(struct ScriptModuleMinecraft::ScriptRawMessageInterface const& other);

    // symbol: ??8ScriptRawMessageInterface@ScriptModuleMinecraft@@QEBA_NAEBU01@@Z
    MCAPI bool operator==(struct ScriptModuleMinecraft::ScriptRawMessageInterface const& other) const;

    // symbol:
    // ?resolveAsJson@ScriptRawMessageInterface@ScriptModuleMinecraft@@QEBA?AV?$Result@VValue@Json@@$$V@Scripting@@AEAVActor@@W4CurrentCmdVersion@@@Z
    MCAPI class Scripting::Result<class Json::Value> resolveAsJson(class Actor&, ::CurrentCmdVersion) const;

    // symbol:
    // ?resolveAsJsonString@ScriptRawMessageInterface@ScriptModuleMinecraft@@QEBA?AV?$Result@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@$$V@Scripting@@AEAVActor@@W4CurrentCmdVersion@@@Z
    MCAPI class Scripting::Result<std::string> resolveAsJsonString(class Actor&, ::CurrentCmdVersion) const;

    // symbol: ?toJson@ScriptRawMessageInterface@ScriptModuleMinecraft@@QEBA?AVValue@Json@@XZ
    MCAPI class Json::Value toJson() const;

    // symbol: ??1ScriptRawMessageInterface@ScriptModuleMinecraft@@QEAA@XZ
    MCAPI ~ScriptRawMessageInterface();

    // symbol:
    // ?bind@ScriptRawMessageInterface@ScriptModuleMinecraft@@SA?AV?$InterfaceBindingBuilder@UScriptRawMessageInterface@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::InterfaceBindingBuilder<struct ScriptModuleMinecraft::ScriptRawMessageInterface>
    bind();

    // symbol: ?fromJSON@ScriptRawMessageInterface@ScriptModuleMinecraft@@SA?AU12@AEBVValue@Json@@@Z
    MCAPI static struct ScriptModuleMinecraft::ScriptRawMessageInterface fromJSON(class Json::Value const& json);

    // symbol:
    // ?fromString@ScriptRawMessageInterface@ScriptModuleMinecraft@@SA?AU12@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI static struct ScriptModuleMinecraft::ScriptRawMessageInterface fromString(std::string const& str);

    // symbol:
    // ?rawTextStringsToRawText@ScriptRawMessageInterface@ScriptModuleMinecraft@@SA?AV?$vector@UScriptRawMessageInterface@ScriptModuleMinecraft@@V?$allocator@UScriptRawMessageInterface@ScriptModuleMinecraft@@@std@@@std@@AEBV?$vector@V?$variant@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UScriptRawMessageInterface@ScriptModuleMinecraft@@@std@@V?$allocator@V?$variant@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UScriptRawMessageInterface@ScriptModuleMinecraft@@@std@@@2@@4@@Z
    MCAPI static std::vector<struct ScriptModuleMinecraft::ScriptRawMessageInterface>
    rawTextStringsToRawText(std::vector<
                            std::variant<std::string, struct ScriptModuleMinecraft::ScriptRawMessageInterface>> const&);

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
