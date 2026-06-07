#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/ContainerID.h"
#include "mc/world/containers/managers/models/LevelContainerManagerModel.h"

// auto generated forward declare list
// clang-format off
class ContainerModel;
class ContainerScreenContext;
class ItemStack;
class Player;
struct ActorUniqueID;
// clang-format on

class HorseContainerManagerModel : public ::LevelContainerManagerModel {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::ContainerModel>> mEquipContainerModel;
    // NOLINTEND

public:
    // prevent constructor by default
    HorseContainerManagerModel();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~HorseContainerManagerModel() /*override*/ = default;

    virtual void setSlot(int slot, ::ItemStack const& item, bool) /*override*/;

    virtual ::ItemStack const& getSlot(int slot) const /*override*/;

    virtual ::std::vector<::ItemStack> getItemCopies() const /*override*/;

    virtual ::ContainerScreenContext _postInit() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI HorseContainerManagerModel(::ContainerID containerId, ::Player& player, ::ActorUniqueID const& uniqueId);

    MCAPI void _onChestSlotChanged(int slot, ::ItemStack const& oldItem, ::ItemStack const& newItem);

    MCAPI void _onEquipSlotChanged(int slot, ::ItemStack const& oldItem, ::ItemStack const& newItem);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ContainerID containerId, ::Player& player, ::ActorUniqueID const& uniqueId);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $setSlot(int slot, ::ItemStack const& item, bool);

    MCAPI ::ItemStack const& $getSlot(int slot) const;

    MCAPI ::std::vector<::ItemStack> $getItemCopies() const;

    MCAPI ::ContainerScreenContext $_postInit();


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
