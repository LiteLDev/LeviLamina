#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components_json_legacy/OnHitSubcomponent.h"
#include "mc/world/actor/ActorDefinitionIdentifier.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorDefinitionTrigger;
class ProjectileComponent;
namespace Json { class Value; }
// clang-format on

class SpawnChanceSubcomponent : public ::OnHitSubcomponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 176, ::ActorDefinitionIdentifier>            mSpawnDefinition;
    ::ll::TypedStorage<8, 24, ::std::vector<::ActorDefinitionTrigger>> mSpawnTriggers;
    ::ll::TypedStorage<4, 4, float>                                    mFirstSpawnChance;
    ::ll::TypedStorage<4, 4, float>                                    mSecondSpawnChance;
    ::ll::TypedStorage<4, 4, int>                                      mFirstSpawnCount;
    ::ll::TypedStorage<4, 4, int>                                      mSecondSpawnCount;
    ::ll::TypedStorage<1, 1, bool>                                     mSpawnBaby;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SpawnChanceSubcomponent() /*override*/ = default;

    virtual void readfromJSON(::Json::Value& component) /*override*/;

    virtual void writetoJSON(::Json::Value& component) const /*override*/;

    virtual void doOnHitEffect(::Actor& owner, ::ProjectileComponent&) /*override*/;

    virtual char const* getName() const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $readfromJSON(::Json::Value& component);

    MCAPI void $writetoJSON(::Json::Value& component) const;

    MCAPI void $doOnHitEffect(::Actor& owner, ::ProjectileComponent&);

    MCAPI char const* $getName() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
