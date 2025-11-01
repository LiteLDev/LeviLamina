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
    // vIndex: 2
    virtual void reloadHardcoded(::ActorInitializationMethod method, ::VariantParameterList const& params) /*override*/;

    // vIndex: 4
    virtual void
    initializeComponents(::ActorInitializationMethod method, ::VariantParameterList const& params) /*override*/;

    // vIndex: 176
    virtual void newServerAiStep() /*override*/;

    // vIndex: 123
    virtual void die(::ActorDamageSource const& source) /*override*/;

    // vIndex: 105
    virtual bool canBeAffected(uint id) const /*override*/;

    // vIndex: 34
    virtual ::mce::Color getNameTagTextColor() const /*override*/;

    // vIndex: 32
    virtual bool canShowNameTag() const /*override*/;

    // vIndex: 50
    virtual bool isTargetable() const /*override*/;

    // vIndex: 102
    virtual void buildDebugInfo(::std::string& out) const /*override*/;

    // vIndex: 138
    virtual void knockback(::Actor*, int, float, float, float, float, float) /*override*/;

    // vIndex: 96
    virtual bool canBePulledIntoVehicle() const /*override*/;

    // vIndex: 173
    virtual bool canExistWhenDisallowMob() const /*override*/;

    // vIndex: 135
    virtual bool _hurt(::ActorDamageSource const& source, float, bool, bool) /*override*/;

    // vIndex: 8
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
