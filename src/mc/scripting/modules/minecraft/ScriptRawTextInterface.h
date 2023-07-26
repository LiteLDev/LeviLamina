#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/InterfaceBindingBuilder.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptRawTextInterface {

public:
    // prevent constructor by default
    ScriptRawTextInterface& operator=(ScriptRawTextInterface const&) = delete;
    ScriptRawTextInterface(ScriptRawTextInterface const&)            = delete;
    ScriptRawTextInterface()                                         = delete;

public:
    /**
     * @symbol ??4ScriptRawTextInterface\@ScriptModuleMinecraft\@\@QEAAAEAU01\@$$QEAU01\@\@Z
     */
    MCAPI struct ScriptModuleMinecraft::ScriptRawTextInterface&
    operator=(struct ScriptModuleMinecraft::ScriptRawTextInterface&&); // NOLINT
    /**
     * @symbol ??8ScriptRawTextInterface\@ScriptModuleMinecraft\@\@QEBA_NAEBU01\@\@Z
     */
    MCAPI bool operator==(struct ScriptModuleMinecraft::ScriptRawTextInterface const&) const; // NOLINT
    /**
     * @symbol ??1ScriptRawTextInterface\@ScriptModuleMinecraft\@\@QEAA\@XZ
     */
    MCAPI ~ScriptRawTextInterface(); // NOLINT
    /**
     * @symbol
     * ?bind\@ScriptRawTextInterface\@ScriptModuleMinecraft\@\@SA?AV?$InterfaceBindingBuilder\@UScriptRawTextInterface\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::InterfaceBindingBuilder<struct ScriptModuleMinecraft::ScriptRawTextInterface>
    bind(); // NOLINT
    /**
     * @symbol ?fromJSON\@ScriptRawTextInterface\@ScriptModuleMinecraft\@\@SA?AU12\@AEBVValue\@Json\@\@\@Z
     */
    MCAPI static struct ScriptModuleMinecraft::ScriptRawTextInterface fromJSON(class Json::Value const&); // NOLINT
};

}; // namespace ScriptModuleMinecraft
