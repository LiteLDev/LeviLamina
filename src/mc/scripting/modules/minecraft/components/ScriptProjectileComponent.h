#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/external/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/external/scripting/runtime/Result.h"
#include "mc/scripting/modules/minecraft/components/ScriptActorComponent.h"

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
    ScriptProjectileComponent(ScriptProjectileComponent const&);
    ScriptProjectileComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptProjectileComponent() = default;

    // vIndex: 1
    virtual bool _isValid() const;

    MCAPI class Scripting::Result<float> getAirInertia() const;

    MCAPI class Scripting::Result<bool> getCatchFireOnHurt() const;

    MCAPI class Scripting::Result<bool> getCritParticlesOnProjectileHurt() const;

    MCAPI class Scripting::Result<bool> getDestroyOnProjectileHurt() const;

    MCAPI class Scripting::Result<float> getGravity() const;

    MCAPI class Scripting::Result<std::optional<std::string>> getHitEntitySound() const;

    MCAPI class Scripting::Result<std::optional<std::string>> getHitGroundSound() const;

    MCAPI class Scripting::Result<std::optional<std::string>> getHitParticle() const;

    MCAPI class Scripting::Result<bool> getLightningStrikeOnHit() const;

    MCAPI class Scripting::Result<float> getLiquidInertia() const;

    MCAPI class Scripting::Result<float> getOnFireTime() const;

    MCAPI class Scripting::Result<
        std::optional<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptActor>>>
    getOwner() const;

    MCAPI class Scripting::Result<bool> getShouldBounceOnHit() const;

    MCAPI class Scripting::Result<bool> getStopOnHit() const;

    MCAPI class Scripting::Result<void> setAirInertia(float value);

    MCAPI class Scripting::Result<void> setCatchFireOnHurt(bool value);

    MCAPI class Scripting::Result<void> setCritParticlesOnProjectileHurt(bool value);

    MCAPI class Scripting::Result<void> setDestroyOnProjectileHurt(bool value);

    MCAPI class Scripting::Result<void> setGravity(float value);

    MCAPI class Scripting::Result<void, struct Scripting::InvalidArgumentError, struct Scripting::Error>
    setHitEntitySound(std::optional<std::string> const& value);

    MCAPI class Scripting::Result<void, struct Scripting::InvalidArgumentError, struct Scripting::Error>
    setHitGroundSound(std::optional<std::string> const& value);

    MCAPI class Scripting::Result<void, struct Scripting::InvalidArgumentError, struct Scripting::Error>
    setHitParticle(std::optional<std::string> const& value);

    MCAPI class Scripting::Result<void> setLightningStrikeOnHit(bool value);

    MCAPI class Scripting::Result<void> setLiquidInertia(float value);

    MCAPI class Scripting::Result<void> setOnFireTime(float value);

    MCAPI class Scripting::Result<void>
    setOwner(std::optional<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptActor>> const&
                 scriptActor);

    MCAPI class Scripting::Result<void> setShouldBounceOnHit(bool value);

    MCAPI class Scripting::Result<void> setStopOnHit(bool value);

    MCAPI class Scripting::Result<void> shoot(
        class Vec3 const&                                                                velocity,
        std::optional<struct ScriptModuleMinecraft::ScriptProjectileShootOptions> const& options
    );

    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptProjectileComponent>
    bind(class ScriptModuleMinecraft::ScriptComponentTypeEnumBuilder& componentTypeEnumBuilder);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI bool _isValid$() const;

    MCAPI static char const* const& ComponentId();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
