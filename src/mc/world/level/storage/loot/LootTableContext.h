#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorUniqueID.h"
#include "mc/world/level/dimension/DimensionType.h"
#include "mc/world/level/storage/loot/ActorTarget.h"
#include "mc/world/level/storage/loot/LootTable.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorDamageSource;
class ILevel;
class ItemStack;
class Level;
class Player;
// clang-format on

class LootTableContext {
public:
    // LootTableContext inner types declare
    // clang-format off
    class Builder;
    // clang-format on

    // LootTableContext inner types define
    class Builder {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::ILevel*>                  mLevel;
        ::ll::TypedStorage<4, 4, float>                      mLuck;
        ::ll::TypedStorage<8, 8, ::ActorUniqueID>            mThisEntityID;
        ::ll::TypedStorage<8, 8, ::Player*>                  mKillerPlayer;
        ::ll::TypedStorage<8, 8, ::Actor*>                   mKilledActor;
        ::ll::TypedStorage<8, 8, ::ActorDamageSource const*> mDeathSource;
        ::ll::TypedStorage<4, 4, float>                      mExplosionRadius;
        ::ll::TypedStorage<8, 32, ::std::string>             mOriginalItemName;
        ::ll::TypedStorage<8, 8, ::ItemStack const*>         mTool;
        ::ll::TypedStorage<4, 4, ::DimensionType>            mDimensionId;
        // NOLINTEND

    public:
        // prevent constructor by default
        Builder();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI Builder(::ILevel* level, ::DimensionType dimensionId);

        MCAPI ::LootTableContext create() const;

        MCAPI ::LootTableContext::Builder& withDeathSource(::ActorDamageSource const* deathSource);

        MCAPI ::LootTableContext::Builder& withExplosionRadius(float explosionRadius);

        MCAPI ::LootTableContext::Builder& withKilledActor(::Actor* actor);

        MCFOLD ::LootTableContext::Builder& withKillerPlayer(::Player* player);

        MCAPI ::LootTableContext::Builder& withLuck(float luck);

        MCAPI ::LootTableContext::Builder& withThisEntity(::Actor* actor);

        MCAPI ::LootTableContext::Builder& withTool(::ItemStack const* tool);

        MCAPI ~Builder();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor(::ILevel* level, ::DimensionType dimensionId);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                                     mLuck;
    ::ll::TypedStorage<8, 8, ::ILevel*>                                 mLevel;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                           mThisEntityID;
    ::ll::TypedStorage<8, 8, ::Player*>                                 mKillerPlayer;
    ::ll::TypedStorage<8, 8, ::Actor*>                                  mKilledActor;
    ::ll::TypedStorage<8, 8, ::ActorDamageSource const*>                mDeathSource;
    ::ll::TypedStorage<8, 64, ::std::unordered_set<::LootTable const*>> mVisitedTables;
    ::ll::TypedStorage<4, 4, float>                                     mExplosionRadius;
    ::ll::TypedStorage<8, 32, ::std::string>                            mOriginalItemName;
    ::ll::TypedStorage<8, 8, ::ItemStack const*>                        mTool;
    ::ll::TypedStorage<4, 4, ::DimensionType>                           mDimensionId;
    // NOLINTEND

public:
    // prevent constructor by default
    LootTableContext();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI LootTableContext(
        float                      luck,
        ::ILevel*                  level,
        ::ActorUniqueID            thisEntityID,
        ::Player*                  player,
        ::Actor*                   killedActor,
        ::ActorDamageSource const* deathSource,
        float                      explosionRadius,
        ::DimensionType            dimensionId,
        ::ItemStack const*         tool
    );

    MCAPI ::Actor* getDamagingEntity() const;

    MCAPI ::DimensionType getDimensionId() const;

    MCAPI ::Actor* getEntity(::ActorTarget target, bool getRemoved) const;

    MCAPI float getExplosionRadius() const;

    MCFOLD ::Actor* getKilledEntity() const;

    MCAPI ::Actor* getKillerEntity() const;

    MCAPI ::Actor* getKillerPet() const;

    MCFOLD ::Actor* getKillerPlayer() const;

    MCFOLD ::Level* getLevel() const;

    MCAPI ::std::string getOriginalItemName() const;

    MCAPI ::Actor* getThisEntity(bool getRemoved) const;

    MCAPI ::Actor* getThisVehicleEntity() const;

    MCFOLD ::ItemStack const* getTool() const;

    MCAPI void setOriginalItemName(::std::string const& originalItemName);

    MCAPI ~LootTableContext();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        float                      luck,
        ::ILevel*                  level,
        ::ActorUniqueID            thisEntityID,
        ::Player*                  player,
        ::Actor*                   killedActor,
        ::ActorDamageSource const* deathSource,
        float                      explosionRadius,
        ::DimensionType            dimensionId,
        ::ItemStack const*         tool
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
