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
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual void reloadHardcoded(::ActorInitializationMethod method, ::VariantParameterList const& params) /*override*/;

    // vIndex: 4
    virtual void
    initializeComponents(::ActorInitializationMethod method, ::VariantParameterList const& params) /*override*/;

    // vIndex: 175
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

    // vIndex: 172
    virtual bool canExistWhenDisallowMob() const /*override*/;

    // vIndex: 135
    virtual bool _hurt(::ActorDamageSource const& source, float, bool, bool) /*override*/;

    // vIndex: 8
    virtual ~Npc() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI
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
    MCNAPI void* $ctor(
        ::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $reloadHardcoded(::ActorInitializationMethod method, ::VariantParameterList const& params);

    MCNAPI void $initializeComponents(::ActorInitializationMethod method, ::VariantParameterList const& params);

    MCNAPI void $newServerAiStep();

    MCNAPI void $die(::ActorDamageSource const& source);

    MCNAPI bool $canBeAffected(uint id) const;

    MCNAPI ::mce::Color $getNameTagTextColor() const;

    MCNAPI bool $canShowNameTag() const;

    MCNAPI bool $isTargetable() const;

    MCNAPI void $buildDebugInfo(::std::string& out) const;

    MCNAPI void $knockback(::Actor*, int, float, float, float, float, float);

    MCNAPI bool $canBePulledIntoVehicle() const;

    MCNAPI bool $canExistWhenDisallowMob() const;

    MCNAPI bool $_hurt(::ActorDamageSource const& source, float, bool, bool);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
