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
namespace ScriptModuleMinecraftServerUI { class ScriptActionFormResponse; }
namespace ScriptModuleMinecraftServerUI { class ScriptFormRejectError; }
namespace Scripting { class DependencyLocator; }
namespace Scripting { class ScriptObjectFactory; }
namespace Scripting { class WeakLifetimeScope; }
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
        ButtonData(ButtonData const&) = delete;
        ButtonData()                  = delete;

    public:
        /**
         * @symbol ??4ButtonData\@ScriptActionFormData\@ScriptModuleMinecraftServerUI\@\@QEAAAEAU012\@AEBU012\@\@Z
         */
        MCAPI struct ScriptModuleMinecraftServerUI::ScriptActionFormData::ButtonData&
        operator=(struct ScriptModuleMinecraftServerUI::ScriptActionFormData::ButtonData const&); // NOLINT
        /**
         * @symbol ??1ButtonData\@ScriptActionFormData\@ScriptModuleMinecraftServerUI\@\@QEAA\@XZ
         */
        MCAPI ~ButtonData(); // NOLINT
    };

public:
    // prevent constructor by default
    ScriptActionFormData& operator=(ScriptActionFormData const&) = delete;

public:
    /**
     * @symbol ??0ScriptActionFormData\@ScriptModuleMinecraftServerUI\@\@QEAA\@AEBV01\@\@Z
     */
    MCAPI ScriptActionFormData(class ScriptModuleMinecraftServerUI::ScriptActionFormData const&); // NOLINT
    /**
     * @symbol ??0ScriptActionFormData\@ScriptModuleMinecraftServerUI\@\@QEAA\@$$QEAV01\@\@Z
     */
    MCAPI ScriptActionFormData(class ScriptModuleMinecraftServerUI::ScriptActionFormData&&); // NOLINT
    /**
     * @symbol ??0ScriptActionFormData\@ScriptModuleMinecraftServerUI\@\@QEAA\@XZ
     */
    MCAPI ScriptActionFormData(); // NOLINT
    /**
     * @symbol
     * ?body\@ScriptActionFormData\@ScriptModuleMinecraftServerUI\@\@QEAA?AV?$StrongTypedObjectHandle\@VScriptActionFormData\@ScriptModuleMinecraftServerUI\@\@\@Scripting\@\@V?$variant\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@UScriptRawMessageInterface\@ScriptModuleMinecraft\@\@\@std\@\@\@Z
     */
    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraftServerUI::ScriptActionFormData>
        body(class std::variant<std::string, struct ScriptModuleMinecraft::ScriptRawMessageInterface>); // NOLINT
    /**
     * @symbol
     * ?bodyV010\@ScriptActionFormData\@ScriptModuleMinecraftServerUI\@\@QEAA?AV?$StrongTypedObjectHandle\@VScriptActionFormData\@ScriptModuleMinecraftServerUI\@\@\@Scripting\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraftServerUI::ScriptActionFormData>
    bodyV010(std::string const&); // NOLINT
    /**
     * @symbol ?buildJson\@ScriptActionFormData\@ScriptModuleMinecraftServerUI\@\@QEBA?AVValue\@Json\@\@XZ
     */
    MCAPI class Json::Value buildJson() const; // NOLINT
    /**
     * @symbol
     * ?button\@ScriptActionFormData\@ScriptModuleMinecraftServerUI\@\@QEAA?AV?$StrongTypedObjectHandle\@VScriptActionFormData\@ScriptModuleMinecraftServerUI\@\@\@Scripting\@\@V?$variant\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@UScriptRawMessageInterface\@ScriptModuleMinecraft\@\@\@std\@\@V?$optional\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@6\@\@Z
     */
    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraftServerUI::ScriptActionFormData>
        button(class std::variant<std::string, struct ScriptModuleMinecraft::ScriptRawMessageInterface>, class std::optional<std::string>); // NOLINT
    /**
     * @symbol
     * ?buttonV010\@ScriptActionFormData\@ScriptModuleMinecraftServerUI\@\@QEAA?AV?$StrongTypedObjectHandle\@VScriptActionFormData\@ScriptModuleMinecraftServerUI\@\@\@Scripting\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$optional\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@6\@\@Z
     */
    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraftServerUI::ScriptActionFormData>
    buttonV010(std::string const&, class std::optional<std::string>); // NOLINT
    /**
     * @symbol ??4ScriptActionFormData\@ScriptModuleMinecraftServerUI\@\@QEAAAEAV01\@$$QEAV01\@\@Z
     */
    MCAPI class ScriptModuleMinecraftServerUI::ScriptActionFormData&
    operator=(class ScriptModuleMinecraftServerUI::ScriptActionFormData&&); // NOLINT
    /**
     * @symbol
     * ?show\@ScriptActionFormData\@ScriptModuleMinecraftServerUI\@\@QEAA?AV?$Result\@V?$Promise\@V?$StrongTypedObjectHandle\@VScriptActionFormResponse\@ScriptModuleMinecraftServerUI\@\@\@Scripting\@\@VScriptFormRejectError\@ScriptModuleMinecraftServerUI\@\@X\@Scripting\@\@\@Scripting\@\@AEBVWeakLifetimeScope\@4\@AEAVScriptObjectFactory\@4\@AEAVDependencyLocator\@4\@AEAVScriptPlayer\@ScriptModuleMinecraft\@\@\@Z
     */
    MCAPI class Scripting::Result<class Scripting::Promise<
        class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraftServerUI::ScriptActionFormResponse>,
        class ScriptModuleMinecraftServerUI::ScriptFormRejectError,
        void>>
    show(class Scripting::WeakLifetimeScope const&, class Scripting::ScriptObjectFactory&, class Scripting::DependencyLocator&, class ScriptModuleMinecraft::ScriptPlayer&); // NOLINT
    /**
     * @symbol
     * ?title\@ScriptActionFormData\@ScriptModuleMinecraftServerUI\@\@QEAA?AV?$StrongTypedObjectHandle\@VScriptActionFormData\@ScriptModuleMinecraftServerUI\@\@\@Scripting\@\@V?$variant\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@UScriptRawMessageInterface\@ScriptModuleMinecraft\@\@\@std\@\@\@Z
     */
    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraftServerUI::ScriptActionFormData>
        title(class std::variant<std::string, struct ScriptModuleMinecraft::ScriptRawMessageInterface>); // NOLINT
    /**
     * @symbol
     * ?titleV010\@ScriptActionFormData\@ScriptModuleMinecraftServerUI\@\@QEAA?AV?$StrongTypedObjectHandle\@VScriptActionFormData\@ScriptModuleMinecraftServerUI\@\@\@Scripting\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraftServerUI::ScriptActionFormData>
    titleV010(std::string const&); // NOLINT
    /**
     * @symbol ??1ScriptActionFormData\@ScriptModuleMinecraftServerUI\@\@QEAA\@XZ
     */
    MCAPI ~ScriptActionFormData(); // NOLINT
    /**
     * @symbol
     * ?bind\@ScriptActionFormData\@ScriptModuleMinecraftServerUI\@\@SA?AV?$ClassBindingBuilder\@VScriptActionFormData\@ScriptModuleMinecraftServerUI\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraftServerUI::ScriptActionFormData>
    bind(); // NOLINT
};

}; // namespace ScriptModuleMinecraftServerUI
