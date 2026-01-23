#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/world/level/storage/loot/LootTable.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorDamageSource;
class Dimension;
class ILevel;
class ItemStack;
class Player;
struct ActorUniqueID;
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
        ::ll::UntypedStorage<8, 8>  mUnk90467d;
        ::ll::UntypedStorage<4, 4>  mUnk867a2e;
        ::ll::UntypedStorage<8, 8>  mUnk585e8f;
        ::ll::UntypedStorage<8, 8>  mUnk204393;
        ::ll::UntypedStorage<8, 8>  mUnk2db5fe;
        ::ll::UntypedStorage<8, 8>  mUnk12e22b;
        ::ll::UntypedStorage<4, 4>  mUnkd5289e;
        ::ll::UntypedStorage<8, 32> mUnka828c6;
        ::ll::UntypedStorage<8, 8>  mUnk302523;
        ::ll::UntypedStorage<4, 4>  mUnk193009;
        // NOLINTEND

    public:
        // prevent constructor by default
        Builder& operator=(Builder const&);
        Builder(Builder const&);
        Builder();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ::LootTableContext create() const;

        MCNAPI ::LootTableContext::Builder& withThisEntity(::Actor* actor);

        MCNAPI ~Builder();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnkb3901a;
    ::ll::UntypedStorage<8, 8>  mUnk2022aa;
    ::ll::UntypedStorage<8, 8>  mUnkc14b31;
    ::ll::UntypedStorage<8, 8>  mUnkde944e;
    ::ll::UntypedStorage<8, 8>  mUnk5ac5c7;
    ::ll::UntypedStorage<8, 8>  mUnk8365b2;
    ::ll::UntypedStorage<8, 64> mUnk429789;
    ::ll::UntypedStorage<4, 4>  mUnkaffc8b;
    ::ll::UntypedStorage<8, 32> mUnk72194e;
    ::ll::UntypedStorage<8, 8>  mUnk237e8e;
    ::ll::UntypedStorage<4, 4>  mUnkfdc36c;
    // NOLINTEND

public:
    // prevent constructor by default
    LootTableContext& operator=(LootTableContext const&);
    LootTableContext(LootTableContext const&);
    LootTableContext();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI LootTableContext(
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

    MCNAPI void removeVisitedTable(::LootTable const* table);

    MCNAPI void setOriginalItemName(::std::string const& originalItemName);

    MCNAPI ~LootTableContext();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
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
    MCNAPI void $dtor();
    // NOLINTEND
};
