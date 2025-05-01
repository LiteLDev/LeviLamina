#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class Container;
class ItemStack;
class Vec3;
// clang-format on

class Hopper {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>  mCooldownTime;
    ::ll::TypedStorage<1, 1, bool> mTransferedFromChestMinecart;
    ::ll::TypedStorage<1, 1, bool> mIsEntity;
    ::ll::TypedStorage<4, 4, int>  mMoveItemSpeed;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool _addItem(::BlockSource& region, ::Container& container, ::ItemStack& item, int face, int itemCount);

    MCNAPI ::Container* _getContainerInBlock(::BlockSource& region, ::Vec3 const& pos);

    MCNAPI ::std::vector<::Container*> _getContainersAt(::BlockSource& region, ::Vec3 const& pos);

    MCNAPI bool _isEmptyContainer(::Container& container, int face);

    MCNAPI bool _isFullContainer(::Container& container, int);

    MCNAPI bool
    _pushOutItems(::BlockSource& region, ::Container& fromContainer, ::Vec3 const& position, int attachedFace);

    MCNAPI bool _tryAddItemsFromPos(::BlockSource& region, ::Container& toContainer, ::Vec3 const& pos);

    MCNAPI bool
    _tryMoveInItem(::BlockSource& region, ::Container& container, ::ItemStack& item, int slot, int face, int itemCount);

    MCNAPI bool _tryMoveItems(
        ::BlockSource& region,
        ::Container&   fromContainer,
        ::Vec3 const&  pos,
        int            attachedFace,
        bool           canPushItems
    );

    MCNAPI bool _tryPullInItemsFromAboveContainer(::BlockSource& region, ::Container& toContainer, ::Vec3 const& pos);

    MCNAPI bool
    _tryPushToComposter(::BlockSource& region, ::Container& fromContainer, ::BlockPos hopperPos, int facingDirection);

    MCNAPI bool _tryTakeInItemFromSlot(
        ::BlockSource& region,
        ::Container&   toContainer,
        ::Container&   fromContainer,
        int            slot,
        int            face
    );
    // NOLINTEND
};
