#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/CurrentCmdVersion.h"
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/Promise.h"
#include "mc/external/scripting/Result.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
class Player;
namespace Json { class Value; }
namespace ScriptModuleMinecraft { class ScriptPlayer; }
namespace ScriptModuleMinecraft { struct ScriptRawMessageInterface; }
namespace ScriptModuleMinecraftServerUI { class ScriptFormRejectError; }
namespace ScriptModuleMinecraftServerUI { class ScriptModalFormResponse; }
namespace Scripting { class DependencyLocator; }
namespace Scripting { class ScriptObjectFactory; }
namespace Scripting { struct ContextConfig; }
// clang-format on

namespace ScriptModuleMinecraftServerUI {

class ScriptModalFormData {
public:
    // prevent constructor by default
    ScriptModalFormData& operator=(ScriptModalFormData const&);
    ScriptModalFormData(ScriptModalFormData const&);

public:
    // NOLINTBEGIN
    // symbol: ??0ScriptModalFormData@ScriptModuleMinecraftServerUI@@QEAA@XZ
    MCAPI ScriptModalFormData();

    // symbol: ??0ScriptModalFormData@ScriptModuleMinecraftServerUI@@QEAA@$$QEAV01@@Z
    MCAPI ScriptModalFormData(class ScriptModuleMinecraftServerUI::ScriptModalFormData&&);

    // symbol:
    // ?dropdown@ScriptModalFormData@ScriptModuleMinecraftServerUI@@QEAA?AV?$StrongTypedObjectHandle@VScriptModalFormData@ScriptModuleMinecraftServerUI@@@Scripting@@V?$variant@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UScriptRawMessageInterface@ScriptModuleMinecraft@@@std@@V?$vector@V?$variant@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UScriptRawMessageInterface@ScriptModuleMinecraft@@@std@@V?$allocator@V?$variant@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UScriptRawMessageInterface@ScriptModuleMinecraft@@@std@@@2@@6@V?$optional@H@6@@Z
    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraftServerUI::ScriptModalFormData>
        dropdown(std::variant<std::string, struct ScriptModuleMinecraft::ScriptRawMessageInterface>, std::vector<std::variant<std::string, struct ScriptModuleMinecraft::ScriptRawMessageInterface>>, std::optional<int>);

    // symbol:
    // ?dropdownV010@ScriptModalFormData@ScriptModuleMinecraftServerUI@@QEAA?AV?$StrongTypedObjectHandle@VScriptModalFormData@ScriptModuleMinecraftServerUI@@@Scripting@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@6@V?$optional@H@6@@Z
    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraftServerUI::ScriptModalFormData>
    dropdownV010(std::string const&, std::vector<std::string>, std::optional<int>);

    // symbol:
    // ?iconV0@ScriptModalFormData@ScriptModuleMinecraftServerUI@@QEAA?AV?$StrongTypedObjectHandle@VScriptModalFormData@ScriptModuleMinecraftServerUI@@@Scripting@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraftServerUI::ScriptModalFormData>
        iconV0(std::string);

    // symbol: ??4ScriptModalFormData@ScriptModuleMinecraftServerUI@@QEAAAEAV01@$$QEAV01@@Z
    MCAPI class ScriptModuleMinecraftServerUI::ScriptModalFormData&
    operator=(class ScriptModuleMinecraftServerUI::ScriptModalFormData&&);

    // symbol:
    // ?show@ScriptModalFormData@ScriptModuleMinecraftServerUI@@QEAA?AV?$Result@V?$Promise@V?$StrongTypedObjectHandle@VScriptModalFormResponse@ScriptModuleMinecraftServerUI@@@Scripting@@VScriptFormRejectError@ScriptModuleMinecraftServerUI@@X@Scripting@@$$V@Scripting@@AEBUContextConfig@4@AEAVScriptObjectFactory@4@AEAVDependencyLocator@4@AEAVScriptPlayer@ScriptModuleMinecraft@@@Z
    MCAPI class Scripting::Result<class Scripting::Promise<
        class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraftServerUI::ScriptModalFormResponse>,
        class ScriptModuleMinecraftServerUI::ScriptFormRejectError,
        void>>
    show(struct Scripting::ContextConfig const&, class Scripting::ScriptObjectFactory&, class Scripting::DependencyLocator&, class ScriptModuleMinecraft::ScriptPlayer&);

