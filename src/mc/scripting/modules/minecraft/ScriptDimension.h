#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/EnumBindingBuilder.h"
#include "mc/external/scripting/Promise.h"
#include "mc/external/scripting/Result.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"
#include "mc/external/scripting/TypedObjectHandle.h"
#include "mc/world/AutomaticID.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class Dimension;
class Level;
class Vec3;
namespace ScriptModuleMinecraft { class ScriptActor; }
namespace ScriptModuleMinecraft { class ScriptActorIterator; }
namespace ScriptModuleMinecraft { class ScriptBlock; }
namespace ScriptModuleMinecraft { class ScriptBlockPermutation; }
namespace ScriptModuleMinecraft { class ScriptBlockRaycastHit; }
namespace ScriptModuleMinecraft { class ScriptBlockType; }
namespace ScriptModuleMinecraft { class ScriptEntityRaycastHit; }
namespace ScriptModuleMinecraft { class ScriptItemStack; }
namespace ScriptModuleMinecraft { class ScriptMolangVariableMap; }
namespace ScriptModuleMinecraft { class ScriptPlayer; }
namespace ScriptModuleMinecraft { class ScriptPlayerIterator; }
namespace ScriptModuleMinecraft { class ScriptVector; }
namespace ScriptModuleMinecraft { struct ScriptActorQueryOptions; }
namespace ScriptModuleMinecraft { struct ScriptBlockFillOptions; }
namespace ScriptModuleMinecraft { struct ScriptBlockRaycastOptions; }
namespace ScriptModuleMinecraft { struct ScriptCommandError; }
namespace ScriptModuleMinecraft { struct ScriptCommandResult; }
namespace ScriptModuleMinecraft { struct ScriptEntityRaycastOptions; }
namespace ScriptModuleMinecraft { struct ScriptExplosionOptions; }
namespace Scripting { class DependencyLocator; }
namespace Scripting { class ScriptObjectFactory; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ContextConfig; }
namespace Scripting { struct JSON; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptDimension {
public:
    // ScriptDimension inner types declare
    // clang-format off

    // clang-format on

