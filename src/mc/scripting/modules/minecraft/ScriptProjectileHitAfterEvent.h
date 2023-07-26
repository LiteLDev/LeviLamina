#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { struct ScriptBlockHitInformation; }
namespace ScriptModuleMinecraft { struct ScriptEntityHitInformation; }
namespace Scripting { class WeakLifetimeScope; }
struct ProjectileHitEvent;
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptProjectileHitAfterEvent {

public:
    // prevent constructor by default
    ScriptProjectileHitAfterEvent& operator=(ScriptProjectileHitAfterEvent const&) = delete;
    ScriptProjectileHitAfterEvent()                                                = delete;

public:
    /**
     * @symbol ??0ScriptProjectileHitAfterEvent\@ScriptModuleMinecraft\@\@QEAA\@AEBU01\@\@Z
     */
    MCAPI ScriptProjectileHitAfterEvent(struct ScriptModuleMinecraft::ScriptProjectileHitAfterEvent const&); // NOLINT
    /**
     * @symbol
     * ??0ScriptProjectileHitAfterEvent\@ScriptModuleMinecraft\@\@QEAA\@AEBUProjectileHitEvent\@\@AEBVWeakLifetimeScope\@Scripting\@\@\@Z
     */
    MCAPI
    ScriptProjectileHitAfterEvent(struct ProjectileHitEvent const&, class Scripting::WeakLifetimeScope const&); // NOLINT
    /**
     * @symbol ??0ScriptProjectileHitAfterEvent\@ScriptModuleMinecraft\@\@QEAA\@$$QEAU01\@\@Z
     */
    MCAPI ScriptProjectileHitAfterEvent(struct ScriptModuleMinecraft::ScriptProjectileHitAfterEvent&&); // NOLINT
    /**
     * @symbol
     * ?getBlockHit\@ScriptProjectileHitAfterEvent\@ScriptModuleMinecraft\@\@QEBA?AV?$optional\@UScriptBlockHitInformation\@ScriptModuleMinecraft\@\@\@std\@\@XZ
     */
    MCAPI class std::optional<struct ScriptModuleMinecraft::ScriptBlockHitInformation> getBlockHit() const; // NOLINT
    /**
     * @symbol
     * ?getEntityHit\@ScriptProjectileHitAfterEvent\@ScriptModuleMinecraft\@\@QEBA?AV?$optional\@UScriptEntityHitInformation\@ScriptModuleMinecraft\@\@\@std\@\@XZ
     */
    MCAPI class std::optional<struct ScriptModuleMinecraft::ScriptEntityHitInformation> getEntityHit() const; // NOLINT
    /**
     * @symbol ??4ScriptProjectileHitAfterEvent\@ScriptModuleMinecraft\@\@QEAAAEAU01\@$$QEAU01\@\@Z
     */
    MCAPI struct ScriptModuleMinecraft::ScriptProjectileHitAfterEvent&
    operator=(struct ScriptModuleMinecraft::ScriptProjectileHitAfterEvent&&); // NOLINT
    /**
     * @symbol ??1ScriptProjectileHitAfterEvent\@ScriptModuleMinecraft\@\@QEAA\@XZ
     */
    MCAPI ~ScriptProjectileHitAfterEvent(); // NOLINT
    /**
     * @symbol
     * ?bind\@ScriptProjectileHitAfterEvent\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@UScriptProjectileHitAfterEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptProjectileHitAfterEvent>
    bind(); // NOLINT
};

}; // namespace ScriptModuleMinecraft
