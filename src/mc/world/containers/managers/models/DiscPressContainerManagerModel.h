#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/managers/models/ContainerManagerModel.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class ContainerScreenContext;
class ItemStack;
// clang-format on

class DiscPressContainerManagerModel : public ::ContainerManagerModel {
public:
    // DiscPressContainerManagerModel inner types define
    enum class Slot : int {
        Block  = 0,
        Dye    = 1,
        Disc   = 2,
        Result = 3,
        Count  = 4,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::BlockPos> mBlockPos;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DiscPressContainerManagerModel() /*override*/ = default;

    virtual ::std::vector<::ItemStack> getItemCopies() const /*override*/;

    virtual void setSlot(int slot, ::ItemStack const& item, bool) /*override*/;

    virtual ::ItemStack const& getSlot(int slot) const /*override*/;

    virtual void setData(int, int) /*override*/;

    virtual void broadcastChanges() /*override*/;

    virtual bool isValid(float pickRange) /*override*/;

    virtual ::ContainerScreenContext _postInit() /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::std::vector<::ItemStack> $getItemCopies() const;

    MCNAPI void $setSlot(int slot, ::ItemStack const& item, bool);

    MCNAPI ::ItemStack const& $getSlot(int slot) const;

    MCNAPI void $setData(int, int);

    MCNAPI void $broadcastChanges();

    MCNAPI bool $isValid(float pickRange);

    MCNAPI ::ContainerScreenContext $_postInit();


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
