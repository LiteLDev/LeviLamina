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
class CompoundTag;
class DataLoadHelper;
class EntityContext;
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

    // vIndex: 35
    virtual float getShadowRadius() const /*override*/;

    // vIndex: 93
    virtual void onSynchedDataUpdate(int dataId) /*override*/;

    // vIndex: 11
    virtual void remove() /*override*/;

    // vIndex: 147
    virtual bool checkSpawnRules(bool fromSpawner) /*override*/;

    // vIndex: 178
    virtual bool doPlayLandSound();

    // vIndex: 179
    virtual void playJumpSound();

    // vIndex: 171
    virtual float _getWalkTargetValue(::BlockPos const& pos) /*override*/;

    // vIndex: 180
    virtual void decreaseSquish();

    // vIndex: 181
    virtual ::OwnerPtr<::EntityContext> createChild(int i);

    // vIndex: 137
    virtual void addAdditionalSaveData(::CompoundTag& tag) const /*override*/;

    // vIndex: 136
    virtual void readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;

    // vIndex: 8
    virtual ~Slime() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI Slime(
        ::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext
    );

    MCNAPI int getSlimeSize() const;

    MCNAPI void justJumped();

    MCNAPI void justLanded();

    MCNAPI void postNormalTick(bool wasOnGround);

    MCNAPI void setSlimeSize(int size);
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
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $reloadHardcoded(::ActorInitializationMethod method, ::VariantParameterList const& params);

    MCNAPI float $getShadowRadius() const;

    MCNAPI void $onSynchedDataUpdate(int dataId);

    MCNAPI void $remove();

    MCNAPI bool $checkSpawnRules(bool fromSpawner);

    MCNAPI bool $doPlayLandSound();

    MCNAPI void $playJumpSound();

    MCNAPI float $_getWalkTargetValue(::BlockPos const& pos);

    MCNAPI void $decreaseSquish();

    MCNAPI ::OwnerPtr<::EntityContext> $createChild(int i);

    MCNAPI void $addAdditionalSaveData(::CompoundTag& tag) const;

    MCNAPI void $readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
