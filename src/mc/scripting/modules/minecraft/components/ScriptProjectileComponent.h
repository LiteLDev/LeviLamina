#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"
#include "mc/scripting/modules/minecraft/components/ScriptActorComponent.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptProjectileComponent : public ::ScriptModuleMinecraft::ScriptActorComponent {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool _isValid() const /*override*/;
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

    MCNAPI ::Scripting::Result_deprecated<bool> getShouldBounceOnHit() const;

    MCNAPI ::Scripting::Result_deprecated<bool> getStopOnHit() const;

    MCNAPI ::Scripting::Result_deprecated<void> setAirInertia(float value);

    MCNAPI ::Scripting::Result_deprecated<void> setCatchFireOnHurt(bool value);

    MCNAPI ::Scripting::Result_deprecated<void> setCritParticlesOnProjectileHurt(bool value);

    MCNAPI ::Scripting::Result_deprecated<void> setDestroyOnProjectileHurt(bool value);

    MCNAPI ::Scripting::Result_deprecated<void> setGravity(float value);

    MCNAPI ::Scripting::Result_deprecated<void> setHitEntitySound(::std::optional<::std::string> const& value);

    MCNAPI ::Scripting::Result_deprecated<void> setHitGroundSound(::std::optional<::std::string> const& value);

    MCNAPI ::Scripting::Result_deprecated<void> setHitParticle(::std::optional<::std::string> const& value);

    MCNAPI ::Scripting::Result_deprecated<void> setLightningStrikeOnHit(bool value);

    MCNAPI ::Scripting::Result_deprecated<void> setLiquidInertia(float value);

    MCNAPI ::Scripting::Result_deprecated<void> setOnFireTime(float value);

    MCNAPI ::Scripting::Result_deprecated<void> setShouldBounceOnHit(bool value);

    MCNAPI ::Scripting::Result_deprecated<void> setStopOnHit(bool value);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
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
};

} // namespace ScriptModuleMinecraft
