#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/OwnerPtr.h"
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/actor/monster/Slime.h"

// auto generated forward declare list
// clang-format off
class ActorDefinitionGroup;
class EntityContext;
class IConstBlockSource;
struct ActorDefinitionIdentifier;
struct VariantParameterList;
// clang-format on

class LavaSlime : public ::Slime {
public:
    // prevent constructor by default
    LavaSlime();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void reloadHardcoded(::ActorInitializationMethod method, ::VariantParameterList const& params) /*override*/;

    virtual bool checkSpawnRules(bool fromSpawner) /*override*/;

    virtual bool isDarkEnoughToSpawn() const /*override*/;

    virtual int getArmorValue() const /*override*/;

    virtual float getBrightness(float a, ::IConstBlockSource const& region) const /*override*/;

    virtual ::OwnerPtr<::EntityContext> createChild(int i) /*override*/;

    virtual bool isOnFire() const /*override*/;

    virtual void decreaseSquish() /*override*/;

    virtual bool doPlayLandSound() /*override*/;

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
    MCAPI void $reloadHardcoded(::ActorInitializationMethod method, ::VariantParameterList const& params);

    MCFOLD bool $checkSpawnRules(bool fromSpawner);

    MCFOLD bool $isDarkEnoughToSpawn() const;

    MCAPI int $getArmorValue() const;

    MCFOLD float $getBrightness(float a, ::IConstBlockSource const& region) const;

    MCAPI ::OwnerPtr<::EntityContext> $createChild(int i);

    MCFOLD bool $isOnFire() const;

    MCAPI void $decreaseSquish();

    MCFOLD bool $doPlayLandSound();


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
