#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"

// auto generated forward declare list
// clang-format off
class Vec3;
namespace Scripting { class WeakLifetimeScope; }
struct ExplosionStartedEvent;
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptExplosionStartedAfterEvent {

public:
    // prevent constructor by default
    ScriptExplosionStartedAfterEvent() = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0ScriptExplosionStartedAfterEvent\@ScriptModuleMinecraft\@\@QEAA\@AEBU01\@\@Z
     */
    MCAPI ScriptExplosionStartedAfterEvent(struct ScriptModuleMinecraft::ScriptExplosionStartedAfterEvent const&);
    /**
     * @symbol ??0ScriptExplosionStartedAfterEvent\@ScriptModuleMinecraft\@\@QEAA\@$$QEAU01\@\@Z
     */
    MCAPI ScriptExplosionStartedAfterEvent(struct ScriptModuleMinecraft::ScriptExplosionStartedAfterEvent&&);
    /**
     * @symbol
     * ??0ScriptExplosionStartedAfterEvent\@ScriptModuleMinecraft\@\@QEAA\@AEBUExplosionStartedEvent\@\@AEBVWeakLifetimeScope\@Scripting\@\@\@Z
     */
    MCAPI
    ScriptExplosionStartedAfterEvent(struct ExplosionStartedEvent const&, class Scripting::WeakLifetimeScope const&);
    /**
     * @symbol ?copyTo\@ScriptExplosionStartedAfterEvent\@ScriptModuleMinecraft\@\@QEBAXAEAUExplosionStartedEvent\@\@\@Z
     */
    MCAPI void copyTo(struct ExplosionStartedEvent&) const;
    /**
     * @symbol
     * ?getImpactedBlocks\@ScriptExplosionStartedAfterEvent\@ScriptModuleMinecraft\@\@QEBA?AV?$vector\@VVec3\@\@V?$allocator\@VVec3\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<class Vec3> getImpactedBlocks() const;
    /**
     * @symbol ??4ScriptExplosionStartedAfterEvent\@ScriptModuleMinecraft\@\@QEAAAEAU01\@$$QEAU01\@\@Z
     */
    MCAPI struct ScriptModuleMinecraft::ScriptExplosionStartedAfterEvent&
    operator=(struct ScriptModuleMinecraft::ScriptExplosionStartedAfterEvent&&);
    /**
     * @symbol ??4ScriptExplosionStartedAfterEvent\@ScriptModuleMinecraft\@\@QEAAAEAU01\@AEBU01\@\@Z
     */
    MCAPI struct ScriptModuleMinecraft::ScriptExplosionStartedAfterEvent&
    operator=(struct ScriptModuleMinecraft::ScriptExplosionStartedAfterEvent const&);
    /**
     * @symbol ??1ScriptExplosionStartedAfterEvent\@ScriptModuleMinecraft\@\@QEAA\@XZ
     */
    MCAPI ~ScriptExplosionStartedAfterEvent();
    /**
     * @symbol
     * ?bind\@ScriptExplosionStartedAfterEvent\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@UScriptExplosionStartedAfterEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptExplosionStartedAfterEvent>
    bind();
    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
