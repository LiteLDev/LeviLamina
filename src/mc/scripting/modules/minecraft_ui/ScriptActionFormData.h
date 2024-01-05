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
namespace ScriptModuleMinecraftServerUI { class ScriptActionFormResponse; }
namespace ScriptModuleMinecraftServerUI { class ScriptFormRejectError; }
namespace Scripting { class DependencyLocator; }
namespace Scripting { class ScriptObjectFactory; }
namespace Scripting { struct ContextConfig; }
// clang-format on

namespace ScriptModuleMinecraftServerUI {

class ScriptActionFormData {
public:
    // ScriptActionFormData inner types declare
    // clang-format off
    struct ButtonData;
    // clang-format on

    // ScriptActionFormData inner types define
    struct ButtonData {
    public:
        // prevent constructor by default
        ButtonData(ButtonData const&);
        ButtonData();

    public:
        // NOLINTBEGIN
        // symbol: ??4ButtonData@ScriptActionFormData@ScriptModuleMinecraftServerUI@@QEAAAEAU012@AEBU012@@Z
        MCAPI struct ScriptModuleMinecraftServerUI::ScriptActionFormData::ButtonData&
        operator=(struct ScriptModuleMinecraftServerUI::ScriptActionFormData::ButtonData const&);

        // symbol: ??1ButtonData@ScriptActionFormData@ScriptModuleMinecraftServerUI@@QEAA@XZ
        MCAPI ~ButtonData();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    ScriptActionFormData& operator=(ScriptActionFormData const&);

public:
    // NOLINTBEGIN
    // symbol: ??0ScriptActionFormData@ScriptModuleMinecraftServerUI@@QEAA@XZ
    MCAPI ScriptActionFormData();

    // symbol: ??0ScriptActionFormData@ScriptModuleMinecraftServerUI@@QEAA@$$QEAV01@@Z
    MCAPI ScriptActionFormData(class ScriptModuleMinecraftServerUI::ScriptActionFormData&&);

    // symbol: ??0ScriptActionFormData@ScriptModuleMinecraftServerUI@@QEAA@AEBV01@@Z
    MCAPI ScriptActionFormData(class ScriptModuleMinecraftServerUI::ScriptActionFormData const&);

    // symbol:
    // ?body@ScriptActionFormData@ScriptModuleMinecraftServerUI@@QEAA?AV?$StrongTypedObjectHandle@VScriptActionFormData@ScriptModuleMinecraftServerUI@@@Scripting@@V?$variant@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UScriptRawMessageInterface@ScriptModuleMinecraft@@@std@@@Z
    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraftServerUI::ScriptActionFormData>
    body(std::variant<std::string, struct ScriptModuleMinecraft::ScriptRawMessageInterface> text);

    // symbol:
    // ?bodyV010@ScriptActionFormData@ScriptModuleMinecraftServerUI@@QEAA?AV?$StrongTypedObjectHandle@VScriptActionFormData@ScriptModuleMinecraftServerUI@@@Scripting@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraftServerUI::ScriptActionFormData>
    bodyV010(std::string const& text);

    // symbol:
    // ?button@ScriptActionFormData@ScriptModuleMinecraftServerUI@@QEAA?AV?$StrongTypedObjectHandle@VScriptActionFormData@ScriptModuleMinecraftServerUI@@@Scripting@@V?$variant@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UScriptRawMessageInterface@ScriptModuleMinecraft@@@std@@V?$optional@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@6@@Z
    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraftServerUI::ScriptActionFormData> button(
        std::variant<std::string, struct ScriptModuleMinecraft::ScriptRawMessageInterface> text,
        std::optional<std::string>                                                         iconPath
    );

    // symbol:
    // ?buttonV010@ScriptActionFormData@ScriptModuleMinecraftServerUI@@QEAA?AV?$StrongTypedObjectHandle@VScriptActionFormData@ScriptModuleMinecraftServerUI@@@Scripting@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$optional@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@6@@Z
    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraftServerUI::ScriptActionFormData>
    buttonV010(std::string const& text, std::optional<std::string> iconPath);

    // symbol: ??4ScriptActionFormData@ScriptModuleMinecraftServerUI@@QEAAAEAV01@$$QEAV01@@Z
    MCAPI class ScriptModuleMinecraftServerUI::ScriptActionFormData&
    operator=(class ScriptModuleMinecraftServerUI::ScriptActionFormData&&);

    // symbol:
    // ?show@ScriptActionFormData@ScriptModuleMinecraftServerUI@@QEAA?AV?$Result@V?$Promise@V?$StrongTypedObjectHandle@VScriptActionFormResponse@ScriptModuleMinecraftServerUI@@@Scripting@@VScriptFormRejectError@ScriptModuleMinecraftServerUI@@X@Scripting@@$$V@Scripting@@AEBUContextConfig@4@AEAVScriptObjectFactory@4@AEAVDependencyLocator@4@AEAVScriptPlayer@ScriptModuleMinecraft@@@Z
    MCAPI class Scripting::Result<class Scripting::Promise<
        class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraftServerUI::ScriptActionFormResponse>,
        class ScriptModuleMinecraftServerUI::ScriptFormRejectError,
        void>>
    show(struct Scripting::ContextConfig const&, class Scripting::ScriptObjectFactory& factory, class Scripting::DependencyLocator& locator, class ScriptModuleMinecraft::ScriptPlayer&);

    // symbol:
    // ?title@ScriptActionFormData@ScriptModuleMinecraftServerUI@@QEAA?AV?$StrongTypedObjectHandle@VScriptActionFormData@ScriptModuleMinecraftServerUI@@@Scripting@@V?$variant@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UScriptRawMessageInterface@ScriptModuleMinecraft@@@std@@@Z
    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraftServerUI::ScriptActionFormData>
    title(std::variant<std::string, struct ScriptModuleMinecraft::ScriptRawMessageInterface> title);

    // symbol:
    // ?titleV010@ScriptActionFormData@ScriptModuleMinecraftServerUI@@QEAA?AV?$StrongTypedObjectHandle@VScriptActionFormData@ScriptModuleMinecraftServerUI@@@Scripting@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraftServerUI::ScriptActionFormData>
    titleV010(std::string const& title);

    // symbol: ??1ScriptActionFormData@ScriptModuleMinecraftServerUI@@QEAA@XZ
    MCAPI ~ScriptActionFormData();

    // symbol:
    // ?bind@ScriptActionFormData@ScriptModuleMinecraftServerUI@@SA?AV?$ClassBindingBuilder@VScriptActionFormData@ScriptModuleMinecraftServerUI@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraftServerUI::ScriptActionFormData> bind();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_buildJson@ScriptActionFormData@ScriptModuleMinecraftServerUI@@AEBA?AV?$Result@VValue@Json@@$$V@Scripting@@AEAVPlayer@@W4CurrentCmdVersion@@@Z
    MCAPI class Scripting::Result<class Json::Value> _buildJson(class Player&, ::CurrentCmdVersion) const;

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraftServerUI
