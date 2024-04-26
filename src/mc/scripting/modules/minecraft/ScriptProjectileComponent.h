#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/Result.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/ScriptActorComponent.h"

// auto generated forward declare list
// clang-format off
class Vec3;
namespace ScriptModuleMinecraft { class ScriptActor; }
namespace ScriptModuleMinecraft { class ScriptActorComponent; }
namespace ScriptModuleMinecraft { class ScriptComponentTypeEnumBuilder; }
namespace ScriptModuleMinecraft { struct ScriptProjectileShootOptions; }
namespace Scripting { struct Error; }
namespace Scripting { struct InvalidArgumentError; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptProjectileComponent : public ::ScriptModuleMinecraft::ScriptActorComponent {
public:
    // prevent constructor by default
    ScriptProjectileComponent& operator=(ScriptProjectileComponent const&);
    ScriptProjectileComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ScriptProjectileComponent@ScriptModuleMinecraft@@UEAA@XZ
    virtual ~ScriptProjectileComponent() = default;

    // vIndex: 1, symbol: ?_isValid@ScriptProjectileComponent@ScriptModuleMinecraft@@MEBA_NXZ
    virtual bool _isValid() const;

    // symbol: ??0ScriptProjectileComponent@ScriptModuleMinecraft@@QEAA@AEBV01@@Z
    MCAPI ScriptProjectileComponent(class ScriptModuleMinecraft::ScriptProjectileComponent const&);

    // symbol: ?getAirInertia@ScriptProjectileComponent@ScriptModuleMinecraft@@QEBA?AV?$Result@M$$V@Scripting@@XZ
    MCAPI class Scripting::Result<float> getAirInertia() const;

    // symbol: ?getCatchFireOnHurt@ScriptProjectileComponent@ScriptModuleMinecraft@@QEBA?AV?$Result@_N$$V@Scripting@@XZ
    MCAPI class Scripting::Result<bool> getCatchFireOnHurt() const;

    // symbol:
    // ?getCritParticlesOnProjectileHurt@ScriptProjectileComponent@ScriptModuleMinecraft@@QEBA?AV?$Result@_N$$V@Scripting@@XZ
    MCAPI class Scripting::Result<bool> getCritParticlesOnProjectileHurt() const;

    // symbol:
    // ?getDestroyOnProjectileHurt@ScriptProjectileComponent@ScriptModuleMinecraft@@QEBA?AV?$Result@_N$$V@Scripting@@XZ
    MCAPI class Scripting::Result<bool> getDestroyOnProjectileHurt() const;

    // symbol: ?getGravity@ScriptProjectileComponent@ScriptModuleMinecraft@@QEBA?AV?$Result@M$$V@Scripting@@XZ
    MCAPI class Scripting::Result<float> getGravity() const;

    // symbol:
    // ?getHitEntitySound@ScriptProjectileComponent@ScriptModuleMinecraft@@QEBA?AV?$Result@V?$optional@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@$$V@Scripting@@XZ
    MCAPI class Scripting::Result<std::optional<std::string>> getHitEntitySound() const;

    // symbol:
    // ?getHitGroundSound@ScriptProjectileComponent@ScriptModuleMinecraft@@QEBA?AV?$Result@V?$optional@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@$$V@Scripting@@XZ
    MCAPI class Scripting::Result<std::optional<std::string>> getHitGroundSound() const;

    // symbol:
    // ?getHitParticle@ScriptProjectileComponent@ScriptModuleMinecraft@@QEBA?AV?$Result@V?$optional@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@$$V@Scripting@@XZ
    MCAPI class Scripting::Result<std::optional<std::string>> getHitParticle() const;

    // symbol:
    // ?getLightningStrikeOnHit@ScriptProjectileComponent@ScriptModuleMinecraft@@QEBA?AV?$Result@_N$$V@Scripting@@XZ
    MCAPI class Scripting::Result<bool> getLightningStrikeOnHit() const;

    // symbol: ?getLiquidInertia@ScriptProjectileComponent@ScriptModuleMinecraft@@QEBA?AV?$Result@M$$V@Scripting@@XZ
    MCAPI class Scripting::Result<float> getLiquidInertia() const;

    // symbol: ?getOnFireTime@ScriptProjectileComponent@ScriptModuleMinecraft@@QEBA?AV?$Result@M$$V@Scripting@@XZ
    MCAPI class Scripting::Result<float> getOnFireTime() const;

    // symbol:
    // ?getOwner@ScriptProjectileComponent@ScriptModuleMinecraft@@QEBA?AV?$Result@V?$optional@V?$StrongTypedObjectHandle@VScriptActor@ScriptModuleMinecraft@@@Scripting@@@std@@$$V@Scripting@@XZ
    MCAPI class Scripting::Result<
        std::optional<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptActor>>>
    getOwner() const;

    // symbol:
    // ?getShouldBounceOnHit@ScriptProjectileComponent@ScriptModuleMinecraft@@QEBA?AV?$Result@_N$$V@Scripting@@XZ
    MCAPI class Scripting::Result<bool> getShouldBounceOnHit() const;

    // symbol: ?getStopOnHit@ScriptProjectileComponent@ScriptModuleMinecraft@@QEBA?AV?$Result@_N$$V@Scripting@@XZ
    MCAPI class Scripting::Result<bool> getStopOnHit() const;

