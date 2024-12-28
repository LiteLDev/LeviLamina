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
    LavaSlime& operator=(LavaSlime const&);
    LavaSlime(LavaSlime const&);
    LavaSlime();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual void reloadHardcoded(::ActorInitializationMethod method, ::VariantParameterList const& params) /*override*/;

    // vIndex: 152
    virtual bool checkSpawnRules(bool fromSpawner) /*override*/;

    // vIndex: 182
    virtual bool isDarkEnoughToSpawn() const /*override*/;

    // vIndex: 160
    virtual int getArmorValue() const /*override*/;

    // vIndex: 39
    virtual float getBrightness(float a, ::IConstBlockSource const& region) const /*override*/;

    // vIndex: 186
    virtual ::OwnerPtr<::EntityContext> createChild(int i) /*override*/;

    // vIndex: 49
    virtual bool isOnFire() const /*override*/;

    // vIndex: 185
    virtual void decreaseSquish() /*override*/;

    // vIndex: 183
    virtual bool doPlayLandSound() /*override*/;

    // vIndex: 8
    virtual ~LavaSlime() /*override*/;
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
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $reloadHardcoded(::ActorInitializationMethod method, ::VariantParameterList const& params);

    MCAPI bool $checkSpawnRules(bool fromSpawner);

    MCAPI bool $isDarkEnoughToSpawn() const;

    MCAPI int $getArmorValue() const;

    MCAPI float $getBrightness(float a, ::IConstBlockSource const& region) const;

    MCAPI ::OwnerPtr<::EntityContext> $createChild(int i);

    MCAPI bool $isOnFire() const;

    MCAPI void $decreaseSquish();

    MCAPI bool $doPlayLandSound();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
