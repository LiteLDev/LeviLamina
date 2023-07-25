#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/Promise.h"
#include "mc/external/scripting/Result.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace ScriptModuleMinecraft { class ScriptPlayer; }
namespace ScriptModuleMinecraft { struct ScriptRawMessageInterface; }
namespace ScriptModuleMinecraftServerUI { class ScriptFormRejectError; }
namespace ScriptModuleMinecraftServerUI { class ScriptMessageFormResponse; }
namespace Scripting { class DependencyLocator; }
namespace Scripting { class ScriptObjectFactory; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraftServerUI {

class ScriptMessageFormData {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMODULEMINECRAFTSERVERUI_SCRIPTMESSAGEFORMDATA
public:
    ScriptMessageFormData& operator=(ScriptMessageFormData const&) = delete;
#endif

public:
    /**
     * @symbol ??0ScriptMessageFormData\@ScriptModuleMinecraftServerUI\@\@QEAA\@AEBV01\@\@Z
     */
    MCAPI ScriptMessageFormData(class ScriptModuleMinecraftServerUI::ScriptMessageFormData const&);
    /**
     * @symbol ??0ScriptMessageFormData\@ScriptModuleMinecraftServerUI\@\@QEAA\@XZ
     */
    MCAPI ScriptMessageFormData();
    /**
     * @symbol
     * ?body\@ScriptMessageFormData\@ScriptModuleMinecraftServerUI\@\@QEAA?AV?$StrongTypedObjectHandle\@VScriptMessageFormData\@ScriptModuleMinecraftServerUI\@\@\@Scripting\@\@V?$variant\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@UScriptRawMessageInterface\@ScriptModuleMinecraft\@\@\@std\@\@\@Z
     */
    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraftServerUI::ScriptMessageFormData>
        body(class std::variant<std::string, struct ScriptModuleMinecraft::ScriptRawMessageInterface>);
    /**
     * @symbol
     * ?bodyV010\@ScriptMessageFormData\@ScriptModuleMinecraftServerUI\@\@QEAA?AV?$StrongTypedObjectHandle\@VScriptMessageFormData\@ScriptModuleMinecraftServerUI\@\@\@Scripting\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraftServerUI::ScriptMessageFormData>
    bodyV010(std::string const&);
    /**
     * @symbol ?buildJson\@ScriptMessageFormData\@ScriptModuleMinecraftServerUI\@\@QEBA?AVValue\@Json\@\@XZ
     */
    MCAPI class Json::Value buildJson() const;
    /**
     * @symbol
     * ?button1\@ScriptMessageFormData\@ScriptModuleMinecraftServerUI\@\@QEAA?AV?$StrongTypedObjectHandle\@VScriptMessageFormData\@ScriptModuleMinecraftServerUI\@\@\@Scripting\@\@V?$variant\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@UScriptRawMessageInterface\@ScriptModuleMinecraft\@\@\@std\@\@\@Z
     */
    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraftServerUI::ScriptMessageFormData>
        button1(class std::variant<std::string, struct ScriptModuleMinecraft::ScriptRawMessageInterface>);
    /**
     * @symbol
     * ?button1V010\@ScriptMessageFormData\@ScriptModuleMinecraftServerUI\@\@QEAA?AV?$StrongTypedObjectHandle\@VScriptMessageFormData\@ScriptModuleMinecraftServerUI\@\@\@Scripting\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraftServerUI::ScriptMessageFormData>
    button1V010(std::string const&);
    /**
     * @symbol
     * ?button2\@ScriptMessageFormData\@ScriptModuleMinecraftServerUI\@\@QEAA?AV?$StrongTypedObjectHandle\@VScriptMessageFormData\@ScriptModuleMinecraftServerUI\@\@\@Scripting\@\@V?$variant\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@UScriptRawMessageInterface\@ScriptModuleMinecraft\@\@\@std\@\@\@Z
     */
    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraftServerUI::ScriptMessageFormData>
        button2(class std::variant<std::string, struct ScriptModuleMinecraft::ScriptRawMessageInterface>);
    /**
     * @symbol
     * ?button2V010\@ScriptMessageFormData\@ScriptModuleMinecraftServerUI\@\@QEAA?AV?$StrongTypedObjectHandle\@VScriptMessageFormData\@ScriptModuleMinecraftServerUI\@\@\@Scripting\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraftServerUI::ScriptMessageFormData>
    button2V010(std::string const&);
    /**
     * @symbol ??4ScriptMessageFormData\@ScriptModuleMinecraftServerUI\@\@QEAAAEAV01\@$$QEAV01\@\@Z
     */
    MCAPI class ScriptModuleMinecraftServerUI::ScriptMessageFormData&
    operator=(class ScriptModuleMinecraftServerUI::ScriptMessageFormData&&);
    /**
     * @symbol
     * ?show\@ScriptMessageFormData\@ScriptModuleMinecraftServerUI\@\@QEAA?AV?$Result\@V?$Promise\@V?$StrongTypedObjectHandle\@VScriptMessageFormResponse\@ScriptModuleMinecraftServerUI\@\@\@Scripting\@\@VScriptFormRejectError\@ScriptModuleMinecraftServerUI\@\@X\@Scripting\@\@\@Scripting\@\@AEBVWeakLifetimeScope\@4\@AEAVScriptObjectFactory\@4\@AEAVDependencyLocator\@4\@AEAVScriptPlayer\@ScriptModuleMinecraft\@\@\@Z
     */
    MCAPI class Scripting::Result<class Scripting::Promise<
        class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraftServerUI::ScriptMessageFormResponse>,
        class ScriptModuleMinecraftServerUI::ScriptFormRejectError,
        void>>
    show(class Scripting::WeakLifetimeScope const&, class Scripting::ScriptObjectFactory&, class Scripting::DependencyLocator&, class ScriptModuleMinecraft::ScriptPlayer&);
    /**
     * @symbol
     * ?title\@ScriptMessageFormData\@ScriptModuleMinecraftServerUI\@\@QEAA?AV?$StrongTypedObjectHandle\@VScriptMessageFormData\@ScriptModuleMinecraftServerUI\@\@\@Scripting\@\@V?$variant\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@UScriptRawMessageInterface\@ScriptModuleMinecraft\@\@\@std\@\@\@Z
     */
    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraftServerUI::ScriptMessageFormData>
        title(class std::variant<std::string, struct ScriptModuleMinecraft::ScriptRawMessageInterface>);
    /**
     * @symbol
     * ?titleV010\@ScriptMessageFormData\@ScriptModuleMinecraftServerUI\@\@QEAA?AV?$StrongTypedObjectHandle\@VScriptMessageFormData\@ScriptModuleMinecraftServerUI\@\@\@Scripting\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraftServerUI::ScriptMessageFormData>
    titleV010(std::string const&);
    /**
     * @symbol ??1ScriptMessageFormData\@ScriptModuleMinecraftServerUI\@\@QEAA\@XZ
     */
    MCAPI ~ScriptMessageFormData();
    /**
     * @symbol
     * ?bind\@ScriptMessageFormData\@ScriptModuleMinecraftServerUI\@\@SA?AV?$ClassBindingBuilder\@VScriptMessageFormData\@ScriptModuleMinecraftServerUI\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraftServerUI::ScriptMessageFormData>
    bind();
};

}; // namespace ScriptModuleMinecraftServerUI