    // symbol:
    // ?slider@ScriptModalFormData@ScriptModuleMinecraftServerUI@@QEAA?AV?$StrongTypedObjectHandle@VScriptModalFormData@ScriptModuleMinecraftServerUI@@@Scripting@@V?$variant@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UScriptRawMessageInterface@ScriptModuleMinecraft@@@std@@MMMV?$optional@M@6@@Z
    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraftServerUI::ScriptModalFormData>
    slider(std::variant<std::string, struct ScriptModuleMinecraft::ScriptRawMessageInterface>, float, float, float, std::optional<float>);

    // symbol:
    // ?sliderV010@ScriptModalFormData@ScriptModuleMinecraftServerUI@@QEAA?AV?$StrongTypedObjectHandle@VScriptModalFormData@ScriptModuleMinecraftServerUI@@@Scripting@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@MMMV?$optional@M@6@@Z
    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraftServerUI::ScriptModalFormData>
    sliderV010(std::string const&, float, float, float, std::optional<float>);

    // symbol:
    // ?textField@ScriptModalFormData@ScriptModuleMinecraftServerUI@@QEAA?AV?$StrongTypedObjectHandle@VScriptModalFormData@ScriptModuleMinecraftServerUI@@@Scripting@@V?$variant@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UScriptRawMessageInterface@ScriptModuleMinecraft@@@std@@0V?$optional@V?$variant@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UScriptRawMessageInterface@ScriptModuleMinecraft@@@std@@@6@@Z
    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraftServerUI::ScriptModalFormData>
        textField(std::variant<std::string, struct ScriptModuleMinecraft::ScriptRawMessageInterface>, std::variant<std::string, struct ScriptModuleMinecraft::ScriptRawMessageInterface>, std::optional<std::variant<std::string, struct ScriptModuleMinecraft::ScriptRawMessageInterface>>);

    // symbol:
    // ?textFieldV010@ScriptModalFormData@ScriptModuleMinecraftServerUI@@QEAA?AV?$StrongTypedObjectHandle@VScriptModalFormData@ScriptModuleMinecraftServerUI@@@Scripting@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0V?$optional@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@6@@Z
    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraftServerUI::ScriptModalFormData>
    textFieldV010(std::string const&, std::string const&, std::optional<std::string>);

    // symbol:
    // ?title@ScriptModalFormData@ScriptModuleMinecraftServerUI@@QEAA?AV?$StrongTypedObjectHandle@VScriptModalFormData@ScriptModuleMinecraftServerUI@@@Scripting@@V?$variant@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UScriptRawMessageInterface@ScriptModuleMinecraft@@@std@@@Z
    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraftServerUI::ScriptModalFormData>
        title(std::variant<std::string, struct ScriptModuleMinecraft::ScriptRawMessageInterface>);

    // symbol:
    // ?titleV010@ScriptModalFormData@ScriptModuleMinecraftServerUI@@QEAA?AV?$StrongTypedObjectHandle@VScriptModalFormData@ScriptModuleMinecraftServerUI@@@Scripting@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraftServerUI::ScriptModalFormData>
    titleV010(std::string const&);

    // symbol:
    // ?toggle@ScriptModalFormData@ScriptModuleMinecraftServerUI@@QEAA?AV?$StrongTypedObjectHandle@VScriptModalFormData@ScriptModuleMinecraftServerUI@@@Scripting@@V?$variant@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UScriptRawMessageInterface@ScriptModuleMinecraft@@@std@@V?$optional@_N@6@@Z
    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraftServerUI::ScriptModalFormData>
        toggle(std::variant<std::string, struct ScriptModuleMinecraft::ScriptRawMessageInterface>, std::optional<bool>);

    // symbol:
    // ?toggleV010@ScriptModalFormData@ScriptModuleMinecraftServerUI@@QEAA?AV?$StrongTypedObjectHandle@VScriptModalFormData@ScriptModuleMinecraftServerUI@@@Scripting@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$optional@_N@6@@Z
    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraftServerUI::ScriptModalFormData>
    toggleV010(std::string const&, std::optional<bool>);

    // symbol: ??1ScriptModalFormData@ScriptModuleMinecraftServerUI@@QEAA@XZ
    MCAPI ~ScriptModalFormData();

    // symbol:
    // ?bind@ScriptModalFormData@ScriptModuleMinecraftServerUI@@SA?AV?$ClassBindingBuilder@VScriptModalFormData@ScriptModuleMinecraftServerUI@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraftServerUI::ScriptModalFormData> bind();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_buildJson@ScriptModalFormData@ScriptModuleMinecraftServerUI@@AEBA?AV?$Result@VValue@Json@@$$V@Scripting@@AEAVPlayer@@W4CurrentCmdVersion@@@Z
    MCAPI class Scripting::Result<class Json::Value> _buildJson(class Player&, ::CurrentCmdVersion) const;

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraftServerUI
