#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/InterfaceBindingBuilder.h"
#include "mc/external/scripting/Result.h"

// auto generated forward declare list
// clang-format off
class Actor;
enum class CurrentCmdVersion;
namespace Json { class Value; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptRawMessageInterface {

public:
    // prevent constructor by default
    ScriptRawMessageInterface() = delete;

public:
    /**
     * @symbol ??0ScriptRawMessageInterface\@ScriptModuleMinecraft\@\@QEAA\@AEBU01\@\@Z
     */
    MCAPI ScriptRawMessageInterface(struct ScriptModuleMinecraft::ScriptRawMessageInterface const&); // NOLINT
    /**
     * @symbol ?buildJsonObject\@ScriptRawMessageInterface\@ScriptModuleMinecraft\@\@QEBAXAEAVValue\@Json\@\@\@Z
     */
    MCAPI void buildJsonObject(class Json::Value&) const; // NOLINT
    /**
     * @symbol ??4ScriptRawMessageInterface\@ScriptModuleMinecraft\@\@QEAAAEAU01\@$$QEAU01\@\@Z
     */
    MCAPI struct ScriptModuleMinecraft::ScriptRawMessageInterface&
    operator=(struct ScriptModuleMinecraft::ScriptRawMessageInterface&&); // NOLINT
    /**
     * @symbol ??4ScriptRawMessageInterface\@ScriptModuleMinecraft\@\@QEAAAEAU01\@AEBU01\@\@Z
     */
    MCAPI struct ScriptModuleMinecraft::ScriptRawMessageInterface&
    operator=(struct ScriptModuleMinecraft::ScriptRawMessageInterface const&); // NOLINT
    /**
     * @symbol ??8ScriptRawMessageInterface\@ScriptModuleMinecraft\@\@QEBA_NAEBU01\@\@Z
     */
    MCAPI bool operator==(struct ScriptModuleMinecraft::ScriptRawMessageInterface const&) const; // NOLINT
    /**
     * @symbol
     * ?resolveAsJsonString\@ScriptRawMessageInterface\@ScriptModuleMinecraft\@\@QEBA?AV?$Result\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Scripting\@\@AEAVActor\@\@W4CurrentCmdVersion\@\@\@Z
     */
    MCAPI class Scripting::Result<std::string>
    resolveAsJsonString(class Actor&, enum class CurrentCmdVersion) const; // NOLINT
    /**
     * @symbol ?toJson\@ScriptRawMessageInterface\@ScriptModuleMinecraft\@\@QEBA?AVValue\@Json\@\@XZ
     */
    MCAPI class Json::Value toJson() const; // NOLINT
    /**
     * @symbol ??1ScriptRawMessageInterface\@ScriptModuleMinecraft\@\@QEAA\@XZ
     */
    MCAPI ~ScriptRawMessageInterface(); // NOLINT
    /**
     * @symbol
     * ?bind\@ScriptRawMessageInterface\@ScriptModuleMinecraft\@\@SA?AV?$InterfaceBindingBuilder\@UScriptRawMessageInterface\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::InterfaceBindingBuilder<struct ScriptModuleMinecraft::ScriptRawMessageInterface>
    bind(); // NOLINT
    /**
     * @symbol ?fromJSON\@ScriptRawMessageInterface\@ScriptModuleMinecraft\@\@SA?AU12\@AEBVValue\@Json\@\@\@Z
     */
    MCAPI static struct ScriptModuleMinecraft::ScriptRawMessageInterface fromJSON(class Json::Value const&); // NOLINT
    /**
     * @symbol
     * ?fromString\@ScriptRawMessageInterface\@ScriptModuleMinecraft\@\@SA?AU12\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI static struct ScriptModuleMinecraft::ScriptRawMessageInterface fromString(std::string const&); // NOLINT
    /**
     * @symbol
     * ?rawTextStringsToRawText\@ScriptRawMessageInterface\@ScriptModuleMinecraft\@\@SA?AV?$vector\@UScriptRawMessageInterface\@ScriptModuleMinecraft\@\@V?$allocator\@UScriptRawMessageInterface\@ScriptModuleMinecraft\@\@\@std\@\@\@std\@\@AEBV?$vector\@V?$variant\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@UScriptRawMessageInterface\@ScriptModuleMinecraft\@\@\@std\@\@V?$allocator\@V?$variant\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@UScriptRawMessageInterface\@ScriptModuleMinecraft\@\@\@std\@\@\@2\@\@4\@\@Z
     */
    MCAPI static std::vector<struct ScriptModuleMinecraft::ScriptRawMessageInterface>
    rawTextStringsToRawText(std::vector<class std::variant<
                                std::string,
                                struct ScriptModuleMinecraft::ScriptRawMessageInterface>> const&); // NOLINT
};

}; // namespace ScriptModuleMinecraft
