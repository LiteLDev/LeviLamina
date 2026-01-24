#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/world/level/storage/loot/LootTable.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorDamageSource;
class Dimension;
class ILevel;
class ItemStack;
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
        // member functions
        // NOLINTBEGIN
        MCAPI ::LootTableContext create() const;

        MCAPI ::LootTableContext::Builder& withThisEntity(::Actor* actor);

        MCAPI ~Builder();
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

    MCAPI void removeVisitedTable(::LootTable const* table);

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
