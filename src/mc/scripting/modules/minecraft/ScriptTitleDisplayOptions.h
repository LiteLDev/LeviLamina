#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/InterfaceBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptTitleDisplayOptions {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMODULEMINECRAFT_SCRIPTTITLEDISPLAYOPTIONS
public:
    ScriptTitleDisplayOptions() = delete;
#endif

public:
    /**
     * @symbol ??0ScriptTitleDisplayOptions\@ScriptModuleMinecraft\@\@QEAA\@AEBU01\@\@Z
     */
    MCAPI ScriptTitleDisplayOptions(struct ScriptModuleMinecraft::ScriptTitleDisplayOptions const&);
    /**
     * @symbol ??0ScriptTitleDisplayOptions\@ScriptModuleMinecraft\@\@QEAA\@$$QEAU01\@\@Z
     */
    MCAPI ScriptTitleDisplayOptions(struct ScriptModuleMinecraft::ScriptTitleDisplayOptions&&);
    /**
     * @symbol ??4ScriptTitleDisplayOptions\@ScriptModuleMinecraft\@\@QEAAAEAU01\@$$QEAU01\@\@Z
     */
    MCAPI struct ScriptModuleMinecraft::ScriptTitleDisplayOptions&
    operator=(struct ScriptModuleMinecraft::ScriptTitleDisplayOptions&&);
    /**
     * @symbol ??4ScriptTitleDisplayOptions\@ScriptModuleMinecraft\@\@QEAAAEAU01\@AEBU01\@\@Z
     */
    MCAPI struct ScriptModuleMinecraft::ScriptTitleDisplayOptions&
    operator=(struct ScriptModuleMinecraft::ScriptTitleDisplayOptions const&);
    /**
     * @symbol ??1ScriptTitleDisplayOptions\@ScriptModuleMinecraft\@\@QEAA\@XZ
     */
    MCAPI ~ScriptTitleDisplayOptions();
    /**
     * @symbol
     * ?bind\@ScriptTitleDisplayOptions\@ScriptModuleMinecraft\@\@SA?AV?$InterfaceBindingBuilder\@UScriptTitleDisplayOptions\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::InterfaceBindingBuilder<struct ScriptModuleMinecraft::ScriptTitleDisplayOptions>
    bind();
};

}; // namespace ScriptModuleMinecraft
