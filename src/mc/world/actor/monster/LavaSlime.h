#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/monster/Slime.h"

// auto generated forward declare list
// clang-format off
class ActorDefinitionGroup;
class EntityContext;
class IConstBlockSource;
struct ActorDefinitionIdentifier;
// clang-format on

class LavaSlime : public ::Slime {
public:
    // prevent constructor by default
    LavaSlime();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool checkSpawnRules(bool fromSpawner) /*override*/;

    virtual bool isDarkEnoughToSpawn() const /*override*/;

    virtual int getArmorValue() const /*override*/;

    virtual float getBrightness(float a, ::IConstBlockSource const& region) const /*override*/;

    virtual bool isOnFire() const /*override*/;

    virtual ~LavaSlime() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI LavaSlime(
        ::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext
    );
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
    MCFOLD bool $checkSpawnRules(bool fromSpawner);

    MCFOLD bool $isDarkEnoughToSpawn() const;

    MCAPI int $getArmorValue() const;

    MCFOLD float $getBrightness(float a, ::IConstBlockSource const& region) const;

    MCFOLD bool $isOnFire() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
