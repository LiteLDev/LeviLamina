#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"
#include "mc/scripting/modules/minecraft/components/ScriptActorComponent.h"

// auto generated forward declare list
// clang-format off
class Vec3;
namespace ScriptModuleMinecraft { class ScriptActor; }
namespace ScriptModuleMinecraft { class ScriptComponentTypeEnumBuilder; }
namespace ScriptModuleMinecraft { struct ScriptProjectileShootOptions; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptProjectileComponent : public ::ScriptModuleMinecraft::ScriptActorComponent {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool _isValid() const /*override*/;

    virtual ~ScriptProjectileComponent() /*override*/ = default;
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

    MCAPI ::Scripting::Result_deprecated<void> setAirInertia(float value);

    MCAPI ::Scripting::Result_deprecated<void> setCatchFireOnHurt(bool value);

    MCAPI ::Scripting::Result_deprecated<void> setCritParticlesOnProjectileHurt(bool value);

    MCAPI ::Scripting::Result_deprecated<void> setDestroyOnProjectileHurt(bool value);

    MCAPI ::Scripting::Result_deprecated<void> setGravity(float value);

    MCAPI ::Scripting::Result_deprecated<void> setHitEntitySound(::std::optional<::std::string> const& value);

    MCAPI ::Scripting::Result_deprecated<void> setHitGroundSound(::std::optional<::std::string> const& value);

    MCAPI ::Scripting::Result_deprecated<void> setHitParticle(::std::optional<::std::string> const& value);

    MCAPI ::Scripting::Result_deprecated<void> setLightningStrikeOnHit(bool value);

    MCAPI ::Scripting::Result_deprecated<void> setLiquidInertia(float value);

    MCAPI ::Scripting::Result_deprecated<void> setOnFireTime(float value);

    MCAPI ::Scripting::Result_deprecated<void> setOwner(
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor>> const& scriptActor
    );

    MCAPI ::Scripting::Result_deprecated<void> setShouldBounceOnHit(bool value);

    MCAPI ::Scripting::Result_deprecated<void> setStopOnHit(bool value);

    MCAPI ::Scripting::Result_deprecated<void> shoot(
        ::Vec3 const&                                                                 velocity,
        ::std::optional<::ScriptModuleMinecraft::ScriptProjectileShootOptions> const& options
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding
    bind(::ScriptModuleMinecraft::ScriptComponentTypeEnumBuilder& componentTypeEnumBuilder);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static char const*& ComponentId();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $_isValid() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
