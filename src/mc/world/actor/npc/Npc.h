#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/actor/Mob.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorDamageSource;
class ActorDefinitionGroup;
class ActorHurtResult;
class EntityContext;
struct ActorDefinitionIdentifier;
struct HurtParameters;
struct KnockbackParameters;
struct VariantParameterList;
namespace mce { class Color; }
// clang-format on

class Npc : public ::Mob {
public:
    // prevent constructor by default
    Npc();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void reloadHardcoded(::ActorInitializationMethod method, ::VariantParameterList const& params) /*override*/;

    virtual void
    initializeComponents(::ActorInitializationMethod method, ::VariantParameterList const& params) /*override*/;

    virtual void newServerAiStep() /*override*/;

    virtual void die(::ActorDamageSource const& source) /*override*/;

    virtual bool canBeAffected(uint id) const /*override*/;

    virtual ::mce::Color getNameTagTextColor() const /*override*/;

    virtual bool canShowNameTag() const /*override*/;

    virtual bool isTargetable() const /*override*/;

    virtual void buildDebugInfo(::std::string& out) const /*override*/;

    virtual void
    knockback(::Actor* source, int damage, float xd, float zd, ::KnockbackParameters const& parameters) /*override*/;

    virtual bool canBePulledIntoVehicle() const /*override*/;

    virtual bool canExistWhenDisallowMob() const /*override*/;

    virtual ::ActorHurtResult
    _hurt(::ActorDamageSource const& source, float damage, ::HurtParameters const& hurtParameters) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI
    Npc(::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string const& SKIN_ID_TAG();

    MCAPI static ::std::vector<::std::pair<::std::string, ::std::string>> const& Skins();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
