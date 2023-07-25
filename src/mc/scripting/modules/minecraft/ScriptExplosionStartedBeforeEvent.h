#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptExplosionStartedBeforeEvent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMODULEMINECRAFT_SCRIPTEXPLOSIONSTARTEDBEFOREEVENT
public:
    ScriptExplosionStartedBeforeEvent& operator=(ScriptExplosionStartedBeforeEvent const&) = delete;
    ScriptExplosionStartedBeforeEvent()                                                    = delete;
#endif

public:
    /**
     * @symbol ??0ScriptExplosionStartedBeforeEvent\@ScriptModuleMinecraft\@\@QEAA\@AEBU01\@\@Z
     */
    MCAPI ScriptExplosionStartedBeforeEvent(struct ScriptModuleMinecraft::ScriptExplosionStartedBeforeEvent const&);
    /**
     * @symbol ??0ScriptExplosionStartedBeforeEvent\@ScriptModuleMinecraft\@\@QEAA\@$$QEAU01\@\@Z
     */
    MCAPI ScriptExplosionStartedBeforeEvent(struct ScriptModuleMinecraft::ScriptExplosionStartedBeforeEvent&&);
    /**
     * @symbol ??4ScriptExplosionStartedBeforeEvent\@ScriptModuleMinecraft\@\@QEAAAEAU01\@$$QEAU01\@\@Z
     */
    MCAPI struct ScriptModuleMinecraft::ScriptExplosionStartedBeforeEvent&
    operator=(struct ScriptModuleMinecraft::ScriptExplosionStartedBeforeEvent&&);
    /**
     * @symbol
     * ?setImpactedBlocks\@ScriptExplosionStartedBeforeEvent\@ScriptModuleMinecraft\@\@QEAAXAEBV?$vector\@VVec3\@\@V?$allocator\@VVec3\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void setImpactedBlocks(std::vector<class Vec3> const&);
    /**
     * @symbol ??1ScriptExplosionStartedBeforeEvent\@ScriptModuleMinecraft\@\@QEAA\@XZ
     */
    MCAPI ~ScriptExplosionStartedBeforeEvent();
    /**
     * @symbol
     * ?bind\@ScriptExplosionStartedBeforeEvent\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@UScriptExplosionStartedBeforeEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptExplosionStartedBeforeEvent>
    bind();
};

}; // namespace ScriptModuleMinecraft