    // symbol: ?setAirInertia@ScriptProjectileComponent@ScriptModuleMinecraft@@QEAA?AV?$Result@X$$V@Scripting@@M@Z
    MCAPI class Scripting::Result<void> setAirInertia(float);

    // symbol: ?setCatchFireOnHurt@ScriptProjectileComponent@ScriptModuleMinecraft@@QEAA?AV?$Result@X$$V@Scripting@@_N@Z
    MCAPI class Scripting::Result<void> setCatchFireOnHurt(bool);

    // symbol:
    // ?setCritParticlesOnProjectileHurt@ScriptProjectileComponent@ScriptModuleMinecraft@@QEAA?AV?$Result@X$$V@Scripting@@_N@Z
    MCAPI class Scripting::Result<void> setCritParticlesOnProjectileHurt(bool);

    // symbol:
    // ?setDestroyOnProjectileHurt@ScriptProjectileComponent@ScriptModuleMinecraft@@QEAA?AV?$Result@X$$V@Scripting@@_N@Z
    MCAPI class Scripting::Result<void> setDestroyOnProjectileHurt(bool);

    // symbol: ?setGravity@ScriptProjectileComponent@ScriptModuleMinecraft@@QEAA?AV?$Result@X$$V@Scripting@@M@Z
    MCAPI class Scripting::Result<void> setGravity(float);

    // symbol:
    // ?setHitEntitySound@ScriptProjectileComponent@ScriptModuleMinecraft@@QEAA?AV?$Result@XUInvalidArgumentError@Scripting@@UError@2@@Scripting@@AEBV?$optional@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@Z
    MCAPI class Scripting::Result<void, struct Scripting::InvalidArgumentError, struct Scripting::Error>
    setHitEntitySound(std::optional<std::string> const&);

    // symbol:
    // ?setHitGroundSound@ScriptProjectileComponent@ScriptModuleMinecraft@@QEAA?AV?$Result@XUInvalidArgumentError@Scripting@@UError@2@@Scripting@@AEBV?$optional@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@Z
    MCAPI class Scripting::Result<void, struct Scripting::InvalidArgumentError, struct Scripting::Error>
    setHitGroundSound(std::optional<std::string> const&);

    // symbol:
    // ?setHitParticle@ScriptProjectileComponent@ScriptModuleMinecraft@@QEAA?AV?$Result@XUInvalidArgumentError@Scripting@@UError@2@@Scripting@@AEBV?$optional@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@Z
    MCAPI class Scripting::Result<void, struct Scripting::InvalidArgumentError, struct Scripting::Error>
    setHitParticle(std::optional<std::string> const&);

    // symbol:
    // ?setLightningStrikeOnHit@ScriptProjectileComponent@ScriptModuleMinecraft@@QEAA?AV?$Result@X$$V@Scripting@@_N@Z
    MCAPI class Scripting::Result<void> setLightningStrikeOnHit(bool);

    // symbol: ?setLiquidInertia@ScriptProjectileComponent@ScriptModuleMinecraft@@QEAA?AV?$Result@X$$V@Scripting@@M@Z
    MCAPI class Scripting::Result<void> setLiquidInertia(float);

    // symbol: ?setOnFireTime@ScriptProjectileComponent@ScriptModuleMinecraft@@QEAA?AV?$Result@X$$V@Scripting@@M@Z
    MCAPI class Scripting::Result<void> setOnFireTime(float);

    // symbol:
    // ?setOwner@ScriptProjectileComponent@ScriptModuleMinecraft@@QEAA?AV?$Result@X$$V@Scripting@@AEBV?$optional@V?$StrongTypedObjectHandle@VScriptActor@ScriptModuleMinecraft@@@Scripting@@@std@@@Z
    MCAPI class Scripting::Result<void>
    setOwner(std::optional<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptActor>> const&);

    // symbol:
    // ?setShouldBounceOnHit@ScriptProjectileComponent@ScriptModuleMinecraft@@QEAA?AV?$Result@X$$V@Scripting@@_N@Z
    MCAPI class Scripting::Result<void> setShouldBounceOnHit(bool);

    // symbol: ?setStopOnHit@ScriptProjectileComponent@ScriptModuleMinecraft@@QEAA?AV?$Result@X$$V@Scripting@@_N@Z
    MCAPI class Scripting::Result<void> setStopOnHit(bool);

    // symbol:
    // ?shoot@ScriptProjectileComponent@ScriptModuleMinecraft@@QEAA?AV?$Result@X$$V@Scripting@@AEBVVec3@@AEBV?$optional@UScriptProjectileShootOptions@ScriptModuleMinecraft@@@std@@@Z
    MCAPI class Scripting::Result<void>
    shoot(class Vec3 const&, std::optional<struct ScriptModuleMinecraft::ScriptProjectileShootOptions> const&);

    // symbol:
    // ?bind@ScriptProjectileComponent@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@VScriptProjectileComponent@ScriptModuleMinecraft@@@Scripting@@AEAVScriptComponentTypeEnumBuilder@2@@Z
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptProjectileComponent>
    bind(class ScriptModuleMinecraft::ScriptComponentTypeEnumBuilder&);

    // symbol: ?ComponentId@ScriptProjectileComponent@ScriptModuleMinecraft@@2PEBDEB
    MCAPI static char const* ComponentId;

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
