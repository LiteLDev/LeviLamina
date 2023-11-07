#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/StackRefResultT.h"
#include "mc/common/wrapper/WeakRefT.h"
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/Promise.h"
#include "mc/external/scripting/Result.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"
#include "mc/external/scripting/TypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/ScriptActorLifetimeState.h"

// auto generated forward declare list
// clang-format off
class Actor;
class MobEffect;
class Scoreboard;
class Vec2;
class Vec3;
class WeakEntityRef;
namespace ScriptModuleMinecraft { class IComponentFactory; }
namespace ScriptModuleMinecraft { class ScriptActorComponent; }
namespace ScriptModuleMinecraft { class ScriptBlock; }
namespace ScriptModuleMinecraft { class ScriptBlockRaycastHit; }
namespace ScriptModuleMinecraft { class ScriptDimension; }
namespace ScriptModuleMinecraft { class ScriptEffectType; }
namespace ScriptModuleMinecraft { class ScriptEntityRaycastHit; }
namespace ScriptModuleMinecraft { class ScriptMobEffectInstance; }
namespace ScriptModuleMinecraft { class ScriptScoreboardIdentity; }
namespace ScriptModuleMinecraft { class ScriptVector; }
namespace ScriptModuleMinecraft { struct ScriptActorApplyDamageByProjectileOptions; }
namespace ScriptModuleMinecraft { struct ScriptActorApplyDamageOptions; }
namespace ScriptModuleMinecraft { struct ScriptActorQueryOptions; }
namespace ScriptModuleMinecraft { struct ScriptBlockRaycastOptions; }
namespace ScriptModuleMinecraft { struct ScriptCommandError; }
namespace ScriptModuleMinecraft { struct ScriptCommandResult; }
namespace ScriptModuleMinecraft { struct ScriptEntityEffectOptions; }
namespace ScriptModuleMinecraft { struct ScriptEntityRaycastOptions; }
namespace ScriptModuleMinecraft { struct ScriptPlayAnimationOptions; }
namespace ScriptModuleMinecraft { struct ScriptTeleportOptions; }
namespace ScriptModuleMinecraft { struct ScriptXYRotation; }
namespace Scripting { class ScriptObjectFactory; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ContextConfig; }
namespace Scripting { struct EngineError; }
namespace Scripting { struct Error; }
namespace Scripting { struct JSON; }
struct DynamicPropertyDefinition;
struct EntityRefTraits;
struct ScoreboardId;
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptActor {
public:
    // prevent constructor by default
    ScriptActor& operator=(ScriptActor const&);
    ScriptActor(ScriptActor const&);
    ScriptActor();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1ScriptActor@ScriptModuleMinecraft@@UEAA@XZ
    virtual ~ScriptActor();

    // vIndex: 1, symbol: ?setUnloaded@ScriptActor@ScriptModuleMinecraft@@UEAAXAEAVActor@@@Z
    virtual void setUnloaded(class Actor&);

    // vIndex: 2, symbol:
    // ?clearVelocity@ScriptActor@ScriptModuleMinecraft@@UEAA?AV?$Result@X$$V@Scripting@@AEAVActor@@@Z
    virtual class Scripting::Result<void> clearVelocity(class Actor&);

    // vIndex: 3, symbol:
    // ?getNameTag@ScriptActor@ScriptModuleMinecraft@@UEBA?AV?$Result@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@$$V@Scripting@@AEBVActor@@@Z
    virtual class Scripting::Result<std::string> getNameTag(class Actor const&) const;

    // vIndex: 4, symbol:
    // ?setNameTag@ScriptActor@ScriptModuleMinecraft@@UEAA?AV?$Result@X$$V@Scripting@@AEAVActor@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual class Scripting::Result<void> setNameTag(class Actor&, std::string const&);

    // vIndex: 5, symbol: ?getSneaking@ScriptActor@ScriptModuleMinecraft@@UEBA?AV?$Result@_N$$V@Scripting@@AEBVActor@@@Z
    virtual class Scripting::Result<bool> getSneaking(class Actor const&) const;

    // vIndex: 6, symbol:
    // ?setSneaking@ScriptActor@ScriptModuleMinecraft@@UEAA?AV?$Result@X$$V@Scripting@@AEAVActor@@_N@Z
    virtual class Scripting::Result<void> setSneaking(class Actor&, bool);

    // vIndex: 7, symbol:
    // ?applyImpulse@ScriptActor@ScriptModuleMinecraft@@UEAA?AV?$Result@X$$V@Scripting@@AEAVActor@@AEBVVec3@@@Z
    virtual class Scripting::Result<void> applyImpulse(class Actor&, class Vec3 const&);

    // vIndex: 8, symbol: ?remove@ScriptActor@ScriptModuleMinecraft@@UEAA?AV?$Result@X$$V@Scripting@@AEAVActor@@@Z
    virtual class Scripting::Result<void> remove(class Actor&);

    // vIndex: 9, symbol: ?_isValid@ScriptActor@ScriptModuleMinecraft@@MEBA_NXZ
    virtual bool _isValid() const;

    // vIndex: 10, symbol: ?_getScoreboardId@ScriptActor@ScriptModuleMinecraft@@MEBAAEBUScoreboardId@@AEBVScoreboard@@@Z
    virtual struct ScoreboardId const& _getScoreboardId(class Scoreboard const&) const;

    // symbol: ??0ScriptActor@ScriptModuleMinecraft@@QEAA@$$QEAV01@@Z
    MCAPI ScriptActor(class ScriptModuleMinecraft::ScriptActor&&);

    // symbol: ??0ScriptActor@ScriptModuleMinecraft@@QEAA@AEBVActor@@AEBVWeakLifetimeScope@Scripting@@@Z
    MCAPI ScriptActor(class Actor const&, class Scripting::WeakLifetimeScope const&);

    // symbol:
    // ?addEffect@ScriptActor@ScriptModuleMinecraft@@QEAA?AV?$Result@X$$V@Scripting@@AEAVActor@@AEBV?$variant@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$StrongTypedObjectHandle@VScriptEffectType@ScriptModuleMinecraft@@@Scripting@@@std@@HAEBV?$optional@UScriptEntityEffectOptions@ScriptModuleMinecraft@@@7@@Z
    MCAPI class Scripting::Result<void>
    addEffect(class Actor&, std::variant<std::string, class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptEffectType>> const&, int, std::optional<struct ScriptModuleMinecraft::ScriptEntityEffectOptions> const&);

    // symbol:
    // ?addEffect_V010@ScriptActor@ScriptModuleMinecraft@@QEAA?AV?$Result@X$$V@Scripting@@AEAVActor@@AEBVScriptEffectType@2@HH_N@Z
    MCAPI class Scripting::Result<void>
    addEffect_V010(class Actor&, class ScriptModuleMinecraft::ScriptEffectType const&, int, int, bool);

    // symbol:
    // ?addTag@ScriptActor@ScriptModuleMinecraft@@QEAA?AV?$Result@_N$$V@Scripting@@AEAVActor@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI class Scripting::Result<bool> addTag(class Actor&, std::string const&);

    // symbol:
    // ?addTag_010@ScriptActor@ScriptModuleMinecraft@@QEAA?AV?$Result@_N$$V@Scripting@@AEAVActor@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI class Scripting::Result<bool> addTag_010(class Actor&, std::string const&);

    // symbol:
    // ?applyDamage@ScriptActor@ScriptModuleMinecraft@@QEAA?AV?$Result@_N$$V@Scripting@@AEAVActor@@MAEBV?$optional@V?$variant@UScriptActorApplyDamageOptions@ScriptModuleMinecraft@@UScriptActorApplyDamageByProjectileOptions@2@@std@@@std@@@Z
    MCAPI class Scripting::Result<bool>
    applyDamage(class Actor&, float, std::optional<std::variant<struct ScriptModuleMinecraft::ScriptActorApplyDamageOptions, struct ScriptModuleMinecraft::ScriptActorApplyDamageByProjectileOptions>> const&);

    // symbol: ?applyKnockback@ScriptActor@ScriptModuleMinecraft@@QEAA?AV?$Result@X$$V@Scripting@@AEAVActor@@MMMM@Z
    MCAPI class Scripting::Result<void> applyKnockback(class Actor&, float, float, float, float);

    // symbol:
    // ?clearDynamicProperties@ScriptActor@ScriptModuleMinecraft@@QEAA?AV?$Result@X$$V@Scripting@@AEAVActor@@AEBUContextConfig@4@@Z
    MCAPI class Scripting::Result<void> clearDynamicProperties(class Actor&, struct Scripting::ContextConfig const&);

    // symbol:
    // ?extinguishFire@ScriptActor@ScriptModuleMinecraft@@QEAA?AV?$Result@_N$$V@Scripting@@AEAVActor@@V?$optional@_N@std@@@Z
    MCAPI class Scripting::Result<bool> extinguishFire(class Actor&, std::optional<bool>);

    // symbol:
    // ?getBlockFromViewDirection@ScriptActor@ScriptModuleMinecraft@@QEBA?AV?$Result@V?$optional@VScriptBlockRaycastHit@ScriptModuleMinecraft@@@std@@$$V@Scripting@@AEBVActor@@VWeakLifetimeScope@4@AEBV?$optional@UScriptBlockRaycastOptions@ScriptModuleMinecraft@@@std@@@Z
    MCAPI class Scripting::Result<std::optional<class ScriptModuleMinecraft::ScriptBlockRaycastHit>>
    getBlockFromViewDirection(class Actor const&, class Scripting::WeakLifetimeScope, std::optional<struct ScriptModuleMinecraft::ScriptBlockRaycastOptions> const&)
        const;

    // symbol:
    // ?getBlockFromViewVector_010@ScriptActor@ScriptModuleMinecraft@@QEBA?AV?$Result@V?$optional@V?$StrongTypedObjectHandle@VScriptBlock@ScriptModuleMinecraft@@@Scripting@@@std@@$$V@Scripting@@AEBVActor@@VWeakLifetimeScope@4@AEBV?$optional@UScriptBlockRaycastOptions@ScriptModuleMinecraft@@@std@@@Z
    MCAPI class Scripting::Result<
        std::optional<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlock>>>
    getBlockFromViewVector_010(class Actor const&, class Scripting::WeakLifetimeScope, std::optional<struct ScriptModuleMinecraft::ScriptBlockRaycastOptions> const&)
        const;

    // symbol:
    // ?getComponent@ScriptActor@ScriptModuleMinecraft@@QEAA?AV?$optional@V?$StrongTypedObjectHandle@VScriptActorComponent@ScriptModuleMinecraft@@@Scripting@@@std@@VWeakLifetimeScope@Scripting@@AEBV?$unordered_map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$unique_ptr@VIComponentFactory@ScriptModuleMinecraft@@U?$default_delete@VIComponentFactory@ScriptModuleMinecraft@@@std@@@2@U?$hash@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@U?$equal_to@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$unique_ptr@VIComponentFactory@ScriptModuleMinecraft@@U?$default_delete@VIComponentFactory@ScriptModuleMinecraft@@@std@@@2@@std@@@2@@4@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@@Z
    MCAPI std::optional<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptActorComponent>>
    getComponent(class Scripting::WeakLifetimeScope, std::unordered_map<std::string, std::unique_ptr<class ScriptModuleMinecraft::IComponentFactory>> const&, std::string const&);

    // symbol:
    // ?getDimension@ScriptActor@ScriptModuleMinecraft@@QEBA?AV?$Result@V?$StrongTypedObjectHandle@VScriptDimension@ScriptModuleMinecraft@@@Scripting@@$$V@Scripting@@AEBVActor@@@Z
    MCAPI class Scripting::Result<
        class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptDimension>>
    getDimension(class Actor const&) const;

    // symbol:
    // ?getDynamicProperty@ScriptActor@ScriptModuleMinecraft@@QEAA?AV?$Result@V?$optional@V?$variant@NM_NV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VVec3@@@std@@@std@@$$V@Scripting@@AEAVActor@@AEBUContextConfig@4@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI class Scripting::Result<std::optional<std::variant<double, float, bool, std::string, class Vec3>>>
    getDynamicProperty(class Actor&, struct Scripting::ContextConfig const&, std::string const&);

    // symbol:
    // ?getDynamicPropertyIds@ScriptActor@ScriptModuleMinecraft@@QEAA?AV?$Result@V?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@$$V@Scripting@@AEAVActor@@AEBUContextConfig@4@@Z
    MCAPI class Scripting::Result<std::vector<std::string>>
    getDynamicPropertyIds(class Actor&, struct Scripting::ContextConfig const&);

    // symbol:
    // ?getDynamicPropertyTotalByteCount@ScriptActor@ScriptModuleMinecraft@@QEAA?AV?$Result@H$$V@Scripting@@AEAVActor@@AEBUContextConfig@4@@Z
    MCAPI class Scripting::Result<int>
    getDynamicPropertyTotalByteCount(class Actor&, struct Scripting::ContextConfig const&);

    // symbol:
    // ?getDynamicProperty_V010@ScriptActor@ScriptModuleMinecraft@@QEAA?AV?$Result@V?$optional@V?$variant@NM_NV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VVec3@@@std@@@std@@$$V@Scripting@@AEAVActor@@AEBUContextConfig@4@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI class Scripting::Result<std::optional<std::variant<double, float, bool, std::string, class Vec3>>>
    getDynamicProperty_V010(class Actor&, struct Scripting::ContextConfig const&, std::string const&);

    // symbol:
    // ?getEffect@ScriptActor@ScriptModuleMinecraft@@QEBA?AV?$Result@V?$optional@V?$StrongTypedObjectHandle@VScriptMobEffectInstance@ScriptModuleMinecraft@@@Scripting@@@std@@$$V@Scripting@@AEBVActor@@AEBV?$variant@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$StrongTypedObjectHandle@VScriptEffectType@ScriptModuleMinecraft@@@Scripting@@@std@@@Z
    MCAPI class Scripting::Result<
        std::optional<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptMobEffectInstance>>>
    getEffect(class Actor const&, std::variant<std::string, class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptEffectType>> const&)
        const;

    // symbol:
    // ?getEffect_V010@ScriptActor@ScriptModuleMinecraft@@QEBA?AV?$Result@V?$optional@V?$StrongTypedObjectHandle@VScriptMobEffectInstance@ScriptModuleMinecraft@@@Scripting@@@std@@$$V@Scripting@@AEBVActor@@AEBVScriptEffectType@2@@Z
    MCAPI class Scripting::Result<
        std::optional<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptMobEffectInstance>>>
    getEffect_V010(class Actor const&, class ScriptModuleMinecraft::ScriptEffectType const&) const;

    // symbol:
    // ?getEffects@ScriptActor@ScriptModuleMinecraft@@QEBA?AV?$Result@V?$vector@V?$StrongTypedObjectHandle@VScriptMobEffectInstance@ScriptModuleMinecraft@@@Scripting@@V?$allocator@V?$StrongTypedObjectHandle@VScriptMobEffectInstance@ScriptModuleMinecraft@@@Scripting@@@std@@@std@@$$V@Scripting@@AEBVActor@@@Z
    MCAPI class Scripting::Result<
        std::vector<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptMobEffectInstance>>>
    getEffects(class Actor const&) const;

    // symbol:
    // ?getEntitiesFromViewDirection@ScriptActor@ScriptModuleMinecraft@@QEBA?AV?$Result@V?$vector@VScriptEntityRaycastHit@ScriptModuleMinecraft@@V?$allocator@VScriptEntityRaycastHit@ScriptModuleMinecraft@@@std@@@std@@$$V@Scripting@@AEBVActor@@VWeakLifetimeScope@4@AEBV?$optional@UScriptEntityRaycastOptions@ScriptModuleMinecraft@@@std@@@Z
    MCAPI class Scripting::Result<std::vector<class ScriptModuleMinecraft::ScriptEntityRaycastHit>>
    getEntitiesFromViewDirection(class Actor const&, class Scripting::WeakLifetimeScope, std::optional<struct ScriptModuleMinecraft::ScriptEntityRaycastOptions> const&)
        const;

    // symbol:
    // ?getEntitiesFromViewVector_010@ScriptActor@ScriptModuleMinecraft@@QEBA?AV?$Result@V?$vector@V?$StrongTypedObjectHandle@VScriptActor@ScriptModuleMinecraft@@@Scripting@@V?$allocator@V?$StrongTypedObjectHandle@VScriptActor@ScriptModuleMinecraft@@@Scripting@@@std@@@std@@$$V@Scripting@@AEBVActor@@VWeakLifetimeScope@4@AEBV?$optional@UScriptEntityRaycastOptions@ScriptModuleMinecraft@@@std@@@Z
    MCAPI class Scripting::Result<
        std::vector<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptActor>>>
    getEntitiesFromViewVector_010(class Actor const&, class Scripting::WeakLifetimeScope, std::optional<struct ScriptModuleMinecraft::ScriptEntityRaycastOptions> const&)
        const;

    // symbol: ?getFallDistance@ScriptActor@ScriptModuleMinecraft@@QEBA?AV?$Result@M$$V@Scripting@@AEBVActor@@@Z
    MCAPI class Scripting::Result<float> getFallDistance(class Actor const&) const;

    // symbol: ?getHeadLocation@ScriptActor@ScriptModuleMinecraft@@QEBA?AV?$Result@VVec3@@$$V@Scripting@@AEBVActor@@@Z
    MCAPI class Scripting::Result<class Vec3> getHeadLocation(class Actor const&) const;

    // symbol:
    // ?getHeadLocation_010@ScriptActor@ScriptModuleMinecraft@@QEBA?AV?$Result@VVec3@@$$V@Scripting@@AEBVActor@@@Z
    MCAPI class Scripting::Result<class Vec3> getHeadLocation_010(class Actor const&) const;

    // symbol:
    // ?getId@ScriptActor@ScriptModuleMinecraft@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string getId() const;

    // symbol:
    // ?getId_010@ScriptActor@ScriptModuleMinecraft@@QEBA?AV?$Result@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@$$V@Scripting@@AEBVActor@@@Z
    MCAPI class Scripting::Result<std::string> getId_010(class Actor const&) const;

    // symbol: ?getLifetimeState@ScriptActor@ScriptModuleMinecraft@@QEBA?AW4ScriptActorLifetimeState@2@XZ
    MCAPI ::ScriptModuleMinecraft::ScriptActorLifetimeState getLifetimeState() const;

    // symbol: ?getLocation@ScriptActor@ScriptModuleMinecraft@@QEBA?AV?$Result@VVec3@@$$V@Scripting@@AEBVActor@@@Z
    MCAPI class Scripting::Result<class Vec3> getLocation(class Actor const&) const;

    // symbol:
    // ?getProperty@ScriptActor@ScriptModuleMinecraft@@QEBA?AV?$Result@V?$optional@V?$variant@M_NV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@std@@$$V@Scripting@@AEBVActor@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI class Scripting::Result<std::optional<std::variant<float, bool, std::string>>>
    getProperty(class Actor const&, std::string const&) const;

    // symbol: ?getRotation@ScriptActor@ScriptModuleMinecraft@@QEBA?AV?$Result@VVec2@@$$V@Scripting@@AEBVActor@@@Z
    MCAPI class Scripting::Result<class Vec2> getRotation(class Actor const&) const;

    // symbol:
    // ?getRotation_V010@ScriptActor@ScriptModuleMinecraft@@QEBA?AV?$Result@UScriptXYRotation@ScriptModuleMinecraft@@$$V@Scripting@@AEBVActor@@@Z
    MCAPI class Scripting::Result<struct ScriptModuleMinecraft::ScriptXYRotation>
    getRotation_V010(class Actor const&) const;

    // symbol:
    // ?getScoreboardIdentity@ScriptActor@ScriptModuleMinecraft@@QEAA?AV?$optional@V?$StrongTypedObjectHandle@VScriptScoreboardIdentity@ScriptModuleMinecraft@@@Scripting@@@std@@XZ
    MCAPI std::optional<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptScoreboardIdentity>>
          getScoreboardIdentity();

    // symbol:
    // ?getTags@ScriptActor@ScriptModuleMinecraft@@QEBA?AV?$Result@V?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@$$V@Scripting@@AEBVActor@@@Z
    MCAPI class Scripting::Result<std::vector<std::string>> getTags(class Actor const&) const;

    // symbol:
    // ?getTarget@ScriptActor@ScriptModuleMinecraft@@QEBA?AV?$Result@V?$StrongTypedObjectHandle@VScriptActor@ScriptModuleMinecraft@@@Scripting@@$$V@Scripting@@AEBVActor@@@Z
    MCAPI class Scripting::Result<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptActor>>
    getTarget(class Actor const&) const;

    // symbol:
    // ?getTypeId@ScriptActor@ScriptModuleMinecraft@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string getTypeId() const;

    // symbol: ?getVelocity@ScriptActor@ScriptModuleMinecraft@@QEBA?AV?$Result@VVec3@@$$V@Scripting@@AEBVActor@@@Z
    MCAPI class Scripting::Result<class Vec3> getVelocity(class Actor const&) const;

    // symbol:
    // ?getVelocity_010@ScriptActor@ScriptModuleMinecraft@@QEBA?AV?$Result@VScriptVector@ScriptModuleMinecraft@@$$V@Scripting@@AEBVActor@@@Z
    MCAPI class Scripting::Result<class ScriptModuleMinecraft::ScriptVector> getVelocity_010(class Actor const&) const;

    // symbol: ?getViewDirection@ScriptActor@ScriptModuleMinecraft@@QEBA?AV?$Result@VVec3@@$$V@Scripting@@AEBVActor@@@Z
    MCAPI class Scripting::Result<class Vec3> getViewDirection(class Actor const&) const;

    // symbol:
    // ?getViewVector_010@ScriptActor@ScriptModuleMinecraft@@QEBA?AV?$Result@VScriptVector@ScriptModuleMinecraft@@$$V@Scripting@@AEBVActor@@@Z
    MCAPI class Scripting::Result<class ScriptModuleMinecraft::ScriptVector>
    getViewVector_010(class Actor const&) const;

    // symbol: ?getWeakEntity@ScriptActor@ScriptModuleMinecraft@@QEBA?AV?$WeakRefT@UEntityRefTraits@@@@XZ
    MCAPI class WeakRefT<struct EntityRefTraits> getWeakEntity() const;

    // symbol:
    // ?hasTag@ScriptActor@ScriptModuleMinecraft@@QEBA?AV?$Result@_N$$V@Scripting@@AEBVActor@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI class Scripting::Result<bool> hasTag(class Actor const&, std::string const&) const;

    // symbol: ?isClimbing@ScriptActor@ScriptModuleMinecraft@@QEBA?AV?$Result@_N$$V@Scripting@@AEBVActor@@@Z
    MCAPI class Scripting::Result<bool> isClimbing(class Actor const&) const;

    // symbol: ?isFalling@ScriptActor@ScriptModuleMinecraft@@QEBA?AV?$Result@_N$$V@Scripting@@AEBVActor@@@Z
    MCAPI class Scripting::Result<bool> isFalling(class Actor const&) const;

    // symbol: ?isInWater@ScriptActor@ScriptModuleMinecraft@@QEBA?AV?$Result@_N$$V@Scripting@@AEBVActor@@@Z
    MCAPI class Scripting::Result<bool> isInWater(class Actor const&) const;

    // symbol: ?isOnGround@ScriptActor@ScriptModuleMinecraft@@QEBA?AV?$Result@_N$$V@Scripting@@AEBVActor@@@Z
    MCAPI class Scripting::Result<bool> isOnGround(class Actor const&) const;

    // symbol: ?isSleeping@ScriptActor@ScriptModuleMinecraft@@QEBA?AV?$Result@_N$$V@Scripting@@AEBVActor@@@Z
    MCAPI class Scripting::Result<bool> isSleeping(class Actor const&) const;

    // symbol: ?isSprinting@ScriptActor@ScriptModuleMinecraft@@QEBA?AV?$Result@_N$$V@Scripting@@AEBVActor@@@Z
    MCAPI class Scripting::Result<bool> isSprinting(class Actor const&) const;

    // symbol: ?isSwimming@ScriptActor@ScriptModuleMinecraft@@QEBA?AV?$Result@_N$$V@Scripting@@AEBVActor@@@Z
    MCAPI class Scripting::Result<bool> isSwimming(class Actor const&) const;

    // symbol: ?kill@ScriptActor@ScriptModuleMinecraft@@QEAA?AV?$Result@_N$$V@Scripting@@AEAVActor@@@Z
    MCAPI class Scripting::Result<bool> kill(class Actor&);

    // symbol: ?kill_010@ScriptActor@ScriptModuleMinecraft@@QEAA?AV?$Result@X$$V@Scripting@@AEAVActor@@@Z
    MCAPI class Scripting::Result<void> kill_010(class Actor&);

    // symbol:
    // ?matches@ScriptActor@ScriptModuleMinecraft@@QEBA?AV?$Result@_N$$V@Scripting@@AEBVActor@@UScriptActorQueryOptions@2@@Z
    MCAPI class Scripting::Result<bool>
    matches(class Actor const&, struct ScriptModuleMinecraft::ScriptActorQueryOptions) const;

    // symbol: ??4ScriptActor@ScriptModuleMinecraft@@QEAAAEAV01@$$QEAV01@@Z
    MCAPI class ScriptModuleMinecraft::ScriptActor& operator=(class ScriptModuleMinecraft::ScriptActor&&);

    // symbol:
    // ?playAnimation@ScriptActor@ScriptModuleMinecraft@@QEAA?AV?$Result@X$$V@Scripting@@AEAVActor@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$optional@UScriptPlayAnimationOptions@ScriptModuleMinecraft@@@7@@Z
    MCAPI class Scripting::Result<void>
    playAnimation(class Actor&, std::string const&, std::optional<struct ScriptModuleMinecraft::ScriptPlayAnimationOptions> const&);

    // symbol:
    // ?removeDynamicProperty_V010@ScriptActor@ScriptModuleMinecraft@@QEAA?AV?$Result@_N$$V@Scripting@@AEAVActor@@AEBUContextConfig@4@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI class Scripting::Result<bool>
    removeDynamicProperty_V010(class Actor&, struct Scripting::ContextConfig const&, std::string const&);

    // symbol:
    // ?removeEffect@ScriptActor@ScriptModuleMinecraft@@QEAA?AV?$Result@_N$$V@Scripting@@AEAVActor@@AEBV?$variant@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$StrongTypedObjectHandle@VScriptEffectType@ScriptModuleMinecraft@@@Scripting@@@std@@@Z
    MCAPI class Scripting::Result<bool>
    removeEffect(class Actor&, std::variant<std::string, class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptEffectType>> const&);

    // symbol:
    // ?removeTag@ScriptActor@ScriptModuleMinecraft@@QEAA?AV?$Result@_N$$V@Scripting@@AEAVActor@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI class Scripting::Result<bool> removeTag(class Actor&, std::string const&);

    // symbol:
    // ?resetProperty@ScriptActor@ScriptModuleMinecraft@@QEAA?AV?$Result@V?$variant@M_NV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@UEngineError@Scripting@@UError@4@@Scripting@@AEAVActor@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI class Scripting::
        Result<std::variant<float, bool, std::string>, struct Scripting::EngineError, struct Scripting::Error>
        resetProperty(class Actor&, std::string const&);

    // symbol:
    // ?runCommand@ScriptActor@ScriptModuleMinecraft@@QEAA?AV?$Result@V?$StrongTypedObjectHandle@UScriptCommandResult@ScriptModuleMinecraft@@@Scripting@@UScriptCommandError@ScriptModuleMinecraft@@UError@2@@Scripting@@AEAVActor@@AEBUContextConfig@4@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI class Scripting::Result<
        class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptCommandResult>,
        struct ScriptModuleMinecraft::ScriptCommandError,
        struct Scripting::Error>
    runCommand(class Actor&, struct Scripting::ContextConfig const&, std::string const&);

    // symbol:
    // ?runCommandAsync@ScriptActor@ScriptModuleMinecraft@@QEAA?AV?$Result@V?$Promise@V?$StrongTypedObjectHandle@UScriptCommandResult@ScriptModuleMinecraft@@@Scripting@@UScriptCommandError@ScriptModuleMinecraft@@X@Scripting@@$$V@Scripting@@AEAVActor@@AEBUContextConfig@4@AEAVScriptObjectFactory@4@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI class Scripting::Result<class Scripting::Promise<
        class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptCommandResult>,
        struct ScriptModuleMinecraft::ScriptCommandError,
        void>>
    runCommandAsync(class Actor&, struct Scripting::ContextConfig const&, class Scripting::ScriptObjectFactory&, std::string const&);

    // symbol:
    // ?runCommand_V010@ScriptActor@ScriptModuleMinecraft@@QEAA?AV?$Result@UJSON@Scripting@@$$V@Scripting@@AEAVActor@@AEBUContextConfig@4@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI class Scripting::Result<struct Scripting::JSON>
    runCommand_V010(class Actor&, struct Scripting::ContextConfig const&, std::string const&);

    // symbol:
    // ?setDynamicProperty@ScriptActor@ScriptModuleMinecraft@@QEAA?AV?$Result@X$$V@Scripting@@AEAVActor@@AEBUContextConfig@4@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$optional@V?$variant@NM_NV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VVec3@@@std@@@8@@Z
    MCAPI class Scripting::Result<void>
    setDynamicProperty(class Actor&, struct Scripting::ContextConfig const&, std::string const&, std::optional<std::variant<double, float, bool, std::string, class Vec3>> const&);

    // symbol:
    // ?setDynamicProperty_V010@ScriptActor@ScriptModuleMinecraft@@QEAA?AV?$Result@X$$V@Scripting@@AEAVActor@@AEBUContextConfig@4@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$variant@NM_NV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VVec3@@@8@@Z
    MCAPI class Scripting::Result<void>
    setDynamicProperty_V010(class Actor&, struct Scripting::ContextConfig const&, std::string const&, std::variant<double, float, bool, std::string, class Vec3>&);

    // symbol: ?setLoaded@ScriptActor@ScriptModuleMinecraft@@QEAAXXZ
    MCAPI void setLoaded();

    // symbol: ?setLoading@ScriptActor@ScriptModuleMinecraft@@QEAAXAEBVActor@@@Z
    MCAPI void setLoading(class Actor const&);

    // symbol:
    // ?setOnFire@ScriptActor@ScriptModuleMinecraft@@QEAA?AV?$Result@_N$$V@Scripting@@AEAVActor@@HV?$optional@_N@std@@@Z
    MCAPI class Scripting::Result<bool> setOnFire(class Actor&, int, std::optional<bool>);

    // symbol:
    // ?setProperty@ScriptActor@ScriptModuleMinecraft@@QEAA?AV?$Result@X$$V@Scripting@@AEAVActor@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$variant@M_NV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@7@@Z
    MCAPI class Scripting::Result<void>
    setProperty(class Actor&, std::string const&, std::variant<float, bool, std::string> const&);

    // symbol: ?setRemoved@ScriptActor@ScriptModuleMinecraft@@QEAAXXZ
    MCAPI void setRemoved();

    // symbol: ?setRotation@ScriptActor@ScriptModuleMinecraft@@QEAA?AV?$Result@X$$V@Scripting@@AEAVActor@@VVec2@@@Z
    MCAPI class Scripting::Result<void> setRotation(class Actor&, class Vec2);

    // symbol: ?setRotation_V010@ScriptActor@ScriptModuleMinecraft@@QEAA?AV?$Result@X$$V@Scripting@@AEAVActor@@MM@Z
    MCAPI class Scripting::Result<void> setRotation_V010(class Actor&, float, float);

    // symbol: ?setTarget@ScriptActor@ScriptModuleMinecraft@@QEAA?AV?$Result@X$$V@Scripting@@AEAVActor@@AEAV12@@Z
    MCAPI class Scripting::Result<void> setTarget(class Actor&, class ScriptModuleMinecraft::ScriptActor&);

    // symbol:
    // ?setVelocity_010@ScriptActor@ScriptModuleMinecraft@@QEAA?AV?$Result@X$$V@Scripting@@AEAVActor@@AEBVScriptVector@2@@Z
    MCAPI class Scripting::Result<void> setVelocity_010(class Actor&, class ScriptModuleMinecraft::ScriptVector const&);

    // symbol:
    // ?teleport@ScriptActor@ScriptModuleMinecraft@@QEAA?AV?$Result@X$$V@Scripting@@AEAVActor@@AEBVVec3@@AEBV?$optional@UScriptTeleportOptions@ScriptModuleMinecraft@@@std@@@Z
    MCAPI class Scripting::Result<void>
    teleport(class Actor&, class Vec3 const&, std::optional<struct ScriptModuleMinecraft::ScriptTeleportOptions> const&);

    // symbol:
    // ?teleportFacing_V010@ScriptActor@ScriptModuleMinecraft@@QEAA?AV?$Result@X$$V@Scripting@@AEAVActor@@AEBVVec3@@AEAVScriptDimension@2@1_N@Z
    MCAPI class Scripting::Result<void> teleportFacing_V010(
        class Actor&,
        class Vec3 const&,
        class ScriptModuleMinecraft::ScriptDimension&,
        class Vec3 const&,
        bool
    );

    // symbol:
    // ?teleport_V010@ScriptActor@ScriptModuleMinecraft@@QEAA?AV?$Result@X$$V@Scripting@@AEAVActor@@AEBVVec3@@AEAVScriptDimension@2@MM_N@Z
    MCAPI class Scripting::Result<void>
    teleport_V010(class Actor&, class Vec3 const&, class ScriptModuleMinecraft::ScriptDimension&, float, float, bool);

    // symbol:
    // ?triggerEvent@ScriptActor@ScriptModuleMinecraft@@QEAA?AV?$Result@X$$V@Scripting@@AEAVActor@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI class Scripting::Result<void> triggerEvent(class Actor&, std::string const&);

    // symbol:
    // ?triggerEvent_V010@ScriptActor@ScriptModuleMinecraft@@QEAA?AV?$Result@X$$V@Scripting@@AEAVActor@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI class Scripting::Result<void> triggerEvent_V010(class Actor&, std::string const&);

    // symbol: ?tryGetActor@ScriptActor@ScriptModuleMinecraft@@QEBAPEAVActor@@XZ
    MCAPI class Actor* tryGetActor() const;

    // symbol:
    // ?tryTeleport@ScriptActor@ScriptModuleMinecraft@@QEAA?AV?$Result@_N$$V@Scripting@@AEAVActor@@AEBVVec3@@AEBV?$optional@UScriptTeleportOptions@ScriptModuleMinecraft@@@std@@@Z
    MCAPI class Scripting::Result<bool>
    tryTeleport(class Actor&, class Vec3 const&, std::optional<struct ScriptModuleMinecraft::ScriptTeleportOptions> const&);

    // symbol:
    // ?bind@ScriptActor@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@VScriptActor@ScriptModuleMinecraft@@@Scripting@@AEAV?$unordered_map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$unique_ptr@VIComponentFactory@ScriptModuleMinecraft@@U?$default_delete@VIComponentFactory@ScriptModuleMinecraft@@@std@@@2@U?$hash@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@U?$equal_to@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$unique_ptr@VIComponentFactory@ScriptModuleMinecraft@@U?$default_delete@VIComponentFactory@ScriptModuleMinecraft@@@std@@@2@@std@@@2@@std@@@Z
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptActor>
    bind(std::unordered_map<std::string, std::unique_ptr<class ScriptModuleMinecraft::IComponentFactory>>&);

    // symbol:
    // ?getHandle@ScriptActor@ScriptModuleMinecraft@@SA?AV?$StrongTypedObjectHandle@VScriptActor@ScriptModuleMinecraft@@@Scripting@@PEBVActor@@AEBVWeakLifetimeScope@4@@Z
    MCAPI static class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptActor>
    getHandle(class Actor const*, class Scripting::WeakLifetimeScope const&);

    // symbol:
    // ?getHandle@ScriptActor@ScriptModuleMinecraft@@SA?AV?$StrongTypedObjectHandle@VScriptActor@ScriptModuleMinecraft@@@Scripting@@V?$StackRefResultT@UEntityRefTraits@@@@AEBVWeakLifetimeScope@4@@Z
    MCAPI static class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptActor>
    getHandle(class StackRefResultT<struct EntityRefTraits>, class Scripting::WeakLifetimeScope const&);

    // symbol:
    // ?getHandle@ScriptActor@ScriptModuleMinecraft@@SA?AV?$StrongTypedObjectHandle@VScriptActor@ScriptModuleMinecraft@@@Scripting@@VWeakEntityRef@@AEBVWeakLifetimeScope@4@@Z
    MCAPI static class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptActor>
    getHandle(class WeakEntityRef, class Scripting::WeakLifetimeScope const&);

    // symbol:
    // ?tryGetActor@ScriptActor@ScriptModuleMinecraft@@SAPEAVActor@@AEBU?$TypedObjectHandle@VScriptActor@ScriptModuleMinecraft@@@Scripting@@AEBVWeakLifetimeScope@5@@Z
    MCAPI static class Actor*
    tryGetActor(struct Scripting::TypedObjectHandle<class ScriptModuleMinecraft::ScriptActor> const&, class Scripting::WeakLifetimeScope const&);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol:
    // ?_applyDamage@ScriptActor@ScriptModuleMinecraft@@IEAA?AV?$Result@_N$$V@Scripting@@AEAVActor@@MAEBUScriptActorApplyDamageOptions@2@@Z
    MCAPI class Scripting::Result<bool>
    _applyDamage(class Actor&, float, struct ScriptModuleMinecraft::ScriptActorApplyDamageOptions const&);

    // symbol:
    // ?_applyProjectileDamage@ScriptActor@ScriptModuleMinecraft@@IEAA?AV?$Result@_N$$V@Scripting@@AEAVActor@@MAEBUScriptActorApplyDamageByProjectileOptions@2@@Z
    MCAPI class Scripting::Result<bool>
    _applyProjectileDamage(class Actor&, float, struct ScriptModuleMinecraft::ScriptActorApplyDamageByProjectileOptions const&);

    // symbol:
    // ?_getDynamicPropertyDefinition@ScriptActor@ScriptModuleMinecraft@@IEBAPEBUDynamicPropertyDefinition@@AEAVActor@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI struct DynamicPropertyDefinition const* _getDynamicPropertyDefinition(class Actor&, std::string const&) const;

    // symbol:
    // ?_getEffectHelper@ScriptActor@ScriptModuleMinecraft@@IEBAPEBVMobEffect@@AEBV?$variant@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$StrongTypedObjectHandle@VScriptEffectType@ScriptModuleMinecraft@@@Scripting@@@std@@@Z
    MCAPI class MobEffect const*
    _getEffectHelper(std::variant<
                     std::string,
                     class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptEffectType>> const&)
        const;

    // symbol:
    // ?_teleport@ScriptActor@ScriptModuleMinecraft@@IEAA?AV?$Result@_N$$V@Scripting@@AEAVActor@@AEBVVec3@@AEBV?$optional@UScriptTeleportOptions@ScriptModuleMinecraft@@@std@@_N@Z
    MCAPI class Scripting::Result<bool> _teleport(
        class Actor&,
        class Vec3 const&,
        std::optional<struct ScriptModuleMinecraft::ScriptTeleportOptions> const&,
        bool
    );

    // symbol:
    // ?_validateDynamicProperty_V010@ScriptActor@ScriptModuleMinecraft@@IEAA?AV?$optional@UError@Scripting@@@std@@AEAVActor@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@PEBV?$variant@NM_NV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VVec3@@@4@1@Z
    MCAPI std::optional<struct Scripting::Error>
    _validateDynamicProperty_V010(class Actor&, std::string const&, std::variant<double, float, bool, std::string, class Vec3> const*, std::string const&);

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
