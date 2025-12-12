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
class EntityContext;
struct ActorDefinitionIdentifier;
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

    virtual void knockback(::Actor*, int, float, float, float, float, float) /*override*/;

    virtual bool canBePulledIntoVehicle() const /*override*/;

    virtual bool canExistWhenDisallowMob() const /*override*/;

    virtual bool _hurt(::ActorDamageSource const& source, float, bool, bool) /*override*/;

    virtual ~Npc() /*override*/ = default;
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
    MCFOLD void $reloadHardcoded(::ActorInitializationMethod method, ::VariantParameterList const& params);

    MCAPI void $initializeComponents(::ActorInitializationMethod method, ::VariantParameterList const& params);

    MCFOLD void $newServerAiStep();

    MCFOLD void $die(::ActorDamageSource const& source);

    MCFOLD bool $canBeAffected(uint id) const;

    MCAPI ::mce::Color $getNameTagTextColor() const;

    MCFOLD bool $canShowNameTag() const;

    MCFOLD bool $isTargetable() const;

    MCAPI void $buildDebugInfo(::std::string& out) const;

    MCFOLD void $knockback(::Actor*, int, float, float, float, float, float);

    MCFOLD bool $canBePulledIntoVehicle() const;

    MCFOLD bool $canExistWhenDisallowMob() const;

    MCAPI bool $_hurt(::ActorDamageSource const& source, float, bool, bool);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
