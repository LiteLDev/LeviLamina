#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/InterfaceBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptRawMessageScoreInterface {

public:
    // prevent constructor by default
    ScriptRawMessageScoreInterface() = delete;

public:
    /**
     * @symbol ??0ScriptRawMessageScoreInterface\@ScriptModuleMinecraft\@\@QEAA\@$$QEAU01\@\@Z
     */
    MCAPI ScriptRawMessageScoreInterface(struct ScriptModuleMinecraft::ScriptRawMessageScoreInterface&&); // NOLINT
    /**
     * @symbol ??0ScriptRawMessageScoreInterface\@ScriptModuleMinecraft\@\@QEAA\@AEBU01\@\@Z
     */
    MCAPI ScriptRawMessageScoreInterface(struct ScriptModuleMinecraft::ScriptRawMessageScoreInterface const&); // NOLINT
    /**
     * @symbol ??4ScriptRawMessageScoreInterface\@ScriptModuleMinecraft\@\@QEAAAEAU01\@$$QEAU01\@\@Z
     */
    MCAPI struct ScriptModuleMinecraft::ScriptRawMessageScoreInterface&
    operator=(struct ScriptModuleMinecraft::ScriptRawMessageScoreInterface&&); // NOLINT
    /**
     * @symbol ??4ScriptRawMessageScoreInterface\@ScriptModuleMinecraft\@\@QEAAAEAU01\@AEBU01\@\@Z
     */
    MCAPI struct ScriptModuleMinecraft::ScriptRawMessageScoreInterface&
    operator=(struct ScriptModuleMinecraft::ScriptRawMessageScoreInterface const&); // NOLINT
    /**
     * @symbol ??8ScriptRawMessageScoreInterface\@ScriptModuleMinecraft\@\@QEBA_NAEBU01\@\@Z
     */
    MCAPI bool operator==(struct ScriptModuleMinecraft::ScriptRawMessageScoreInterface const&) const; // NOLINT
    /**
     * @symbol ??1ScriptRawMessageScoreInterface\@ScriptModuleMinecraft\@\@QEAA\@XZ
     */
    MCAPI ~ScriptRawMessageScoreInterface(); // NOLINT
    /**
     * @symbol
     * ?bind\@ScriptRawMessageScoreInterface\@ScriptModuleMinecraft\@\@SA?AV?$InterfaceBindingBuilder\@UScriptRawMessageScoreInterface\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::InterfaceBindingBuilder<struct ScriptModuleMinecraft::ScriptRawMessageScoreInterface>
    bind(); // NOLINT
};

}; // namespace ScriptModuleMinecraft
