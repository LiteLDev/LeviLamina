#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/external/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/external/scripting/runtime/Result.h"
#include "mc/external/scripting/runtime/Result_deprecated.h"
#include "mc/scripting/modules/minecraft/components/ScriptActorComponent.h"

// auto generated forward declare list
// clang-format off
class Vec3;
namespace ScriptModuleMinecraft { class ScriptActor; }
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
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual bool _isValid() const /*override*/;

    // vIndex: 0
    virtual ~ScriptProjectileComponent() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::Scripting::Result_deprecated<float> getAirInertia() const;

    MCAPI ::Scripting::Result_deprecated<bool> getCatchFireOnHurt() const;

    MCAPI ::Scripting::Result_deprecated<bool> getCritParticlesOnProjectileHurt() const;

    MCAPI ::Scripting::Result_deprecated<bool> getDestroyOnProjectileHurt() const;

    MCAPI ::Scripting::Result_deprecated<float> getGravity() const;

    MCAPI ::Scripting::Result_deprecated<::std::optional<::std::string>> getHitEntitySound() const;

    MCAPI ::Scripting::Result_deprecated<::std::optional<::std::string>> getHitGroundSound() const;

    MCAPI ::Scripting::Result_deprecated<::std::optional<::std::string>> getHitParticle() const;

    MCAPI ::Scripting::Result_deprecated<bool> getLightningStrikeOnHit() const;

    MCAPI ::Scripting::Result_deprecated<float> getLiquidInertia() const;

    MCAPI ::Scripting::Result_deprecated<float> getOnFireTime() const;

    MCAPI ::Scripting::Result_deprecated<
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor>>>
    getOwner() const;

    MCAPI ::Scripting::Result_deprecated<bool> getShouldBounceOnHit() const;

    MCAPI ::Scripting::Result_deprecated<bool> getStopOnHit() const;

    MCAPI ::Scripting::Result<void> setAirInertia(float value);

    MCAPI ::Scripting::Result<void> setCatchFireOnHurt(bool value);

    MCAPI ::Scripting::Result<void> setCritParticlesOnProjectileHurt(bool value);

    MCAPI ::Scripting::Result<void> setDestroyOnProjectileHurt(bool value);

    MCAPI ::Scripting::Result<void> setGravity(float value);

    MCAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError, ::Scripting::Error>
    setHitEntitySound(::std::optional<::std::string> const& value);

    MCAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError, ::Scripting::Error>
    setHitGroundSound(::std::optional<::std::string> const& value);

    MCAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError, ::Scripting::Error>
    setHitParticle(::std::optional<::std::string> const& value);

    MCAPI ::Scripting::Result<void> setLightningStrikeOnHit(bool value);

    MCAPI ::Scripting::Result<void> setLiquidInertia(float value);

    MCAPI ::Scripting::Result<void> setOnFireTime(float value);

    MCAPI ::Scripting::Result<void> setOwner(
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor>> const& scriptActor
    );

    MCAPI ::Scripting::Result<void> setShouldBounceOnHit(bool value);

    MCAPI ::Scripting::Result<void> setStopOnHit(bool value);

    MCAPI ::Scripting::Result<void> shoot(
        ::Vec3 const&                                                                 velocity,
        ::std::optional<::ScriptModuleMinecraft::ScriptProjectileShootOptions> const& options
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::ScriptProjectileComponent>
    bind(::ScriptModuleMinecraft::ScriptComponentTypeEnumBuilder& componentTypeEnumBuilder);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static char const*& ComponentId();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $_isValid() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
