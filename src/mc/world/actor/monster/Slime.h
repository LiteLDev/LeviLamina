#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/OwnerPtr.h"
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/actor/monster/Monster.h"

// auto generated forward declare list
// clang-format off
class ActorDefinitionGroup;
class BlockPos;
class BlockSource;
class CompoundTag;
class DataLoadHelper;
class EntityContext;
class SpawnConditions;
struct ActorDefinitionIdentifier;
struct VariantParameterList;
// clang-format on

class Slime : public ::Monster {
public:
    // Slime inner types define
    enum class ClientEvent : schar {
        None       = 0,
        JustLanded = 1,
        JustJumped = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk874ac2;
    ::ll::UntypedStorage<4, 4> mUnkc3abae;
    ::ll::UntypedStorage<4, 4> mUnkba9a10;
    ::ll::UntypedStorage<4, 4> mUnk90285c;
    // NOLINTEND

public:
    // prevent constructor by default
    Slime& operator=(Slime const&);
    Slime(Slime const&);
    Slime();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual void reloadHardcoded(::ActorInitializationMethod method, ::VariantParameterList const& params) /*override*/;

    // vIndex: 36
    virtual float getShadowRadius() const /*override*/;

    // vIndex: 95
    virtual void onSynchedDataUpdate(int dataId) /*override*/;

    // vIndex: 11
    virtual void remove() /*override*/;

    // vIndex: 152
    virtual bool checkSpawnRules(bool fromSpawner) /*override*/;

    // vIndex: 183
    virtual bool doPlayLandSound();

    // vIndex: 184
    virtual void playJumpSound();

    // vIndex: 176
    virtual float _getWalkTargetValue(::BlockPos const& pos) /*override*/;

    // vIndex: 185
    virtual void decreaseSquish();

    // vIndex: 186
    virtual ::OwnerPtr<::EntityContext> createChild(int i);

    // vIndex: 141
    virtual void addAdditionalSaveData(::CompoundTag& tag) const /*override*/;

    // vIndex: 140
    virtual void readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;

    // vIndex: 8
    virtual ~Slime() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Slime(
        ::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext
    );

    MCAPI float getOldSquishValue() const;

    MCAPI float getSquishValue() const;

    MCAPI void justJumped();

    MCAPI void justLanded();

    MCAPI void postNormalTick(bool wasOnGround);

    MCAPI void preNormalTick();

    MCAPI void setSlimeSize(int size);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::function<bool(::SpawnConditions const&, ::BlockSource&)> getSpawnRulesCallback();
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

    MCAPI float $getShadowRadius() const;

    MCAPI void $onSynchedDataUpdate(int dataId);

    MCAPI void $remove();

    MCAPI bool $checkSpawnRules(bool fromSpawner);

    MCAPI bool $doPlayLandSound();

    MCAPI void $playJumpSound();

    MCAPI float $_getWalkTargetValue(::BlockPos const& pos);

    MCAPI void $decreaseSquish();

    MCAPI ::OwnerPtr<::EntityContext> $createChild(int i);

    MCAPI void $addAdditionalSaveData(::CompoundTag& tag) const;

    MCAPI void $readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
