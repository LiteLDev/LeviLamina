#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/ContainerID.h"
#include "mc/world/containers/managers/models/LevelContainerManagerModel.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ContainerScreenContext;
class ItemStack;
class Player;
struct ActorUniqueID;
// clang-format on

class Trade2ContainerManagerModel : public ::LevelContainerManagerModel {
public:
    // Trade2ContainerManagerModel inner types define
    enum class Slot : int {
        Item1 = 0,
        Item2 = 1,
        Sell  = 2,
        Count = 3,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mSelectedTrade;
    ::ll::TypedStorage<4, 4, int> mTraderVariant;
    // NOLINTEND

public:
    // prevent constructor by default
    Trade2ContainerManagerModel();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Trade2ContainerManagerModel() /*override*/ = default;

    virtual ::std::vector<::ItemStack> getItemCopies() const /*override*/;

    virtual void setSlot(int slot, ::ItemStack const& item, bool) /*override*/;

    virtual ::ItemStack const& getSlot(int slot) const /*override*/;

    virtual bool isValid(float pickRange) /*override*/;

    virtual void broadcastChanges() /*override*/;

    virtual ::ContainerScreenContext _postInit() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Trade2ContainerManagerModel(::ContainerID containerId, ::Player& player, ::ActorUniqueID const& uniqueId);

    MCFOLD ::Actor* getEntity() const;

    MCAPI_C int getEntityMaxTradeTier() const;

    MCAPI_C int getEntityTradeTier() const;

    MCAPI_C ::std::vector<int> getNumberOfTradesByTier() const;

    MCAPI_C int getTradeExpForCurrentRequirement(uint currentExp) const;

    MCAPI_C int getTradeExpToNextRequirement(uint currentExp) const;

    MCAPI_C void setSelectedTrade(int index);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ContainerID containerId, ::Player& player, ::ActorUniqueID const& uniqueId);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::vector<::ItemStack> $getItemCopies() const;

    MCAPI void $setSlot(int slot, ::ItemStack const& item, bool);

    MCAPI ::ItemStack const& $getSlot(int slot) const;

    MCAPI bool $isValid(float pickRange);

    MCFOLD void $broadcastChanges();

    MCAPI ::ContainerScreenContext $_postInit();


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
