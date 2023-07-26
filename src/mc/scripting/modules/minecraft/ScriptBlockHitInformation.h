#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/InterfaceBindingBuilder.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class WeakLifetimeScope; }
struct ProjectileHitEvent;
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptBlockHitInformation {

public:
    // prevent constructor by default
    ScriptBlockHitInformation(ScriptBlockHitInformation const&) = delete;
    ScriptBlockHitInformation()                                 = delete;

public:
    /**
     * @symbol
     * ??0ScriptBlockHitInformation\@ScriptModuleMinecraft\@\@QEAA\@AEBUProjectileHitEvent\@\@AEBVWeakLifetimeScope\@Scripting\@\@\@Z
     */
    MCAPI
    ScriptBlockHitInformation(struct ProjectileHitEvent const&, class Scripting::WeakLifetimeScope const&); // NOLINT
    /**
     * @symbol ??4ScriptBlockHitInformation\@ScriptModuleMinecraft\@\@QEAAAEAU01\@AEBU01\@\@Z
     */
    MCAPI struct ScriptModuleMinecraft::ScriptBlockHitInformation&
    operator=(struct ScriptModuleMinecraft::ScriptBlockHitInformation const&); // NOLINT
    /**
     * @symbol ??4ScriptBlockHitInformation\@ScriptModuleMinecraft\@\@QEAAAEAU01\@$$QEAU01\@\@Z
     */
    MCAPI struct ScriptModuleMinecraft::ScriptBlockHitInformation&
    operator=(struct ScriptModuleMinecraft::ScriptBlockHitInformation&&); // NOLINT
    /**
     * @symbol ??1ScriptBlockHitInformation\@ScriptModuleMinecraft\@\@QEAA\@XZ
     */
    MCAPI ~ScriptBlockHitInformation(); // NOLINT
    /**
     * @symbol
     * ?bind\@ScriptBlockHitInformation\@ScriptModuleMinecraft\@\@SA?AV?$InterfaceBindingBuilder\@UScriptBlockHitInformation\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::InterfaceBindingBuilder<struct ScriptModuleMinecraft::ScriptBlockHitInformation>
    bind(); // NOLINT
};

}; // namespace ScriptModuleMinecraft
