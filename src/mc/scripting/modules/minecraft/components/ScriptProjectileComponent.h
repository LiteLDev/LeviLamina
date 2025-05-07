#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/runtime/Result.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"
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
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 3
    virtual bool _isValid() const /*override*/;

    // vIndex: 0
    virtual ~ScriptProjectileComponent() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result_deprecated<float> getAirInertia() const;

    MCNAPI ::Scripting::Result_deprecated<bool> getCatchFireOnHurt() const;

    MCNAPI ::Scripting::Result_deprecated<bool> getCritParticlesOnProjectileHurt() const;

    MCNAPI ::Scripting::Result_deprecated<bool> getDestroyOnProjectileHurt() const;

    MCNAPI ::Scripting::Result_deprecated<float> getGravity() const;

    MCNAPI ::Scripting::Result_deprecated<::std::optional<::std::string>> getHitEntitySound() const;

    MCNAPI ::Scripting::Result_deprecated<::std::optional<::std::string>> getHitGroundSound() const;

    MCNAPI ::Scripting::Result_deprecated<::std::optional<::std::string>> getHitParticle() const;

    MCNAPI ::Scripting::Result_deprecated<bool> getLightningStrikeOnHit() const;

    MCNAPI ::Scripting::Result_deprecated<float> getLiquidInertia() const;

    MCNAPI ::Scripting::Result_deprecated<float> getOnFireTime() const;

    MCNAPI ::Scripting::Result_deprecated<
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor>>>
    getOwner() const;

    MCNAPI ::Scripting::Result_deprecated<bool> getShouldBounceOnHit() const;

    MCNAPI ::Scripting::Result_deprecated<bool> getStopOnHit() const;

    MCNAPI ::Scripting::Result<void> setAirInertia(float value);

    MCNAPI ::Scripting::Result<void> setCatchFireOnHurt(bool value);

    MCNAPI ::Scripting::Result<void> setCritParticlesOnProjectileHurt(bool value);

    MCNAPI ::Scripting::Result<void> setDestroyOnProjectileHurt(bool value);

    MCNAPI ::Scripting::Result<void> setGravity(float value);

    MCNAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError, ::Scripting::Error>
    setHitEntitySound(::std::optional<::std::string> const& value);

    MCNAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError, ::Scripting::Error>
    setHitGroundSound(::std::optional<::std::string> const& value);

    MCNAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError, ::Scripting::Error>
    setHitParticle(::std::optional<::std::string> const& value);

    MCNAPI ::Scripting::Result<void> setLightningStrikeOnHit(bool value);

    MCNAPI ::Scripting::Result<void> setLiquidInertia(float value);

    MCNAPI ::Scripting::Result<void> setOnFireTime(float value);

    MCNAPI ::Scripting::Result<void> setOwner(
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor>> const& scriptActor
    );

    MCNAPI ::Scripting::Result<void> setShouldBounceOnHit(bool value);

    MCNAPI ::Scripting::Result<void> setStopOnHit(bool value);

    MCNAPI ::Scripting::Result<void> shoot(
        ::Vec3 const&                                                                 velocity,
        ::std::optional<::ScriptModuleMinecraft::ScriptProjectileShootOptions> const& options
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::ScriptProjectileComponent>
    bind(::ScriptModuleMinecraft::ScriptComponentTypeEnumBuilder& componentTypeEnumBuilder);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static char const*& ComponentId();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $_isValid() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
