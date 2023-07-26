#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/Result.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
class IdentityDefinition;
class Level;
namespace ScriptModuleMinecraft { class ScriptActor; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptScoreboardIdentity {

public:
    // prevent constructor by default
    ScriptScoreboardIdentity& operator=(ScriptScoreboardIdentity const&) = delete;
    ScriptScoreboardIdentity(ScriptScoreboardIdentity const&)            = delete;
    ScriptScoreboardIdentity()                                           = delete;

public:
    /**
     * @symbol
     * ??0ScriptScoreboardIdentity\@ScriptModuleMinecraft\@\@QEAA\@AEBVIdentityDefinition\@\@AEBVLevel\@\@AEBVWeakLifetimeScope\@Scripting\@\@\@Z
     */
    MCAPI
    ScriptScoreboardIdentity(class IdentityDefinition const&, class Level const&, class Scripting::WeakLifetimeScope const&); // NOLINT
    /**
     * @symbol
     * ?getActor\@ScriptScoreboardIdentity\@ScriptModuleMinecraft\@\@QEBA?AV?$Result\@V?$StrongTypedObjectHandle\@VScriptActor\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Scripting\@\@XZ
     */
    MCAPI class Scripting::Result<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptActor>>
    getActor() const; // NOLINT
    /**
     * @symbol
     * ?getName\@ScriptScoreboardIdentity\@ScriptModuleMinecraft\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getName() const; // NOLINT
    /**
     * @symbol ?isValid\@ScriptScoreboardIdentity\@ScriptModuleMinecraft\@\@QEBA_NXZ
     */
    MCAPI bool isValid() const; // NOLINT
    /**
     * @symbol ??4ScriptScoreboardIdentity\@ScriptModuleMinecraft\@\@QEAAAEAV01\@$$QEAV01\@\@Z
     */
    MCAPI class ScriptModuleMinecraft::ScriptScoreboardIdentity&
    operator=(class ScriptModuleMinecraft::ScriptScoreboardIdentity&&); // NOLINT
    /**
     * @symbol ??1ScriptScoreboardIdentity\@ScriptModuleMinecraft\@\@QEAA\@XZ
     */
    MCAPI ~ScriptScoreboardIdentity(); // NOLINT
    /**
     * @symbol
     * ?bind\@ScriptScoreboardIdentity\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@VScriptScoreboardIdentity\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptScoreboardIdentity>
    bind(); // NOLINT
};

}; // namespace ScriptModuleMinecraft
