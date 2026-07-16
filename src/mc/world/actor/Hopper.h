#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class Container;
class Vec3;
// clang-format on

class Hopper {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>  mCooldownTime;
    ::ll::TypedStorage<4, 4, int>  mMoveCooldownTime;
    ::ll::TypedStorage<1, 1, bool> mTransferedFromChestMinecart;
    ::ll::TypedStorage<1, 1, bool> mIsEntity;
    ::ll::TypedStorage<4, 4, int>  mMoveItemSpeed;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::vector<::Container*>
    _getAttachedContainers(::BlockSource& region, ::Vec3 const& pos, int attachedFace);

    MCAPI ::Container* _getContainerInBlock(::BlockSource& region, ::Vec3 const& pos);

    MCAPI ::std::vector<::Container*> _getContainersAt(::BlockSource& region, ::Vec3 const& pos);

    MCAPI bool
    _pushOutItems(::BlockSource& region, ::Container& fromContainer, ::Vec3 const& position, int attachedFace);

    MCAPI bool _tryAddItemsFromPos(::BlockSource& region, ::Container& toContainer, ::Vec3 const& pos);

    MCAPI bool _tryMoveItems(
        ::BlockSource& region,
        ::Container&   fromContainer,
        ::Vec3 const&  pos,
        int            attachedFace,
        bool           canPushItems
    );

    MCAPI bool _tryPullInItemsFromAboveContainer(::BlockSource& region, ::Container& toContainer, ::Vec3 const& pos);

    MCAPI bool _tryPullInItemsFromWorld(::BlockSource& region, ::Container& toContainer, ::Vec3 const& pos);
    // NOLINTEND
};