    // ScriptDimension inner types define
    enum class ScriptWeatherType {};

public:
    // prevent constructor by default
    ScriptDimension& operator=(ScriptDimension const&) = delete;
    ScriptDimension()                                  = delete;

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTMODULEMINECRAFT_SCRIPTDIMENSION
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ScriptDimension(); // NOLINT
#endif
    /**
     * @symbol ??0ScriptDimension\@ScriptModuleMinecraft\@\@QEAA\@AEBV01\@\@Z
     */
    MCAPI ScriptDimension(class ScriptModuleMinecraft::ScriptDimension const&); // NOLINT
    /**
     * @symbol
     * ?createExplosion\@ScriptDimension\@ScriptModuleMinecraft\@\@QEBA?AV?$Result\@X\@Scripting\@\@AEBVVec3\@\@MV?$optional\@UScriptExplosionOptions\@ScriptModuleMinecraft\@\@\@std\@\@\@Z
     */
    MCAPI class Scripting::Result<void>
    createExplosion(class Vec3 const&, float, class std::optional<struct ScriptModuleMinecraft::ScriptExplosionOptions>)
        const; // NOLINT
    /**
     * @symbol
     * ?createExplosion_V010\@ScriptDimension\@ScriptModuleMinecraft\@\@QEBA?AV?$Result\@X\@Scripting\@\@AEBVVec3\@\@MU?$TypedObjectHandle\@UScriptExplosionOptions\@ScriptModuleMinecraft\@\@\@4\@\@Z
     */
    MCAPI class Scripting::Result<void>
    createExplosion_V010(class Vec3 const&, float, struct Scripting::TypedObjectHandle<struct ScriptModuleMinecraft::ScriptExplosionOptions>)
        const; // NOLINT
    /**
     * @symbol
     * ?fillBlocks\@ScriptDimension\@ScriptModuleMinecraft\@\@QEAA?AV?$Result\@I\@Scripting\@\@AEBVVec3\@\@0AEBV?$variant\@V?$StrongTypedObjectHandle\@VScriptBlockType\@ScriptModuleMinecraft\@\@\@Scripting\@\@V?$StrongTypedObjectHandle\@VScriptBlockPermutation\@ScriptModuleMinecraft\@\@\@2\@\@std\@\@AEBV?$optional\@UScriptBlockFillOptions\@ScriptModuleMinecraft\@\@\@7\@\@Z
     */
    MCAPI class
        Scripting::
            Result<unsigned int>
            fillBlocks(class Vec3 const&, class Vec3 const&, class std::variant<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlockType>, class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlockPermutation>> const&, class std::optional<struct ScriptModuleMinecraft::ScriptBlockFillOptions> const&); // NOLINT
    /**
     * @symbol
     * ?getBlock\@ScriptDimension\@ScriptModuleMinecraft\@\@QEBA?AV?$Result\@V?$optional\@V?$StrongTypedObjectHandle\@VScriptBlock\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@std\@\@\@Scripting\@\@VWeakLifetimeScope\@4\@AEBVVec3\@\@\@Z
     */
    MCAPI class Scripting::Result<
        class std::optional<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlock>>>
    getBlock(class Scripting::WeakLifetimeScope, class Vec3 const&) const; // NOLINT
    /**
     * @symbol
     * ?getBlockFromRay\@ScriptDimension\@ScriptModuleMinecraft\@\@QEBA?AV?$optional\@VScriptBlockRaycastHit\@ScriptModuleMinecraft\@\@\@std\@\@VWeakLifetimeScope\@Scripting\@\@AEBVVec3\@\@1AEBV?$optional\@UScriptBlockRaycastOptions\@ScriptModuleMinecraft\@\@\@4\@\@Z
     */
    MCAPI class std::optional<class ScriptModuleMinecraft::ScriptBlockRaycastHit>
    getBlockFromRay(class Scripting::WeakLifetimeScope, class Vec3 const&, class Vec3 const&, class std::optional<struct ScriptModuleMinecraft::ScriptBlockRaycastOptions> const&)
        const; // NOLINT
    /**
     * @symbol
     * ?getBlockFromRay_V010\@ScriptDimension\@ScriptModuleMinecraft\@\@QEBA?AV?$Result\@V?$StrongTypedObjectHandle\@VScriptBlock\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Scripting\@\@VWeakLifetimeScope\@4\@AEBVVec3\@\@AEBVScriptVector\@2\@AEBV?$optional\@UScriptBlockRaycastOptions\@ScriptModuleMinecraft\@\@\@std\@\@\@Z
     */
    MCAPI class Scripting::Result<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlock>>
    getBlockFromRay_V010(class Scripting::WeakLifetimeScope, class Vec3 const&, class ScriptModuleMinecraft::ScriptVector const&, class std::optional<struct ScriptModuleMinecraft::ScriptBlockRaycastOptions> const&)
        const; // NOLINT
    /**
     * @symbol
     * ?getBlock_V010\@ScriptDimension\@ScriptModuleMinecraft\@\@QEAA?AV?$StrongTypedObjectHandle\@VScriptBlock\@ScriptModuleMinecraft\@\@\@Scripting\@\@VWeakLifetimeScope\@4\@AEBVBlockPos\@\@\@Z
     */
    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlock>
    getBlock_V010(class Scripting::WeakLifetimeScope, class BlockPos const&); // NOLINT
    /**
     * @symbol ?getDimension\@ScriptDimension\@ScriptModuleMinecraft\@\@QEBAAEAVDimension\@\@XZ
     */
    MCAPI class Dimension& getDimension() const; // NOLINT
    /**
     * @symbol
     * ?getEntities\@ScriptDimension\@ScriptModuleMinecraft\@\@QEBA?AV?$Result\@V?$vector\@V?$StrongTypedObjectHandle\@VScriptActor\@ScriptModuleMinecraft\@\@\@Scripting\@\@V?$allocator\@V?$StrongTypedObjectHandle\@VScriptActor\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@std\@\@\@std\@\@\@Scripting\@\@V?$optional\@UScriptActorQueryOptions\@ScriptModuleMinecraft\@\@\@std\@\@\@Z
     */
    MCAPI class Scripting::Result<
        std::vector<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptActor>>>
        getEntities(class std::optional<struct ScriptModuleMinecraft::ScriptActorQueryOptions>) const; // NOLINT
    /**
     * @symbol
     * ?getEntitiesAtBlockLocation\@ScriptDimension\@ScriptModuleMinecraft\@\@QEBA?AV?$vector\@V?$StrongTypedObjectHandle\@VScriptActor\@ScriptModuleMinecraft\@\@\@Scripting\@\@V?$allocator\@V?$StrongTypedObjectHandle\@VScriptActor\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@std\@\@\@std\@\@AEBVVec3\@\@\@Z
     */
    MCAPI std::vector<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptActor>>
          getEntitiesAtBlockLocation(class Vec3 const&) const; // NOLINT
    /**
     * @symbol
     * ?getEntitiesAtBlockLocation_V010\@ScriptDimension\@ScriptModuleMinecraft\@\@QEBA?AV?$vector\@V?$StrongTypedObjectHandle\@VScriptActor\@ScriptModuleMinecraft\@\@\@Scripting\@\@V?$allocator\@V?$StrongTypedObjectHandle\@VScriptActor\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@std\@\@\@std\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI std::vector<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptActor>>
          getEntitiesAtBlockLocation_V010(class BlockPos const&) const; // NOLINT
    /**
     * @symbol
     * ?getEntitiesFromRay\@ScriptDimension\@ScriptModuleMinecraft\@\@QEBA?AV?$vector\@VScriptEntityRaycastHit\@ScriptModuleMinecraft\@\@V?$allocator\@VScriptEntityRaycastHit\@ScriptModuleMinecraft\@\@\@std\@\@\@std\@\@VWeakLifetimeScope\@Scripting\@\@AEBVVec3\@\@1AEBV?$optional\@UScriptEntityRaycastOptions\@ScriptModuleMinecraft\@\@\@4\@\@Z
     */
    MCAPI std::vector<class ScriptModuleMinecraft::ScriptEntityRaycastHit>
    getEntitiesFromRay(class Scripting::WeakLifetimeScope, class Vec3 const&, class Vec3 const&, class std::optional<struct ScriptModuleMinecraft::ScriptEntityRaycastOptions> const&)
        const; // NOLINT
    /**
     * @symbol
     * ?getEntitiesFromRay_V010\@ScriptDimension\@ScriptModuleMinecraft\@\@QEBA?AV?$Result\@V?$vector\@V?$StrongTypedObjectHandle\@VScriptActor\@ScriptModuleMinecraft\@\@\@Scripting\@\@V?$allocator\@V?$StrongTypedObjectHandle\@VScriptActor\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@std\@\@\@std\@\@\@Scripting\@\@VWeakLifetimeScope\@4\@AEBVVec3\@\@AEBVScriptVector\@2\@AEBV?$optional\@UScriptEntityRaycastOptions\@ScriptModuleMinecraft\@\@\@std\@\@\@Z
     */
    MCAPI class Scripting::Result<
        std::vector<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptActor>>>
    getEntitiesFromRay_V010(class Scripting::WeakLifetimeScope, class Vec3 const&, class ScriptModuleMinecraft::ScriptVector const&, class std::optional<struct ScriptModuleMinecraft::ScriptEntityRaycastOptions> const&)
        const; // NOLINT
    /**
     * @symbol
     * ?getEntities_V010\@ScriptDimension\@ScriptModuleMinecraft\@\@QEBA?AV?$Result\@V?$StrongTypedObjectHandle\@VScriptActorIterator\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Scripting\@\@V?$optional\@UScriptActorQueryOptions\@ScriptModuleMinecraft\@\@\@std\@\@\@Z
     */
    MCAPI class Scripting::Result<
        class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptActorIterator>>
        getEntities_V010(class std::optional<struct ScriptModuleMinecraft::ScriptActorQueryOptions>) const; // NOLINT
    /**
     * @symbol
     * ?getId\@ScriptDimension\@ScriptModuleMinecraft\@\@QEBA?AV?$Result\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Scripting\@\@XZ
     */
    MCAPI class Scripting::Result<std::string> getId() const; // NOLINT
    /**
     * @symbol
     * ?getPlayers\@ScriptDimension\@ScriptModuleMinecraft\@\@QEBA?AV?$Result\@V?$vector\@V?$StrongTypedObjectHandle\@VScriptPlayer\@ScriptModuleMinecraft\@\@\@Scripting\@\@V?$allocator\@V?$StrongTypedObjectHandle\@VScriptPlayer\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@std\@\@\@std\@\@\@Scripting\@\@V?$optional\@UScriptActorQueryOptions\@ScriptModuleMinecraft\@\@\@std\@\@\@Z
     */
    MCAPI class Scripting::Result<
        std::vector<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptPlayer>>>
        getPlayers(class std::optional<struct ScriptModuleMinecraft::ScriptActorQueryOptions>) const; // NOLINT
    /**
     * @symbol
     * ?getPlayers_V010\@ScriptDimension\@ScriptModuleMinecraft\@\@QEBA?AV?$Result\@V?$StrongTypedObjectHandle\@VScriptPlayerIterator\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Scripting\@\@V?$optional\@UScriptActorQueryOptions\@ScriptModuleMinecraft\@\@\@std\@\@\@Z
     */
    MCAPI class Scripting::Result<
        class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptPlayerIterator>>
        getPlayers_V010(class std::optional<struct ScriptModuleMinecraft::ScriptActorQueryOptions>) const; // NOLINT
    /**
     * @symbol ?isEmpty_V010\@ScriptDimension\@ScriptModuleMinecraft\@\@QEBA_NAEBVBlockPos\@\@\@Z
     */
    MCAPI bool isEmpty_V010(class BlockPos const&) const; // NOLINT
    /**
     * @symbol ??4ScriptDimension\@ScriptModuleMinecraft\@\@QEAAAEAV01\@$$QEAV01\@\@Z
     */
    MCAPI class ScriptModuleMinecraft::ScriptDimension&
    operator=(class ScriptModuleMinecraft::ScriptDimension&&); // NOLINT
    /**
     * @symbol
     * ?runCommand\@ScriptDimension\@ScriptModuleMinecraft\@\@QEAA?AV?$Result\@V?$StrongTypedObjectHandle\@UScriptCommandResult\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Scripting\@\@AEAVDependencyLocator\@4\@AEBUContextConfig\@4\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class Scripting::Result<
        class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptCommandResult>>
    runCommand(class Scripting::DependencyLocator&, struct Scripting::ContextConfig const&, std::string const&); // NOLINT
    /**
     * @symbol
     * ?runCommandAsync\@ScriptDimension\@ScriptModuleMinecraft\@\@QEAA?AV?$Result\@V?$Promise\@V?$StrongTypedObjectHandle\@UScriptCommandResult\@ScriptModuleMinecraft\@\@\@Scripting\@\@UScriptCommandError\@ScriptModuleMinecraft\@\@X\@Scripting\@\@\@Scripting\@\@AEAVDependencyLocator\@4\@AEBUContextConfig\@4\@AEAVScriptObjectFactory\@4\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class Scripting::Result<class Scripting::Promise<
        class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptCommandResult>,
        struct ScriptModuleMinecraft::ScriptCommandError,
        void>>
    runCommandAsync(class Scripting::DependencyLocator&, struct Scripting::ContextConfig const&, class Scripting::ScriptObjectFactory&, std::string const&); // NOLINT
    /**
     * @symbol
     * ?runCommand_V010\@ScriptDimension\@ScriptModuleMinecraft\@\@QEAA?AV?$Result\@UJSON\@Scripting\@\@\@Scripting\@\@AEBUContextConfig\@4\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class Scripting::Result<struct Scripting::JSON>
    runCommand_V010(struct Scripting::ContextConfig const&, std::string const&); // NOLINT
    /**
     * @symbol ?setWeather\@ScriptDimension\@ScriptModuleMinecraft\@\@QEAAXW4ScriptWeatherType\@12\@\@Z
     */
    MCAPI void setWeather(enum class ScriptModuleMinecraft::ScriptDimension::ScriptWeatherType); // NOLINT
    /**
     * @symbol
     * ?spawnEntity\@ScriptDimension\@ScriptModuleMinecraft\@\@QEBA?AV?$Result\@V?$StrongTypedObjectHandle\@VScriptActor\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Scripting\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVVec3\@\@\@Z
     */
    MCAPI class Scripting::Result<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptActor>>
    spawnEntity(std::string const&, class Vec3 const&) const; // NOLINT
    /**
     * @symbol
     * ?spawnEntity_V010\@ScriptDimension\@ScriptModuleMinecraft\@\@QEBA?AV?$Result\@V?$StrongTypedObjectHandle\@VScriptActor\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Scripting\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV?$variant\@VBlockPos\@\@VVec3\@\@\@6\@\@Z
     */
    MCAPI class Scripting::Result<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptActor>>
    spawnEntity_V010(std::string const&, class std::variant<class BlockPos, class Vec3> const&) const; // NOLINT
    /**
     * @symbol
     * ?spawnItem\@ScriptDimension\@ScriptModuleMinecraft\@\@QEBA?AV?$Result\@V?$StrongTypedObjectHandle\@VScriptActor\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Scripting\@\@AEBVScriptItemStack\@2\@AEBVVec3\@\@\@Z
     */
    MCAPI class Scripting::Result<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptActor>>
    spawnItem(class ScriptModuleMinecraft::ScriptItemStack const&, class Vec3 const&) const; // NOLINT
    /**
     * @symbol
     * ?spawnItem_V010\@ScriptDimension\@ScriptModuleMinecraft\@\@QEBA?AV?$Result\@V?$StrongTypedObjectHandle\@VScriptActor\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Scripting\@\@AEBVScriptItemStack\@2\@AEBV?$variant\@VBlockPos\@\@VVec3\@\@\@std\@\@\@Z
     */
    MCAPI class Scripting::Result<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptActor>>
    spawnItem_V010(class ScriptModuleMinecraft::ScriptItemStack const&, class std::variant<class BlockPos, class Vec3> const&)
        const; // NOLINT
    /**
     * @symbol
     * ?spawnParticle\@ScriptDimension\@ScriptModuleMinecraft\@\@QEAA?AV?$Result\@X\@Scripting\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVVec3\@\@V?$StrongTypedObjectHandle\@VScriptMolangVariableMap\@ScriptModuleMinecraft\@\@\@4\@\@Z
     */
    MCAPI class Scripting::Result<void>
    spawnParticle(std::string const&, class Vec3 const&, class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptMolangVariableMap>); // NOLINT
    /**
     * @symbol
     * ?spawnParticle_V010\@ScriptDimension\@ScriptModuleMinecraft\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVVec3\@\@V?$StrongTypedObjectHandle\@VScriptMolangVariableMap\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Z
     */
    MCAPI void
    spawnParticle_V010(std::string const&, class Vec3 const&, class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptMolangVariableMap>); // NOLINT
    /**
     * @symbol
     * ?bind\@ScriptDimension\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@VScriptDimension\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptDimension> bind(); // NOLINT
    /**
     * @symbol
     * ?bindScriptWeatherType\@ScriptDimension\@ScriptModuleMinecraft\@\@SA?AV?$EnumBindingBuilder\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4ScriptWeatherType\@ScriptDimension\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::
        EnumBindingBuilder<std::string, enum class ScriptModuleMinecraft::ScriptDimension::ScriptWeatherType>
        bindScriptWeatherType(); // NOLINT
    /**
     * @symbol
     * ?getOrCreateHandle\@ScriptDimension\@ScriptModuleMinecraft\@\@SA?AV?$StrongTypedObjectHandle\@VScriptDimension\@ScriptModuleMinecraft\@\@\@Scripting\@\@V?$AutomaticID\@VDimension\@\@H\@\@AEAVLevel\@\@AEBVWeakLifetimeScope\@4\@\@Z
     */
    MCAPI static class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptDimension>
    getOrCreateHandle(class AutomaticID<class Dimension, int>, class Level&, class Scripting::WeakLifetimeScope const&); // NOLINT
    /**
     * @symbol
     * ?getOrCreateHandle\@ScriptDimension\@ScriptModuleMinecraft\@\@SA?AV?$StrongTypedObjectHandle\@VScriptDimension\@ScriptModuleMinecraft\@\@\@Scripting\@\@AEAVDimension\@\@AEBVWeakLifetimeScope\@4\@\@Z
     */
    MCAPI static class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptDimension>
    getOrCreateHandle(class Dimension&, class Scripting::WeakLifetimeScope const&); // NOLINT
};

}; // namespace ScriptModuleMinecraft
