#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/ContainerID.h"
#include "mc/world/containers/managers/models/LevelContainerManagerModel.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class ContainerScreenContext;
class ItemStack;
class Player;
// clang-format on

class LabTableContainerManagerModel : public ::LevelContainerManagerModel {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnk88c18b;
    // NOLINTEND

public:
    // prevent constructor by default
    LabTableContainerManagerModel& operator=(LabTableContainerManagerModel const&);
    LabTableContainerManagerModel(LabTableContainerManagerModel const&);
    LabTableContainerManagerModel();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LabTableContainerManagerModel() /*override*/ = default;

    // vIndex: 7
    virtual ::std::vector<::ItemStack> getItemCopies() const /*override*/;

    // vIndex: 8
    virtual void setSlot(int slot, ::ItemStack const& item, bool fromNetwork) /*override*/;

    // vIndex: 9
    virtual ::ItemStack const& getSlot(int slot) const /*override*/;

    // vIndex: 10
    virtual void setData(int id, int value) /*override*/;

    // vIndex: 19
    virtual bool isValid(float pickRange) /*override*/;

    // vIndex: 13
    virtual void broadcastChanges() /*override*/;

    // vIndex: 20
    virtual ::ContainerScreenContext _postInit() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI LabTableContainerManagerModel(::ContainerID containerId, ::Player& player, ::BlockPos const& blockPos);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static int const& INPUT_SLOTS();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ContainerID containerId, ::Player& player, ::BlockPos const& blockPos);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::vector<::ItemStack> $getItemCopies() const;

    MCAPI void $setSlot(int slot, ::ItemStack const& item, bool fromNetwork);

    MCAPI ::ItemStack const& $getSlot(int slot) const;

    MCFOLD void $setData(int id, int value);

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
