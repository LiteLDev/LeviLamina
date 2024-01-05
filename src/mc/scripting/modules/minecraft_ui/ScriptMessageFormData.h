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
namespace ScriptModuleMinecraftServerUI { class ScriptMessageFormResponse; }
namespace Scripting { class DependencyLocator; }
namespace Scripting { class ScriptObjectFactory; }
namespace Scripting { struct ContextConfig; }
// clang-format on

namespace ScriptModuleMinecraftServerUI {

class ScriptMessageFormData {
public:
    // prevent constructor by default
    ScriptMessageFormData& operator=(ScriptMessageFormData const&);

public:
    // NOLINTBEGIN
    // symbol: ??0ScriptMessageFormData@ScriptModuleMinecraftServerUI@@QEAA@XZ
    MCAPI ScriptMessageFormData();

    // symbol: ??0ScriptMessageFormData@ScriptModuleMinecraftServerUI@@QEAA@$$QEAV01@@Z
    MCAPI ScriptMessageFormData(class ScriptModuleMinecraftServerUI::ScriptMessageFormData&&);

    // symbol: ??0ScriptMessageFormData@ScriptModuleMinecraftServerUI@@QEAA@AEBV01@@Z
    MCAPI ScriptMessageFormData(class ScriptModuleMinecraftServerUI::ScriptMessageFormData const&);

    // symbol:
    // ?body@ScriptMessageFormData@ScriptModuleMinecraftServerUI@@QEAA?AV?$StrongTypedObjectHandle@VScriptMessageFormData@ScriptModuleMinecraftServerUI@@@Scripting@@V?$variant@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UScriptRawMessageInterface@ScriptModuleMinecraft@@@std@@@Z
    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraftServerUI::ScriptMessageFormData>
    body(std::variant<std::string, struct ScriptModuleMinecraft::ScriptRawMessageInterface> text);

    // symbol:
    // ?bodyV010@ScriptMessageFormData@ScriptModuleMinecraftServerUI@@QEAA?AV?$StrongTypedObjectHandle@VScriptMessageFormData@ScriptModuleMinecraftServerUI@@@Scripting@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraftServerUI::ScriptMessageFormData>
    bodyV010(std::string const& text);

    // symbol:
    // ?button1@ScriptMessageFormData@ScriptModuleMinecraftServerUI@@QEAA?AV?$StrongTypedObjectHandle@VScriptMessageFormData@ScriptModuleMinecraftServerUI@@@Scripting@@V?$variant@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UScriptRawMessageInterface@ScriptModuleMinecraft@@@std@@@Z
    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraftServerUI::ScriptMessageFormData>
    button1(std::variant<std::string, struct ScriptModuleMinecraft::ScriptRawMessageInterface> text);

    // symbol:
    // ?button1V010@ScriptMessageFormData@ScriptModuleMinecraftServerUI@@QEAA?AV?$StrongTypedObjectHandle@VScriptMessageFormData@ScriptModuleMinecraftServerUI@@@Scripting@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraftServerUI::ScriptMessageFormData>
    button1V010(std::string const& text);

    // symbol:
    // ?button2@ScriptMessageFormData@ScriptModuleMinecraftServerUI@@QEAA?AV?$StrongTypedObjectHandle@VScriptMessageFormData@ScriptModuleMinecraftServerUI@@@Scripting@@V?$variant@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UScriptRawMessageInterface@ScriptModuleMinecraft@@@std@@@Z
    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraftServerUI::ScriptMessageFormData>
    button2(std::variant<std::string, struct ScriptModuleMinecraft::ScriptRawMessageInterface> text);

    // symbol:
    // ?button2V010@ScriptMessageFormData@ScriptModuleMinecraftServerUI@@QEAA?AV?$StrongTypedObjectHandle@VScriptMessageFormData@ScriptModuleMinecraftServerUI@@@Scripting@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraftServerUI::ScriptMessageFormData>
    button2V010(std::string const& text);

    // symbol: ??4ScriptMessageFormData@ScriptModuleMinecraftServerUI@@QEAAAEAV01@$$QEAV01@@Z
    MCAPI class ScriptModuleMinecraftServerUI::ScriptMessageFormData&
    operator=(class ScriptModuleMinecraftServerUI::ScriptMessageFormData&&);

    // symbol:
    // ?show@ScriptMessageFormData@ScriptModuleMinecraftServerUI@@QEAA?AV?$Result@V?$Promise@V?$StrongTypedObjectHandle@VScriptMessageFormResponse@ScriptModuleMinecraftServerUI@@@Scripting@@VScriptFormRejectError@ScriptModuleMinecraftServerUI@@X@Scripting@@$$V@Scripting@@AEBUContextConfig@4@AEAVScriptObjectFactory@4@AEAVDependencyLocator@4@AEAVScriptPlayer@ScriptModuleMinecraft@@@Z
    MCAPI class Scripting::Result<class Scripting::Promise<
        class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraftServerUI::ScriptMessageFormResponse>,
        class ScriptModuleMinecraftServerUI::ScriptFormRejectError,
        void>>
    show(struct Scripting::ContextConfig const&, class Scripting::ScriptObjectFactory& factory, class Scripting::DependencyLocator& locator, class ScriptModuleMinecraft::ScriptPlayer&);

    // symbol:
    // ?title@ScriptMessageFormData@ScriptModuleMinecraftServerUI@@QEAA?AV?$StrongTypedObjectHandle@VScriptMessageFormData@ScriptModuleMinecraftServerUI@@@Scripting@@V?$variant@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UScriptRawMessageInterface@ScriptModuleMinecraft@@@std@@@Z
    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraftServerUI::ScriptMessageFormData>
    title(std::variant<std::string, struct ScriptModuleMinecraft::ScriptRawMessageInterface> title);

    // symbol:
    // ?titleV010@ScriptMessageFormData@ScriptModuleMinecraftServerUI@@QEAA?AV?$StrongTypedObjectHandle@VScriptMessageFormData@ScriptModuleMinecraftServerUI@@@Scripting@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraftServerUI::ScriptMessageFormData>
    titleV010(std::string const& title);

    // symbol: ??1ScriptMessageFormData@ScriptModuleMinecraftServerUI@@QEAA@XZ
    MCAPI ~ScriptMessageFormData();

    // symbol:
    // ?bind@ScriptMessageFormData@ScriptModuleMinecraftServerUI@@SA?AV?$ClassBindingBuilder@VScriptMessageFormData@ScriptModuleMinecraftServerUI@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraftServerUI::ScriptMessageFormData>
    bind();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_buildJson@ScriptMessageFormData@ScriptModuleMinecraftServerUI@@AEBA?AV?$Result@VValue@Json@@$$V@Scripting@@AEAVPlayer@@W4CurrentCmdVersion@@@Z
    MCAPI class Scripting::Result<class Json::Value> _buildJson(class Player&, ::CurrentCmdVersion) const;

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraftServerUI
