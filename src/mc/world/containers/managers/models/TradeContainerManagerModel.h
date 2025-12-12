#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/managers/models/LevelContainerManagerModel.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ContainerScreenContext;
class ItemStack;
// clang-format on

class TradeContainerManagerModel : public ::LevelContainerManagerModel {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mCurrentIndex;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TradeContainerManagerModel() /*override*/ = default;

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
    MCFOLD ::Actor* getEntity() const;
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
